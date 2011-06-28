(function() {
  var MyApp, myapp, oflib, window;
  oflib = require('lib/of');
  oflib._.extend(this, oflib);
  MyApp = (function() {
    function MyApp() {
      this.franklinBook = new ofTrueTypeFont;
      this.verdana = new ofTrueTypeFont;
      this.franklinBookLarge = new ofTrueTypeFont;
      this.counter = 0;
    }
    MyApp.prototype.setup = function() {
      this.franklinBook.loadFont("frabk.ttf", 32);
      this.verdana.loadFont("verdana.ttf", 8, false, true);
      return this.verdana.setLineHeight(20.0);
    };
    MyApp.prototype.update = function() {
      ofBackground(255, 255, 255);
      return this.counter += 1.0;
    };
    MyApp.prototype.draw = function() {
      var centerx, centery, rect, size, tempString;
      ofSetColor(0x00ff00);
      this.franklinBook.drawString("hello, this is franklink book calling\nanyone home?", 100, 100);
      ofSetColor(0);
      this.verdana.drawString("hello, I am aliased verdana -- full character set, see: ? Not really, my editor! ", 100, 210);
      ofSetColor(0x00ff00);
      this.franklinBook.drawString("I can't make an (?) like you", 100, 310);
      ofSetColor(0);
      this.verdana.drawString("yeah, but I'm not exactly pretty\nthe problem is with freeType library...\napple has a patent on TTF font hints\nso our aliased type via freeType isn't super looking", 100, 380);
      ofSetColor(0x00FF00);
      this.franklinBook.drawString("you look ok ! don't worry", 100, 520);
      tempString = "" + this.counter;
      rect = this.franklinBook.getStringBoundingBox(tempString, 0, 0);
      centerx = rect.x + rect.width / 2;
      centery = rect.y + rect.height / 2;
      ofPushMatrix();
      ofTranslate(100, 650, 0);
      ofRotate(this.counter, 0, 0, 1);
      ofSetColor(0xcccccc);
      ofRect(rect.x - centerx, rect.y - centery, rect.width, rect.height);
      ofSetColor(0xff3399);
      this.franklinBook.drawString(tempString, -centerx, -centery);
      ofPopMatrix();
      ofPushMatrix();
      ofTranslate(225, 675, 0);
      ofScale(5, 5, 1);
      ofSetColor(0x333333);
      this.verdana.drawString("scale 5x!", 0, 0);
      ofPopMatrix();
      size = 2 + 2 * Math.sin(this.counter / 300.0);
      ofPushMatrix();
      ofTranslate(520, 675, 0);
      ofScale(size, size, 1);
      ofSetColor(0x00FF00);
      this.franklinBook.drawString("$k@!%", 0, 0);
      return ofPopMatrix();
    };
    return MyApp;
  })();
  _.extend(this, ofAppRunner);
  _.extend(this, ofGraphics);
  _.extend(this, ofMath);
  _.extend(this, OpenGL);
  window = new ofAppGlutWindow;
  ofSetupOpenGL(window, 1024, 768, OF_WINDOW);
  myapp = _.extend(new ofBaseApp, new MyApp);
  ofRunApp(myapp);
}).call(this);
