
require 'ofCommon.js'

class imageLoaderExample
	constructor: ->
		@bikers = new ofImage
		@gears = new ofImage
		@tdf = new ofImage
		@tdfSmall = new ofImage
		@transparency = new ofImage
		@bikeIcon = new ofImage
		
	setup: ->
		ofSetWindowTitle("Javascript image loader");
		@bikers.loadImage "images/bikers.jpg"
		@gears.loadImage "images/gears.gif"
		@tdf.loadImage "images/tdf_1972_poster.jpg"
		@tdfSmall.loadImage "images/tdf_1972_poster.jpg"
		@tdfSmall.resize Math.round(@tdf.width / 4), Math.round(@tdf.height / 4)
		@tdfSmall.setImageType OF_IMAGE_GRAYSCALE
		@transparency.loadImage "images/transparency.png"
		@bikeIcon.loadImage "images/bike_icon.png"
		@bikeIcon.setImageType OF_IMAGE_GRAYSCALE
		@oIndex = new Indexable()
		
	update: ->
		ofBackground 255, 255, 255
		
	draw: ->
		ofSetColor 0xFFFFFF

		@bikers.draw 0, 0
		@gears.draw 600, 0
		@tdf.draw 600,300
		
		ofSetColor 0xDD3333
		@tdfSmall.draw 200, 300
		
		ofSetColor 0xFFFFFF 
		ofEnableAlphaBlending()
		@transparency.draw Math.sin(ofGetElapsedTimeMillis() / 1000.0) * 100 + 500, 20
		ofDisableAlphaBlending()
		
		ofSetColor 0x000000
		
		w = @bikeIcon.width
		h = @bikeIcon.height
		#pixels = new Indexable @bikeIcon.getPixels(), w * h * @bikeIcon.bpp
		pixels = @oIndex.setPtr @bikeIcon.getPixels(), w * h * @bikeIcon.bpp, kExternalUnsignedByteArray
		i = 0
		while i++ < w
			j = 0
			while j++ < h
				value = pixels[j * w + i]
				pct = 1 - (value / 255.0)
				ofCircle i * 10, 500 + j * 10, 1 + 5 * pct

		ofSetColor(0xFFFFFF);
		@bikeIcon.draw(300,500, 20,20);
		
_.extend this, ofAppRunner
_.extend this, ofGraphics
_.extend this, ofMath
_.extend this, OpenGL 
_.extend this, ofImage 
_.extend this, ofUtils 


window = new ofAppGlutWindow
ofSetupOpenGL window, 1024, 768, OF_WINDOW
		
myapp = _.extend new ofBaseApp, new imageLoaderExample

ofRunApp myapp		