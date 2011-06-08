(function() {
  var ComplexNumber, ComplexPlane, Mandelbrot, bailout, black, colors, escape_radius, getCoordinate, h, i, log_2, w, window;
  require("ofCommon.js");
  ComplexNumber = (function() {
    function ComplexNumber(real, imag) {
      this.real = real;
      this.imag = imag;
    }
    ComplexNumber.prototype.mod = function() {
      if (this.real !== 0 || this.imag !== 0) {
        return Math.sqrt(this.real * this.real + this.imag * this.imag);
      } else {
        return 0;
      }
    };
    ComplexNumber.prototype.abs = function() {
      return this.mod();
    };
    ComplexNumber.prototype.arg = function() {
      return Math.atan2(this.imag, this.real);
    };
    ComplexNumber.prototype.conj = function() {
      return new ComplexNumber(this.real, this.imag * -1);
    };
    ComplexNumber.prototype.plus = function(c) {
      return new ComplexNumber(this.real + c.real, this.imag + c.imag);
    };
    ComplexNumber.prototype.minus = function(c) {
      return new ComplexNumber(this.real - c.real, this.imag - c.imag);
    };
    ComplexNumber.prototype.times = function(c) {
      return new ComplexNumber(this.real * c.real - this.imag * c.imag, this.real * c.imag + this.imag * c.real);
    };
    return ComplexNumber;
  })();
  getCoordinate = function(screenCoordinate, axisSize, axisStart, axisSizeOnScreen) {
    return (screenCoordinate / axisSizeOnScreen * axisSize) + axisStart;
  };
  ComplexPlane = (function() {
    function ComplexPlane(leftEdge, topEdge, horizontalSize, verticalSize, screenWidth, screenHeight) {
      this.leftEdge = leftEdge;
      this.topEdge = topEdge;
      this.horizontalSize = horizontalSize;
      this.verticalSize = verticalSize;
      this.screenWidth = screenWidth;
      this.screenHeight = screenHeight;
    }
    ComplexPlane.prototype.getCenter = function() {
      var x_center, y_center;
      if (this.screenWidth % 2 === 0) {
        x_center = this.screenWidth / 2;
      } else {
        x_center = (this.screenWidth - 1) / 2;
      }
      if (y_center = this.screenHeight % 2 === 0) {
        y_center = this.screenHeight / 2;
      } else {
        y_center((this.screenHeight - 1) / 2);
      }
      return this.getComplexNumberForScreenCoordinates(x_center, y_center);
    };
    ComplexPlane.prototype.getComplexNumberForScreenCoordinates = function(x, y) {
      var imag, real;
      real = getCoordinate(x, this.horizontalSize, this.leftEdge, this.screenWidth);
      imag = getCoordinate(y, this.verticalSize, this.topEdge, this.screenHeight);
      return new ComplexNumber(real, imag);
    };
    ComplexPlane.prototype.getScreenCoordinates = function(c) {
      var x, y;
      x = (c.real - this.leftEdge) / this.horizontalSize * this.screenWidth;
      y = (c.imag - this.topEdge) / this.verticalSize * this.screenHeight;
      return [x, y];
    };
    ComplexPlane.prototype.zoom = function(factor) {
      return new ComplexPlane(this.leftEdge * factor, this.topEdge * factor, this.horizontalSize * factor, this.verticalSize * factor, this.screenWidth, this.screenHeight);
    };
    ComplexPlane.prototype.center = function(newCenter) {
      var screenCenter;
      screenCenter = this.getCenter();
      return new ComplexPlane(this.leftEdge - (screenCenter.real - newCenter.real), this.topEdge - (screenCenter.imag - newCenter.imag), this.horizontalSize, this.verticalSize, this.screenWidth, this.screenHeight);
    };
    ComplexPlane.prototype.zoomAndCenter = function(factor, x, y) {
      return this.zoom(factor).center(this.getComplexNumberForScreenCoordinates(x, y));
    };
    ComplexPlane.prototype.forEachPixel = function(fn) {
      var x, y, _ref, _results;
      _results = [];
      for (y = 1, _ref = this.screenHeight; 1 <= _ref ? y <= _ref : y >= _ref; 1 <= _ref ? y++ : y--) {
        _results.push((function() {
          var _ref2, _results2;
          _results2 = [];
          for (x = 1, _ref2 = this.screenWidth; 1 <= _ref2 ? x <= _ref2 : x >= _ref2; 1 <= _ref2 ? x++ : x--) {
            _results2.push(fn.call(this, x, y, this.getComplexNumberForScreenCoordinates(x, y)));
          }
          return _results2;
        }).call(this));
      }
      return _results;
    };
    return ComplexPlane;
  })();
  w = 1024;
  h = 768;
  escape_radius = 2.0;
  bailout = 63;
  log_2 = Math.log(2);
  black = [0, 0, 0];
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, w, h, OF_WINDOW);
  colors = [];
  for (i = 0; i <= 767; i++) {
    if (i >= 512) {
      colors.push([i - 512, 255 - (i - 512), 0]);
    } else if (i >= 256) {
      colors.push([0, i - 256, 255 - (i - 256)]);
    } else {
      colors.push([0, 0, i]);
    }
  }
  Mandelbrot = (function() {
    function Mandelbrot() {}
    Mandelbrot.x = 0;
    Mandelbrot.y = 0;
    Mandelbrot.prototype.setup = function() {
      this.image = new ofTexture;
      this.image.allocate(w, h, GL_RGB);
      this.cp = new ComplexPlane(-2.45, 2.625 / -2, 3.5, 2.625, w, h);
      this.pixels = new BeaBuffer(w * h * 3, kExternalUnsignedByteArray);
      return this.fractal();
    };
    Mandelbrot.prototype.fractal = function() {
      var _pixels;
      _pixels = this.pixels;
      this.cp.forEachPixel(function(x, y, c) {
        var color, index, mu, t, z;
        z = c;
        t = 0;
        while (z.abs() < escape_radius && t < bailout) {
          z = z.times(z).plus(c);
          t++;
        }
        if (t < bailout) {
          z = z.times(z).plus(c);
          z = z.times(z).plus(c);
          mu = t + 2 - Math.log(Math.log(z.abs())) / log_2;
          if (mu < 0) {
            index = 0;
          } else {
            index = parseInt(mu / bailout * 767);
          }
          if (index > 767) {
            index = 767;
          }
          color = colors[index];
        } else {
          color = black;
        }
        if (!(color != null)) {
          log("color is not here, index: " + index);
        }
        _pixels[(x + ((y - 1) * w)) * 3] = color[0];
        _pixels[(x + ((y - 1) * w)) * 3 + 1] = color[1];
        return _pixels[(x + ((y - 1) * w)) * 3 + 2] = color[2];
      });
      return this.image.loadData(_pixels.ptr(), w, h, GL_RGB);
    };
    Mandelbrot.prototype.update = function() {};
    Mandelbrot.prototype.draw = function() {
      var c, next, p1, p2, t, z;
      ofSetColor(0xFFFFFF);
      this.image.draw(1, 1);
      if (this.x !== 0 && this.y !== 0) {
        ofSetColor(0xFF0000);
        c = this.cp.getComplexNumberForScreenCoordinates(this.x, this.y);
        z = c;
        t = 0;
        while (z.abs() < escape_radius && t < bailout) {
          next = z.times(z).plus(c);
          p1 = this.cp.getScreenCoordinates(z);
          p2 = this.cp.getScreenCoordinates(next);
          ofLine(p1[0], p1[1], p2[0], p2[1]);
          z = next;
          t++;
        }
        return ofSetColor(0);
      }
    };
    Mandelbrot.prototype.mousePressed = function(x, y, button) {
      this.x = 0;
      this.y = 0;
      if (button === 0) {
        this.cp = this.cp.zoomAndCenter(0.5, x, y);
        return this.fractal();
      } else if (button === 1) {
        this.cp = this.cp.zoomAndCenter(2.0, x, y);
        return this.fractal();
      } else if (button === 2) {
        this.x = x;
        return this.y = y;
      }
    };
    return Mandelbrot;
  })();
  ofRunApp(_.extend(new ofBaseApp, new Mandelbrot));
}).call(this);
