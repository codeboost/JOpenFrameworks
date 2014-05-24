require("ofCommon.js")
require("stacktrace.js")

log("printStackTrace is not here") if !printStackTrace?

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
		if y_center = @screenHeight % 2 == 0 then y_center = @screenHeight / 2 else y_center = (@screenHeight - 1) / 2
		this.getComplexNumberForScreenCoordinates(x_center, y_center)
	
	getComplexNumberForScreenCoordinates: (x, y) ->
		real = getCoordinate(x, @horizontalSize, @leftEdge, @screenWidth)
		imag = getCoordinate(y, @verticalSize, @topEdge, @screenHeight)
		new ComplexNumber(real, imag)
		
	getScreenCoordinates: (c) ->
		if !c? then throw log(printStackTrace({e: new Error("c is null for getScreenCoordinates")}).join("\n"))
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

class GString
	constructor: (@element, cp, @offset, @fontName, @str, @size, @color = 0x000000) ->
		@top = new ComplexNumber(@element.top.real + @offset[0], @element.top.imag + @offset[1])
		@top_plus_1 = new ComplexNumber(@top.real + 0.001, @top.imag + 0.001)
		@element.add(cp, this)

	action: (fn) ->
		@action = fn
		
	draw: (cp) ->
		x_y = cp.getScreenCoordinates @top
		x_y_plus_1 = cp.getScreenCoordinates @top_plus_1
		plus_1_size = x_y_plus_1[0] - x_y[0]

		if plus_1_size > 0.15
			ofSetColor @color
			_verdana = new ofTrueTypeFont
			_verdana.loadFont(@fontName, parseInt(@size * plus_1_size))
			_verdana.drawString(@str, x_y[0], x_y[1])

	receiveClick: (cp, c) ->
		x_y = cp.getScreenCoordinates @top
		x_y_plus_1 = cp.getScreenCoordinates @top_plus_1
		plus_1_size = x_y_plus_1[0] - x_y[0]

		_verdana = new ofTrueTypeFont
		_verdana.loadFont(@fontName, parseInt(@size * plus_1_size))
		_width = _verdana.stringWidth(@str)
		_height = _verdana.stringHeight(@str)
		_bottom = cp.getComplexNumberForScreenCoordinates(x_y[0] + _width, x_y[1] - _height)
		_bottom_x_y = cp.getScreenCoordinates(_bottom)
		_c_x_y = cp.getScreenCoordinates(c)
		
		plus_1_size > 0.15 && _c_x_y[0] >= x_y[0] && _c_x_y[0] <= _bottom_x_y[0] && _c_x_y[1] <= x_y[1] && _c_x_y[1] >= _bottom_x_y[1]

	mousePressed: (cp, c, button) ->
		if @action? then @action.call(this, cp, c, button)
		
	bottom: (cp) ->
		x_y = cp.getScreenCoordinates @top
		x_y_plus_1 = cp.getScreenCoordinates @top_plus_1
		plus_1_size = x_y_plus_1[0] - x_y[0]
		_verdana = new ofTrueTypeFont
		_verdana.loadFont(@fontName, parseInt(@size * plus_1_size))
		_width = _verdana.stringWidth(@str)
		cp.getComplexNumberForScreenCoordinates(x_y[0] + _width, x_y[1])
		
