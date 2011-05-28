###
	Audio input example for JOpenFrameworks
	by florin.braghis@gmail.com
###

require 'ofCommon.js'

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
		
		ofLine(100 + i, 200, 100 + i, 200 + @left[i] * 100.0) for i in [0..255]
		
		#draw the right:
		ofSetColor 0x333333
		ofRect 600,100,256,200
		ofSetColor 0xFFFFFF
		
		ofLine(600 + i, 200, 600 + i, 200 + @right[i] * 100.0 ) for i in [0..255]

		ofSetColor 0x333333
		@drawCounter++
		reportString = "buffers received: #{@bufferCounter}\nroutines called: #{@drawCounter}"
		ofDrawBitmapString reportString, 80, 380
		#give other threads some life
		yield()
		
	audioReceived: (pinput, bufferSize, nChannels) ->
		#make buffer indexable; 7 = kFloatArray
		input = @oIndex.setPtr pinput, bufferSize, 7
		
		for i in [0..bufferSize - 1]
			@left[i] = input[i * 2] 
			@right[i] = input[i * 2 + 1]
		
		@bufferCounter++

ofRunApp _.extend new ofBaseApp, new AudioInputExample
				
