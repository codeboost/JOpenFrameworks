(function() {
  /*
  	Audio input example for JOpenFrameworks
  	by florin.braghis@gmail.com
  */  var AudioInputExample, window;
  require('ofCommon.js');
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, 1024, 768, OF_WINDOW);
  AudioInputExample = (function() {
    function AudioInputExample() {}
    AudioInputExample.prototype.setup = function() {
      ofBackground(255, 255, 255);
      ofSoundStreamSetup(0, 2, this, 44100, 256, 4);
      this.left = [];
      this.right = [];
      this.bufferCounter = 0;
      this.drawCounter = 0;
      return this.oIndex = new Indexable;
    };
    AudioInputExample.prototype.draw = function() {
      var i, reportString;
      ofSetColor(0x333333);
      ofRect(100, 100, 256, 200);
      ofSetColor(0xFFFFFF);
      for (i = 0; i <= 255; i++) {
        ofLine(100 + i, 200, 100 + i, 200 + this.left[i] * 100.0);
      }
      ofSetColor(0x333333);
      ofRect(600, 100, 256, 200);
      ofSetColor(0xFFFFFF);
      for (i = 0; i <= 255; i++) {
        ofLine(600 + i, 200, 600 + i, 200 + this.right[i] * 100.0);
      }
      ofSetColor(0x333333);
      this.drawCounter++;
      reportString = "buffers received: " + this.bufferCounter + "\nroutines called: " + this.drawCounter;
      ofDrawBitmapString(reportString, 80, 380);
      return yield();
    };
    AudioInputExample.prototype.audioReceived = function(pinput, bufferSize, nChannels) {
      var i, input, _ref;
      input = this.oIndex.setPtr(pinput, bufferSize, 7);
      for (i = 0, _ref = bufferSize - 1; (0 <= _ref ? i <= _ref : i >= _ref); (0 <= _ref ? i += 1 : i -= 1)) {
        this.left[i] = input[i * 2];
        this.right[i] = input[i * 2 + 1];
      }
      return this.bufferCounter++;
    };
    return AudioInputExample;
  })();
  ofRunApp(_.extend(new ofBaseApp, new AudioInputExample));
}).call(this);
