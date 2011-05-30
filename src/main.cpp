#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"
#include "jof.h"
#include "jopengl.h"

#include "beascript.h"
#include <stdlib.h>

void unused(){

	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1024,768, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new testApp());
}


void log(const char* msg){
	std::cout << msg << std::endl;
	exit(-1);
}

void yield(int timeout){
	ofSleepMillis(timeout);
}
//========================================================================

namespace of{
	class Project{
	public:
		static void expose(v8::Handle<v8::Object> target){

			jof::Project::expose(target);
			jopengl::Project::expose(target);

		}
	};
}

int main(int argc, char** argv){
	
	if (argc < 2)
	{
		std::cout << "Please specify a javascript file" << std::endl;
		return -1;
	}

	bea::BeaScript<of::Project> Sl;
	bea::BeaContext::setLogCallback(log);
	bea::BeaContext::setYieldCallback(yield);

	Sl.init();
	if (!Sl.loadScript(argv[1]))
		std::cout << "Error: " << Sl.getLastError() << std::endl;

	return 0; 
}
