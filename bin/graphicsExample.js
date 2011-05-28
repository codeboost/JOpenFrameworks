require('underscore.js')

/*
	JOpenFrameworks - graphicsExample
	by florin.braghis@gmail.com
	
	This is the port of the C++ graphicsExample project from OpenFrameworks library.

*/

_.extend(this, ofAppRunner)
_.extend(this, ofGraphics)
_.extend(this, ofMath)

window = new ofAppGlutWindow
ofSetupOpenGL(window, 1024, 768, OF_WINDOW)

myapp = new ofBaseApp();

myapp.setup = function(){
	this.counter = 0; 
	this.smooth = false;
	
	ofSetWindowTitle("Javascript example");
	ofBackground(255, 255, 255);
	
	ofSetFrameRate(30);
}

myapp.update = function(){
	this.counter = this.counter + 0.33;
}



myapp.draw = function(){
	ofSetColor(255, 130, 0);
	var radius = 50 + 10 + Math.sin(this.counter);
	
	ofFill();
	ofCircle(100, 400, radius);
	
	ofNoFill();
	ofSetColor(0xcccccc);
	ofCircle(100, 400, 80);
	
	ofSetColor(0);
	ofDrawBitmapString("circle", 75, 500);
	
	//Rectangles
	
	ofFill();
	for (var k = 0; k < 200; k++){
		ofSetColor (Math.round(ofRandom(0, 255)), 
					Math.round(ofRandom(0, 255)), 
					Math.round(ofRandom(0, 255)));
					
		ofRect(ofRandom(250,350),ofRandom(350,450),ofRandom(10,20),ofRandom(10,20));	
	}
	ofSetColor(0);
	ofDrawBitmapString("rectangles", 275, 500);
	
	//---------------------------  transparency
	ofSetColor(0x00FF33);
	ofRect(400,350,100,100);
	// alpha is usually turned off - for speed puposes.  let's turn it on!
	ofEnableAlphaBlending();
	ofSetColor(255,0,0,127);   // red, 50% transparent
	ofRect(450,430,100,33);
	ofSetColor(255,0,0,Math.round((this.counter * 10.0)) % 255);   // red, variable transparent
	ofRect(450,370,100,33);
	ofDisableAlphaBlending();

	ofSetColor(0x000000);
	ofDrawBitmapString("transparency", 410,500);
	
	if (this.smooth)
		ofDisableSmoothing();
		
	ofSetColor(0);
	ofDrawBitmapString("lines\npress 's' to toggle smoothness", 600,500);
	
}

myapp.keyPressed = function(key){
	s = String.fromCharCode(key);
	if (s == 'S' || s == 's'){
		this.smooth = !this.smooth;
		log("Smooth = " + this.smooth);
	}
}

ofRunApp(myapp)
