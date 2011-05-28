JOpenFrameworks = OpenFrameworks + V8 = Javascript open frameworks

What is JOpenFrameworks ?

	JOpenFrameworks allows you to write and execute programs using the OpenFrameworks API in Javascript.
	The "glue" code between OpenFrameworks and V8 was generated with the Bea C++ to Javascript converter.
	It took me less than 2 days to do the port and I wrote about 20 lines of additional C++ code for it all to work.
	This speaks a lot about the power of the Bea converter.

Why ?

	Javascript is the most popular programming language out there: makes OF accessible to a world of non-C++ programmers/artists
	No need to set up the C++ project, programming environment
	No compile required - write the script and execute it

What is supported?

	All the "standard" OpenFrameworks API is supported, except ofEvent.
	
	It is my understanding that the ofEvent functionality can be easily achieved with javascript and thus isn't really necessary to port.

	Add-ons are not supported.
	If there is interest on the part of the community, these should be fairly easily ported with the Bea C++2JS Converter.
	This is an 'alpha' release, so take it easy on me if something doesn't work :).


What are the API differences ?

	Generally, the API is identical to the one used in a C++ application. 
	There is a slight difference when working with binary data:
	
		//C++
		char* mybuffer = new char[size];
		mybuffer[size - 1] = 0x20;
		
		ofSomeFunction(mybuffer, size);

	you would use:

		//Javascript
		var mybuffer = new BeaBuffer(size, kExternalByteArray);
		mybuffer[size - 1] = 0x20;	
		ofSomeFunction(mybuffer.ptr(), size);
		
	So the .ptr() method of the BeaBuffer class gets the native pointer and is used to make calls.
	See textureExample.js for an example of working with raw binary buffers.
	
	
	When you receive a raw native pointer as an argument to a function, use the Indexable::setPtr() method to make it indexable from Javascript:
		
		//C++
		void audioReceived(unsigned char* buffer, int bufferSize, int nChannels){
			buffer[0] = 0;
		}
		
		//Javascript
		
		setup: function(){
			//Create a 'Indexable' instance, store it in this.oIndex
			this.oIndex = new Indexable()
		}
		
		audioReceived: function(pbuffer, bufferSize, nChannels){
			//Make the pointer indexable
			var buffer = this.oIndex.setPtr(pbuffer, bufferSize);
			buffer[0] = 0;
		}

	See audioInputExample.js and audioOutputExample.js to see how this works.
	
	~The Indexable and BeaBuffer functionality might change in future releases. It was a quick hack I've put together to make it all work, but I'm sure something 
	more ellegant can be implemented.~
	
	* When using audio, you should issue calls to yield() to let the audio thread run (see the audio examples).
	
	* There is a function collectGarbage() which can be called from time to time if you're working with huge amounts of data, but that may stop the script for an undefined time.

What are the limitations/issues ?

	There is a performance hit when calling virtual functions from native code into the javascript, because a lookup into the javascript context
	must be performed to locate the desired function. There are ways to optimize this for most cases and I will do this in a future release of the Bea C++2JS.
	
	Passing binary buffers around carries several behind-the-scenes conversions and allocations. This can and should be optimized in a future release.
	
	V8 is single threaded. If there is a long-running javascript function, other threads don't get to run.
	The current workaround is to call the function yield(timeout_in_ms) from a long running javascript function to let other threads run. Internally, this just
	calls the Sleep() function. Later versions of V8 support multi-threaded javascript functions, but currently this functionality is not used.