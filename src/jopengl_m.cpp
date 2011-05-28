#include <bea.h>
#include "jopengl.h"
#include <vector>
#include <windows.h>
#include <gl/gl.h>
using namespace bea;
namespace bea {
	
}

namespace jopengl {
	v8::Handle<v8::Value> JOpenGL::glGetString(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//const GLubyte *  glGetString (GLenum name)
		//TODO: Enter code here
		return args.This();
		METHOD_END();
	}
	
}
