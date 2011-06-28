(function() {
  var imageLoaderExample, myapp, oflib, window;
  oflib = require('lib/of');
  oflib._.extend(this, oflib);
  imageLoaderExample = (function() {
    function imageLoaderExample() {
      this.bikers = new ofImage;
      this.gears = new ofImage;
      this.tdf = new ofImage;
      this.tdfSmall = new ofImage;
      this.transparency = new ofImage;
      this.bikeIcon = new ofImage;
    }
    imageLoaderExample.prototype.setup = function() {
      ofSetWindowTitle("Javascript image loader");
      this.bikers.loadImage("images/bikers.jpg");
      this.gears.loadImage("images/gears.gif");
      this.tdf.loadImage("images/tdf_1972_poster.jpg");
      this.tdfSmall.loadImage("images/tdf_1972_poster.jpg");
      this.tdfSmall.resize(Math.round(this.tdf.width / 4), Math.round(this.tdf.height / 4));
      this.tdfSmall.setImageType(OF_IMAGE_GRAYSCALE);
      this.transparency.loadImage("images/transparency.png");
      this.bikeIcon.loadImage("images/bike_icon.png");
      this.bikeIcon.setImageType(OF_IMAGE_GRAYSCALE);
      return this.oIndex = new Indexable();
    };
    imageLoaderExample.prototype.update = function() {
      return ofBackground(255, 255, 255);
    };
    imageLoaderExample.prototype.draw = function() {
      var h, i, j, pct, pixels, value, w;
      ofSetColor(0xFFFFFF);
      this.bikers.draw(0, 0);
      this.gears.draw(600, 0);
      this.tdf.draw(600, 300);
      ofSetColor(0xDD3333);
      this.tdfSmall.draw(200, 300);
      ofSetColor(0xFFFFFF);
      ofEnableAlphaBlending();
      this.transparency.draw(Math.sin(ofGetElapsedTimeMillis() / 1000.0) * 100 + 500, 20);
      ofDisableAlphaBlending();
      ofSetColor(0x000000);
      w = this.bikeIcon.width;
      h = this.bikeIcon.height;
      pixels = this.oIndex.setPtr(this.bikeIcon.getPixels(), w * h * this.bikeIcon.bpp, kExternalUnsignedByteArray);
      i = 0;
      while (i++ < w) {
        j = 0;
        while (j++ < h) {
          value = pixels[j * w + i];
          pct = 1 - (value / 255.0);
          ofCircle(i * 10, 500 + j * 10, 1 + 5 * pct);
        }
      }
      ofSetColor(0xFFFFFF);
      return this.bikeIcon.draw(300, 500, 20, 20);
    };
    return imageLoaderExample;
  })();
  _.extend(this, ofAppRunner);
  _.extend(this, ofGraphics);
  _.extend(this, ofMath);
  _.extend(this, OpenGL);
  _.extend(this, ofImage);
  _.extend(this, ofUtils);
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, 1024, 768, OF_WINDOW);
  myapp = _.extend(new ofBaseApp, new imageLoaderExample);
  ofRunApp(myapp);
}).call(this);
