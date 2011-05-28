###
	MoviePlayer example for JOpenFrameworks
	by florin.braghis@gmail.com
###

require 'ofCommon.js'

window = new ofAppGlutWindow
ofSetupOpenGL window, 1024, 768, OF_WINDOW

class MoviePlayerExample
	setup: ->
		ofBackground 255, 255, 255
		@frameByFrame = false
		@fingerMovie = new ofVideoPlayer
		@fingerMovie.loadMovie "movies/fingers.mov"
		@fingerMovie.play()
		@pixelIndex = new Indexable
		
	update: ->
		@fingerMovie.idleMovie()
		yield()
	draw: ->
		ofSetColor 0xFFFFFF
		@fingerMovie.draw 20, 20
		ofSetColor 0
		bpp = 8 * 3
		pixels = @pixelIndex.setPtr @fingerMovie.getPixels(), @fingerMovie.getWidth() * @fingerMovie.getHeight() * bpp, kExternalUnsignedByteArray
		
		for i in [4..319] by 8
			for j in [4..239] by 8
				r = pixels[(j * 320 + i) * 3]
				val = 1 - (r / 255.0)
				ofCircle 400 + i, 20 + j, 10 * val
		
		ofSetColor 0
		ofDrawBitmapString "press f to change", 20, 320
		
		if @frameByFrame then ofSetColor 0xcccccc
		ofDrawBitmapString "mouse speed position", 20, 340
		if not @frameByFrame then ofSetColor 0xcccccc else ofSetColor 0
		ofDrawBitmapString "keys <- -> frame by frame", 190, 340
		ofSetColor 0
		
		ofDrawBitmapString "frame: #{(@fingerMovie.getCurrentFrame()} / #{@fingerMovie.getTotalNumFrames()).toFixed(2)}", 20, 380
		ofDrawBitmapString "duration: #{(@fingerMovie.getPosition() * @fingerMovie.getDuration()).toFixed(2)} / #{@fingerMovie.getDuration().toFixed(2)}", 20, 400
		ofDrawBitmapString "speed: #{@fingerMovie.getSpeed().toFixed(2)}", 20, 420
		
		if @fingerMovie.getIsMovieDone()
			ofSetColor 0xff0000
			ofDrawBitmapString "end of movie", 20, 440
	keyPressed: (key) ->
		c = String.fromCharCode(key)

		switch key
			when OF_KEY_LEFT
				@fingerMovie.previousFrame()
			when OF_KEY_RIGHT
				@fingerMovie.nextFrame()

		switch c
			when "f"
				@frameByFrame = !@frameByFrame
				@fingerMovie.setPaused @frameByFrame
			when "0"
				@fingerMovie.firstFrame()
				
				
	mouseMoved: (x, y) ->
		if not @frameByFrame
			width = ofGetWidth()
			pct = x / width
			speed = (2 * pct - 1) * 5.0
			@fingerMovie.setSpeed speed
			
	mouseDragged: (x, y, button) ->
		if not @frameByFrame
			width = ofGetWidth()
			pct = x / width
			@fingerMovie.setPosition pct
			
	mousePressed: (x, y, button) ->
		if not @frameByFrame
			@fingerMovie.setPaused true
			
	mouseReleased: (x, y, button) ->
		if not @frameByFrame
			@fingerMovie.setPaused false
				

g_App = _.extend new ofBaseApp, new MoviePlayerExample

ofRunApp g_App				
		
				
				
				
				
				
				
				
				
				
				
				
				
				