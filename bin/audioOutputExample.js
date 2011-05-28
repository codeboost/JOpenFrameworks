(function() {
  /*
  	Audio output example.
  	by florin.braghis@gmail.com
  */  var AudioOutputExample, g_App, window;
  require('ofCommon.js');
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, 1024, 768, OF_WINDOW);
  g_App = new ofBaseApp;
  AudioOutputExample = (function() {
    function AudioOutputExample() {
      this.pan = 0;
      this.sampleRate = 44100;
      this.phase = 0;
      this.phaseAdder = 0.0;
      this.phaseAdderTarget = 0.0;
      this.volume = 0.1;
      this.bNoise = false;
      this.targetFrequency = 0;
      this.lAudio = [];
      this.rAudio = [];
      ofSoundStreamSetup(2, 0, g_App, this.sampleRate, 256, 4);
      ofSetFrameRate(60);
      this.oIndex = new Indexable;
    }
    AudioOutputExample.prototype.draw = function() {
      var i, reportString;
      ofSetColor(0x333333);
      ofRect(100, 100, 256, 200);
      ofSetColor(0xFFFFFF);
      for (i = 0; i <= 255; i++) {
        ofLine(100 + i, 200, 100 + i, 200 + this.lAudio[i] * 100.0);
      }
      ofSetColor(0x333333);
      ofRect(600, 100, 256, 200);
      ofSetColor(0xFFFFFF);
      for (i = 0; i <= 255; i++) {
        ofLine(600 + i, 200, 600 + i, 200 + this.rAudio[i] * 100.0);
      }
      ofSetColor(0x333333);
      reportString = "volume: (" + this.volume + ") modify with -/+ keys\npan: (" + this.pan + ")\nsynthesis: " + (this.bNoise ? 'noise' : 'sine wave');
      if (!this.bNoise) {
        reportString += " (" + this.targetFrequency + "hz)";
      }
      ofDrawBitmapString(reportString, 80, 380);
      return yield(25);
    };
    AudioOutputExample.prototype.keyPressed = function(key) {
      var c;
      c = String.fromCharCode(key);
      switch (c) {
        case "-":
          this.volume -= 0.05;
          return this.volume = Math.max(this.volume, 0);
        case "+":
          this.volume += 0.05;
          return this.volume = Math.min(this.volume, 1);
      }
    };
    AudioOutputExample.prototype.mouseMoved = function(x, y) {
      var height, heightPct, width;
      width = ofGetWidth();
      this.pan = x / width;
      height = ofGetHeight();
      heightPct = (height - y) / height;
      this.targetFrequency = 2000.0 * heightPct;
      return this.phaseAdderTarget = (this.targetFrequency / this.sampleRate) * TWO_PI;
    };
    AudioOutputExample.prototype.mouseDragged = function(x, y, button) {
      var width;
      width = ofGetWidth();
      return this.pan = x / width;
    };
    AudioOutputExample.prototype.mousePressed = function() {
      return this.bNoise = true;
    };
    AudioOutputExample.prototype.mouseReleased = function() {
      return this.bNoise = false;
    };
    AudioOutputExample.prototype.audioRequested = function(poutput, bufferSize, nChannels) {
      var i, leftScale, output, rightScale, sample, _ref, _ref2, _results, _results2;
      output = this.oIndex.setPtr(poutput, bufferSize, 7);
      leftScale = 1 - this.pan;
      rightScale = this.pan;
      while (this.phase > TWO_PI) {
        this.phase -= TWO_PI;
      }
      if (this.bNoise) {
        _results = [];
        for (i = 0, _ref = bufferSize - 1; (0 <= _ref ? i <= _ref : i >= _ref); (0 <= _ref ? i += 1 : i -= 1)) {
          this.lAudio[i] = output[i * nChannels] = ofRandomf() * this.volume * leftScale;
          _results.push(this.rAudio[i] = output[i * nChannels + 1] = ofRandomf() * this.volume * rightScale);
        }
        return _results;
      } else {
        this.phaseAdder = 0.95 * this.phaseAdder + 0.05 * this.phaseAdderTarget;
        _results2 = [];
        for (i = 0, _ref2 = bufferSize - 1; (0 <= _ref2 ? i <= _ref2 : i >= _ref2); (0 <= _ref2 ? i += 1 : i -= 1)) {
          this.phase += this.phaseAdder;
          sample = Math.sin(this.phase);
          this.lAudio[i] = output[i * nChannels] = sample * this.volume * leftScale;
          _results2.push(this.rAudio[i] = output[i * nChannels + 1] = sample * this.volume * rightScale);
        }
        return _results2;
      }
    };
    return AudioOutputExample;
  })();
  g_App = _.extend(g_App, new AudioOutputExample);
  ofRunApp(g_App);
}).call(this);