class Border
	constructor: (@element, cp, @color = 0xFFC0CB, @size = 0.005) ->
		@element.add(cp, this)
	
	action: (fn) ->
		@action = fn
	
	draw: (cp) ->
		_top_x_y = cp.getScreenCoordinates(@element.top)
		_bottom_x_y = cp.getScreenCoordinates(@element.bottom)
		_top_right_x_y = cp.getScreenCoordinates(new ComplexNumber(@element.bottom.real, @element.top.imag + @size))
		_bottom_left_x_y = cp.getScreenCoordinates(new ComplexNumber(@element.top.real + @size, @element.bottom.imag - @size))
		_bottom_right_x_y = cp.getScreenCoordinates(new ComplexNumber(@element.bottom.real - @size, @element.bottom.imag))
		ofSetColor @color
		ofRect(_top_x_y[0], _top_x_y[1], _top_right_x_y[0] - _top_x_y[0], _top_right_x_y[1] - _top_x_y[1])
		ofRect(_top_x_y[0], _top_x_y[1], _bottom_left_x_y[0] - _top_x_y[0], _bottom_left_x_y[1] - _top_x_y[1])
		ofRect(_bottom_right_x_y[0], _top_x_y[1], _bottom_x_y[0] - _bottom_right_x_y[0], _bottom_x_y[1] - _top_x_y[1])
		ofRect(_top_x_y[0], _bottom_left_x_y[1], _bottom_x_y[0] - _top_x_y[0], _bottom_x_y[1] - _bottom_left_x_y[1])
	
	receiveClick: (cp, c) ->
		_top_x_y = cp.getScreenCoordinates(@element.top)
		_bottom_x_y = cp.getScreenCoordinates(@element.bottom)
		_top_right_x_y = cp.getScreenCoordinates(new ComplexNumber(@element.bottom.real, @element.top.imag + @size))
		_bottom_left_x_y = cp.getScreenCoordinates(new ComplexNumber(@element.top.real + @size, @element.bottom.imag - @size))
		_bottom_right_x_y = cp.getScreenCoordinates(new ComplexNumber(@element.bottom.real - @size, @element.bottom.imag))
		_x_y = cp.getScreenCoordinates(c)
		
		_x_y[0] >= _top_x_y[0] && _x_y[0] <= _top_right_x_y[0] && _x_y[1] >= _top_x_y[1] && _x_y[1] <= _top_right_x_y[1] ||
			_x_y[0] >= _top_x_y[0] && _x_y[0] <= _bottom_left_x_y[0] && _x_y[1] >= _top_x_y[1] && _x_y[1] <= _bottom_left_x_y[1] ||
			_x_y[0] >= _top_x_y[0] && _x_y[0] <= _top_right_x_y[0] && _x_y[1] >= _bottom_left_x_y[1] && _x_y[1] <= _bottom_x_y[1] ||
			_x_y[0] >= _bottom_right_x_y[0] && _x_y[0] <= _bottom_x_y[0] && _x_y[1] >= _top_x_y[1] && _x_y[1] <= _bottom_x_y[1]
			
	mousePressed: (cp, c, button) ->
		if @action? then @action.call(this, cp, c, button)
	
button_offset = 0.01
button_offset_c = new ComplexNumber(button_offset, button_offset)

class Button
	add: (cp, e) ->
		if !@guistr?
			@guistr = e;
		else
			throw new Error("Adding more than one text to button")

	constructor: (@w, cp, @offset, guistr) ->
		@top = new ComplexNumber(@w.top.real + offset[0], @w.top.imag + offset[1])
		if typeof guistr == 'string'
			new GString(this, cp, [button_offset, button_offset], "verdana.ttf", guistr, 7)
		else
			throw new Error("Value for button not string")
		@w.add(cp, this)
		
	action: (fn) ->
		@action = fn
	
	draw: (cp) ->
		_x_y = cp.getScreenCoordinates @top
		_bottom_x_y = cp.getScreenCoordinates(this.bottom(cp))
		ofLine(_x_y[0], _x_y[1], _x_y[0], _bottom_x_y[1])
		ofLine(_x_y[0], _bottom_x_y[1], _bottom_x_y[0], _bottom_x_y[1])
		ofLine(_bottom_x_y[0], _bottom_x_y[1], _bottom_x_y[0], _x_y[1])
		ofLine(_x_y[0], _x_y[1], _bottom_x_y[0], _x_y[1])
		@guistr.draw(cp)
		
	receiveClick: (cp, c) ->
		@guistr.receiveClick(cp, c)
		
	mousePressed: (cp, c, button) ->
		if action? then action.call(this, cp, c, button)

	bottom: (cp) ->
		@guistr.bottom(cp).plus(new ComplexNumber(button_offset, 0.5 * button_offset))
		
zero_c = new ComplexNumber(0, 0)
	
class Window
	constructor: () ->
		@top = zero_c
		@bottom = zero_c
		@elements = []
	
	calc_bottom: (cp) ->
		_final = @top
		for element in @elements
			if element.bottom?
				_bottom = element.bottom(cp)
				if _bottom.real > _final.real then _real = _bottom.real else _real = _final.real
				if _bottom.imag > _final.imag then _imag = _bottom.imag else _imag = _final.imag
				_final = new ComplexNumber(_real + 0.007, _imag + 0.007)
		_final

	add: (cp, e) ->
		@elements.push(e)
		@bottom = this.calc_bottom(cp)
	
	shouldDraw: (c) ->
		c.real > @top.real && c.real < @bottom.real && c.imag > @top.imag && c.imag < @bottom.imag
		
	draw: (cp) ->
		@bottom = this.calc_bottom(cp)
		for element in @elements
			element.draw(cp)
			
	mousePressed: (cp, c, button) ->
		for element in @elements
			if element.receiveClick? && element.mousePressed? && element.receiveClick(cp, c)
				element.mousePressed(cp, c, button)
				break
				
