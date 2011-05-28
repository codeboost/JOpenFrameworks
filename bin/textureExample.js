(function() {
  /*
  	Texture example for JOpenFrameworks
  	by florin.braghis@gmail.com
  */  var TextureExample, window;
  require('ofCommon.js');
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, 1024, 768, OF_WINDOW);
  TextureExample = (function() {
    function TextureExample() {}
    TextureExample.prototype.setup = function() {
      var h, i, j, w, _ref, _ref2, _ref3;
      this.w = 250;
      this.h = 200;
      w = this.w;
      h = this.h;
      this.texGray = new ofTexture;
      this.texColor = new ofTexture;
      this.texColorAlpha = new ofTexture;
      this.texGray.allocate(w, h, GL_LUMINANCE);
      this.texColor.allocate(w, h, GL_RGB);
      this.texColorAlpha.allocate(w, h, GL_RGBA);
      this.grayPixels = new BeaBuffer(w * h, kExternalUnsignedByteArray);
      this.colorPixels = new BeaBuffer(w * h * 3, kExternalUnsignedByteArray);
      this.colorAlphaPixels = new BeaBuffer(w * h * 4, kExternalUnsignedByteArray);
      for (i = 0, _ref = w * h - 1; (0 <= _ref ? i <= _ref : i >= _ref); (0 <= _ref ? i += 1 : i -= 1)) {
        this.grayPixels[i] = Math.round(ofRandomuf() * 255);
      }
      i = 0;
      while (i < w) {
        j = 0;
        while (j < h) {
          this.colorPixels[(j * w + i) * 3] = i;
          this.colorPixels[(j * w + i) * 3 + 1] = j;
          this.colorPixels[(j * w + i) * 3 + 2] = 0;
          j++;
        }
        i++;
      }
      for (i = 0, _ref2 = w - 1; (0 <= _ref2 ? i <= _ref2 : i >= _ref2); (0 <= _ref2 ? i += 1 : i -= 1)) {
        for (j = 0, _ref3 = h - 1; (0 <= _ref3 ? j <= _ref3 : j >= _ref3); (0 <= _ref3 ? j += 1 : j -= 1)) {
          this.colorAlphaPixels[(j * w + i) * 4] = 255;
          this.colorAlphaPixels[(j * w + i) * 4 + 1] = 133;
          this.colorAlphaPixels[(j * w + i) * 4 + 2] = 200;
          this.colorAlphaPixels[(j * w + i) * 4 + 3] = i;
        }
      }
      this.texGray.loadData(this.grayPixels.ptr(), w, h, GL_LUMINANCE);
      this.texColor.loadData(this.colorPixels.ptr(), w, h, GL_RGB);
      return this.texColorAlpha.loadData(this.colorAlphaPixels.ptr(), w, h, GL_RGBA);
    };
    TextureExample.prototype.update = function() {
      var i, j, _ref, _ref2;
      ofBackground(255, 255, 255);
      for (i = 0, _ref = this.w - 1; (0 <= _ref ? i <= _ref : i >= _ref); (0 <= _ref ? i += 1 : i -= 1)) {
        for (j = 0, _ref2 = this.h - 1; (0 <= _ref2 ? j <= _ref2 : j >= _ref2); (0 <= _ref2 ? j += 1 : j -= 1)) {
          this.grayPixels[j * this.w + i] = Math.round(ofRandomuf() * 255);
        }
      }
      return this.texGray.loadData(this.grayPixels.ptr(), this.w, this.h, GL_LUMINANCE);
    };
    TextureExample.prototype.draw = function() {
      ofSetColor(0xffffff);
      this.texGray.draw(100, 100, this.w, this.h);
      this.texColor.draw(350, 300, this.w, this.h);
      ofEnableAlphaBlending();
      this.texColorAlpha.draw(250, 200, this.w, this.h);
      return ofDisableAlphaBlending();
    };
    TextureExample.prototype.mouseMoved = function(x, y) {
      var h, i, j, pct, w;
      w = this.w;
      h = this.h;
      pct = x / ofGetWidth();
      i = 0;
      while (i < w) {
        j = 0;
        while (j < h) {
          this.colorPixels[(j * w + i) * 3] = i;
          this.colorPixels[(j * w + i) * 3 + 1] = j;
          this.colorPixels[(j * w + i) * 3 + 2] = Math.round(pct * 255);
          j++;
        }
        i++;
      }
      return this.texColor.loadData(this.colorPixels.ptr(), w, h, GL_RGB);
    };
    return TextureExample;
  })();
  ofRunApp(_.extend(new ofBaseApp, new TextureExample));
}).call(this);
