#ifndef __JOF_M_H__
#define __JOF_M_H__

#include "ofMain.h"
#include <bea.h>

namespace bea {
	
	template <> struct Convert<ofTTFContour>{

		static ofTTFContour FromJS(v8::Handle<v8::Value> v, int nArg){
			return *bea::ExposedClass<ofTTFContour>::FromJS(v, nArg);
		}

		static v8::Handle<v8::Value> ToJS(const ofTTFContour& val){
			return bea::ExposedClass<ofTTFContour>::ToJS(new ofTTFContour(val));
		}
	};

	/*
	template <> struct Convert<ofTexture>{

		static v8::Handle<v8::Value> ToJS(const ofTexture& ot){
			v8::Handle<v8::Value> ret; 
			return ret;
		}
		
	};
	*/

}

#endif //__JOF_M_H__