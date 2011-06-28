/*
	JOpenFrameworks - advancedGraphicsExample
	by florin.braghis@gmail.com
	
	This is the port of the C++ advancedGraphicsExample project from OpenFrameworks library.
	Sorry about the random use of ; 

*/


of = require('lib/of')
of._.extend(this, of);


//And here we go
window = new ofAppGlutWindow
ofSetupOpenGL(window, 1024, 768, OF_WINDOW)

myapp = _.extend(new ofBaseApp(), {

	setup : function(){
		this.counter = 0
		this.spin = 0
		this.spinPct = 0.0
		this.mouseX = 263
		this.mouseY = 267
		this.firstMouseMove = true
		
		this.prevMX = 0;
		this.prevMY = 0; 
		
		ofSetWindowTitle("Javascript Advanced graphics example")
		ofBackground(0, 0, 0)
		ofSetCircleResolution(40)
		ofSetVerticalSync(true)
		ofSetFrameRate(60)
	},

	update : function(){

		this.counter = this.counter + 0.029
		this.spinPct *= 0.99
		this.spin += this.spinPct
	},

	mouseMoved : function(x, y){

		if (this.firstMouseMove == false){
			this.spinPct += Math.abs( y - this.prevMY ) * 0.03;
			this.spinPct += Math.abs( x - this.prevMX ) * 0.03;
		} else {
			this.firstMouseMove = false;
			//turn the flag off
		}

		//store the x and y
		//so we can get the prev value
		//next time the mouse is moved
		this.prevMY = y;
		this.prevMX = x;
	},


	draw : function(){
		ofSetupScreen();
		ofEnableAlphaBlending();

		glBlendFunc(GL_SRC_COLOR, GL_ONE);
		//---------------------------------
		//RGB CICRLES

		//We only want to rotate the circles
		//So we use push and pop matrix to
		//make sure the rotation is contained
		glPushMatrix();
			//we position the rotation point
			//at the location we want it to
			//spin around .
			glTranslatef(750, 320, 0);
			glRotatef(this.spin, 0, 0, 1);

			//draw a red circle
			ofSetColor(255,0, 0);
			ofCircle(-50, -25, 100);

			//draw a green circle
			ofSetColor(0,255, 0);
			ofCircle(50, -25, 100);

			//draw a blue circle
			ofSetColor(0, 0, 255);
			ofCircle(0, 57, 100);
		glPopMatrix();	
		
		
		//---------------------------------
		//PIXEL OCEAN

		//Lets make some 8bit looking waves
		//out of rectangles
		ofSetColor(0, 90, 170);
		var k = 0.0;
		for(var i = 0; i < ofGetWidth(); i+= 50){

			//Lets get a unique height for our 'wave'
			//using sine
			var height = Math.sin(this.counter + k);

			//sine produces -1 to 1 values
			//lets add 1 to make sure the height
			//is always positive
			height += 1.0;

			//Now it is going from 0 to 2
			//but we want it to be taller than that.
			//Lets make it go from 0 - 100 by
			//multiplying 50
			height *= 50;

			//lets draw it!
			ofRect(i, ofGetHeight(), 50, -height);

			//this variable makes sure that each
			//rect has a unique height otherwise
			//they would all be moving up and down
			//at the same time
			k+=0.7;
		}
		
		//This is doing it again but for a different color
		ofSetColor(0, 120, 190);
		k = 0;
		for(var i = 0; i < ofGetWidth(); i+= 50)
		{
			ofRect(i+5, ofGetHeight(), 50, -50 * (Math.sin(1.4*this.counter-k)+1.0));
			k+=0.4;
		}

		//Lets stop the blending!
		ofDisableAlphaBlending();
		
		var x = 0;
		var y = 0;
		
		//---------------------------------
		//LISSAJOUS EXAMPLE
		//http://en.wikipedia.org/wiki/Lissajous_curve
		ofSetColor(255, 255, 255);
		//Lets make the curves out of a series
		//of points
		for(var i = 0; i < 800; i++){

			//Lets use the mouse x and y position
			//to affect the x and y paramters of
			//the curve. These values are quite
			//large, so we scale them down by 0.0001
			var xPct = (i * this.mouseX) * 0.0001;
			var yPct = (i * this.mouseY) * 0.0001;

			//lets also use the spin from the
			//rgb circles to transform the curve
			//over time
			xPct += this.spin * 0.002;
			yPct += this.spin * 0.003;

			//Lets feed these two values to
			//sin and cos functions and multiply
			//by how large we want it to be.
			//Because the sin function is producing
			//-1 to 1 results the total width in
			//this case will be double what we
			//specify. So 400 by 300.
			x =  200.0  * Math.sin(xPct);
			y =  150.0  * Math.cos(yPct);

			//We add the position we want them to be osicalting around
			//and draw the rects as small 2 pixel by 2 pixel squares
			ofRect(300 + x, 320 + y, 2, 2);
		}

		//---------------------------
		// use the bitMap type
		// note, this can be slow on some graphics cards
		// because it is using glDrawPixels which varies in
		// speed from system to system.  try using ofTrueTypeFont
		// if this bitMap type slows you down.
		ofSetColor(0xFFFFFF);
		ofDrawBitmapString("this is a Lissajous curve", 190, 500);
		ofDrawBitmapString("move mouse to spin me", 670, 500);

		//---------------------------
		// a bunch of lines
		for (var i = 0; i < 20; i++){

			//Lets make a cheesy sunset
			ofSetColor(255-i*10, 255-i*20, 0);

			ofLine(0,  i*4 , ofGetWidth(), i*4);
		}
	}
});

ofRunApp(myapp)