w = 1024
h = 768
window = new ofAppGlutWindow
ofSetupOpenGL window, w, h, OF_WINDOW
				
class Ghassulian
	constructor: ->
		@cp = new ComplexPlane(3.5 / -2, 2.625 / -2, 3.5, 2.625, w, h)
		@elements = []

	add: (e) ->
		if e? then @elements.push(e)
		
	setup: ->
		ofBackground 255, 255, 255
		ofSetFrameRate 30
		@shift = 0.05
		
	update: ->
	
	draw: ->
		_elements = @elements
		_drawn = []
		_cp = @cp
		@cp.forEachPixel (x, y, c) ->
			if (_drawn.length != _elements.length)
				for element in _elements
					if (_drawn.indexOf(element) == -1 && element.shouldDraw(c))
						element.draw(_cp)
						_drawn.push(element)
						break
		
	mousePressed: (x, y, button) ->
		if button == 1
			@cp = @cp.center(@cp.getComplexNumberForScreenCoordinates(x, y))
		else if button == 0 || button == 2
			_action = @cp.getComplexNumberForScreenCoordinates(x, y)
			_element_found = false
			for element in @elements
				if element.shouldDraw(_action)
					element.mousePressed @cp, _action, button
					_element_found = true
					break
					
			if !_element_found
				if button == 0
					@cp = @cp.zoomAndCenter(0.9, x, y)
					@shift = @shift * 0.9						
				else if button == 2
					@cp = @cp.zoomAndCenter(1.1, x, y)
					@shift = @shift * 1.1						
	
	keyReleased: (key) ->
		_key = String.fromCharCode(key)
		if key == OF_KEY_DOWN
			_center = @cp.getCenter();
			@cp = @cp.center(new ComplexNumber(_center.real, _center.imag + @shift))
		else if key == OF_KEY_UP
			_center = @cp.getCenter();
			@cp = @cp.center(new ComplexNumber(_center.real, _center.imag - @shift))
		else if key == OF_KEY_LEFT
			_center = @cp.getCenter();
			@cp = @cp.center(new ComplexNumber(_center.real - @shift, _center.imag))
		else if key == OF_KEY_RIGHT
			_center = @cp.getCenter();
			@cp = @cp.center(new ComplexNumber(_center.real + @shift, _center.imag))
		else if key == 26 # CTRL+Z
			_center = @cp.getCenter()
			_center_x_y = @cp.getScreenCoordinates(_center)
			@cp = @cp.zoomAndCenter(0.9, _center_x_y[0], _center_x_y[1])
			@shift = @shift * 0.9		
		else if key == 25 # CTRL+Y
			_center = @cp.getCenter()
			_center_x_y = @cp.getScreenCoordinates(_center)
			@cp = @cp.zoomAndCenter(1.1, _center_x_y[0], _center_x_y[1])
			@shift = @shift * 1.1		

	runApp: ->	
		ofRunApp _.extend new ofBaseApp, this

g = new Ghassulian()
cp = g.cp

w = new Window() 
b = new Border(w, cp, 0x000000, 0.003)
s1 = new GString(w, cp, [0.007, 0.02], "verdana.ttf", "This is a test This is a test\nThis is a test This is a test", 12)
s2 = new GString(w, cp, [0.007, 0.05], "verdana.ttf", "This is a test This is a test", 10)
s3 = new GString(w, cp, [0.007, 0.08], "verdana.ttf", "This is a test This is a test", 8)
s4 = new GString(w, cp, [0.007, 0.11], "verdana.ttf", "This is a test This is a test", 6)
s1.action (cp, c, button) ->
	this.color = 0x0000FF
b.action (cp, c, button) ->
	if this.color == 0x00FF00 then this.color = 0x000000 else this.color = 0x00FF00
btn1 = new Button(w, cp, [0.1, 0.2], "Test")
g.add w
g.runApp()