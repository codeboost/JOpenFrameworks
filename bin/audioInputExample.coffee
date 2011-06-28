###
	Audio input example for JOpenFrameworks
	by florin.braghis@gmail.com
###

oflib = require 'lib/of'
oflib._.extend this, oflib

window = new ofAppGlutWindow
ofSetupOpenGL window, 1024, 768, OF_WINDOW

class AudioInputExample
	setup: ->
		ofBackground(255,255,255)
		ofSoundStreamSetup(0,2,this, 44100, 256, 4);	
		@left = []
		@right = []
		@bufferCounter = 0;
		@drawCounter = 0;
		@oIndex = new Indexable;
	draw: ->
		# draw the left:
		ofSetColor 0x333333
		ofRect 100,100,256,200
		ofSetColor 0xFFFFFF
		
		i = 0
		while i < 256
			ofLine(100 + i, 200, 100 + i, 200 + @left[i] * 100.0) 
			i++
		
		#draw the right:
		ofSetColor 0x333333
		ofRect 600,100,256,200
		ofSetColor 0xFFFFFF
		
		i = 0
		while i < 256
			ofLine(600 + i, 200, 600 + i, 200 + @right[i] * 100.0 )
			i++

		ofSetColor 0x333333
		@drawCounter++
		reportString = "buffers received: #{@bufferCounter}\nroutines called: #{@drawCounter}"
		ofDrawBitmapString reportString, 80, 380
		#give other threads some life
		yield()
		
	audioReceived: (pinput, bufferSize, nChannels) ->
		input = @oIndex.setPtr pinput, bufferSize * nChannels, kExternalFloatArray
		for i in [0..bufferSize - 1]
			@left[i] = input[i * 2] 
			@right[i] = input[i * 2 + 1]
			
		@bufferCounter++

ofRunApp _.extend new ofBaseApp, new AudioInputExample
				
