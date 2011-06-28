Changelog for JOpenFrameworks
=============================

28.06.2011
	- require(): now runs the included script in a new context and returns the 'exports' object.
	- require(): the '.js' extension can be ommited
	- require(): paths are relative to where the jof executable is
	- added stack trace and file names to the exception messages
	- added support for command line arguments in scripts. use process.argv[] to access command line arguments
	
