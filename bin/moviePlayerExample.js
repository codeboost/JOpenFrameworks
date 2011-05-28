(function() {
  /*
  	MoviePlayer example for JOpenFrameworks
  	by florin.braghis@gmail.com
  */  var MoviePlayerExample, g_App, window;
  require('ofCommon.js');
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, 1024, 768, OF_WINDOW);
  MoviePlayerExample = (function() {
    function MoviePlayerExample() {}
    MoviePlayerExample.prototype.setup = function() {
      ofBackground(255, 255, 255);
      this.frameByFrame = false;
      this.fingerMovie = new ofVideoPlayer;
      this.fingerMovie.loadMovie("movies/fingers.mov");
      this.fingerMovie.play();
      return this.pixelIndex = new Indexable;
    };
    MoviePlayerExample.prototype.update = function() {
      this.fingerMovie.idleMovie();
      return yield();
    };
    MoviePlayerExample.prototype.draw = function() {
      var bpp, i, j, pixels, r, val;
      ofSetColor(0xFFFFFF);
      this.fingerMovie.draw(20, 20);
      ofSetColor(0);
      bpp = 8 * 3;
      pixels = this.pixelIndex.setPtr(this.fingerMovie.getPixels(), this.fingerMovie.getWidth() * this.fingerMovie.getHeight() * bpp, kExternalUnsignedByteArray);
      for (i = 4; i <= 319; i += 8) {
        for (j = 4; j <= 239; j += 8) {
          r = pixels[(j * 320 + i) * 3];
          val = 1 - (r / 255.0);
          ofCircle(400 + i, 20 + j, 10 * val);
        }
      }
      ofSetColor(0);
      ofDrawBitmapString("press f to change", 20, 320);
      if (this.frameByFrame) {
        ofSetColor(0xcccccc);
      }
      ofDrawBitmapString("mouse speed position", 20, 340);
      if (!this.frameByFrame) {
        ofSetColor(0xcccccc);
      } else {
        ofSetColor(0);
      }
      ofDrawBitmapString("keys <- -> frame by frame", 190, 340);
      ofSetColor(0);
      ofDrawBitmapString("frame: " + ((this.fingerMovie.getCurrentFrame()) + " / " + (this.fingerMovie.getTotalNumFrames()).toFixed(2)), 20, 380);
      ofDrawBitmapString("duration: " + ((this.fingerMovie.getPosition() * this.fingerMovie.getDuration()).toFixed(2)) + " / " + (this.fingerMovie.getDuration().toFixed(2)), 20, 400);
      ofDrawBitmapString("speed: " + (this.fingerMovie.getSpeed().toFixed(2)), 20, 420);
      if (this.fingerMovie.getIsMovieDone()) {
        ofSetColor(0xff0000);
        return ofDrawBitmapString("end of movie", 20, 440);
      }
    };
    MoviePlayerExample.prototype.keyPressed = function(key) {
      var c;
      c = String.fromCharCode(key);
      switch (key) {
        case OF_KEY_LEFT:
          this.fingerMovie.previousFrame();
          break;
        case OF_KEY_RIGHT:
          this.fingerMovie.nextFrame();
      }
      switch (c) {
        case "f":
          this.frameByFrame = !this.frameByFrame;
          return this.fingerMovie.setPaused(this.frameByFrame);
        case "0":
          return this.fingerMovie.firstFrame();
      }
    };
    MoviePlayerExample.prototype.mouseMoved = function(x, y) {
      var pct, speed, width;
      if (!this.frameByFrame) {
        width = ofGetWidth();
        pct = x / width;
        speed = (2 * pct - 1) * 5.0;
        return this.fingerMovie.setSpeed(speed);
      }
    };
    MoviePlayerExample.prototype.mouseDragged = function(x, y, button) {
      var pct, width;
      if (!this.frameByFrame) {
        width = ofGetWidth();
        pct = x / width;
        return this.fingerMovie.setPosition(pct);
      }
    };
    MoviePlayerExample.prototype.mousePressed = function(x, y, button) {
      if (!this.frameByFrame) {
        return this.fingerMovie.setPaused(true);
      }
    };
    MoviePlayerExample.prototype.mouseReleased = function(x, y, button) {
      if (!this.frameByFrame) {
        return this.fingerMovie.setPaused(false);
      }
    };
    return MoviePlayerExample;
  })();
  g_App = _.extend(new ofBaseApp, new MoviePlayerExample);
  ofRunApp(g_App);
}).call(this);
