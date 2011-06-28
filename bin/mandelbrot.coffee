oflib = require 'lib/of'
oflib._.extend this, oflib

class ComplexNumber
	constructor: (@real, @imag) ->
	
	mod: ->
		if @real != 0 or @imag != 0
			Math.sqrt(@real * @real + @imag * @imag)
		else
			0

	abs: ->
		this.mod()
	
	arg: ->
		Math.atan2(@imag, @real)
	
	conj: ->
		new ComplexNumber(@real, (@imag * -1))
		
	plus: (c) ->
		new ComplexNumber(@real + c.real, @imag + c.imag)
		
	minus: (c) ->
		new ComplexNumber(@real - c.real, @imag - c.imag)
	
	times: (c) ->
		new ComplexNumber(@real * c.real - @imag * c.imag, @real * c.imag + @imag * c.real)

getCoordinate = (screenCoordinate, axisSize, axisStart, axisSizeOnScreen) ->
	(screenCoordinate / axisSizeOnScreen * axisSize) + axisStart

class ComplexPlane
	constructor: (@leftEdge, @topEdge, @horizontalSize, @verticalSize, @screenWidth, @screenHeight) ->
	
	getCenter: () ->
		if @screenWidth % 2 == 0 then x_center = @screenWidth / 2 else x_center = (@screenWidth - 1) / 2
		if y_center = @screenHeight % 2 == 0 then y_center = @screenHeight / 2 else y_center (@screenHeight - 1) / 2
		this.getComplexNumberForScreenCoordinates(x_center, y_center)
	
	getComplexNumberForScreenCoordinates: (x, y) ->
		real = getCoordinate(x, @horizontalSize, @leftEdge, @screenWidth)
		imag = getCoordinate(y, @verticalSize, @topEdge, @screenHeight)
		new ComplexNumber(real, imag)
		
	getScreenCoordinates: (c) ->
		x = (c.real - @leftEdge) / @horizontalSize * @screenWidth
		y = (c.imag - @topEdge) / @verticalSize * @screenHeight
		[x, y]
	
	zoom: (factor) ->
		new ComplexPlane(@leftEdge * factor, @topEdge * factor, @horizontalSize * factor, @verticalSize * factor, @screenWidth, @screenHeight)
		
	center: (newCenter) ->
		screenCenter = this.getCenter()
		new ComplexPlane(@leftEdge - (screenCenter.real - newCenter.real), @topEdge - (screenCenter.imag - newCenter.imag), @horizontalSize, @verticalSize, @screenWidth, @screenHeight)
		
	zoomAndCenter: (factor, x, y) ->
		this.zoom(factor).center(this.getComplexNumberForScreenCoordinates(x, y))
	
	forEachPixel: (fn) ->
		for y in [1..@screenHeight]
			for x in [1..@screenWidth]
				fn.call(this, x, y, this.getComplexNumberForScreenCoordinates(x, y))

w = 1024
h = 768
escape_radius = 2.0
bailout = 63
log_2 = Math.log(2)
black = [0, 0, 0]

window = new ofAppGlutWindow
ofSetupOpenGL window, w, h, OF_WINDOW

# see http://llbb.wordpress.com/2007/04/12/mandelbrot-set-with-smooth-drawing-using-c/
colors = []
for i in [0..767]
	if i >= 512
		colors.push([i - 512, 255 - (i - 512), 0])
	else if i >= 256
		colors.push([0, i - 256, 255 - (i - 256)])
	else
		colors.push([0, 0, i])

class Mandelbrot
	@x = 0
	@y = 0
	setup: ->
		@image = new ofTexture
		@image.allocate w, h, GL_RGB
		@cp = new ComplexPlane(-2.45, 2.625 / -2, 3.5, 2.625, w, h)
		@pixels = new BeaBuffer w * h * 3, kExternalUnsignedByteArray
		this.fractal()
		
	fractal: ->
		_pixels = @pixels
		@cp.forEachPixel (x, y, c) ->
			z = c
			t = 0
			while z.abs() < escape_radius and t < bailout
				z = z.times(z).plus(c)
				t++
			
			if t < bailout 
				z = z.times(z).plus(c)
				z = z.times(z).plus(c)
				mu = t + 2 - Math.log(Math.log(z.abs())) / log_2
				if mu < 0 then index = 0 else index = parseInt(mu / bailout * 767)
				if index > 767 then index = 767
				color = colors[index]
			else 
				color = black
			
			log("color is not here, index: " + index) if not color?
			_pixels[(x + ((y - 1) * w)) * 3] = color[0]
			_pixels[(x + ((y - 1) * w)) * 3 + 1] = color[1]
			_pixels[(x + ((y - 1) * w)) * 3 + 2] = color[2]
			
		@image.loadData _pixels.ptr(), w, h, GL_RGB

	update: ->
	
	draw: ->
		ofSetColor(0xFFFFFF)
		@image.draw 1, 1
		if @x != 0 and @y != 0
			ofSetColor(0xFF0000)
			c = @cp.getComplexNumberForScreenCoordinates(@x, @y)
			z = c
			t = 0
			while z.abs() < escape_radius and t < bailout
				next = z.times(z).plus(c)
				p1 = @cp.getScreenCoordinates(z)
				p2 = @cp.getScreenCoordinates(next)
				ofLine(p1[0], p1[1], p2[0], p2[1])
				z = next
				t++
			ofSetColor(0)
				
	mousePressed: (x, y, button) ->
		@x = 0
		@y = 0
		if button == 0
			@cp = @cp.zoomAndCenter(0.5, x, y)
			this.fractal()
		else if button == 1
			@cp = @cp.zoomAndCenter(2.0, x, y)
			this.fractal()
		else if button == 2
			@x = x
			@y = y
	
ofRunApp _.extend new ofBaseApp, new Mandelbrot
