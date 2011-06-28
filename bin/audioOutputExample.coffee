###
	Audio output example.
	by florin.braghis@gmail.com
###

oflib = require 'lib/of'
oflib._.extend this, oflib

window = new ofAppGlutWindow
ofSetupOpenGL window, 1024, 768, OF_WINDOW
g_App = new ofBaseApp

class AudioOutputExample
	constructor: ->
		@pan = 0
		@sampleRate = 44100
		@phase = 0
		@phaseAdder = 0.0
		@phaseAdderTarget = 0.0
		@volume = 0.1
		@bNoise = false
		@targetFrequency = 0
		@lAudio = []
		@rAudio = []
		ofSoundStreamSetup 2, 0, g_App, @sampleRate, 256, 4
		ofSetFrameRate(60);
		#this is used for indexing buffers
		#we call setPtr() with the buffer and then we can do [] on it.
		@oIndex = new Indexable
	draw: ->
		
		ofSetColor 0x333333
		ofRect 100,100,256,200
		ofSetColor 0xFFFFFF
		
		
		ofLine 100+i,200,100+i,200+@lAudio[i]*100.0 for i in [0..255]

		#draw the right:
		ofSetColor 0x333333
		ofRect 600,100,256,200
		ofSetColor 0xFFFFFF
		
		ofLine 600+i,200,600+i,200+@rAudio[i]*100.0 for i in [0..255]
			

		ofSetColor 0x333333
		reportString = """volume: (#{@volume}) modify with -/+ keys
						  pan: (#{@pan})
						  synthesis: #{ if @bNoise then 'noise' else 'sine wave' }"""
						  
		if (!@bNoise) then	reportString+=" (#{@targetFrequency}hz)"

		ofDrawBitmapString reportString,80,380
		
		#give other threads some time to process
		yield(25)
		#collectGarbage()
		
	keyPressed: (key) ->
		c = String.fromCharCode key
		
		switch c
			when "-" 
				@volume -= 0.05
				@volume = Math.max @volume, 0
			when "+"
				@volume += 0.05
				@volume = Math.min @volume, 1
	mouseMoved: (x, y) ->
		width = ofGetWidth()
		@pan = x / width
		height = ofGetHeight()
		heightPct = (height - y) / height
		@targetFrequency = 2000.0 * heightPct
		@phaseAdderTarget = (@targetFrequency / @sampleRate) * TWO_PI
	
	mouseDragged: (x, y, button) ->
		width = ofGetWidth()
		@pan = x / width
		
	mousePressed: ->
		@bNoise = true
		
	mouseReleased: ->
		@bNoise = false
		
	audioRequested: (poutput, bufferSize, nChannels) ->
		#make buffer indexable; 7 = kFloatArray
		output = @oIndex.setPtr poutput, bufferSize, 7
		
		leftScale = 1 - @pan
		rightScale = @pan

		while @phase > TWO_PI
			@phase-=TWO_PI
		
		if @bNoise
			for i in [0..bufferSize - 1]
				@lAudio[i] = output[i * nChannels] = ofRandomf() * @volume * leftScale 
				@rAudio[i] = output[i * nChannels + 1] = ofRandomf() * @volume * rightScale 
		else
			@phaseAdder = 0.95 * @phaseAdder + 0.05 * @phaseAdderTarget
			for i in [0..bufferSize - 1]
				@phase += @phaseAdder
				sample = Math.sin @phase
				@lAudio[i] = output[i * nChannels] = sample * @volume * leftScale
				@rAudio[i] = output[i * nChannels + 1] = sample * @volume * rightScale

g_App = _.extend g_App, new AudioOutputExample

ofRunApp g_App				
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
