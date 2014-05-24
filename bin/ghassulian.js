(function() {
  var Border, Button, ComplexNumber, ComplexPlane, GString, Ghassulian, Window, b, btn1, button_offset, button_offset_c, cp, g, getCoordinate, h, s1, s2, s3, s4, w, window, zero_c;
  require("ofCommon.js");
  require("stacktrace.js");
  if (!(typeof printStackTrace !== "undefined" && printStackTrace !== null)) {
    log("printStackTrace is not here");
  }
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
        y_center = (this.screenHeight - 1) / 2;
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
      if (!(c != null)) {
        throw log(printStackTrace({
          e: new Error("c is null for getScreenCoordinates")
        }).join("\n"));
      }
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
  GString = (function() {
    function GString(element, cp, offset, fontName, str, size, color) {
      this.element = element;
      this.offset = offset;
      this.fontName = fontName;
      this.str = str;
      this.size = size;
      this.color = color != null ? color : 0x000000;
      this.top = new ComplexNumber(this.element.top.real + this.offset[0], this.element.top.imag + this.offset[1]);
      this.top_plus_1 = new ComplexNumber(this.top.real + 0.001, this.top.imag + 0.001);
      this.element.add(cp, this);
    }
    GString.prototype.action = function(fn) {
      return this.action = fn;
    };
    GString.prototype.draw = function(cp) {
      var plus_1_size, x_y, x_y_plus_1, _verdana;
      x_y = cp.getScreenCoordinates(this.top);
      x_y_plus_1 = cp.getScreenCoordinates(this.top_plus_1);
      plus_1_size = x_y_plus_1[0] - x_y[0];
      if (plus_1_size > 0.15) {
        ofSetColor(this.color);
        _verdana = new ofTrueTypeFont;
        _verdana.loadFont(this.fontName, parseInt(this.size * plus_1_size));
        return _verdana.drawString(this.str, x_y[0], x_y[1]);
      }
    };
    GString.prototype.receiveClick = function(cp, c) {
      var plus_1_size, x_y, x_y_plus_1, _bottom, _bottom_x_y, _c_x_y, _height, _verdana, _width;
      x_y = cp.getScreenCoordinates(this.top);
      x_y_plus_1 = cp.getScreenCoordinates(this.top_plus_1);
      plus_1_size = x_y_plus_1[0] - x_y[0];
      _verdana = new ofTrueTypeFont;
      _verdana.loadFont(this.fontName, parseInt(this.size * plus_1_size));
      _width = _verdana.stringWidth(this.str);
      _height = _verdana.stringHeight(this.str);
      _bottom = cp.getComplexNumberForScreenCoordinates(x_y[0] + _width, x_y[1] - _height);
      _bottom_x_y = cp.getScreenCoordinates(_bottom);
      _c_x_y = cp.getScreenCoordinates(c);
      return plus_1_size > 0.15 && _c_x_y[0] >= x_y[0] && _c_x_y[0] <= _bottom_x_y[0] && _c_x_y[1] <= x_y[1] && _c_x_y[1] >= _bottom_x_y[1];
    };
    GString.prototype.mousePressed = function(cp, c, button) {
      if (this.action != null) {
        return this.action.call(this, cp, c, button);
      }
    };
    GString.prototype.bottom = function(cp) {
      var plus_1_size, x_y, x_y_plus_1, _verdana, _width;
      x_y = cp.getScreenCoordinates(this.top);
      x_y_plus_1 = cp.getScreenCoordinates(this.top_plus_1);
      plus_1_size = x_y_plus_1[0] - x_y[0];
      _verdana = new ofTrueTypeFont;
      _verdana.loadFont(this.fontName, parseInt(this.size * plus_1_size));
      _width = _verdana.stringWidth(this.str);
      return cp.getComplexNumberForScreenCoordinates(x_y[0] + _width, x_y[1]);
    };
    return GString;
  })();
  Border = (function() {
    function Border(element, cp, color, size) {
      this.element = element;
      this.color = color != null ? color : 0xFFC0CB;
      this.size = size != null ? size : 0.005;
      this.element.add(cp, this);
    }
    Border.prototype.action = function(fn) {
      return this.action = fn;
    };
    Border.prototype.draw = function(cp) {
      var _bottom_left_x_y, _bottom_right_x_y, _bottom_x_y, _top_right_x_y, _top_x_y;
      _top_x_y = cp.getScreenCoordinates(this.element.top);
      _bottom_x_y = cp.getScreenCoordinates(this.element.bottom);
      _top_right_x_y = cp.getScreenCoordinates(new ComplexNumber(this.element.bottom.real, this.element.top.imag + this.size));
      _bottom_left_x_y = cp.getScreenCoordinates(new ComplexNumber(this.element.top.real + this.size, this.element.bottom.imag - this.size));
      _bottom_right_x_y = cp.getScreenCoordinates(new ComplexNumber(this.element.bottom.real - this.size, this.element.bottom.imag));
      ofSetColor(this.color);
      ofRect(_top_x_y[0], _top_x_y[1], _top_right_x_y[0] - _top_x_y[0], _top_right_x_y[1] - _top_x_y[1]);
      ofRect(_top_x_y[0], _top_x_y[1], _bottom_left_x_y[0] - _top_x_y[0], _bottom_left_x_y[1] - _top_x_y[1]);
      ofRect(_bottom_right_x_y[0], _top_x_y[1], _bottom_x_y[0] - _bottom_right_x_y[0], _bottom_x_y[1] - _top_x_y[1]);
      return ofRect(_top_x_y[0], _bottom_left_x_y[1], _bottom_x_y[0] - _top_x_y[0], _bottom_x_y[1] - _bottom_left_x_y[1]);
    };
    Border.prototype.receiveClick = function(cp, c) {
      var _bottom_left_x_y, _bottom_right_x_y, _bottom_x_y, _top_right_x_y, _top_x_y, _x_y;
      _top_x_y = cp.getScreenCoordinates(this.element.top);
      _bottom_x_y = cp.getScreenCoordinates(this.element.bottom);
      _top_right_x_y = cp.getScreenCoordinates(new ComplexNumber(this.element.bottom.real, this.element.top.imag + this.size));
      _bottom_left_x_y = cp.getScreenCoordinates(new ComplexNumber(this.element.top.real + this.size, this.element.bottom.imag - this.size));
      _bottom_right_x_y = cp.getScreenCoordinates(new ComplexNumber(this.element.bottom.real - this.size, this.element.bottom.imag));
      _x_y = cp.getScreenCoordinates(c);
      return _x_y[0] >= _top_x_y[0] && _x_y[0] <= _top_right_x_y[0] && _x_y[1] >= _top_x_y[1] && _x_y[1] <= _top_right_x_y[1] || _x_y[0] >= _top_x_y[0] && _x_y[0] <= _bottom_left_x_y[0] && _x_y[1] >= _top_x_y[1] && _x_y[1] <= _bottom_left_x_y[1] || _x_y[0] >= _top_x_y[0] && _x_y[0] <= _top_right_x_y[0] && _x_y[1] >= _bottom_left_x_y[1] && _x_y[1] <= _bottom_x_y[1] || _x_y[0] >= _bottom_right_x_y[0] && _x_y[0] <= _bottom_x_y[0] && _x_y[1] >= _top_x_y[1] && _x_y[1] <= _bottom_x_y[1];
    };
    Border.prototype.mousePressed = function(cp, c, button) {
      if (this.action != null) {
        return this.action.call(this, cp, c, button);
      }
    };
    return Border;
  })();
  button_offset = 0.01;
  button_offset_c = new ComplexNumber(button_offset, button_offset);
  Button = (function() {
    Button.prototype.add = function(cp, e) {
      if (!(this.guistr != null)) {
        return this.guistr = e;
      } else {
        throw new Error("Adding more than one text to button");
      }
    };
    function Button(w, cp, offset, guistr) {
      this.w = w;
      this.offset = offset;
      this.top = new ComplexNumber(this.w.top.real + offset[0], this.w.top.imag + offset[1]);
      if (typeof guistr === 'string') {
        new GString(this, cp, [button_offset, button_offset], "verdana.ttf", guistr, 7);
      } else {
        throw new Error("Value for button not string");
      }
      this.w.add(cp, this);
    }
    Button.prototype.action = function(fn) {
      return this.action = fn;
    };
    Button.prototype.draw = function(cp) {
      var _bottom_x_y, _x_y;
      _x_y = cp.getScreenCoordinates(this.top);
      _bottom_x_y = cp.getScreenCoordinates(this.bottom(cp));
      ofLine(_x_y[0], _x_y[1], _x_y[0], _bottom_x_y[1]);
      ofLine(_x_y[0], _bottom_x_y[1], _bottom_x_y[0], _bottom_x_y[1]);
      ofLine(_bottom_x_y[0], _bottom_x_y[1], _bottom_x_y[0], _x_y[1]);
      ofLine(_x_y[0], _x_y[1], _bottom_x_y[0], _x_y[1]);
      return this.guistr.draw(cp);
    };
    Button.prototype.receiveClick = function(cp, c) {
      return this.guistr.receiveClick(cp, c);
    };
    Button.prototype.mousePressed = function(cp, c, button) {
      if (typeof action !== "undefined" && action !== null) {
        return action.call(this, cp, c, button);
      }
    };
    Button.prototype.bottom = function(cp) {
      return this.guistr.bottom(cp).plus(new ComplexNumber(button_offset, 0.5 * button_offset));
    };
    return Button;
  })();
  zero_c = new ComplexNumber(0, 0);
  Window = (function() {
    function Window() {
      this.top = zero_c;
      this.bottom = zero_c;
      this.elements = [];
    }
    Window.prototype.calc_bottom = function(cp) {
      var element, _bottom, _final, _i, _imag, _len, _real, _ref;
      _final = this.top;
      _ref = this.elements;
      for (_i = 0, _len = _ref.length; _i < _len; _i++) {
        element = _ref[_i];
        if (element.bottom != null) {
          _bottom = element.bottom(cp);
          if (_bottom.real > _final.real) {
            _real = _bottom.real;
          } else {
            _real = _final.real;
          }
          if (_bottom.imag > _final.imag) {
            _imag = _bottom.imag;
          } else {
            _imag = _final.imag;
          }
          _final = new ComplexNumber(_real + 0.007, _imag + 0.007);
        }
      }
      return _final;
    };
    Window.prototype.add = function(cp, e) {
      this.elements.push(e);
      return this.bottom = this.calc_bottom(cp);
    };
    Window.prototype.shouldDraw = function(c) {
      return c.real > this.top.real && c.real < this.bottom.real && c.imag > this.top.imag && c.imag < this.bottom.imag;
    };
    Window.prototype.draw = function(cp) {
      var element, _i, _len, _ref, _results;
      this.bottom = this.calc_bottom(cp);
      _ref = this.elements;
      _results = [];
      for (_i = 0, _len = _ref.length; _i < _len; _i++) {
        element = _ref[_i];
        _results.push(element.draw(cp));
      }
      return _results;
    };
    Window.prototype.mousePressed = function(cp, c, button) {
      var element, _i, _len, _ref, _results;
      _ref = this.elements;
      _results = [];
      for (_i = 0, _len = _ref.length; _i < _len; _i++) {
        element = _ref[_i];
        if ((element.receiveClick != null) && (element.mousePressed != null) && element.receiveClick(cp, c)) {
          element.mousePressed(cp, c, button);
          break;
        }
      }
      return _results;
    };
    return Window;
  })();
  w = 1024;
  h = 768;
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, w, h, OF_WINDOW);
  Ghassulian = (function() {
    function Ghassulian() {
      this.cp = new ComplexPlane(3.5 / -2, 2.625 / -2, 3.5, 2.625, w, h);
      this.elements = [];
    }
    Ghassulian.prototype.add = function(e) {
      if (e != null) {
        return this.elements.push(e);
      }
    };
    Ghassulian.prototype.setup = function() {
      ofBackground(255, 255, 255);
      ofSetFrameRate(30);
      return this.shift = 0.05;
    };
    Ghassulian.prototype.update = function() {};
    Ghassulian.prototype.draw = function() {
      var _cp, _drawn, _elements;
      _elements = this.elements;
      _drawn = [];
      _cp = this.cp;
      return this.cp.forEachPixel(function(x, y, c) {
        var element, _i, _len, _results;
        if (_drawn.length !== _elements.length) {
          _results = [];
          for (_i = 0, _len = _elements.length; _i < _len; _i++) {
            element = _elements[_i];
            if (_drawn.indexOf(element) === -1 && element.shouldDraw(c)) {
              element.draw(_cp);
              _drawn.push(element);
              break;
            }
          }
          return _results;
        }
      });
    };
    Ghassulian.prototype.mousePressed = function(x, y, button) {
      var element, _action, _element_found, _i, _len, _ref;
      if (button === 1) {
        return this.cp = this.cp.center(this.cp.getComplexNumberForScreenCoordinates(x, y));
      } else if (button === 0 || button === 2) {
        _action = this.cp.getComplexNumberForScreenCoordinates(x, y);
        _element_found = false;
        _ref = this.elements;
        for (_i = 0, _len = _ref.length; _i < _len; _i++) {
          element = _ref[_i];
          if (element.shouldDraw(_action)) {
            element.mousePressed(this.cp, _action, button);
            _element_found = true;
            break;
          }
        }
        if (!_element_found) {
          if (button === 0) {
            this.cp = this.cp.zoomAndCenter(0.9, x, y);
            return this.shift = this.shift * 0.9;
          } else if (button === 2) {
            this.cp = this.cp.zoomAndCenter(1.1, x, y);
            return this.shift = this.shift * 1.1;
          }
        }
      }
    };
    Ghassulian.prototype.keyReleased = function(key) {
      var _center, _center_x_y, _key;
      _key = String.fromCharCode(key);
      if (key === OF_KEY_DOWN) {
        _center = this.cp.getCenter();
        return this.cp = this.cp.center(new ComplexNumber(_center.real, _center.imag + this.shift));
      } else if (key === OF_KEY_UP) {
        _center = this.cp.getCenter();
        return this.cp = this.cp.center(new ComplexNumber(_center.real, _center.imag - this.shift));
      } else if (key === OF_KEY_LEFT) {
        _center = this.cp.getCenter();
        return this.cp = this.cp.center(new ComplexNumber(_center.real - this.shift, _center.imag));
      } else if (key === OF_KEY_RIGHT) {
        _center = this.cp.getCenter();
        return this.cp = this.cp.center(new ComplexNumber(_center.real + this.shift, _center.imag));
      } else if (key === 26) {
        _center = this.cp.getCenter();
        _center_x_y = this.cp.getScreenCoordinates(_center);
        this.cp = this.cp.zoomAndCenter(0.9, _center_x_y[0], _center_x_y[1]);
        return this.shift = this.shift * 0.9;
      } else if (key === 25) {
        _center = this.cp.getCenter();
        _center_x_y = this.cp.getScreenCoordinates(_center);
        this.cp = this.cp.zoomAndCenter(1.1, _center_x_y[0], _center_x_y[1]);
        return this.shift = this.shift * 1.1;
      }
    };
    Ghassulian.prototype.runApp = function() {
      return ofRunApp(_.extend(new ofBaseApp, this));
    };
    return Ghassulian;
  })();
  g = new Ghassulian();
  cp = g.cp;
  w = new Window();
  b = new Border(w, cp, 0x000000, 0.003);
  s1 = new GString(w, cp, [0.007, 0.02], "verdana.ttf", "This is a test This is a test\nThis is a test This is a test", 12);
  s2 = new GString(w, cp, [0.007, 0.05], "verdana.ttf", "This is a test This is a test", 10);
  s3 = new GString(w, cp, [0.007, 0.08], "verdana.ttf", "This is a test This is a test", 8);
  s4 = new GString(w, cp, [0.007, 0.11], "verdana.ttf", "This is a test This is a test", 6);
  s1.action(function(cp, c, button) {
    return this.color = 0x0000FF;
  });
  b.action(function(cp, c, button) {
    if (this.color === 0x00FF00) {
      return this.color = 0x000000;
    } else {
      return this.color = 0x00FF00;
    }
  });
  btn1 = new Button(w, cp, [0.1, 0.2], "Test");
  g.add(w);
  g.runApp();
}).call(this);
