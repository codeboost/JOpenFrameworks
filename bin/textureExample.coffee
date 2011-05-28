
###
	Texture example for JOpenFrameworks
	by florin.braghis@gmail.com
###

require 'ofCommon.js'

window = new ofAppGlutWindow
ofSetupOpenGL window, 1024, 768, OF_WINDOW

class TextureExample	
	setup: ->
		@w = 250
		@h = 200
		w = @w
		h = @h
		@texGray = new ofTexture
		@texColor = new ofTexture
		@texColorAlpha = new ofTexture
		
		@texGray.allocate w, h, GL_LUMINANCE
		@texColor.allocate w, h, GL_RGB
		@texColorAlpha.allocate w, h, GL_RGBA
		
		@grayPixels = new BeaBuffer w * h, kExternalUnsignedByteArray
		@colorPixels = new BeaBuffer w * h * 3 , kExternalUnsignedByteArray
		@colorAlphaPixels = new BeaBuffer w * h * 4, kExternalUnsignedByteArray
		
		@grayPixels[i] = Math.round ofRandomuf() * 255 for i in [0..w*h - 1]
		
		#color pixels
		i = 0
		while i < w 
			j = 0
			while j < h
				@colorPixels[ (j * w + i) * 3 ] = i
				@colorPixels[ (j * w + i) * 3 + 1] = j
				@colorPixels[ (j * w + i) * 3 + 2] = 0
				j++
			i++
		
		#alpha pixels
		
		for i in [0..w-1]
			for j in [0..h-1]
				@colorAlphaPixels[ (j * w + i) * 4 ] = 255
				@colorAlphaPixels[ (j * w + i) * 4 + 1] = 133
				@colorAlphaPixels[ (j * w + i) * 4 + 2] = 200
				@colorAlphaPixels[ (j * w + i) * 4 + 3] = i
				
		
		
		@texGray.loadData @grayPixels.ptr(), w, h, GL_LUMINANCE
		@texColor.loadData @colorPixels.ptr(), w, h, GL_RGB
		@texColorAlpha.loadData @colorAlphaPixels.ptr(), w, h, GL_RGBA
		
	update: ->
		ofBackground 255, 255, 255
		for i in [0..@w - 1]
			for j in [0..@h - 1]
				@grayPixels[j * @w + i] = Math.round ofRandomuf() * 255
				
		@texGray.loadData @grayPixels.ptr(), @w, @h, GL_LUMINANCE
		
	
	draw: ->
		ofSetColor 0xffffff
		@texGray.draw 100, 100, @w, @h
		@texColor.draw 350, 300, @w, @h
		ofEnableAlphaBlending()
		@texColorAlpha.draw 250, 200, @w, @h
		ofDisableAlphaBlending()
		
		
	mouseMoved: (x, y) ->
		
		w = @w
		h = @h
		pct = x / ofGetWidth()
		i = 0
		while i < w
			j = 0
			while j < h
				@colorPixels[ (j * w + i) * 3 ] = i
				@colorPixels[ (j * w + i) * 3 + 1] = j
				@colorPixels[ (j * w + i) * 3 + 2] = Math.round pct * 255
				j++
			i++
		@texColor.loadData @colorPixels.ptr(), w, h, GL_RGB
		
		
ofRunApp _.extend new ofBaseApp, new TextureExample				
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		