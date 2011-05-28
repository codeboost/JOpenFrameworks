#include <bea.h>
#include "jof_m.h"
#include "jof.h"
namespace bea {
	template<> struct Convert<ofPoint> {
		static bool Is(v8::Handle<v8::Value> v) {
			return !v.IsEmpty() && v->IsObject();
		}
		
		static ofPoint FromJS(v8::Handle<v8::Value> v, int nArg) {
			const char* msg = "Object with the following properties expected: x, y, z. This will be cast to 'ofPoint'";
			if (!Is(v)) BEATHROW();
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v->ToObject();
			ofPoint ret;
			ret.x = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("x")), nArg);
			ret.y = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("y")), nArg);
			ret.z = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("z")), nArg);
			return ret;
		}
		
		static v8::Handle<v8::Value> ToJS(ofPoint const& v) {
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v8::Object::New();
			obj->Set(v8::String::NewSymbol("x"), bea::Convert<float>::ToJS(v.x));
			obj->Set(v8::String::NewSymbol("y"), bea::Convert<float>::ToJS(v.y));
			obj->Set(v8::String::NewSymbol("z"), bea::Convert<float>::ToJS(v.z));
			return scope.Close(obj);
		}
		
	};
	
	template<> struct Convert<ofRectangle> {
		static bool Is(v8::Handle<v8::Value> v) {
			return !v.IsEmpty() && v->IsObject();
		}
		
		static ofRectangle FromJS(v8::Handle<v8::Value> v, int nArg) {
			const char* msg = "Object with the following properties expected: x, y, width, height. This will be cast to 'ofRectangle'";
			if (!Is(v)) BEATHROW();
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v->ToObject();
			ofRectangle ret;
			ret.x = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("x")), nArg);
			ret.y = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("y")), nArg);
			ret.width = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("width")), nArg);
			ret.height = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("height")), nArg);
			return ret;
		}
		
		static v8::Handle<v8::Value> ToJS(ofRectangle const& v) {
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v8::Object::New();
			obj->Set(v8::String::NewSymbol("x"), bea::Convert<float>::ToJS(v.x));
			obj->Set(v8::String::NewSymbol("y"), bea::Convert<float>::ToJS(v.y));
			obj->Set(v8::String::NewSymbol("width"), bea::Convert<float>::ToJS(v.width));
			obj->Set(v8::String::NewSymbol("height"), bea::Convert<float>::ToJS(v.height));
			return scope.Close(obj);
		}
		
	};
	
	template<> struct Convert<ofColor> {
		static bool Is(v8::Handle<v8::Value> v) {
			return !v.IsEmpty() && v->IsObject();
		}
		
		static ofColor FromJS(v8::Handle<v8::Value> v, int nArg) {
			const char* msg = "Object with the following properties expected: r, g, b. This will be cast to 'ofColor'";
			if (!Is(v)) BEATHROW();
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v->ToObject();
			ofColor ret;
			ret.r = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("r")), nArg);
			ret.g = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("g")), nArg);
			ret.b = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("b")), nArg);
			return ret;
		}
		
		static v8::Handle<v8::Value> ToJS(ofColor const& v) {
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v8::Object::New();
			obj->Set(v8::String::NewSymbol("r"), bea::Convert<float>::ToJS(v.r));
			obj->Set(v8::String::NewSymbol("g"), bea::Convert<float>::ToJS(v.g));
			obj->Set(v8::String::NewSymbol("b"), bea::Convert<float>::ToJS(v.b));
			return scope.Close(obj);
		}
		
	};
	
	template<> struct Convert<ofStyle> {
		static bool Is(v8::Handle<v8::Value> v) {
			return !v.IsEmpty() && v->IsObject();
		}
		
		static ofStyle FromJS(v8::Handle<v8::Value> v, int nArg) {
			const char* msg = "Object with the following properties expected: color, polyMode, rectMode, bFill, blending, smoothing, circleResolution, lineWidth. This will be cast to 'ofStyle'";
			if (!Is(v)) BEATHROW();
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v->ToObject();
			ofStyle ret;
			ret.color = bea::Convert<ofColor>::FromJS(obj->Get(v8::String::NewSymbol("color")), nArg);
			ret.polyMode = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("polyMode")), nArg);
			ret.rectMode = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("rectMode")), nArg);
			ret.bFill = bea::Convert<bool>::FromJS(obj->Get(v8::String::NewSymbol("bFill")), nArg);
			ret.blending = bea::Convert<bool>::FromJS(obj->Get(v8::String::NewSymbol("blending")), nArg);
			ret.smoothing = bea::Convert<bool>::FromJS(obj->Get(v8::String::NewSymbol("smoothing")), nArg);
			ret.circleResolution = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("circleResolution")), nArg);
			ret.lineWidth = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("lineWidth")), nArg);
			return ret;
		}
		
		static v8::Handle<v8::Value> ToJS(ofStyle const& v) {
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v8::Object::New();
			obj->Set(v8::String::NewSymbol("color"), bea::Convert<ofColor>::ToJS(v.color));
			obj->Set(v8::String::NewSymbol("polyMode"), bea::Convert<int>::ToJS(v.polyMode));
			obj->Set(v8::String::NewSymbol("rectMode"), bea::Convert<int>::ToJS(v.rectMode));
			obj->Set(v8::String::NewSymbol("bFill"), bea::Convert<bool>::ToJS(v.bFill));
			obj->Set(v8::String::NewSymbol("blending"), bea::Convert<bool>::ToJS(v.blending));
			obj->Set(v8::String::NewSymbol("smoothing"), bea::Convert<bool>::ToJS(v.smoothing));
			obj->Set(v8::String::NewSymbol("circleResolution"), bea::Convert<int>::ToJS(v.circleResolution));
			obj->Set(v8::String::NewSymbol("lineWidth"), bea::Convert<float>::ToJS(v.lineWidth));
			return scope.Close(obj);
		}
		
	};
	
	template<> struct Convert<ofTexCompression> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<int>::Is(v);
		}
		
		static ofTexCompression FromJS(v8::Handle<v8::Value> v, int nArg) {
			return (ofTexCompression)bea::Convert<int>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofTexCompression const& v) {
			return bea::Convert<int>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<unsigned int> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<int>::Is(v);
		}
		
		static unsigned int FromJS(v8::Handle<v8::Value> v, int nArg) {
			return (unsigned int)bea::Convert<int>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(unsigned int const& v) {
			return bea::Convert<int>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<unsigned long> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<unsigned int>::Is(v);
		}
		
		static unsigned long FromJS(v8::Handle<v8::Value> v, int nArg) {
			return (unsigned long)bea::Convert<unsigned int>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(unsigned long const& v) {
			return bea::Convert<unsigned int>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofPixels> {
		static bool Is(v8::Handle<v8::Value> v) {
			return !v.IsEmpty() && v->IsObject();
		}
		
		static ofPixels FromJS(v8::Handle<v8::Value> v, int nArg) {
			const char* msg = "Object with the following properties expected: pixels, width, height, bitsPerPixel, bytesPerPixel, glDataType, ofImageType, bAllocated. This will be cast to 'ofPixels'";
			if (!Is(v)) BEATHROW();
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v->ToObject();
			ofPixels ret;
			ret.pixels = bea::Convert<unsigned char*>::FromJS(obj->Get(v8::String::NewSymbol("pixels")), nArg);
			ret.width = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("width")), nArg);
			ret.height = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("height")), nArg);
			ret.bitsPerPixel = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("bitsPerPixel")), nArg);
			ret.bytesPerPixel = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("bytesPerPixel")), nArg);
			ret.glDataType = bea::Convert<GLint>::FromJS(obj->Get(v8::String::NewSymbol("glDataType")), nArg);
			ret.ofImageType = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("ofImageType")), nArg);
			ret.bAllocated = bea::Convert<bool>::FromJS(obj->Get(v8::String::NewSymbol("bAllocated")), nArg);
			return ret;
		}
		
		static v8::Handle<v8::Value> ToJS(ofPixels const& v) {
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v8::Object::New();
			obj->Set(v8::String::NewSymbol("pixels"), bea::Convert<unsigned char*>::ToJS(v.pixels));
			obj->Set(v8::String::NewSymbol("width"), bea::Convert<int>::ToJS(v.width));
			obj->Set(v8::String::NewSymbol("height"), bea::Convert<int>::ToJS(v.height));
			obj->Set(v8::String::NewSymbol("bitsPerPixel"), bea::Convert<int>::ToJS(v.bitsPerPixel));
			obj->Set(v8::String::NewSymbol("bytesPerPixel"), bea::Convert<int>::ToJS(v.bytesPerPixel));
			obj->Set(v8::String::NewSymbol("glDataType"), bea::Convert<GLint>::ToJS(v.glDataType));
			obj->Set(v8::String::NewSymbol("ofImageType"), bea::Convert<int>::ToJS(v.ofImageType));
			obj->Set(v8::String::NewSymbol("bAllocated"), bea::Convert<bool>::ToJS(v.bAllocated));
			return scope.Close(obj);
		}
		
	};
	
	template<> struct Convert<ofTextureData> {
		static bool Is(v8::Handle<v8::Value> v) {
			return !v.IsEmpty() && v->IsObject();
		}
		
		static ofTextureData FromJS(v8::Handle<v8::Value> v, int nArg) {
			const char* msg = "Object with the following properties expected: bAllocated, glType, glTypeInternal, textureTarget, pixelType, tex_t, tex_u, tex_w, tex_h, width, height, bFlipTexture, textureID, compressionType. This will be cast to 'ofTextureData'";
			if (!Is(v)) BEATHROW();
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v->ToObject();
			ofTextureData ret;
			ret.bAllocated = bea::Convert<bool>::FromJS(obj->Get(v8::String::NewSymbol("bAllocated")), nArg);
			ret.glType = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("glType")), nArg);
			ret.glTypeInternal = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("glTypeInternal")), nArg);
			ret.textureTarget = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("textureTarget")), nArg);
			ret.pixelType = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("pixelType")), nArg);
			ret.tex_t = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("tex_t")), nArg);
			ret.tex_u = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("tex_u")), nArg);
			ret.tex_w = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("tex_w")), nArg);
			ret.tex_h = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("tex_h")), nArg);
			ret.width = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("width")), nArg);
			ret.height = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("height")), nArg);
			ret.bFlipTexture = bea::Convert<bool>::FromJS(obj->Get(v8::String::NewSymbol("bFlipTexture")), nArg);
			ret.textureID = bea::Convert<unsigned int>::FromJS(obj->Get(v8::String::NewSymbol("textureID")), nArg);
			ret.compressionType = bea::Convert<ofTexCompression>::FromJS(obj->Get(v8::String::NewSymbol("compressionType")), nArg);
			return ret;
		}
		
		static v8::Handle<v8::Value> ToJS(ofTextureData const& v) {
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v8::Object::New();
			obj->Set(v8::String::NewSymbol("bAllocated"), bea::Convert<bool>::ToJS(v.bAllocated));
			obj->Set(v8::String::NewSymbol("glType"), bea::Convert<int>::ToJS(v.glType));
			obj->Set(v8::String::NewSymbol("glTypeInternal"), bea::Convert<int>::ToJS(v.glTypeInternal));
			obj->Set(v8::String::NewSymbol("textureTarget"), bea::Convert<int>::ToJS(v.textureTarget));
			obj->Set(v8::String::NewSymbol("pixelType"), bea::Convert<int>::ToJS(v.pixelType));
			obj->Set(v8::String::NewSymbol("tex_t"), bea::Convert<float>::ToJS(v.tex_t));
			obj->Set(v8::String::NewSymbol("tex_u"), bea::Convert<float>::ToJS(v.tex_u));
			obj->Set(v8::String::NewSymbol("tex_w"), bea::Convert<float>::ToJS(v.tex_w));
			obj->Set(v8::String::NewSymbol("tex_h"), bea::Convert<float>::ToJS(v.tex_h));
			obj->Set(v8::String::NewSymbol("width"), bea::Convert<float>::ToJS(v.width));
			obj->Set(v8::String::NewSymbol("height"), bea::Convert<float>::ToJS(v.height));
			obj->Set(v8::String::NewSymbol("bFlipTexture"), bea::Convert<bool>::ToJS(v.bFlipTexture));
			obj->Set(v8::String::NewSymbol("textureID"), bea::Convert<unsigned int>::ToJS(v.textureID));
			obj->Set(v8::String::NewSymbol("compressionType"), bea::Convert<ofTexCompression>::ToJS(v.compressionType));
			return scope.Close(obj);
		}
		
	};
	
	template<> struct Convert<charProps> {
		static bool Is(v8::Handle<v8::Value> v) {
			return !v.IsEmpty() && v->IsObject();
		}
		
		static charProps FromJS(v8::Handle<v8::Value> v, int nArg) {
			const char* msg = "Object with the following properties expected: value, height, width, setWidth, topExtent, leftExtent, tTex, vTex, xOff, yOff. This will be cast to 'charProps'";
			if (!Is(v)) BEATHROW();
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v->ToObject();
			charProps ret;
			ret.value = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("value")), nArg);
			ret.height = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("height")), nArg);
			ret.width = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("width")), nArg);
			ret.setWidth = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("setWidth")), nArg);
			ret.topExtent = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("topExtent")), nArg);
			ret.leftExtent = bea::Convert<int>::FromJS(obj->Get(v8::String::NewSymbol("leftExtent")), nArg);
			ret.tTex = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("tTex")), nArg);
			ret.vTex = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("vTex")), nArg);
			ret.xOff = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("xOff")), nArg);
			ret.yOff = bea::Convert<float>::FromJS(obj->Get(v8::String::NewSymbol("yOff")), nArg);
			return ret;
		}
		
		static v8::Handle<v8::Value> ToJS(charProps const& v) {
			v8::HandleScope scope;
			v8::Local<v8::Object> obj = v8::Object::New();
			obj->Set(v8::String::NewSymbol("value"), bea::Convert<int>::ToJS(v.value));
			obj->Set(v8::String::NewSymbol("height"), bea::Convert<int>::ToJS(v.height));
			obj->Set(v8::String::NewSymbol("width"), bea::Convert<int>::ToJS(v.width));
			obj->Set(v8::String::NewSymbol("setWidth"), bea::Convert<int>::ToJS(v.setWidth));
			obj->Set(v8::String::NewSymbol("topExtent"), bea::Convert<int>::ToJS(v.topExtent));
			obj->Set(v8::String::NewSymbol("leftExtent"), bea::Convert<int>::ToJS(v.leftExtent));
			obj->Set(v8::String::NewSymbol("tTex"), bea::Convert<float>::ToJS(v.tTex));
			obj->Set(v8::String::NewSymbol("vTex"), bea::Convert<float>::ToJS(v.vTex));
			obj->Set(v8::String::NewSymbol("xOff"), bea::Convert<float>::ToJS(v.xOff));
			obj->Set(v8::String::NewSymbol("yOff"), bea::Convert<float>::ToJS(v.yOff));
			return scope.Close(obj);
		}
		
	};
	
	template<> struct Convert<bea::Indexable*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<bea::Indexable>::Is(v);
		}
		
		static bea::Indexable* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<bea::Indexable>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(bea::Indexable* const& v) {
			return bea::ExposedClass<bea::Indexable>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<bea::BeaBuffer*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<bea::BeaBuffer>::Is(v);
		}
		
		static bea::BeaBuffer* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<bea::BeaBuffer>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(bea::BeaBuffer* const& v) {
			return bea::ExposedClass<bea::BeaBuffer>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<jof::_D_ofBaseDraws*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofBaseDraws>::Is(v);
		}
		
		static jof::_D_ofBaseDraws* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofBaseDraws>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofBaseDraws* const& v) {
			return bea::ExposedClass<jof::_D_ofBaseDraws>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofBaseDraws*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofBaseDraws*>::Is(v);
		}
		
		static ofBaseDraws* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofBaseDraws*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofBaseDraws* const& v) {
			return bea::Convert<jof::_D_ofBaseDraws*>::ToJS(static_cast<jof::_D_ofBaseDraws*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofBaseUpdates*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofBaseUpdates>::Is(v);
		}
		
		static jof::_D_ofBaseUpdates* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofBaseUpdates>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofBaseUpdates* const& v) {
			return bea::ExposedClass<jof::_D_ofBaseUpdates>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofBaseUpdates*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofBaseUpdates*>::Is(v);
		}
		
		static ofBaseUpdates* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofBaseUpdates*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofBaseUpdates* const& v) {
			return bea::Convert<jof::_D_ofBaseUpdates*>::ToJS(static_cast<jof::_D_ofBaseUpdates*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofBaseHasTexture*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofBaseHasTexture>::Is(v);
		}
		
		static jof::_D_ofBaseHasTexture* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofBaseHasTexture>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofBaseHasTexture* const& v) {
			return bea::ExposedClass<jof::_D_ofBaseHasTexture>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofBaseHasTexture*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofBaseHasTexture*>::Is(v);
		}
		
		static ofBaseHasTexture* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofBaseHasTexture*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofBaseHasTexture* const& v) {
			return bea::Convert<jof::_D_ofBaseHasTexture*>::ToJS(static_cast<jof::_D_ofBaseHasTexture*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofBaseHasPixels*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofBaseHasPixels>::Is(v);
		}
		
		static jof::_D_ofBaseHasPixels* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofBaseHasPixels>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofBaseHasPixels* const& v) {
			return bea::ExposedClass<jof::_D_ofBaseHasPixels>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofBaseHasPixels*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofBaseHasPixels*>::Is(v);
		}
		
		static ofBaseHasPixels* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofBaseHasPixels*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofBaseHasPixels* const& v) {
			return bea::Convert<jof::_D_ofBaseHasPixels*>::ToJS(static_cast<jof::_D_ofBaseHasPixels*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofBaseImage*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofBaseImage>::Is(v);
		}
		
		static jof::_D_ofBaseImage* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofBaseImage>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofBaseImage* const& v) {
			return bea::ExposedClass<jof::_D_ofBaseImage>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofBaseImage*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofBaseImage*>::Is(v);
		}
		
		static ofBaseImage* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofBaseImage*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofBaseImage* const& v) {
			return bea::Convert<jof::_D_ofBaseImage*>::ToJS(static_cast<jof::_D_ofBaseImage*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofBaseVideo*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofBaseVideo>::Is(v);
		}
		
		static jof::_D_ofBaseVideo* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofBaseVideo>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofBaseVideo* const& v) {
			return bea::ExposedClass<jof::_D_ofBaseVideo>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofBaseVideo*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofBaseVideo*>::Is(v);
		}
		
		static ofBaseVideo* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofBaseVideo*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofBaseVideo* const& v) {
			return bea::Convert<jof::_D_ofBaseVideo*>::ToJS(static_cast<jof::_D_ofBaseVideo*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofImage*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofImage>::Is(v);
		}
		
		static jof::_D_ofImage* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofImage>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofImage* const& v) {
			return bea::ExposedClass<jof::_D_ofImage>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofImage*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofImage*>::Is(v);
		}
		
		static ofImage* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofImage*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofImage* const& v) {
			return bea::Convert<jof::_D_ofImage*>::ToJS(static_cast<jof::_D_ofImage*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofTexture*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofTexture>::Is(v);
		}
		
		static jof::_D_ofTexture* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofTexture>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofTexture* const& v) {
			return bea::ExposedClass<jof::_D_ofTexture>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofTexture*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofTexture*>::Is(v);
		}
		
		static ofTexture* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofTexture*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofTexture* const& v) {
			return bea::Convert<jof::_D_ofTexture*>::ToJS(static_cast<jof::_D_ofTexture*>(v));
		}
		
	};
	
	template<> struct Convert<ofTTFContour*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<ofTTFContour>::Is(v);
		}
		
		static ofTTFContour* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<ofTTFContour>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofTTFContour* const& v) {
			return bea::ExposedClass<ofTTFContour>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofTTFCharacter*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<ofTTFCharacter>::Is(v);
		}
		
		static ofTTFCharacter* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<ofTTFCharacter>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofTTFCharacter* const& v) {
			return bea::ExposedClass<ofTTFCharacter>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofTrueTypeFont*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<ofTrueTypeFont>::Is(v);
		}
		
		static ofTrueTypeFont* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<ofTrueTypeFont>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofTrueTypeFont* const& v) {
			return bea::ExposedClass<ofTrueTypeFont>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<jof::_D_ofBaseApp*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofBaseApp>::Is(v);
		}
		
		static jof::_D_ofBaseApp* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofBaseApp>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofBaseApp* const& v) {
			return bea::ExposedClass<jof::_D_ofBaseApp>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofBaseApp*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofBaseApp*>::Is(v);
		}
		
		static ofBaseApp* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofBaseApp*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofBaseApp* const& v) {
			return bea::Convert<jof::_D_ofBaseApp*>::ToJS(static_cast<jof::_D_ofBaseApp*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofAppBaseWindow*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofAppBaseWindow>::Is(v);
		}
		
		static jof::_D_ofAppBaseWindow* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofAppBaseWindow>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofAppBaseWindow* const& v) {
			return bea::ExposedClass<jof::_D_ofAppBaseWindow>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofAppBaseWindow*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofAppBaseWindow*>::Is(v);
		}
		
		static ofAppBaseWindow* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofAppBaseWindow* const& v) {
			return bea::Convert<jof::_D_ofAppBaseWindow*>::ToJS(static_cast<jof::_D_ofAppBaseWindow*>(v));
		}
		
	};
	
	template<> struct Convert<jof::_D_ofAppGlutWindow*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofAppGlutWindow>::Is(v);
		}
		
		static jof::_D_ofAppGlutWindow* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofAppGlutWindow>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofAppGlutWindow* const& v) {
			return bea::ExposedClass<jof::_D_ofAppGlutWindow>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofAppGlutWindow*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofAppGlutWindow*>::Is(v);
		}
		
		static ofAppGlutWindow* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofAppGlutWindow* const& v) {
			return bea::Convert<jof::_D_ofAppGlutWindow*>::ToJS(static_cast<jof::_D_ofAppGlutWindow*>(v));
		}
		
	};
	
	template<> struct Convert<ofSoundPlayer*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<ofSoundPlayer>::Is(v);
		}
		
		static ofSoundPlayer* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<ofSoundPlayer>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofSoundPlayer* const& v) {
			return bea::ExposedClass<ofSoundPlayer>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<jof::_D_ofVideoPlayer*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::ExposedClass<jof::_D_ofVideoPlayer>::Is(v);
		}
		
		static jof::_D_ofVideoPlayer* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::ExposedClass<jof::_D_ofVideoPlayer>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(jof::_D_ofVideoPlayer* const& v) {
			return bea::ExposedClass<jof::_D_ofVideoPlayer>::ToJS(v);
		}
		
	};
	
	template<> struct Convert<ofVideoPlayer*> {
		static bool Is(v8::Handle<v8::Value> v) {
			return bea::Convert<jof::_D_ofVideoPlayer*>::Is(v);
		}
		
		static ofVideoPlayer* FromJS(v8::Handle<v8::Value> v, int nArg) {
			return bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(v, nArg);
		}
		
		static v8::Handle<v8::Value> ToJS(ofVideoPlayer* const& v) {
			return bea::Convert<jof::_D_ofVideoPlayer*>::ToJS(static_cast<jof::_D_ofVideoPlayer*>(v));
		}
		
	};
	
}

DECLARE_STATIC(jof::JofMath);
namespace jof {
	v8::Handle<v8::Value> JofMath::ofNextPow2(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//int   ofNextPow2 ( int a )
		int a = bea::Convert<int>::FromJS(args[0], 0);
		int fnRetVal = ::ofNextPow2(a);
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofSeedRandom(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void   ofSeedRandom(int val)
		if (bea::Convert<int>::Is(args[0])) {
			int val = bea::Convert<int>::FromJS(args[0], 0);
			::ofSeedRandom(val);
			return args.This();
		}
		//void   ofSeedRandom()
		if (args.Length() == 0) {
			::ofSeedRandom();
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofRandom(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//float   ofRandom(float val0, float val1)
		float val0 = bea::Convert<float>::FromJS(args[0], 0);
		float val1 = bea::Convert<float>::FromJS(args[1], 1);
		float fnRetVal = ::ofRandom(val0, val1);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofRandomf(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float   ofRandomf()
		float fnRetVal = ::ofRandomf();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofRandomuf(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float   ofRandomuf()
		float fnRetVal = ::ofRandomuf();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofNormalize(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//float  ofNormalize(float value, float min, float max)
		float value = bea::Convert<float>::FromJS(args[0], 0);
		float min = bea::Convert<float>::FromJS(args[1], 1);
		float max = bea::Convert<float>::FromJS(args[2], 2);
		float fnRetVal = ::ofNormalize(value, min, max);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofMap(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//float  ofMap(float value, float inputMin, float inputMax, float outputMin, float outputMax, bool clamp = false)
		float value = bea::Convert<float>::FromJS(args[0], 0);
		float inputMin = bea::Convert<float>::FromJS(args[1], 1);
		float inputMax = bea::Convert<float>::FromJS(args[2], 2);
		float outputMin = bea::Convert<float>::FromJS(args[3], 3);
		float outputMax = bea::Convert<float>::FromJS(args[4], 4);
		bool clamp = bea::Optional<bool>::FromJS(args, 5,  false);
		float fnRetVal = ::ofMap(value, inputMin, inputMax, outputMin, outputMax, clamp);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofClamp(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//float  ofClamp(float value, float min, float max)
		float value = bea::Convert<float>::FromJS(args[0], 0);
		float min = bea::Convert<float>::FromJS(args[1], 1);
		float max = bea::Convert<float>::FromJS(args[2], 2);
		float fnRetVal = ::ofClamp(value, min, max);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofLerp(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//float  ofLerp(float start, float stop, float amt)
		float start = bea::Convert<float>::FromJS(args[0], 0);
		float stop = bea::Convert<float>::FromJS(args[1], 1);
		float amt = bea::Convert<float>::FromJS(args[2], 2);
		float fnRetVal = ::ofLerp(start, stop, amt);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofDist(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//float  ofDist(float x1, float y1, float x2, float y2)
		float x1 = bea::Convert<float>::FromJS(args[0], 0);
		float y1 = bea::Convert<float>::FromJS(args[1], 1);
		float x2 = bea::Convert<float>::FromJS(args[2], 2);
		float y2 = bea::Convert<float>::FromJS(args[3], 3);
		float fnRetVal = ::ofDist(x1, y1, x2, y2);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofDistSquared(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//float  ofDistSquared(float x1, float y1, float x2, float y2)
		float x1 = bea::Convert<float>::FromJS(args[0], 0);
		float y1 = bea::Convert<float>::FromJS(args[1], 1);
		float x2 = bea::Convert<float>::FromJS(args[2], 2);
		float y2 = bea::Convert<float>::FromJS(args[3], 3);
		float fnRetVal = ::ofDistSquared(x1, y1, x2, y2);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofSign(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//int   ofSign(float n)
		float n = bea::Convert<float>::FromJS(args[0], 0);
		int fnRetVal = ::ofSign(n);
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofInRange(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//bool  ofInRange(float t, float min, float max)
		float t = bea::Convert<float>::FromJS(args[0], 0);
		float min = bea::Convert<float>::FromJS(args[1], 1);
		float max = bea::Convert<float>::FromJS(args[2], 2);
		bool fnRetVal = ::ofInRange(t, min, max);
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofRadToDeg(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float  ofRadToDeg(float radians)
		float radians = bea::Convert<float>::FromJS(args[0], 0);
		float fnRetVal = ::ofRadToDeg(radians);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofDegToRad(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float  ofDegToRad(float degrees)
		float degrees = bea::Convert<float>::FromJS(args[0], 0);
		float fnRetVal = ::ofDegToRad(degrees);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofLerpDegrees(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//float   ofLerpDegrees(float currentAngle, float targetAngle, float pct)
		float currentAngle = bea::Convert<float>::FromJS(args[0], 0);
		float targetAngle = bea::Convert<float>::FromJS(args[1], 1);
		float pct = bea::Convert<float>::FromJS(args[2], 2);
		float fnRetVal = ::ofLerpDegrees(currentAngle, targetAngle, pct);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofLerpRadians(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//float   ofLerpRadians(float currentAngle, float targetAngle, float pct)
		float currentAngle = bea::Convert<float>::FromJS(args[0], 0);
		float targetAngle = bea::Convert<float>::FromJS(args[1], 1);
		float pct = bea::Convert<float>::FromJS(args[2], 2);
		float fnRetVal = ::ofLerpRadians(currentAngle, targetAngle, pct);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofAngleDifferenceDegrees(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//float   ofAngleDifferenceDegrees(float currentAngle, float targetAngle)
		float currentAngle = bea::Convert<float>::FromJS(args[0], 0);
		float targetAngle = bea::Convert<float>::FromJS(args[1], 1);
		float fnRetVal = ::ofAngleDifferenceDegrees(currentAngle, targetAngle);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofAngleDifferenceRadians(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//float   ofAngleDifferenceRadians(float currentAngle, float targetAngle)
		float currentAngle = bea::Convert<float>::FromJS(args[0], 0);
		float targetAngle = bea::Convert<float>::FromJS(args[1], 1);
		float fnRetVal = ::ofAngleDifferenceRadians(currentAngle, targetAngle);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofRandomWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float  ofRandomWidth()
		float fnRetVal = ::ofRandomWidth();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofRandomHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float  ofRandomHeight()
		//returns noise in 0.0 to 1.0 range
		float fnRetVal = ::ofRandomHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofNoise(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float  ofNoise(float x, float y, float z, float w)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float z = bea::Convert<float>::FromJS(args[2], 2);
			float w = bea::Convert<float>::FromJS(args[3], 3);
			//returns noise in -1.0 to 1.0 range
			float fnRetVal = ::ofNoise(x, y, z, w);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		//float  ofNoise(float x, float y, float z)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float z = bea::Convert<float>::FromJS(args[2], 2);
			float fnRetVal = ::ofNoise(x, y, z);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		//float  ofNoise(float x, float y)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float fnRetVal = ::ofNoise(x, y);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		//float  ofNoise(float x)
		if (bea::Convert<float>::Is(args[0])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float fnRetVal = ::ofNoise(x);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofSignedNoise(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float  ofSignedNoise(float x, float y, float z, float w)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float z = bea::Convert<float>::FromJS(args[2], 2);
			float w = bea::Convert<float>::FromJS(args[3], 3);
			float fnRetVal = ::ofSignedNoise(x, y, z, w);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		//float  ofSignedNoise(float x, float y, float z)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float z = bea::Convert<float>::FromJS(args[2], 2);
			float fnRetVal = ::ofSignedNoise(x, y, z);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		//float  ofSignedNoise(float x, float y)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float fnRetVal = ::ofSignedNoise(x, y);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		//float  ofSignedNoise(float x)
		if (bea::Convert<float>::Is(args[0])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float fnRetVal = ::ofSignedNoise(x);
			return bea::Convert<float>::ToJS(fnRetVal);
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofInsidePoly(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//bool   ofInsidePoly(float x, float y, const vector<ofPoint> & poly)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<vector<ofPoint> >::Is(args[2])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			vector<ofPoint> poly = bea::Convert<vector<ofPoint> >::FromJS(args[2], 2);
			bool fnRetVal = ::ofInsidePoly(x, y, poly);
			return bea::Convert<bool>::ToJS(fnRetVal);
		}
		//bool   ofInsidePoly(const ofPoint & p, const vector<ofPoint> & poly)
		if (bea::Convert<ofPoint>::Is(args[0]) && bea::Convert<vector<ofPoint> >::Is(args[1])) {
			ofPoint p = bea::Convert<ofPoint>::FromJS(args[0], 0);
			vector<ofPoint> poly = bea::Convert<vector<ofPoint> >::FromJS(args[1], 1);
			bool fnRetVal = ::ofInsidePoly(p, poly);
			return bea::Convert<bool>::ToJS(fnRetVal);
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofLineSegmentIntersection(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//bool   ofLineSegmentIntersection(ofPoint line1Start, ofPoint line1End, ofPoint line2Start, ofPoint line2End, ofPoint & intersection)
		ofPoint line1Start = bea::Convert<ofPoint>::FromJS(args[0], 0);
		ofPoint line1End = bea::Convert<ofPoint>::FromJS(args[1], 1);
		ofPoint line2Start = bea::Convert<ofPoint>::FromJS(args[2], 2);
		ofPoint line2End = bea::Convert<ofPoint>::FromJS(args[3], 3);
		ofPoint intersection = bea::Convert<ofPoint>::FromJS(args[4], 4);
		bool fnRetVal = ::ofLineSegmentIntersection(line1Start, line1End, line2Start, line2End, intersection);
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofBezierPoint(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//ofPoint  ofBezierPoint( ofPoint a, ofPoint b, ofPoint c, ofPoint d, float t)
		ofPoint a = bea::Convert<ofPoint>::FromJS(args[0], 0);
		ofPoint b = bea::Convert<ofPoint>::FromJS(args[1], 1);
		ofPoint c = bea::Convert<ofPoint>::FromJS(args[2], 2);
		ofPoint d = bea::Convert<ofPoint>::FromJS(args[3], 3);
		float t = bea::Convert<float>::FromJS(args[4], 4);
		ofPoint fnRetVal = ::ofBezierPoint(a, b, c, d, t);
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofCurvePoint(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//ofPoint  ofCurvePoint( ofPoint a, ofPoint b, ofPoint c, ofPoint d, float t)
		ofPoint a = bea::Convert<ofPoint>::FromJS(args[0], 0);
		ofPoint b = bea::Convert<ofPoint>::FromJS(args[1], 1);
		ofPoint c = bea::Convert<ofPoint>::FromJS(args[2], 2);
		ofPoint d = bea::Convert<ofPoint>::FromJS(args[3], 3);
		float t = bea::Convert<float>::FromJS(args[4], 4);
		ofPoint fnRetVal = ::ofCurvePoint(a, b, c, d, t);
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofBezierTangent(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//ofPoint  ofBezierTangent( ofPoint a, ofPoint b, ofPoint c, ofPoint d, float t)
		ofPoint a = bea::Convert<ofPoint>::FromJS(args[0], 0);
		ofPoint b = bea::Convert<ofPoint>::FromJS(args[1], 1);
		ofPoint c = bea::Convert<ofPoint>::FromJS(args[2], 2);
		ofPoint d = bea::Convert<ofPoint>::FromJS(args[3], 3);
		float t = bea::Convert<float>::FromJS(args[4], 4);
		ofPoint fnRetVal = ::ofBezierTangent(a, b, c, d, t);
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofMath::ofCurveTangent(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//ofPoint  ofCurveTangent( ofPoint a, ofPoint b, ofPoint c, ofPoint d, float t)
		ofPoint a = bea::Convert<ofPoint>::FromJS(args[0], 0);
		ofPoint b = bea::Convert<ofPoint>::FromJS(args[1], 1);
		ofPoint c = bea::Convert<ofPoint>::FromJS(args[2], 2);
		ofPoint d = bea::Convert<ofPoint>::FromJS(args[3], 3);
		float t = bea::Convert<float>::FromJS(args[4], 4);
		ofPoint fnRetVal = ::ofCurveTangent(a, b, c, d, t);
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	void JofMath::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedStatic<JofMath>* obj = EXPOSE_STATIC(JofMath, "ofMath");
		//Exposed Methods
		obj->exposeMethod("ofNextPow2", ofNextPow2);
		obj->exposeMethod("ofSeedRandom", ofSeedRandom);
		obj->exposeMethod("ofRandom", ofRandom);
		obj->exposeMethod("ofRandomf", ofRandomf);
		obj->exposeMethod("ofRandomuf", ofRandomuf);
		obj->exposeMethod("ofNormalize", ofNormalize);
		obj->exposeMethod("ofMap", ofMap);
		obj->exposeMethod("ofClamp", ofClamp);
		obj->exposeMethod("ofLerp", ofLerp);
		obj->exposeMethod("ofDist", ofDist);
		obj->exposeMethod("ofDistSquared", ofDistSquared);
		obj->exposeMethod("ofSign", ofSign);
		obj->exposeMethod("ofInRange", ofInRange);
		obj->exposeMethod("ofRadToDeg", ofRadToDeg);
		obj->exposeMethod("ofDegToRad", ofDegToRad);
		obj->exposeMethod("ofLerpDegrees", ofLerpDegrees);
		obj->exposeMethod("ofLerpRadians", ofLerpRadians);
		obj->exposeMethod("ofAngleDifferenceDegrees", ofAngleDifferenceDegrees);
		obj->exposeMethod("ofAngleDifferenceRadians", ofAngleDifferenceRadians);
		obj->exposeMethod("ofRandomWidth", ofRandomWidth);
		obj->exposeMethod("ofRandomHeight", ofRandomHeight);
		obj->exposeMethod("ofNoise", ofNoise);
		obj->exposeMethod("ofSignedNoise", ofSignedNoise);
		obj->exposeMethod("ofInsidePoly", ofInsidePoly);
		obj->exposeMethod("ofLineSegmentIntersection", ofLineSegmentIntersection);
		obj->exposeMethod("ofBezierPoint", ofBezierPoint);
		obj->exposeMethod("ofCurvePoint", ofCurvePoint);
		obj->exposeMethod("ofBezierTangent", ofBezierTangent);
		obj->exposeMethod("ofCurveTangent", ofCurveTangent);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_STATIC(jof::JofUtils);
namespace jof {
	v8::Handle<v8::Value> JofUtils::ofNextPow2(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//int  ofNextPow2(int input)
		int input = bea::Convert<int>::FromJS(args[0], 0);
		int fnRetVal = ::ofNextPow2(input);
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofResetElapsedTimeCounter(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofResetElapsedTimeCounter()
		::ofResetElapsedTimeCounter();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetElapsedTimef(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float  ofGetElapsedTimef()
		float fnRetVal = ::ofGetElapsedTimef();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetElapsedTimeMillis(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int  ofGetElapsedTimeMillis()
		int fnRetVal = ::ofGetElapsedTimeMillis();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetFrameNum(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int  ofGetFrameNum()
		int fnRetVal = ::ofGetFrameNum();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetSeconds(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int  ofGetSeconds()
		int fnRetVal = ::ofGetSeconds();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetMinutes(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int  ofGetMinutes()
		int fnRetVal = ::ofGetMinutes();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetHours(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int  ofGetHours()
		int fnRetVal = ::ofGetHours();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetSystemTime(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//unsigned long ofGetSystemTime( )
		unsigned long fnRetVal = ::ofGetSystemTime();
		return bea::Convert<unsigned long>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetYear(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int     ofGetYear()
		int fnRetVal = ::ofGetYear();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetMonth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int     ofGetMonth()
		int fnRetVal = ::ofGetMonth();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetDay(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int     ofGetDay()
		int fnRetVal = ::ofGetDay();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetWeekday(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int     ofGetWeekday()
		int fnRetVal = ::ofGetWeekday();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofLaunchBrowser(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  ofLaunchBrowser(string url)
		string url = bea::Convert<string>::FromJS(args[0], 0);
		::ofLaunchBrowser(url);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofEnableDataPath(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofEnableDataPath()
		::ofEnableDataPath();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofDisableDataPath(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofDisableDataPath()
		::ofDisableDataPath();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofToDataPath(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//string  ofToDataPath(string path, bool absolute=false)
		string path = bea::Convert<string>::FromJS(args[0], 0);
		bool absolute = bea::Optional<bool>::FromJS(args, 1, false);
		string fnRetVal = ::ofToDataPath(path, absolute);
		return bea::Convert<string>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofSetDataPathRoot(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetDataPathRoot( string root )
		string root = bea::Convert<string>::FromJS(args[0], 0);
		::ofSetDataPathRoot(root);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofToString(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//string  ofToString(double value, int precision = 7)
		if (bea::Convert<double>::Is(args[0]) && bea::Optional<int>::Is(args, 1)) {
			double value = bea::Convert<double>::FromJS(args[0], 0);
			int precision = bea::Optional<int>::FromJS(args, 1,  7);
			string fnRetVal = ::ofToString(value, precision);
			return bea::Convert<string>::ToJS(fnRetVal);
		}
		//string  ofToString(int  value)
		if (bea::Convert<int>::Is(args[0])) {
			int value = bea::Convert<int>::FromJS(args[0], 0);
			string fnRetVal = ::ofToString(value);
			return bea::Convert<string>::ToJS(fnRetVal);
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofToInt(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//int ofToInt(const string& intString)
		string intString = bea::Convert<string>::FromJS(args[0], 0);
		int fnRetVal = ::ofToInt(intString);
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofToFloat(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float ofToFloat(const string& floatString)
		string floatString = bea::Convert<string>::FromJS(args[0], 0);
		float fnRetVal = ::ofToFloat(floatString);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofGetVersionInfo(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//string  ofGetVersionInfo()
		string fnRetVal = ::ofGetVersionInfo();
		return bea::Convert<string>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofSaveScreen(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSaveScreen(string filename)
		string filename = bea::Convert<string>::FromJS(args[0], 0);
		::ofSaveScreen(filename);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofSaveFrame(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSaveFrame()
		::ofSaveFrame();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofSplitString(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//vector<string> ofSplitString(const string & text, const string & delimiter)
		string text = bea::Convert<string>::FromJS(args[0], 0);
		string delimiter = bea::Convert<string>::FromJS(args[1], 1);
		vector<string> fnRetVal = ::ofSplitString(text, delimiter);
		return bea::Convert<vector<string> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofSetLogLevel(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetLogLevel(int logLevel)
		int logLevel = bea::Convert<int>::FromJS(args[0], 0);
		::ofSetLogLevel(logLevel);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofLog(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void ofLog(int logLevel, string message)
		int logLevel = bea::Convert<int>::FromJS(args[0], 0);
		string message = bea::Convert<string>::FromJS(args[1], 1);
		::ofLog(logLevel, message);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofSetConsoleColor(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetConsoleColor(int color)
		int color = bea::Convert<int>::FromJS(args[0], 0);
		::ofSetConsoleColor(color);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofUtils::ofRestoreConsoleColor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofRestoreConsoleColor()
		::ofRestoreConsoleColor();
		return args.This();
		METHOD_END();
	}
	
	void JofUtils::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedStatic<JofUtils>* obj = EXPOSE_STATIC(JofUtils, "ofUtils");
		//Exposed Methods
		obj->exposeMethod("ofNextPow2", ofNextPow2);
		obj->exposeMethod("ofResetElapsedTimeCounter", ofResetElapsedTimeCounter);
		obj->exposeMethod("ofGetElapsedTimef", ofGetElapsedTimef);
		obj->exposeMethod("ofGetElapsedTimeMillis", ofGetElapsedTimeMillis);
		obj->exposeMethod("ofGetFrameNum", ofGetFrameNum);
		obj->exposeMethod("ofGetSeconds", ofGetSeconds);
		obj->exposeMethod("ofGetMinutes", ofGetMinutes);
		obj->exposeMethod("ofGetHours", ofGetHours);
		obj->exposeMethod("ofGetSystemTime", ofGetSystemTime);
		obj->exposeMethod("ofGetYear", ofGetYear);
		obj->exposeMethod("ofGetMonth", ofGetMonth);
		obj->exposeMethod("ofGetDay", ofGetDay);
		obj->exposeMethod("ofGetWeekday", ofGetWeekday);
		obj->exposeMethod("ofLaunchBrowser", ofLaunchBrowser);
		obj->exposeMethod("ofEnableDataPath", ofEnableDataPath);
		obj->exposeMethod("ofDisableDataPath", ofDisableDataPath);
		obj->exposeMethod("ofToDataPath", ofToDataPath);
		obj->exposeMethod("ofSetDataPathRoot", ofSetDataPathRoot);
		obj->exposeMethod("ofToString", ofToString);
		obj->exposeMethod("ofToInt", ofToInt);
		obj->exposeMethod("ofToFloat", ofToFloat);
		obj->exposeMethod("ofGetVersionInfo", ofGetVersionInfo);
		obj->exposeMethod("ofSaveScreen", ofSaveScreen);
		obj->exposeMethod("ofSaveFrame", ofSaveFrame);
		obj->exposeMethod("ofSplitString", ofSplitString);
		obj->exposeMethod("ofSetLogLevel", ofSetLogLevel);
		obj->exposeMethod("ofLog", ofLog);
		obj->exposeMethod("ofSetConsoleColor", ofSetConsoleColor);
		obj->exposeMethod("ofRestoreConsoleColor", ofRestoreConsoleColor);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(bea::Indexable);
namespace jof {
	void JIndexable::__destructor(v8::Handle<v8::Value> value) {
		DESTRUCTOR_BEGIN();
		bea::Indexable* _this = bea::Convert<bea::Indexable*>::FromJS(value, 0);
		delete _this;
		DESTRUCTOR_END();
	}
	
	v8::Handle<v8::Value> JIndexable::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//Indexable()
		bea::Indexable* fnRetVal = new bea::Indexable();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JIndexable::setPtr(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void setPtr(void* ptr, int size, int type)
		bea::external<void> ptr = bea::Convert<bea::external<void> >::FromJS(args[0], 0);
		int size = bea::Convert<int>::FromJS(args[1], 1);
		int type = bea::Convert<int>::FromJS(args[2], 2);
		bea::Indexable* _this = bea::Convert<bea::Indexable*>::FromJS(args.This(), 0);
		args.This()->SetIndexedPropertiesToExternalArrayData(ptr, (v8::ExternalArrayType)type, size);
			
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JIndexable::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		bea::Indexable* _this = bea::Convert<bea::Indexable*>::FromJS(args.This(), 0);
		return args.This();
		METHOD_END();
	}
	
	void JIndexable::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<bea::Indexable>* obj = EXPOSE_CLASS(bea::Indexable, "Indexable");
		//Destructor
		obj->setDestructor(__destructor);
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("setPtr", setPtr);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(bea::BeaBuffer);
namespace jof {
	v8::Handle<v8::Value> JBeaBuffer::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//BeaBuffer(int size, int type)
		int size = bea::Convert<int>::FromJS(args[0], 0);
		int type = bea::Convert<int>::FromJS(args[1], 1);
		bea::BeaBuffer* fnRetVal = new bea::BeaBuffer(size, type);
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JBeaBuffer::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		bea::BeaBuffer* _this = bea::Convert<bea::BeaBuffer*>::FromJS(args.This(), 0);
		args.This()->SetIndexedPropertiesToExternalArrayData(_this->ptr(), (v8::ExternalArrayType)_this->type(), _this->size());
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JBeaBuffer::ptr(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void* ptr()
		bea::BeaBuffer* _this = bea::Convert<bea::BeaBuffer*>::FromJS(args.This(), 0);
		bea::external<void> fnRetVal = _this->ptr();
		return bea::Convert<bea::external<void> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JBeaBuffer::size(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int size()
		bea::BeaBuffer* _this = bea::Convert<bea::BeaBuffer*>::FromJS(args.This(), 0);
		int fnRetVal = _this->size();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	//Get Accessor length (int)
	v8::Handle<v8::Value> JBeaBuffer::accGet_length( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		bea::BeaBuffer* _this = bea::Convert<bea::BeaBuffer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->size());
		return scope.Close(retVal);
	}
	
	//Set Accessor length (int)
	void JBeaBuffer::accSet_length(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		bea::BeaBuffer* _this = bea::Convert<bea::BeaBuffer*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		//TODO: Set value here
	}
	
	void JBeaBuffer::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<bea::BeaBuffer>* obj = EXPOSE_CLASS(bea::BeaBuffer, "BeaBuffer");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->setPostAllocator(__postAllocator);
		obj->exposeMethod("ptr", ptr);
		obj->exposeMethod("size", size);
		//Accessors
		obj->exposeProperty("length", accGet_length, accSet_length);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofBaseDraws);
namespace jof {
	v8::Handle<v8::Value> JofBaseDraws::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseDraws()
		ofBaseDraws* fnRetVal = new jof::_D_ofBaseDraws();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseDraws::draw(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void draw(float x,float y,float w, float h) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float w = bea::Convert<float>::FromJS(args[2], 2);
			float h = bea::Convert<float>::FromJS(args[3], 3);
			jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
			_this->draw(x, y, w, h);
			return args.This();
		}
		//virtual void draw(float x,float y) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
			_this->draw(x, y);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseDraws::getHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getHeight() = 0
		jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseDraws::getWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getWidth() = 0
		jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getWidth();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseDraws::setAnchorPercent(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPercent(float xPct, float yPct)
		float xPct = bea::Convert<float>::FromJS(args[0], 0);
		float yPct = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
		_this->setAnchorPercent(xPct, yPct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseDraws::setAnchorPoint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPoint(float x, float y)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
		_this->setAnchorPoint(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseDraws::resetAnchor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void resetAnchor()
		jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
		_this->resetAnchor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseDraws::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofBaseDraws* _this = bea::Convert<jof::_D_ofBaseDraws*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	void JofBaseDraws::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofBaseDraws>* obj = EXPOSE_CLASS(jof::_D_ofBaseDraws, "ofBaseDraws");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("draw", draw);
		obj->exposeMethod("getHeight", getHeight);
		obj->exposeMethod("getWidth", getWidth);
		obj->exposeMethod("setAnchorPercent", setAnchorPercent);
		obj->exposeMethod("setAnchorPoint", setAnchorPoint);
		obj->exposeMethod("resetAnchor", resetAnchor);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofBaseDraws::draw(float x, float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("draw", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y);
	}
	
	void _D_ofBaseDraws::draw(float x, float y, float w,  float h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[4] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y), bea::Convert<float>::ToJS(w), bea::Convert<float>::ToJS(h)};
			v8retVal = bea_derived_callJS("draw", 4, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y, w, h);
	}
	
	float _D_ofBaseDraws::getHeight() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getHeight")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getHeight", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getHeight();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	float _D_ofBaseDraws::getWidth() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWidth")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWidth", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWidth();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseDraws::setAnchorPercent(float xPct,  float yPct) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPercent")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(xPct), bea::Convert<float>::ToJS(yPct)};
			v8retVal = bea_derived_callJS("setAnchorPercent", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPercent(xPct, yPct);
	}
	
	void _D_ofBaseDraws::setAnchorPoint(float x,  float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPoint")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("setAnchorPoint", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPoint(x, y);
	}
	
	void _D_ofBaseDraws::resetAnchor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("resetAnchor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("resetAnchor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_resetAnchor();
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofBaseUpdates);
namespace jof {
	v8::Handle<v8::Value> JofBaseUpdates::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseUpdates()
		ofBaseUpdates* fnRetVal = new jof::_D_ofBaseUpdates();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseUpdates::update(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void update() = 0
		jof::_D_ofBaseUpdates* _this = bea::Convert<jof::_D_ofBaseUpdates*>::FromJS(args.This(), 0);
		_this->update();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseUpdates::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofBaseUpdates* _this = bea::Convert<jof::_D_ofBaseUpdates*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	void JofBaseUpdates::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofBaseUpdates>* obj = EXPOSE_CLASS(jof::_D_ofBaseUpdates, "ofBaseUpdates");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("update", update);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofBaseUpdates::update() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("update")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("update", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_update();
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofBaseHasTexture);
namespace jof {
	v8::Handle<v8::Value> JofBaseHasTexture::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseHasTexture()
		ofBaseHasTexture* fnRetVal = new jof::_D_ofBaseHasTexture();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseHasTexture::getTextureReference(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofTexture & getTextureReference()=0
		jof::_D_ofBaseHasTexture* _this = bea::Convert<jof::_D_ofBaseHasTexture*>::FromJS(args.This(), 0);
		ofTexture* fnRetVal = new ofTexture(_this->getTextureReference());
		return bea::Convert<ofTexture*>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseHasTexture::setUseTexture(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setUseTexture(bool bUseTex)=0
		bool bUseTex = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofBaseHasTexture* _this = bea::Convert<jof::_D_ofBaseHasTexture*>::FromJS(args.This(), 0);
		_this->setUseTexture(bUseTex);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseHasTexture::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofBaseHasTexture* _this = bea::Convert<jof::_D_ofBaseHasTexture*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	void JofBaseHasTexture::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofBaseHasTexture>* obj = EXPOSE_CLASS(jof::_D_ofBaseHasTexture, "ofBaseHasTexture");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("getTextureReference", getTextureReference);
		obj->exposeMethod("setUseTexture", setUseTexture);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	ofTexture& _D_ofBaseHasTexture::getTextureReference() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getTextureReference")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getTextureReference", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getTextureReference();
		return *bea::Convert<ofTexture*>::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseHasTexture::setUseTexture(bool bUseTex) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setUseTexture")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<bool>::ToJS(bUseTex)};
			v8retVal = bea_derived_callJS("setUseTexture", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setUseTexture(bUseTex);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofBaseHasPixels);
namespace jof {
	v8::Handle<v8::Value> JofBaseHasPixels::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseHasPixels()
		ofBaseHasPixels* fnRetVal = new jof::_D_ofBaseHasPixels();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseHasPixels::getPixels(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual unsigned char * getPixels()=0
		jof::_D_ofBaseHasPixels* _this = bea::Convert<jof::_D_ofBaseHasPixels*>::FromJS(args.This(), 0);
		bea::external<unsigned char> fnRetVal = _this->getPixels();
		return bea::Convert<bea::external<unsigned char> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseHasPixels::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofBaseHasPixels* _this = bea::Convert<jof::_D_ofBaseHasPixels*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	void JofBaseHasPixels::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofBaseHasPixels>* obj = EXPOSE_CLASS(jof::_D_ofBaseHasPixels, "ofBaseHasPixels");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("getPixels", getPixels);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	unsigned char* _D_ofBaseHasPixels::getPixels() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getPixels")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getPixels", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::FromJS(v8retVal, 0);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofBaseImage);
namespace jof {
	v8::Handle<v8::Value> JofBaseImage::draw(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void draw(float x,float y,float w, float h) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float w = bea::Convert<float>::FromJS(args[2], 2);
			float h = bea::Convert<float>::FromJS(args[3], 3);
			jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y, w, h);
			return args.This();
		}
		//virtual void draw(float x,float y) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::getHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getHeight() = 0
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::getWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getWidth() = 0
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getWidth();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::setAnchorPercent(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPercent(float xPct, float yPct)
		float xPct = bea::Convert<float>::FromJS(args[0], 0);
		float yPct = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPercent(xPct, yPct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::setAnchorPoint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPoint(float x, float y)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPoint(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::resetAnchor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void resetAnchor()
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		_this->_d_resetAnchor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::getTextureReference(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofTexture & getTextureReference()=0
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		ofTexture* fnRetVal = new ofTexture(_this->_d_getTextureReference());
		return bea::Convert<ofTexture*>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::setUseTexture(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setUseTexture(bool bUseTex)=0
		bool bUseTex = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		_this->_d_setUseTexture(bUseTex);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::getPixels(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual unsigned char * getPixels()=0
		jof::_D_ofBaseImage* _this = bea::Convert<jof::_D_ofBaseImage*>::FromJS(args.This(), 0);
		bea::external<unsigned char> fnRetVal = _this->_d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseImage::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseImage()
		ofBaseImage* fnRetVal = new jof::_D_ofBaseImage();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	void JofBaseImage::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofBaseImage>* obj = EXPOSE_CLASS(jof::_D_ofBaseImage, "ofBaseImage");
		//Exposed Methods
		obj->exposeMethod("draw", draw);
		obj->exposeMethod("getHeight", getHeight);
		obj->exposeMethod("getWidth", getWidth);
		obj->exposeMethod("setAnchorPercent", setAnchorPercent);
		obj->exposeMethod("setAnchorPoint", setAnchorPoint);
		obj->exposeMethod("resetAnchor", resetAnchor);
		obj->setPostAllocator(__postAllocator);
		obj->exposeMethod("getTextureReference", getTextureReference);
		obj->exposeMethod("setUseTexture", setUseTexture);
		obj->exposeMethod("getPixels", getPixels);
		obj->setConstructor(__constructor);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofBaseImage::draw(float x, float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("draw", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y);
	}
	
	void _D_ofBaseImage::draw(float x, float y, float w,  float h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[4] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y), bea::Convert<float>::ToJS(w), bea::Convert<float>::ToJS(h)};
			v8retVal = bea_derived_callJS("draw", 4, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y, w, h);
	}
	
	float _D_ofBaseImage::getHeight() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getHeight")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getHeight", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getHeight();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	float _D_ofBaseImage::getWidth() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWidth")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWidth", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWidth();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseImage::setAnchorPercent(float xPct,  float yPct) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPercent")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(xPct), bea::Convert<float>::ToJS(yPct)};
			v8retVal = bea_derived_callJS("setAnchorPercent", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPercent(xPct, yPct);
	}
	
	void _D_ofBaseImage::setAnchorPoint(float x,  float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPoint")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("setAnchorPoint", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPoint(x, y);
	}
	
	void _D_ofBaseImage::resetAnchor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("resetAnchor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("resetAnchor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_resetAnchor();
	}
	
	ofTexture& _D_ofBaseImage::getTextureReference() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getTextureReference")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getTextureReference", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getTextureReference();
		return *bea::Convert<ofTexture*>::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseImage::setUseTexture(bool bUseTex) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setUseTexture")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<bool>::ToJS(bUseTex)};
			v8retVal = bea_derived_callJS("setUseTexture", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setUseTexture(bUseTex);
	}
	
	unsigned char* _D_ofBaseImage::getPixels() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getPixels")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getPixels", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::FromJS(v8retVal, 0);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofBaseVideo);
namespace jof {
	v8::Handle<v8::Value> JofBaseVideo::draw(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void draw(float x,float y,float w, float h) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float w = bea::Convert<float>::FromJS(args[2], 2);
			float h = bea::Convert<float>::FromJS(args[3], 3);
			jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y, w, h);
			return args.This();
		}
		//virtual void draw(float x,float y) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::getHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getHeight() = 0
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::getWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getWidth() = 0
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getWidth();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::setAnchorPercent(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPercent(float xPct, float yPct)
		float xPct = bea::Convert<float>::FromJS(args[0], 0);
		float yPct = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPercent(xPct, yPct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::setAnchorPoint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPoint(float x, float y)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPoint(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::resetAnchor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void resetAnchor()
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		_this->_d_resetAnchor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::getTextureReference(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofTexture & getTextureReference()=0
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		ofTexture* fnRetVal = new ofTexture(_this->_d_getTextureReference());
		return bea::Convert<ofTexture*>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::setUseTexture(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setUseTexture(bool bUseTex)=0
		bool bUseTex = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		_this->_d_setUseTexture(bUseTex);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::getPixels(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual unsigned char * getPixels()=0
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		bea::external<unsigned char> fnRetVal = _this->_d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::update(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void update() = 0
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		_this->_d_update();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseVideo()
		ofBaseVideo* fnRetVal = new jof::_D_ofBaseVideo();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::isFrameNew(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual bool isFrameNew()=0
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->isFrameNew();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseVideo::close(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void close()=0
		jof::_D_ofBaseVideo* _this = bea::Convert<jof::_D_ofBaseVideo*>::FromJS(args.This(), 0);
		_this->close();
		return args.This();
		METHOD_END();
	}
	
	void JofBaseVideo::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofBaseVideo>* obj = EXPOSE_CLASS(jof::_D_ofBaseVideo, "ofBaseVideo");
		//Exposed Methods
		obj->exposeMethod("draw", draw);
		obj->exposeMethod("getHeight", getHeight);
		obj->exposeMethod("getWidth", getWidth);
		obj->exposeMethod("setAnchorPercent", setAnchorPercent);
		obj->exposeMethod("setAnchorPoint", setAnchorPoint);
		obj->exposeMethod("resetAnchor", resetAnchor);
		obj->setPostAllocator(__postAllocator);
		obj->exposeMethod("getTextureReference", getTextureReference);
		obj->exposeMethod("setUseTexture", setUseTexture);
		obj->exposeMethod("getPixels", getPixels);
		obj->exposeMethod("update", update);
		obj->setConstructor(__constructor);
		obj->exposeMethod("isFrameNew", isFrameNew);
		obj->exposeMethod("close", close);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofBaseVideo::draw(float x, float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("draw", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y);
	}
	
	void _D_ofBaseVideo::draw(float x, float y, float w,  float h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[4] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y), bea::Convert<float>::ToJS(w), bea::Convert<float>::ToJS(h)};
			v8retVal = bea_derived_callJS("draw", 4, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y, w, h);
	}
	
	float _D_ofBaseVideo::getHeight() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getHeight")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getHeight", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getHeight();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	float _D_ofBaseVideo::getWidth() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWidth")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWidth", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWidth();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseVideo::setAnchorPercent(float xPct,  float yPct) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPercent")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(xPct), bea::Convert<float>::ToJS(yPct)};
			v8retVal = bea_derived_callJS("setAnchorPercent", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPercent(xPct, yPct);
	}
	
	void _D_ofBaseVideo::setAnchorPoint(float x,  float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPoint")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("setAnchorPoint", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPoint(x, y);
	}
	
	void _D_ofBaseVideo::resetAnchor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("resetAnchor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("resetAnchor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_resetAnchor();
	}
	
	ofTexture& _D_ofBaseVideo::getTextureReference() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getTextureReference")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getTextureReference", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getTextureReference();
		return *bea::Convert<ofTexture*>::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseVideo::setUseTexture(bool bUseTex) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setUseTexture")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<bool>::ToJS(bUseTex)};
			v8retVal = bea_derived_callJS("setUseTexture", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setUseTexture(bUseTex);
	}
	
	unsigned char* _D_ofBaseVideo::getPixels() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getPixels")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getPixels", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseVideo::update() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("update")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("update", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_update();
	}
	
	bool _D_ofBaseVideo::isFrameNew() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("isFrameNew")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("isFrameNew", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_isFrameNew();
		return bea::Convert<bool>::FromJS(v8retVal, 0);
	}
	
	void _D_ofBaseVideo::close() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("close")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("close", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_close();
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofImage);
namespace jof {
	v8::Handle<v8::Value> JofImage::draw(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void draw(float x,float y,float w, float h) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float w = bea::Convert<float>::FromJS(args[2], 2);
			float h = bea::Convert<float>::FromJS(args[3], 3);
			jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y, w, h);
			return args.This();
		}
		//virtual void draw(float x,float y) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::getHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getHeight() = 0
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::getWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getWidth() = 0
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getWidth();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::setAnchorPercent(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPercent(float xPct, float yPct)
		float xPct = bea::Convert<float>::FromJS(args[0], 0);
		float yPct = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPercent(xPct, yPct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::setAnchorPoint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPoint(float x, float y)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPoint(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::resetAnchor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void resetAnchor()
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->_d_resetAnchor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::getTextureReference(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofTexture & getTextureReference()=0
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		ofTexture* fnRetVal = new ofTexture(_this->_d_getTextureReference());
		return bea::Convert<ofTexture*>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::setUseTexture(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setUseTexture(bool bUseTex)=0
		bool bUseTex = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->_d_setUseTexture(bUseTex);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::getPixels(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual unsigned char * getPixels()=0
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		bea::external<unsigned char> fnRetVal = _this->_d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofImage(const ofImage& mom)
		if (bea::Convert<ofImage*>::Is(args[0])) {
			ofImage* mom = bea::Convert<ofImage*>::FromJS(args[0], 0);
			ofImage* fnRetVal = new jof::_D_ofImage(*mom);
			return v8::External::New(fnRetVal);
		}
		//ofImage()
		if (args.Length() == 0) {
			ofImage* fnRetVal = new jof::_D_ofImage();
			return v8::External::New(fnRetVal);
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::allocate(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void     allocate(int w, int h, int type)
		int w = bea::Convert<int>::FromJS(args[0], 0);
		int h = bea::Convert<int>::FromJS(args[1], 1);
		int type = bea::Convert<int>::FromJS(args[2], 2);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->allocate(w, h, type);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::clear(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void     clear()
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->clear();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::clone(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void     clone(const ofImage &mom)
		ofImage* mom = bea::Convert<ofImage*>::FromJS(args[0], 0);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->clone(*mom);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::loadImage(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//bool     loadImage(string fileName)
		string fileName = bea::Convert<string>::FromJS(args[0], 0);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->loadImage(fileName);
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::saveImage(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void     saveImage(string fileName)
		string fileName = bea::Convert<string>::FromJS(args[0], 0);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->saveImage(fileName);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::setCompression(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void    setCompression(ofTexCompression compression)
		ofTexCompression compression = bea::Convert<ofTexCompression>::FromJS(args[0], 0);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->setCompression(compression);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::setFromPixels(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void     setFromPixels(unsigned char * pixels, int w, int h, int newType, bool bOrderIsRGB = true)
		bea::external<unsigned char> pixels = bea::Convert<bea::external<unsigned char> >::FromJS(args[0], 0);
		int w = bea::Convert<int>::FromJS(args[1], 1);
		int h = bea::Convert<int>::FromJS(args[2], 2);
		int newType = bea::Convert<int>::FromJS(args[3], 3);
		bool bOrderIsRGB = bea::Optional<bool>::FromJS(args, 4,  true);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->setFromPixels(pixels, w, h, newType, bOrderIsRGB);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::setImageType(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void     setImageType(int type)
		int type = bea::Convert<int>::FromJS(args[0], 0);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->setImageType(type);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::resize(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void     resize(int newWidth, int newHeight)
		int newWidth = bea::Convert<int>::FromJS(args[0], 0);
		int newHeight = bea::Convert<int>::FromJS(args[1], 1);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->resize(newWidth, newHeight);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::grabScreen(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void     grabScreen(int x, int y, int w, int h)
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		int w = bea::Convert<int>::FromJS(args[2], 2);
		int h = bea::Convert<int>::FromJS(args[3], 3);
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->grabScreen(x, y, w, h);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofImage::update(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void    update()
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(args.This(), 0);
		_this->update();
		return args.This();
		METHOD_END();
	}
	
	//Get Accessor width (int)
	v8::Handle<v8::Value> JofImage::accGet_width( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->width);
		return scope.Close(retVal);
	}
	
	//Set Accessor width (int)
	void JofImage::accSet_width(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->width = _accValue;
	}
	
	//Get Accessor height (int)
	v8::Handle<v8::Value> JofImage::accGet_height( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->height);
		return scope.Close(retVal);
	}
	
	//Set Accessor height (int)
	void JofImage::accSet_height(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->height = _accValue;
	}
	
	//Get Accessor bpp (int)
	v8::Handle<v8::Value> JofImage::accGet_bpp( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->bpp);
		return scope.Close(retVal);
	}
	
	//Set Accessor bpp (int)
	void JofImage::accSet_bpp(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->bpp = _accValue;
	}
	
	//Get Accessor type (int)
	v8::Handle<v8::Value> JofImage::accGet_type( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->type);
		return scope.Close(retVal);
	}
	
	//Set Accessor type (int)
	void JofImage::accSet_type(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofImage* _this = bea::Convert<jof::_D_ofImage*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->type = _accValue;
	}
	
	void JofImage::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofImage>* obj = EXPOSE_CLASS(jof::_D_ofImage, "ofImage");
		//Exposed Methods
		obj->exposeMethod("draw", draw);
		obj->exposeMethod("getHeight", getHeight);
		obj->exposeMethod("getWidth", getWidth);
		obj->exposeMethod("setAnchorPercent", setAnchorPercent);
		obj->exposeMethod("setAnchorPoint", setAnchorPoint);
		obj->exposeMethod("resetAnchor", resetAnchor);
		obj->setPostAllocator(__postAllocator);
		obj->exposeMethod("getTextureReference", getTextureReference);
		obj->exposeMethod("setUseTexture", setUseTexture);
		obj->exposeMethod("getPixels", getPixels);
		obj->setConstructor(__constructor);
		obj->exposeMethod("allocate", allocate);
		obj->exposeMethod("clear", clear);
		obj->exposeMethod("clone", clone);
		obj->exposeMethod("loadImage", loadImage);
		obj->exposeMethod("saveImage", saveImage);
		obj->exposeMethod("setCompression", setCompression);
		obj->exposeMethod("setFromPixels", setFromPixels);
		obj->exposeMethod("setImageType", setImageType);
		obj->exposeMethod("resize", resize);
		obj->exposeMethod("grabScreen", grabScreen);
		obj->exposeMethod("update", update);
		//Accessors
		obj->exposeProperty("width", accGet_width, accSet_width);
		obj->exposeProperty("height", accGet_height, accSet_height);
		obj->exposeProperty("bpp", accGet_bpp, accSet_bpp);
		obj->exposeProperty("type", accGet_type, accSet_type);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofImage::draw(float x, float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("draw", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y);
	}
	
	void _D_ofImage::draw(float x, float y, float w,  float h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[4] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y), bea::Convert<float>::ToJS(w), bea::Convert<float>::ToJS(h)};
			v8retVal = bea_derived_callJS("draw", 4, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y, w, h);
	}
	
	float _D_ofImage::getHeight() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getHeight")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getHeight", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getHeight();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	float _D_ofImage::getWidth() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWidth")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWidth", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWidth();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	void _D_ofImage::setAnchorPercent(float xPct,  float yPct) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPercent")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(xPct), bea::Convert<float>::ToJS(yPct)};
			v8retVal = bea_derived_callJS("setAnchorPercent", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPercent(xPct, yPct);
	}
	
	void _D_ofImage::setAnchorPoint(float x,  float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPoint")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("setAnchorPoint", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPoint(x, y);
	}
	
	void _D_ofImage::resetAnchor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("resetAnchor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("resetAnchor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_resetAnchor();
	}
	
	ofTexture& _D_ofImage::getTextureReference() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getTextureReference")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getTextureReference", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getTextureReference();
		return *bea::Convert<ofTexture*>::FromJS(v8retVal, 0);
	}
	
	void _D_ofImage::setUseTexture(bool bUseTex) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setUseTexture")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<bool>::ToJS(bUseTex)};
			v8retVal = bea_derived_callJS("setUseTexture", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setUseTexture(bUseTex);
	}
	
	unsigned char* _D_ofImage::getPixels() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getPixels")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getPixels", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::FromJS(v8retVal, 0);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofTexture);
namespace jof {
	v8::Handle<v8::Value> JofTexture::draw(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void draw(float x,float y,float w, float h) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float w = bea::Convert<float>::FromJS(args[2], 2);
			float h = bea::Convert<float>::FromJS(args[3], 3);
			jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y, w, h);
			return args.This();
		}
		//virtual void draw(float x,float y) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::getHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getHeight() = 0
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::getWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getWidth() = 0
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getWidth();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::setAnchorPercent(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPercent(float xPct, float yPct)
		float xPct = bea::Convert<float>::FromJS(args[0], 0);
		float yPct = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPercent(xPct, yPct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::setAnchorPoint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPoint(float x, float y)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPoint(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::resetAnchor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void resetAnchor()
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->_d_resetAnchor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofTexture(const ofTexture& mom)
		if (bea::Convert<ofTexture*>::Is(args[0])) {
			ofTexture* mom = bea::Convert<ofTexture*>::FromJS(args[0], 0);
			ofTexture* fnRetVal = new jof::_D_ofTexture(*mom);
			return v8::External::New(fnRetVal);
		}
		//ofTexture()
		if (args.Length() == 0) {
			ofTexture* fnRetVal = new jof::_D_ofTexture();
			return v8::External::New(fnRetVal);
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::allocate(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void allocate(int w, int h, int internalGlDataType, bool bUseARBExtention)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2]) && bea::Convert<bool>::Is(args[3])) {
			int w = bea::Convert<int>::FromJS(args[0], 0);
			int h = bea::Convert<int>::FromJS(args[1], 1);
			int internalGlDataType = bea::Convert<int>::FromJS(args[2], 2);
			bool bUseARBExtention = bea::Convert<bool>::FromJS(args[3], 3);
			jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
			_this->allocate(w, h, internalGlDataType, bUseARBExtention);
			return args.This();
		}
		//void allocate(int w, int h, int internalGlDataType)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2])) {
			int w = bea::Convert<int>::FromJS(args[0], 0);
			int h = bea::Convert<int>::FromJS(args[1], 1);
			int internalGlDataType = bea::Convert<int>::FromJS(args[2], 2);
			jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
			_this->allocate(w, h, internalGlDataType);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::clear(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void clear()
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->clear();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::loadData(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		
		//void loadData(unsigned char * data, int w, int h, int glDataType)
		if (bea::Convert<bea::external<unsigned char> >::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2]) && bea::Convert<int>::Is(args[3])) {
			bea::external<unsigned char> data = bea::Convert<bea::external<unsigned char> >::FromJS(args[0], 0);
			int w = bea::Convert<int>::FromJS(args[1], 1);
			int h = bea::Convert<int>::FromJS(args[2], 2);
			int glDataType = bea::Convert<int>::FromJS(args[3], 3);
			jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
			_this->loadData(data, w, h, glDataType);
			return args.This();
		}
		else
		//void loadData(float * data, int w, int h, int glDataType)
		if (bea::Convert<bea::external<float> >::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2]) && bea::Convert<int>::Is(args[3])) {
			bea::external<float> data = bea::Convert<bea::external<float> >::FromJS(args[0], 0);
			int w = bea::Convert<int>::FromJS(args[1], 1);
			int h = bea::Convert<int>::FromJS(args[2], 2);
			int glDataType = bea::Convert<int>::FromJS(args[3], 3);
			jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
			_this->loadData(data, w, h, glDataType);
			return args.This();
		}
		
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::loadScreenData(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void loadScreenData(int x, int y, int w, int h)
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		int w = bea::Convert<int>::FromJS(args[2], 2);
		int h = bea::Convert<int>::FromJS(args[3], 3);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->loadScreenData(x, y, w, h);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::bind(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void bind()
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->bind();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::unbind(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void unbind()
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->unbind();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::getCoordFromPoint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//ofPoint getCoordFromPoint(float xPos, float yPos)
		float xPos = bea::Convert<float>::FromJS(args[0], 0);
		float yPos = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->getCoordFromPoint(xPos, yPos);
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::getCoordFromPercent(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//ofPoint getCoordFromPercent(float xPts, float yPts)
		float xPts = bea::Convert<float>::FromJS(args[0], 0);
		float yPts = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->getCoordFromPercent(xPts, yPts);
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::setTextureWrap(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void setTextureWrap(GLint wrapModeHorizontal, GLint wrapModeVertical)
		GLint wrapModeHorizontal = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint wrapModeVertical = bea::Convert<GLint>::FromJS(args[1], 1);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->setTextureWrap(wrapModeHorizontal, wrapModeVertical);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::setTextureMinMagFilter(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void setTextureMinMagFilter(GLint minFilter, GLint maxFilter)
		GLint minFilter = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint maxFilter = bea::Convert<GLint>::FromJS(args[1], 1);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->setTextureMinMagFilter(minFilter, maxFilter);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::setCompression(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setCompression(ofTexCompression compression)
		ofTexCompression compression = bea::Convert<ofTexCompression>::FromJS(args[0], 0);
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		_this->setCompression(compression);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::bAllocated(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool bAllocated()
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->bAllocated();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTexture::getTextureData(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofTextureData getTextureData()
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(args.This(), 0);
		ofTextureData fnRetVal = _this->getTextureData();
		return bea::Convert<ofTextureData>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	//Get Accessor texData (ofTextureData)
	v8::Handle<v8::Value> JofTexture::accGet_texData( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<ofTextureData>::ToJS(_this->texData);
		return scope.Close(retVal);
	}
	
	//Set Accessor texData (ofTextureData)
	void JofTexture::accSet_texData(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofTexture* _this = bea::Convert<jof::_D_ofTexture*>::FromJS(info.Holder(), 0); 
		ofTextureData _accValue = bea::Convert<ofTextureData>::FromJS(v, 0);
		_this->texData = _accValue;
	}
	
	void JofTexture::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofTexture>* obj = EXPOSE_CLASS(jof::_D_ofTexture, "ofTexture");
		//Exposed Methods
		obj->exposeMethod("draw", draw);
		obj->exposeMethod("getHeight", getHeight);
		obj->exposeMethod("getWidth", getWidth);
		obj->exposeMethod("setAnchorPercent", setAnchorPercent);
		obj->exposeMethod("setAnchorPoint", setAnchorPoint);
		obj->exposeMethod("resetAnchor", resetAnchor);
		obj->setPostAllocator(__postAllocator);
		obj->setConstructor(__constructor);
		obj->exposeMethod("allocate", allocate);
		obj->exposeMethod("clear", clear);
		obj->exposeMethod("loadData", loadData);
		obj->exposeMethod("loadScreenData", loadScreenData);
		obj->exposeMethod("bind", bind);
		obj->exposeMethod("unbind", unbind);
		obj->exposeMethod("getCoordFromPoint", getCoordFromPoint);
		obj->exposeMethod("getCoordFromPercent", getCoordFromPercent);
		obj->exposeMethod("setTextureWrap", setTextureWrap);
		obj->exposeMethod("setTextureMinMagFilter", setTextureMinMagFilter);
		obj->exposeMethod("setCompression", setCompression);
		obj->exposeMethod("bAllocated", bAllocated);
		obj->exposeMethod("getTextureData", getTextureData);
		//Accessors
		obj->exposeProperty("texData", accGet_texData, accSet_texData);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofTexture::draw(float x, float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("draw", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y);
	}
	
	void _D_ofTexture::draw(float x, float y, float w,  float h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[4] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y), bea::Convert<float>::ToJS(w), bea::Convert<float>::ToJS(h)};
			v8retVal = bea_derived_callJS("draw", 4, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y, w, h);
	}
	
	float _D_ofTexture::getHeight() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getHeight")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getHeight", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getHeight();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	float _D_ofTexture::getWidth() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWidth")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWidth", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWidth();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	void _D_ofTexture::setAnchorPercent(float xPct,  float yPct) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPercent")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(xPct), bea::Convert<float>::ToJS(yPct)};
			v8retVal = bea_derived_callJS("setAnchorPercent", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPercent(xPct, yPct);
	}
	
	void _D_ofTexture::setAnchorPoint(float x,  float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPoint")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("setAnchorPoint", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPoint(x, y);
	}
	
	void _D_ofTexture::resetAnchor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("resetAnchor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("resetAnchor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_resetAnchor();
	}
	
}

DECLARE_STATIC(jof::JofGraphics);
namespace jof {
	v8::Handle<v8::Value> JofGraphics::ofBgColorPtr(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float * ofBgColorPtr()
		bea::external<float> fnRetVal = ::ofBgColorPtr();
		return bea::Convert<bea::external<float> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofBackground(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void ofBackground(int r, int g, int b)
		int r = bea::Convert<int>::FromJS(args[0], 0);
		int g = bea::Convert<int>::FromJS(args[1], 1);
		int b = bea::Convert<int>::FromJS(args[2], 2);
		::ofBackground(r, g, b);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetBackgroundAuto(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  ofSetBackgroundAuto(bool bManual)
		bool bManual = bea::Convert<bool>::FromJS(args[0], 0);
		::ofSetBackgroundAuto(bManual);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetRectMode(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  ofSetRectMode(int mode)
		int mode = bea::Convert<int>::FromJS(args[0], 0);
		::ofSetRectMode(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofGetUsingArbTex(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool ofGetUsingArbTex()
		bool fnRetVal = ::ofGetUsingArbTex();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofEnableArbTex(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofEnableArbTex()
		::ofEnableArbTex();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofDisableArbTex(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofDisableArbTex()
		::ofDisableArbTex();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofGetUsingNormalizedTexCoords(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool ofGetUsingNormalizedTexCoords()
		bool fnRetVal = ::ofGetUsingNormalizedTexCoords();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofEnableNormalizedTexCoords(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofEnableNormalizedTexCoords()
		::ofEnableNormalizedTexCoords();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofDisableNormalizedTexCoords(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofDisableNormalizedTexCoords()
		::ofDisableNormalizedTexCoords();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetTextureWrap(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSetTextureWrap(GLfloat wrapS = GL_CLAMP_TO_EDGE, GLfloat wrapT = GL_CLAMP_TO_EDGE)
		GLfloat wrapS = bea::Optional<GLfloat>::FromJS(args, 0,  GL_CLAMP_TO_EDGE);
		GLfloat wrapT = bea::Optional<GLfloat>::FromJS(args, 1,  GL_CLAMP_TO_EDGE);
		::ofSetTextureWrap(wrapS, wrapT);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofGetUsingCustomTextureWrap(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool ofGetUsingCustomTextureWrap()
		bool fnRetVal = ::ofGetUsingCustomTextureWrap();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofRestoreTextureWrap(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofRestoreTextureWrap()
		::ofRestoreTextureWrap();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetMinMagFilters(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSetMinMagFilters(GLfloat minFilter = GL_LINEAR, GLfloat maxFilter = GL_LINEAR)
		GLfloat minFilter = bea::Optional<GLfloat>::FromJS(args, 0,  GL_LINEAR);
		GLfloat maxFilter = bea::Optional<GLfloat>::FromJS(args, 1,  GL_LINEAR);
		::ofSetMinMagFilters(minFilter, maxFilter);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofGetUsingCustomMinMagFilters(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool ofGetUsingCustomMinMagFilters()
		bool fnRetVal = ::ofGetUsingCustomMinMagFilters();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofRestoreMinMagFilters(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofRestoreMinMagFilters()
		::ofRestoreMinMagFilters();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofbClearBg(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool  ofbClearBg()
		bool fnRetVal = ::ofbClearBg();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofGetRectMode(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int  ofGetRectMode()
		int fnRetVal = ::ofGetRectMode();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetCurveResolution(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetCurveResolution(int res)
		int res = bea::Convert<int>::FromJS(args[0], 0);
		::ofSetCurveResolution(res);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofTriangle(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void ofTriangle(float x1,float y1,float x2,float y2,float x3, float y3)
		float x1 = bea::Convert<float>::FromJS(args[0], 0);
		float y1 = bea::Convert<float>::FromJS(args[1], 1);
		float x2 = bea::Convert<float>::FromJS(args[2], 2);
		float y2 = bea::Convert<float>::FromJS(args[3], 3);
		float x3 = bea::Convert<float>::FromJS(args[4], 4);
		float y3 = bea::Convert<float>::FromJS(args[5], 5);
		::ofTriangle(x1, y1, x2, y2, x3, y3);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofCircle(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void ofCircle(float x,float y, float radius)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		float radius = bea::Convert<float>::FromJS(args[2], 2);
		::ofCircle(x, y, radius);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofEllipse(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void ofEllipse(float x, float y, float width, float height)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		float width = bea::Convert<float>::FromJS(args[2], 2);
		float height = bea::Convert<float>::FromJS(args[3], 3);
		::ofEllipse(x, y, width, height);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofLine(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void ofLine(float x1,float y1,float x2,float y2)
		float x1 = bea::Convert<float>::FromJS(args[0], 0);
		float y1 = bea::Convert<float>::FromJS(args[1], 1);
		float x2 = bea::Convert<float>::FromJS(args[2], 2);
		float y2 = bea::Convert<float>::FromJS(args[3], 3);
		::ofLine(x1, y1, x2, y2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofRect(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void ofRect(float x1,float y1,float w, float h)
		float x1 = bea::Convert<float>::FromJS(args[0], 0);
		float y1 = bea::Convert<float>::FromJS(args[1], 1);
		float w = bea::Convert<float>::FromJS(args[2], 2);
		float h = bea::Convert<float>::FromJS(args[3], 3);
		::ofRect(x1, y1, w, h);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetCircleResolution(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetCircleResolution(int res)
		int res = bea::Convert<int>::FromJS(args[0], 0);
		::ofSetCircleResolution(res);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofCurve(const v8::Arguments& args) {
		METHOD_BEGIN(8);
		//void ofCurve(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
		float x0 = bea::Convert<float>::FromJS(args[0], 0);
		float y0 = bea::Convert<float>::FromJS(args[1], 1);
		float x1 = bea::Convert<float>::FromJS(args[2], 2);
		float y1 = bea::Convert<float>::FromJS(args[3], 3);
		float x2 = bea::Convert<float>::FromJS(args[4], 4);
		float y2 = bea::Convert<float>::FromJS(args[5], 5);
		float x3 = bea::Convert<float>::FromJS(args[6], 6);
		float y3 = bea::Convert<float>::FromJS(args[7], 7);
		::ofCurve(x0, y0, x1, y1, x2, y2, x3, y3);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofBezier(const v8::Arguments& args) {
		METHOD_BEGIN(8);
		//void ofBezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
		float x0 = bea::Convert<float>::FromJS(args[0], 0);
		float y0 = bea::Convert<float>::FromJS(args[1], 1);
		float x1 = bea::Convert<float>::FromJS(args[2], 2);
		float y1 = bea::Convert<float>::FromJS(args[3], 3);
		float x2 = bea::Convert<float>::FromJS(args[4], 4);
		float y2 = bea::Convert<float>::FromJS(args[5], 5);
		float x3 = bea::Convert<float>::FromJS(args[6], 6);
		float y3 = bea::Convert<float>::FromJS(args[7], 7);
		::ofBezier(x0, y0, x1, y1, x2, y2, x3, y3);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofNoFill(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofNoFill()
		::ofNoFill();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofFill(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofFill()
		::ofFill();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetLineWidth(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetLineWidth(float lineWidth)
		float lineWidth = bea::Convert<float>::FromJS(args[0], 0);
		::ofSetLineWidth(lineWidth);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetColor(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetColor(int r, int g, int b, int a)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2]) && bea::Convert<int>::Is(args[3])) {
			int r = bea::Convert<int>::FromJS(args[0], 0);
			int g = bea::Convert<int>::FromJS(args[1], 1);
			int b = bea::Convert<int>::FromJS(args[2], 2);
			int a = bea::Convert<int>::FromJS(args[3], 3);
			::ofSetColor(r, g, b, a);
			return args.This();
		}
		//void ofSetColor(int r, int g, int b)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2])) {
			int r = bea::Convert<int>::FromJS(args[0], 0);
			int g = bea::Convert<int>::FromJS(args[1], 1);
			int b = bea::Convert<int>::FromJS(args[2], 2);
			::ofSetColor(r, g, b);
			return args.This();
		}
		//void ofSetColor(int hexColor)
		if (bea::Convert<int>::Is(args[0])) {
			int hexColor = bea::Convert<int>::FromJS(args[0], 0);
			::ofSetColor(hexColor);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofEnableAlphaBlending(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofEnableAlphaBlending()
		::ofEnableAlphaBlending();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofDisableAlphaBlending(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofDisableAlphaBlending()
		::ofDisableAlphaBlending();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofEnableSmoothing(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofEnableSmoothing()
		::ofEnableSmoothing();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofDisableSmoothing(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofDisableSmoothing()
		::ofDisableSmoothing();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofGetStyle(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofStyle ofGetStyle()
		ofStyle fnRetVal = ::ofGetStyle();
		return bea::Convert<ofStyle>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetStyle(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetStyle(ofStyle style)
		ofStyle style = bea::Convert<ofStyle>::FromJS(args[0], 0);
		::ofSetStyle(style);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofPushStyle(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofPushStyle()
		::ofPushStyle();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofPopStyle(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofPopStyle()
		::ofPopStyle();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofPushMatrix(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofPushMatrix()
		::ofPushMatrix();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofPopMatrix(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofPopMatrix()
		::ofPopMatrix();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofTranslate(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void ofTranslate(float x, float y, float z = 0)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		float z = bea::Optional<float>::FromJS(args, 2,  0);
		::ofTranslate(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofScale(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void ofScale(float xAmnt, float yAmnt, float zAmnt = 1)
		float xAmnt = bea::Convert<float>::FromJS(args[0], 0);
		float yAmnt = bea::Convert<float>::FromJS(args[1], 1);
		float zAmnt = bea::Optional<float>::FromJS(args, 2,  1);
		::ofScale(xAmnt, yAmnt, zAmnt);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofRotate(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofRotate(float degrees, float vecX, float vecY, float vecZ)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float degrees = bea::Convert<float>::FromJS(args[0], 0);
			float vecX = bea::Convert<float>::FromJS(args[1], 1);
			float vecY = bea::Convert<float>::FromJS(args[2], 2);
			float vecZ = bea::Convert<float>::FromJS(args[3], 3);
			::ofRotate(degrees, vecX, vecY, vecZ);
			return args.This();
		}
		//void ofRotate(float degrees)
		if (bea::Convert<float>::Is(args[0])) {
			float degrees = bea::Convert<float>::FromJS(args[0], 0);
			::ofRotate(degrees);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofRotateX(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofRotateX(float degrees)
		float degrees = bea::Convert<float>::FromJS(args[0], 0);
		::ofRotateX(degrees);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofRotateY(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofRotateY(float degrees)
		float degrees = bea::Convert<float>::FromJS(args[0], 0);
		::ofRotateY(degrees);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofRotateZ(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofRotateZ(float degrees)
		float degrees = bea::Convert<float>::FromJS(args[0], 0);
		::ofRotateZ(degrees);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofDrawBitmapString(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void ofDrawBitmapString(string textString, float x, float y)
		string textString = bea::Convert<string>::FromJS(args[0], 0);
		float x = bea::Convert<float>::FromJS(args[1], 1);
		float y = bea::Convert<float>::FromJS(args[2], 2);
		::ofDrawBitmapString(textString, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetupGraphicDefaults(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSetupGraphicDefaults()
		::ofSetupGraphicDefaults();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetupScreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSetupScreen()
		::ofSetupScreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofCurveVertex(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void ofCurveVertex(float x, float y)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		::ofCurveVertex(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofBezierVertex(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void ofBezierVertex(float x1, float y1, float x2, float y2, float x3, float y3)
		float x1 = bea::Convert<float>::FromJS(args[0], 0);
		float y1 = bea::Convert<float>::FromJS(args[1], 1);
		float x2 = bea::Convert<float>::FromJS(args[2], 2);
		float y2 = bea::Convert<float>::FromJS(args[3], 3);
		float x3 = bea::Convert<float>::FromJS(args[4], 4);
		float y3 = bea::Convert<float>::FromJS(args[5], 5);
		::ofBezierVertex(x1, y1, x2, y2, x3, y3);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofSetPolyMode(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSetPolyMode(int mode)
		int mode = bea::Convert<int>::FromJS(args[0], 0);
		::ofSetPolyMode(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofBeginShape(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofBeginShape()
		::ofBeginShape();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofVertex(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void ofVertex(float x, float y)
		float x = bea::Convert<float>::FromJS(args[0], 0);
		float y = bea::Convert<float>::FromJS(args[1], 1);
		::ofVertex(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofEndShape(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofEndShape(bool bClose = false)
		bool bClose = bea::Optional<bool>::FromJS(args, 0,  false);
		::ofEndShape(bClose);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofGraphics::ofNextContour(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofNextContour(bool bClose = false)
		bool bClose = bea::Optional<bool>::FromJS(args, 0,  false);
		::ofNextContour(bClose);
		return args.This();
		METHOD_END();
	}
	
	void JofGraphics::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedStatic<JofGraphics>* obj = EXPOSE_STATIC(JofGraphics, "ofGraphics");
		//Exposed Methods
		obj->exposeMethod("ofBgColorPtr", ofBgColorPtr);
		obj->exposeMethod("ofBackground", ofBackground);
		obj->exposeMethod("ofSetBackgroundAuto", ofSetBackgroundAuto);
		obj->exposeMethod("ofSetRectMode", ofSetRectMode);
		obj->exposeMethod("ofGetUsingArbTex", ofGetUsingArbTex);
		obj->exposeMethod("ofEnableArbTex", ofEnableArbTex);
		obj->exposeMethod("ofDisableArbTex", ofDisableArbTex);
		obj->exposeMethod("ofGetUsingNormalizedTexCoords", ofGetUsingNormalizedTexCoords);
		obj->exposeMethod("ofEnableNormalizedTexCoords", ofEnableNormalizedTexCoords);
		obj->exposeMethod("ofDisableNormalizedTexCoords", ofDisableNormalizedTexCoords);
		obj->exposeMethod("ofSetTextureWrap", ofSetTextureWrap);
		obj->exposeMethod("ofGetUsingCustomTextureWrap", ofGetUsingCustomTextureWrap);
		obj->exposeMethod("ofRestoreTextureWrap", ofRestoreTextureWrap);
		obj->exposeMethod("ofSetMinMagFilters", ofSetMinMagFilters);
		obj->exposeMethod("ofGetUsingCustomMinMagFilters", ofGetUsingCustomMinMagFilters);
		obj->exposeMethod("ofRestoreMinMagFilters", ofRestoreMinMagFilters);
		obj->exposeMethod("ofbClearBg", ofbClearBg);
		obj->exposeMethod("ofGetRectMode", ofGetRectMode);
		obj->exposeMethod("ofSetCurveResolution", ofSetCurveResolution);
		obj->exposeMethod("ofTriangle", ofTriangle);
		obj->exposeMethod("ofCircle", ofCircle);
		obj->exposeMethod("ofEllipse", ofEllipse);
		obj->exposeMethod("ofLine", ofLine);
		obj->exposeMethod("ofRect", ofRect);
		obj->exposeMethod("ofSetCircleResolution", ofSetCircleResolution);
		obj->exposeMethod("ofCurve", ofCurve);
		obj->exposeMethod("ofBezier", ofBezier);
		obj->exposeMethod("ofNoFill", ofNoFill);
		obj->exposeMethod("ofFill", ofFill);
		obj->exposeMethod("ofSetLineWidth", ofSetLineWidth);
		obj->exposeMethod("ofSetColor", ofSetColor);
		obj->exposeMethod("ofEnableAlphaBlending", ofEnableAlphaBlending);
		obj->exposeMethod("ofDisableAlphaBlending", ofDisableAlphaBlending);
		obj->exposeMethod("ofEnableSmoothing", ofEnableSmoothing);
		obj->exposeMethod("ofDisableSmoothing", ofDisableSmoothing);
		obj->exposeMethod("ofGetStyle", ofGetStyle);
		obj->exposeMethod("ofSetStyle", ofSetStyle);
		obj->exposeMethod("ofPushStyle", ofPushStyle);
		obj->exposeMethod("ofPopStyle", ofPopStyle);
		obj->exposeMethod("ofPushMatrix", ofPushMatrix);
		obj->exposeMethod("ofPopMatrix", ofPopMatrix);
		obj->exposeMethod("ofTranslate", ofTranslate);
		obj->exposeMethod("ofScale", ofScale);
		obj->exposeMethod("ofRotate", ofRotate);
		obj->exposeMethod("ofRotateX", ofRotateX);
		obj->exposeMethod("ofRotateY", ofRotateY);
		obj->exposeMethod("ofRotateZ", ofRotateZ);
		obj->exposeMethod("ofDrawBitmapString", ofDrawBitmapString);
		obj->exposeMethod("ofSetupGraphicDefaults", ofSetupGraphicDefaults);
		obj->exposeMethod("ofSetupScreen", ofSetupScreen);
		obj->exposeMethod("ofCurveVertex", ofCurveVertex);
		obj->exposeMethod("ofBezierVertex", ofBezierVertex);
		obj->exposeMethod("ofSetPolyMode", ofSetPolyMode);
		obj->exposeMethod("ofBeginShape", ofBeginShape);
		obj->exposeMethod("ofVertex", ofVertex);
		obj->exposeMethod("ofEndShape", ofEndShape);
		obj->exposeMethod("ofNextContour", ofNextContour);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(ofTTFContour);
namespace jof {
	v8::Handle<v8::Value> JofTTFContour::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofTTFContour()
		ofTTFContour* fnRetVal = new ofTTFContour();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTTFContour::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		ofTTFContour* _this = bea::Convert<ofTTFContour*>::FromJS(args.This(), 0);
		return args.This();
		METHOD_END();
	}
	
	//Get Accessor pts (vector<ofPoint>)
	v8::Handle<v8::Value> JofTTFContour::accGet_pts( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofTTFContour* _this = bea::Convert<ofTTFContour*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<vector<ofPoint> >::ToJS(_this->pts);
		return scope.Close(retVal);
	}
	
	//Set Accessor pts (vector<ofPoint>)
	void JofTTFContour::accSet_pts(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofTTFContour* _this = bea::Convert<ofTTFContour*>::FromJS(info.Holder(), 0); 
		vector<ofPoint> _accValue = bea::Convert<vector<ofPoint> >::FromJS(v, 0);
		_this->pts = _accValue;
	}
	
	void JofTTFContour::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<ofTTFContour>* obj = EXPOSE_CLASS(ofTTFContour, "ofTTFContour");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		obj->exposeProperty("pts", accGet_pts, accSet_pts);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(ofTTFCharacter);
namespace jof {
	v8::Handle<v8::Value> JofTTFCharacter::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofTTFCharacter()
		ofTTFCharacter* fnRetVal = new ofTTFCharacter();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTTFCharacter::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		ofTTFCharacter* _this = bea::Convert<ofTTFCharacter*>::FromJS(args.This(), 0);
		return args.This();
		METHOD_END();
	}
	
	//Get Accessor contours (vector<ofTTFContour>)
	v8::Handle<v8::Value> JofTTFCharacter::accGet_contours( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofTTFCharacter* _this = bea::Convert<ofTTFCharacter*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<vector<ofTTFContour> >::ToJS(_this->contours);
		return scope.Close(retVal);
	}
	
	//Set Accessor contours (vector<ofTTFContour>)
	void JofTTFCharacter::accSet_contours(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofTTFCharacter* _this = bea::Convert<ofTTFCharacter*>::FromJS(info.Holder(), 0); 
		vector<ofTTFContour> _accValue = bea::Convert<vector<ofTTFContour> >::FromJS(v, 0);
		_this->contours = _accValue;
	}
	
	void JofTTFCharacter::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<ofTTFCharacter>* obj = EXPOSE_CLASS(ofTTFCharacter, "ofTTFCharacter");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		obj->exposeProperty("contours", accGet_contours, accSet_contours);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(ofTrueTypeFont);
namespace jof {
	v8::Handle<v8::Value> JofTrueTypeFont::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofTrueTypeFont()
		ofTrueTypeFont* fnRetVal = new ofTrueTypeFont();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::loadFont(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void   loadFont(string filename, int fontsize, bool _bAntiAliased, bool _bFullCharacterSet, bool makeContours = false)
		if (bea::Convert<string>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<bool>::Is(args[2]) && bea::Convert<bool>::Is(args[3]) && bea::Optional<bool>::Is(args, 4)) {
			string filename = bea::Convert<string>::FromJS(args[0], 0);
			int fontsize = bea::Convert<int>::FromJS(args[1], 1);
			bool _bAntiAliased = bea::Convert<bool>::FromJS(args[2], 2);
			bool _bFullCharacterSet = bea::Convert<bool>::FromJS(args[3], 3);
			bool makeContours = bea::Optional<bool>::FromJS(args, 4,  false);
			ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
			_this->loadFont(filename, fontsize, _bAntiAliased, _bFullCharacterSet, makeContours);
			return args.This();
		}
		//void   loadFont(string filename, int fontsize)
		if (bea::Convert<string>::Is(args[0]) && bea::Convert<int>::Is(args[1])) {
			string filename = bea::Convert<string>::FromJS(args[0], 0);
			int fontsize = bea::Convert<int>::FromJS(args[1], 1);
			ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
			_this->loadFont(filename, fontsize);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::getLineHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float   getLineHeight()
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getLineHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::setLineHeight(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void   setLineHeight(float height)
		float height = bea::Convert<float>::FromJS(args[0], 0);
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		_this->setLineHeight(height);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::stringWidth(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float   stringWidth(string s)
		string s = bea::Convert<string>::FromJS(args[0], 0);
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		float fnRetVal = _this->stringWidth(s);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::stringHeight(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float   stringHeight(string s)
		string s = bea::Convert<string>::FromJS(args[0], 0);
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		float fnRetVal = _this->stringHeight(s);
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::getStringBoundingBox(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//ofRectangle    getStringBoundingBox(string s, float x, float y)
		string s = bea::Convert<string>::FromJS(args[0], 0);
		float x = bea::Convert<float>::FromJS(args[1], 1);
		float y = bea::Convert<float>::FromJS(args[2], 2);
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		ofRectangle fnRetVal = _this->getStringBoundingBox(s, x, y);
		return bea::Convert<ofRectangle>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::drawString(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void   drawString(string s, float x, float y)
		string s = bea::Convert<string>::FromJS(args[0], 0);
		float x = bea::Convert<float>::FromJS(args[1], 1);
		float y = bea::Convert<float>::FromJS(args[2], 2);
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		_this->drawString(s, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::drawStringAsShapes(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  drawStringAsShapes(string s, float x, float y)
		string s = bea::Convert<string>::FromJS(args[0], 0);
		float x = bea::Convert<float>::FromJS(args[1], 1);
		float y = bea::Convert<float>::FromJS(args[2], 2);
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		_this->drawStringAsShapes(s, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::getCharacterAsPoints(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//ofTTFCharacter getCharacterAsPoints(int character)
		int character = bea::Convert<int>::FromJS(args[0], 0);
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		ofTTFCharacter* fnRetVal = new ofTTFCharacter(_this->getCharacterAsPoints(character));
		return bea::Convert<ofTTFCharacter*>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofTrueTypeFont::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(args.This(), 0);
		return args.This();
		METHOD_END();
	}
	
	//Get Accessor bLoadedOk (bool)
	v8::Handle<v8::Value> JofTrueTypeFont::accGet_bLoadedOk( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bLoadedOk);
		return scope.Close(retVal);
	}
	
	//Set Accessor bLoadedOk (bool)
	void JofTrueTypeFont::accSet_bLoadedOk(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bLoadedOk = _accValue;
	}
	
	//Get Accessor bAntiAlised (bool)
	v8::Handle<v8::Value> JofTrueTypeFont::accGet_bAntiAlised( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bAntiAlised);
		return scope.Close(retVal);
	}
	
	//Set Accessor bAntiAlised (bool)
	void JofTrueTypeFont::accSet_bAntiAlised(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bAntiAlised = _accValue;
	}
	
	//Get Accessor bFullCharacterSet (bool)
	v8::Handle<v8::Value> JofTrueTypeFont::accGet_bFullCharacterSet( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bFullCharacterSet);
		return scope.Close(retVal);
	}
	
	//Set Accessor bFullCharacterSet (bool)
	void JofTrueTypeFont::accSet_bFullCharacterSet(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bFullCharacterSet = _accValue;
	}
	
	//Get Accessor nCharacters (int)
	v8::Handle<v8::Value> JofTrueTypeFont::accGet_nCharacters( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->nCharacters);
		return scope.Close(retVal);
	}
	
	//Set Accessor nCharacters (int)
	void JofTrueTypeFont::accSet_nCharacters(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofTrueTypeFont* _this = bea::Convert<ofTrueTypeFont*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->nCharacters = _accValue;
	}
	
	void JofTrueTypeFont::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<ofTrueTypeFont>* obj = EXPOSE_CLASS(ofTrueTypeFont, "ofTrueTypeFont");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("loadFont", loadFont);
		obj->exposeMethod("getLineHeight", getLineHeight);
		obj->exposeMethod("setLineHeight", setLineHeight);
		obj->exposeMethod("stringWidth", stringWidth);
		obj->exposeMethod("stringHeight", stringHeight);
		obj->exposeMethod("getStringBoundingBox", getStringBoundingBox);
		obj->exposeMethod("drawString", drawString);
		obj->exposeMethod("drawStringAsShapes", drawStringAsShapes);
		obj->exposeMethod("getCharacterAsPoints", getCharacterAsPoints);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		obj->exposeProperty("bLoadedOk", accGet_bLoadedOk, accSet_bLoadedOk);
		obj->exposeProperty("bAntiAlised", accGet_bAntiAlised, accSet_bAntiAlised);
		obj->exposeProperty("bFullCharacterSet", accGet_bFullCharacterSet, accSet_bFullCharacterSet);
		obj->exposeProperty("nCharacters", accGet_nCharacters, accSet_nCharacters);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofBaseApp);
namespace jof {
	v8::Handle<v8::Value> JofBaseApp::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseApp()
		ofBaseApp* fnRetVal = new jof::_D_ofBaseApp();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::setup(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void setup()
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->setup();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::update(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void update()
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->update();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::draw(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void draw()
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->draw();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::exit(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void exit()
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->exit();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::windowResized(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void windowResized(int w, int h)
		int w = bea::Convert<int>::FromJS(args[0], 0);
		int h = bea::Convert<int>::FromJS(args[1], 1);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->windowResized(w, h);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::keyPressed(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void keyPressed( int key )
		int key = bea::Convert<int>::FromJS(args[0], 0);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->keyPressed(key);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::keyReleased(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void keyReleased( int key )
		int key = bea::Convert<int>::FromJS(args[0], 0);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->keyReleased(key);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::mouseMoved(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void mouseMoved( int x, int y )
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->mouseMoved(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::mouseDragged(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//virtual void mouseDragged( int x, int y, int button )
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		int button = bea::Convert<int>::FromJS(args[2], 2);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->mouseDragged(x, y, button);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::mousePressed(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//virtual void mousePressed( int x, int y, int button )
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		int button = bea::Convert<int>::FromJS(args[2], 2);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->mousePressed(x, y, button);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::mouseReleased(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void mouseReleased(int x, int y, int button )
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2])) {
			int x = bea::Convert<int>::FromJS(args[0], 0);
			int y = bea::Convert<int>::FromJS(args[1], 1);
			int button = bea::Convert<int>::FromJS(args[2], 2);
			jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
			_this->mouseReleased(x, y, button);
			return args.This();
		}
		//virtual void mouseReleased()
		if (args.Length() == 0) {
			jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
			_this->mouseReleased();
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::audioReceived(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//virtual void audioReceived( float * input, int bufferSize, int nChannels )
		bea::external<float> input = bea::Convert<bea::external<float> >::FromJS(args[0], 0);
		int bufferSize = bea::Convert<int>::FromJS(args[1], 1);
		int nChannels = bea::Convert<int>::FromJS(args[2], 2);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->audioReceived(input, bufferSize, nChannels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::audioRequested(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//virtual void audioRequested( float * output, int bufferSize, int nChannels )
		bea::external<float> output = bea::Convert<bea::external<float> >::FromJS(args[0], 0);
		int bufferSize = bea::Convert<int>::FromJS(args[1], 1);
		int nChannels = bea::Convert<int>::FromJS(args[2], 2);
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->audioRequested(output, bufferSize, nChannels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofBaseApp::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	//Get Accessor mouseY (int)
	v8::Handle<v8::Value> JofBaseApp::accGet_mouseY( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->mouseY);
		return scope.Close(retVal);
	}
	
	//Set Accessor mouseY (int)
	void JofBaseApp::accSet_mouseY(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->mouseY = _accValue;
	}
	
	//Get Accessor mouseX (int)
	v8::Handle<v8::Value> JofBaseApp::accGet_mouseX( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->mouseX);
		return scope.Close(retVal);
	}
	
	//Set Accessor mouseX (int)
	void JofBaseApp::accSet_mouseX(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofBaseApp* _this = bea::Convert<jof::_D_ofBaseApp*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->mouseX = _accValue;
	}
	
	void JofBaseApp::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofBaseApp>* obj = EXPOSE_CLASS(jof::_D_ofBaseApp, "ofBaseApp");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("setup", setup);
		obj->exposeMethod("update", update);
		obj->exposeMethod("draw", draw);
		obj->exposeMethod("exit", exit);
		obj->exposeMethod("windowResized", windowResized);
		obj->exposeMethod("keyPressed", keyPressed);
		obj->exposeMethod("keyReleased", keyReleased);
		obj->exposeMethod("mouseMoved", mouseMoved);
		obj->exposeMethod("mouseDragged", mouseDragged);
		obj->exposeMethod("mousePressed", mousePressed);
		obj->exposeMethod("mouseReleased", mouseReleased);
		obj->exposeMethod("audioReceived", audioReceived);
		obj->exposeMethod("audioRequested", audioRequested);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		obj->exposeProperty("mouseY", accGet_mouseY, accSet_mouseY);
		obj->exposeProperty("mouseX", accGet_mouseX, accSet_mouseX);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofBaseApp::setup() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setup")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("setup", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setup();
	}
	
	void _D_ofBaseApp::update() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("update")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("update", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_update();
	}
	
	void _D_ofBaseApp::draw() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("draw", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw();
	}
	
	void _D_ofBaseApp::exit() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("exit")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("exit", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_exit();
	}
	
	void _D_ofBaseApp::windowResized(int w,  int h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("windowResized")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<int>::ToJS(w), bea::Convert<int>::ToJS(h)};
			v8retVal = bea_derived_callJS("windowResized", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_windowResized(w, h);
	}
	
	void _D_ofBaseApp::keyPressed(int key) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("keyPressed")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<int>::ToJS(key)};
			v8retVal = bea_derived_callJS("keyPressed", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_keyPressed(key);
	}
	
	void _D_ofBaseApp::keyReleased(int key) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("keyReleased")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<int>::ToJS(key)};
			v8retVal = bea_derived_callJS("keyReleased", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_keyReleased(key);
	}
	
	void _D_ofBaseApp::mouseMoved(int x,  int y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("mouseMoved")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<int>::ToJS(x), bea::Convert<int>::ToJS(y)};
			v8retVal = bea_derived_callJS("mouseMoved", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_mouseMoved(x, y);
	}
	
	void _D_ofBaseApp::mouseDragged(int x,  int y,  int button) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("mouseDragged")) {
			v8::Handle<v8::Value> v8args[3] = {bea::Convert<int>::ToJS(x), bea::Convert<int>::ToJS(y), bea::Convert<int>::ToJS(button)};
			v8retVal = bea_derived_callJS("mouseDragged", 3, v8args);
		}
		if (v8retVal.IsEmpty())  _d_mouseDragged(x, y, button);
	}
	
	void _D_ofBaseApp::mousePressed(int x,  int y,  int button) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("mousePressed")) {
			v8::Handle<v8::Value> v8args[3] = {bea::Convert<int>::ToJS(x), bea::Convert<int>::ToJS(y), bea::Convert<int>::ToJS(button)};
			v8retVal = bea_derived_callJS("mousePressed", 3, v8args);
		}
		if (v8retVal.IsEmpty())  _d_mousePressed(x, y, button);
	}
	
	void _D_ofBaseApp::mouseReleased() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("mouseReleased")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("mouseReleased", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_mouseReleased();
	}
	
	void _D_ofBaseApp::mouseReleased(int x,  int y,  int button) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("mouseReleased")) {
			v8::Handle<v8::Value> v8args[3] = {bea::Convert<int>::ToJS(x), bea::Convert<int>::ToJS(y), bea::Convert<int>::ToJS(button)};
			v8retVal = bea_derived_callJS("mouseReleased", 3, v8args);
		}
		if (v8retVal.IsEmpty())  _d_mouseReleased(x, y, button);
	}
	
	void _D_ofBaseApp::audioReceived(float * input,  int bufferSize,  int nChannels) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("audioReceived")) {
			v8::Handle<v8::Value> v8args[3] = {bea::Convert<bea::external<float> >::ToJS(input), bea::Convert<int>::ToJS(bufferSize), bea::Convert<int>::ToJS(nChannels)};
			v8retVal = bea_derived_callJS("audioReceived", 3, v8args);
		}
		if (v8retVal.IsEmpty())  _d_audioReceived(input, bufferSize, nChannels);
	}
	
	void _D_ofBaseApp::audioRequested(float * output,  int bufferSize,  int nChannels) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("audioRequested")) {
			v8::Handle<v8::Value> v8args[3] = {bea::Convert<bea::external<float> >::ToJS(output), bea::Convert<int>::ToJS(bufferSize), bea::Convert<int>::ToJS(nChannels)};
			v8retVal = bea_derived_callJS("audioRequested", 3, v8args);
		}
		if (v8retVal.IsEmpty())  _d_audioRequested(output, bufferSize, nChannels);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofAppBaseWindow);
namespace jof {
	v8::Handle<v8::Value> JofAppBaseWindow::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofAppBaseWindow()
		ofAppBaseWindow* fnRetVal = new jof::_D_ofAppBaseWindow();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::setupOpenGL(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//virtual void setupOpenGL(int w, int h, int screenMode)
		int w = bea::Convert<int>::FromJS(args[0], 0);
		int h = bea::Convert<int>::FromJS(args[1], 1);
		int screenMode = bea::Convert<int>::FromJS(args[2], 2);
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->setupOpenGL(w, h, screenMode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::initializeWindow(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void initializeWindow()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->initializeWindow();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::runAppViaInfiniteLoop(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void runAppViaInfiniteLoop(ofBaseApp * appPtr)
		ofBaseApp* appPtr = bea::Convert<ofBaseApp*>::FromJS(args[0], 0);
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->runAppViaInfiniteLoop(appPtr);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::hideCursor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void hideCursor()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->hideCursor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::showCursor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void showCursor()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->showCursor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::setWindowPosition(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setWindowPosition(int x, int y)
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->setWindowPosition(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::setWindowShape(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setWindowShape(int w, int h)
		int w = bea::Convert<int>::FromJS(args[0], 0);
		int h = bea::Convert<int>::FromJS(args[1], 1);
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->setWindowShape(w, h);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::getFrameNum(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual int  getFrameNum()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		int fnRetVal = _this->getFrameNum();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::getFrameRate(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getFrameRate()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getFrameRate();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::getLastFrameTime(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual double  getLastFrameTime()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		double fnRetVal = _this->getLastFrameTime();
		return bea::Convert<double>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::getWindowPosition(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofPoint getWindowPosition()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->getWindowPosition();
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::getWindowSize(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofPoint getWindowSize()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->getWindowSize();
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::getScreenSize(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofPoint getScreenSize()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->getScreenSize();
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::setFrameRate(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setFrameRate(float targetRate)
		float targetRate = bea::Convert<float>::FromJS(args[0], 0);
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->setFrameRate(targetRate);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::setWindowTitle(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setWindowTitle(string title)
		string title = bea::Convert<string>::FromJS(args[0], 0);
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->setWindowTitle(title);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::getWindowMode(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual int  getWindowMode()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		int fnRetVal = _this->getWindowMode();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::setFullscreen(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setFullscreen(bool fullscreen)
		bool fullscreen = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->setFullscreen(fullscreen);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::toggleFullscreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void toggleFullscreen()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->toggleFullscreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::enableSetupScreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void enableSetupScreen()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->enableSetupScreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::disableSetupScreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void disableSetupScreen()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->disableSetupScreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppBaseWindow::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofAppBaseWindow* _this = bea::Convert<jof::_D_ofAppBaseWindow*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	void JofAppBaseWindow::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofAppBaseWindow>* obj = EXPOSE_CLASS(jof::_D_ofAppBaseWindow, "ofAppBaseWindow");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("setupOpenGL", setupOpenGL);
		obj->exposeMethod("initializeWindow", initializeWindow);
		obj->exposeMethod("runAppViaInfiniteLoop", runAppViaInfiniteLoop);
		obj->exposeMethod("hideCursor", hideCursor);
		obj->exposeMethod("showCursor", showCursor);
		obj->exposeMethod("setWindowPosition", setWindowPosition);
		obj->exposeMethod("setWindowShape", setWindowShape);
		obj->exposeMethod("getFrameNum", getFrameNum);
		obj->exposeMethod("getFrameRate", getFrameRate);
		obj->exposeMethod("getLastFrameTime", getLastFrameTime);
		obj->exposeMethod("getWindowPosition", getWindowPosition);
		obj->exposeMethod("getWindowSize", getWindowSize);
		obj->exposeMethod("getScreenSize", getScreenSize);
		obj->exposeMethod("setFrameRate", setFrameRate);
		obj->exposeMethod("setWindowTitle", setWindowTitle);
		obj->exposeMethod("getWindowMode", getWindowMode);
		obj->exposeMethod("setFullscreen", setFullscreen);
		obj->exposeMethod("toggleFullscreen", toggleFullscreen);
		obj->exposeMethod("enableSetupScreen", enableSetupScreen);
		obj->exposeMethod("disableSetupScreen", disableSetupScreen);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofAppBaseWindow::setupOpenGL(int w,  int h,  int screenMode) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setupOpenGL")) {
			v8::Handle<v8::Value> v8args[3] = {bea::Convert<int>::ToJS(w), bea::Convert<int>::ToJS(h), bea::Convert<int>::ToJS(screenMode)};
			v8retVal = bea_derived_callJS("setupOpenGL", 3, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setupOpenGL(w, h, screenMode);
	}
	
	void _D_ofAppBaseWindow::initializeWindow() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("initializeWindow")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("initializeWindow", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_initializeWindow();
	}
	
	void _D_ofAppBaseWindow::runAppViaInfiniteLoop(ofBaseApp * appPtr) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("runAppViaInfiniteLoop")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<ofBaseApp*>::ToJS(appPtr)};
			v8retVal = bea_derived_callJS("runAppViaInfiniteLoop", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_runAppViaInfiniteLoop(appPtr);
	}
	
	void _D_ofAppBaseWindow::hideCursor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("hideCursor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("hideCursor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_hideCursor();
	}
	
	void _D_ofAppBaseWindow::showCursor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("showCursor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("showCursor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_showCursor();
	}
	
	void _D_ofAppBaseWindow::setWindowPosition(int x,  int y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setWindowPosition")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<int>::ToJS(x), bea::Convert<int>::ToJS(y)};
			v8retVal = bea_derived_callJS("setWindowPosition", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setWindowPosition(x, y);
	}
	
	void _D_ofAppBaseWindow::setWindowShape(int w,  int h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setWindowShape")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<int>::ToJS(w), bea::Convert<int>::ToJS(h)};
			v8retVal = bea_derived_callJS("setWindowShape", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setWindowShape(w, h);
	}
	
	int _D_ofAppBaseWindow::getFrameNum() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getFrameNum")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getFrameNum", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getFrameNum();
		return bea::Convert<int>::FromJS(v8retVal, 0);
	}
	
	float _D_ofAppBaseWindow::getFrameRate() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getFrameRate")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getFrameRate", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getFrameRate();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	double _D_ofAppBaseWindow::getLastFrameTime() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getLastFrameTime")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getLastFrameTime", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getLastFrameTime();
		return bea::Convert<double>::FromJS(v8retVal, 0);
	}
	
	ofPoint _D_ofAppBaseWindow::getWindowPosition() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWindowPosition")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWindowPosition", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWindowPosition();
		return bea::Convert<ofPoint>::FromJS(v8retVal, 0);
	}
	
	ofPoint _D_ofAppBaseWindow::getWindowSize() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWindowSize")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWindowSize", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWindowSize();
		return bea::Convert<ofPoint>::FromJS(v8retVal, 0);
	}
	
	ofPoint _D_ofAppBaseWindow::getScreenSize() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getScreenSize")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getScreenSize", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getScreenSize();
		return bea::Convert<ofPoint>::FromJS(v8retVal, 0);
	}
	
	void _D_ofAppBaseWindow::setFrameRate(float targetRate) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setFrameRate")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<float>::ToJS(targetRate)};
			v8retVal = bea_derived_callJS("setFrameRate", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setFrameRate(targetRate);
	}
	
	void _D_ofAppBaseWindow::setWindowTitle(string title) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setWindowTitle")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<string>::ToJS(title)};
			v8retVal = bea_derived_callJS("setWindowTitle", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setWindowTitle(title);
	}
	
	int _D_ofAppBaseWindow::getWindowMode() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWindowMode")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWindowMode", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWindowMode();
		return bea::Convert<int>::FromJS(v8retVal, 0);
	}
	
	void _D_ofAppBaseWindow::setFullscreen(bool fullscreen) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setFullscreen")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<bool>::ToJS(fullscreen)};
			v8retVal = bea_derived_callJS("setFullscreen", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setFullscreen(fullscreen);
	}
	
	void _D_ofAppBaseWindow::toggleFullscreen() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("toggleFullscreen")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("toggleFullscreen", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_toggleFullscreen();
	}
	
	void _D_ofAppBaseWindow::enableSetupScreen() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("enableSetupScreen")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("enableSetupScreen", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_enableSetupScreen();
	}
	
	void _D_ofAppBaseWindow::disableSetupScreen() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("disableSetupScreen")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("disableSetupScreen", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_disableSetupScreen();
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofAppGlutWindow);
namespace jof {
	v8::Handle<v8::Value> JofAppGlutWindow::setupOpenGL(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//virtual void setupOpenGL(int w, int h, int screenMode)
		int w = bea::Convert<int>::FromJS(args[0], 0);
		int h = bea::Convert<int>::FromJS(args[1], 1);
		int screenMode = bea::Convert<int>::FromJS(args[2], 2);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_setupOpenGL(w, h, screenMode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::initializeWindow(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void initializeWindow()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_initializeWindow();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::runAppViaInfiniteLoop(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void runAppViaInfiniteLoop(ofBaseApp * appPtr)
		ofBaseApp* appPtr = bea::Convert<ofBaseApp*>::FromJS(args[0], 0);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_runAppViaInfiniteLoop(appPtr);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::hideCursor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void hideCursor()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_hideCursor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::showCursor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void showCursor()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_showCursor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::setWindowPosition(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setWindowPosition(int x, int y)
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_setWindowPosition(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::setWindowShape(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setWindowShape(int w, int h)
		int w = bea::Convert<int>::FromJS(args[0], 0);
		int h = bea::Convert<int>::FromJS(args[1], 1);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_setWindowShape(w, h);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::getFrameNum(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual int  getFrameNum()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		int fnRetVal = _this->_d_getFrameNum();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::getFrameRate(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getFrameRate()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getFrameRate();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::getLastFrameTime(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual double  getLastFrameTime()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		double fnRetVal = _this->_d_getLastFrameTime();
		return bea::Convert<double>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::getWindowPosition(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofPoint getWindowPosition()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->_d_getWindowPosition();
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::getWindowSize(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofPoint getWindowSize()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->_d_getWindowSize();
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::getScreenSize(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofPoint getScreenSize()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		ofPoint fnRetVal = _this->_d_getScreenSize();
		return bea::Convert<ofPoint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::setFrameRate(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setFrameRate(float targetRate)
		float targetRate = bea::Convert<float>::FromJS(args[0], 0);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_setFrameRate(targetRate);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::setWindowTitle(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setWindowTitle(string title)
		string title = bea::Convert<string>::FromJS(args[0], 0);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_setWindowTitle(title);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::getWindowMode(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual int  getWindowMode()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		int fnRetVal = _this->_d_getWindowMode();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::setFullscreen(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setFullscreen(bool fullscreen)
		bool fullscreen = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_setFullscreen(fullscreen);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::toggleFullscreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void toggleFullscreen()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_toggleFullscreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::enableSetupScreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void enableSetupScreen()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_enableSetupScreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::disableSetupScreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void disableSetupScreen()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->_d_disableSetupScreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofAppGlutWindow()
		ofAppGlutWindow* fnRetVal = new jof::_D_ofAppGlutWindow();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::setGlutDisplayString(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setGlutDisplayString(string str)
		string str = bea::Convert<string>::FromJS(args[0], 0);
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(args.This(), 0);
		_this->setGlutDisplayString(str);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::exitApp(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//static void exitApp()
		_D_ofAppGlutWindow::exitApp();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::display(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//static void display()
		_D_ofAppGlutWindow::display();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::mouse_cb(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//static void mouse_cb(int button, int state, int x, int y)
		int button = bea::Convert<int>::FromJS(args[0], 0);
		int state = bea::Convert<int>::FromJS(args[1], 1);
		int x = bea::Convert<int>::FromJS(args[2], 2);
		int y = bea::Convert<int>::FromJS(args[3], 3);
		_D_ofAppGlutWindow::mouse_cb(button, state, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::motion_cb(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//static void motion_cb(int x, int y)
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		_D_ofAppGlutWindow::motion_cb(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::passive_motion_cb(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//static void passive_motion_cb(int x, int y)
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		_D_ofAppGlutWindow::passive_motion_cb(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::idle_cb(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//static void idle_cb()
		_D_ofAppGlutWindow::idle_cb();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::keyboard_cb(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//static void keyboard_cb(unsigned char key, int x, int y)
		unsigned char key = bea::Convert<unsigned char>::FromJS(args[0], 0);
		int x = bea::Convert<int>::FromJS(args[1], 1);
		int y = bea::Convert<int>::FromJS(args[2], 2);
		_D_ofAppGlutWindow::keyboard_cb(key, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::keyboard_up_cb(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//static void keyboard_up_cb(unsigned char key, int x, int y)
		unsigned char key = bea::Convert<unsigned char>::FromJS(args[0], 0);
		int x = bea::Convert<int>::FromJS(args[1], 1);
		int y = bea::Convert<int>::FromJS(args[2], 2);
		_D_ofAppGlutWindow::keyboard_up_cb(key, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::special_key_cb(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//static void special_key_cb(int key, int x, int y) 
		int key = bea::Convert<int>::FromJS(args[0], 0);
		int x = bea::Convert<int>::FromJS(args[1], 1);
		int y = bea::Convert<int>::FromJS(args[2], 2);
		_D_ofAppGlutWindow::special_key_cb(key, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::special_key_up_cb(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//static void special_key_up_cb(int key, int x, int y) 
		int key = bea::Convert<int>::FromJS(args[0], 0);
		int x = bea::Convert<int>::FromJS(args[1], 1);
		int y = bea::Convert<int>::FromJS(args[2], 2);
		_D_ofAppGlutWindow::special_key_up_cb(key, x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppGlutWindow::resize_cb(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//static void resize_cb(int w, int h)
		int w = bea::Convert<int>::FromJS(args[0], 0);
		int h = bea::Convert<int>::FromJS(args[1], 1);
		_D_ofAppGlutWindow::resize_cb(w, h);
		return args.This();
		METHOD_END();
	}
	
	//Get Accessor displayString (string)
	v8::Handle<v8::Value> JofAppGlutWindow::accGet_displayString( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<string>::ToJS(_this->displayString);
		return scope.Close(retVal);
	}
	
	//Set Accessor displayString (string)
	void JofAppGlutWindow::accSet_displayString(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofAppGlutWindow* _this = bea::Convert<jof::_D_ofAppGlutWindow*>::FromJS(info.Holder(), 0); 
		string _accValue = bea::Convert<string>::FromJS(v, 0);
		_this->displayString = _accValue;
	}
	
	void JofAppGlutWindow::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofAppGlutWindow>* obj = EXPOSE_CLASS(jof::_D_ofAppGlutWindow, "ofAppGlutWindow");
		//Exposed Methods
		obj->exposeMethod("setupOpenGL", setupOpenGL);
		obj->exposeMethod("initializeWindow", initializeWindow);
		obj->exposeMethod("runAppViaInfiniteLoop", runAppViaInfiniteLoop);
		obj->exposeMethod("hideCursor", hideCursor);
		obj->exposeMethod("showCursor", showCursor);
		obj->exposeMethod("setWindowPosition", setWindowPosition);
		obj->exposeMethod("setWindowShape", setWindowShape);
		obj->exposeMethod("getFrameNum", getFrameNum);
		obj->exposeMethod("getFrameRate", getFrameRate);
		obj->exposeMethod("getLastFrameTime", getLastFrameTime);
		obj->exposeMethod("getWindowPosition", getWindowPosition);
		obj->exposeMethod("getWindowSize", getWindowSize);
		obj->exposeMethod("getScreenSize", getScreenSize);
		obj->exposeMethod("setFrameRate", setFrameRate);
		obj->exposeMethod("setWindowTitle", setWindowTitle);
		obj->exposeMethod("getWindowMode", getWindowMode);
		obj->exposeMethod("setFullscreen", setFullscreen);
		obj->exposeMethod("toggleFullscreen", toggleFullscreen);
		obj->exposeMethod("enableSetupScreen", enableSetupScreen);
		obj->exposeMethod("disableSetupScreen", disableSetupScreen);
		obj->setPostAllocator(__postAllocator);
		obj->setConstructor(__constructor);
		obj->exposeMethod("setGlutDisplayString", setGlutDisplayString);
		obj->exposeMethod("exitApp", exitApp);
		obj->exposeMethod("display", display);
		obj->exposeMethod("mouse_cb", mouse_cb);
		obj->exposeMethod("motion_cb", motion_cb);
		obj->exposeMethod("passive_motion_cb", passive_motion_cb);
		obj->exposeMethod("idle_cb", idle_cb);
		obj->exposeMethod("keyboard_cb", keyboard_cb);
		obj->exposeMethod("keyboard_up_cb", keyboard_up_cb);
		obj->exposeMethod("special_key_cb", special_key_cb);
		obj->exposeMethod("special_key_up_cb", special_key_up_cb);
		obj->exposeMethod("resize_cb", resize_cb);
		//Accessors
		obj->exposeProperty("displayString", accGet_displayString, accSet_displayString);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofAppGlutWindow::setupOpenGL(int w,  int h,  int screenMode) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setupOpenGL")) {
			v8::Handle<v8::Value> v8args[3] = {bea::Convert<int>::ToJS(w), bea::Convert<int>::ToJS(h), bea::Convert<int>::ToJS(screenMode)};
			v8retVal = bea_derived_callJS("setupOpenGL", 3, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setupOpenGL(w, h, screenMode);
	}
	
	void _D_ofAppGlutWindow::initializeWindow() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("initializeWindow")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("initializeWindow", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_initializeWindow();
	}
	
	void _D_ofAppGlutWindow::runAppViaInfiniteLoop(ofBaseApp * appPtr) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("runAppViaInfiniteLoop")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<ofBaseApp*>::ToJS(appPtr)};
			v8retVal = bea_derived_callJS("runAppViaInfiniteLoop", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_runAppViaInfiniteLoop(appPtr);
	}
	
	void _D_ofAppGlutWindow::hideCursor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("hideCursor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("hideCursor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_hideCursor();
	}
	
	void _D_ofAppGlutWindow::showCursor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("showCursor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("showCursor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_showCursor();
	}
	
	void _D_ofAppGlutWindow::setWindowPosition(int x,  int y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setWindowPosition")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<int>::ToJS(x), bea::Convert<int>::ToJS(y)};
			v8retVal = bea_derived_callJS("setWindowPosition", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setWindowPosition(x, y);
	}
	
	void _D_ofAppGlutWindow::setWindowShape(int w,  int h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setWindowShape")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<int>::ToJS(w), bea::Convert<int>::ToJS(h)};
			v8retVal = bea_derived_callJS("setWindowShape", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setWindowShape(w, h);
	}
	
	int _D_ofAppGlutWindow::getFrameNum() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getFrameNum")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getFrameNum", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getFrameNum();
		return bea::Convert<int>::FromJS(v8retVal, 0);
	}
	
	float _D_ofAppGlutWindow::getFrameRate() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getFrameRate")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getFrameRate", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getFrameRate();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	double _D_ofAppGlutWindow::getLastFrameTime() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getLastFrameTime")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getLastFrameTime", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getLastFrameTime();
		return bea::Convert<double>::FromJS(v8retVal, 0);
	}
	
	ofPoint _D_ofAppGlutWindow::getWindowPosition() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWindowPosition")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWindowPosition", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWindowPosition();
		return bea::Convert<ofPoint>::FromJS(v8retVal, 0);
	}
	
	ofPoint _D_ofAppGlutWindow::getWindowSize() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWindowSize")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWindowSize", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWindowSize();
		return bea::Convert<ofPoint>::FromJS(v8retVal, 0);
	}
	
	ofPoint _D_ofAppGlutWindow::getScreenSize() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getScreenSize")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getScreenSize", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getScreenSize();
		return bea::Convert<ofPoint>::FromJS(v8retVal, 0);
	}
	
	void _D_ofAppGlutWindow::setFrameRate(float targetRate) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setFrameRate")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<float>::ToJS(targetRate)};
			v8retVal = bea_derived_callJS("setFrameRate", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setFrameRate(targetRate);
	}
	
	void _D_ofAppGlutWindow::setWindowTitle(string title) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setWindowTitle")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<string>::ToJS(title)};
			v8retVal = bea_derived_callJS("setWindowTitle", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setWindowTitle(title);
	}
	
	int _D_ofAppGlutWindow::getWindowMode() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWindowMode")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWindowMode", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWindowMode();
		return bea::Convert<int>::FromJS(v8retVal, 0);
	}
	
	void _D_ofAppGlutWindow::setFullscreen(bool fullscreen) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setFullscreen")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<bool>::ToJS(fullscreen)};
			v8retVal = bea_derived_callJS("setFullscreen", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setFullscreen(fullscreen);
	}
	
	void _D_ofAppGlutWindow::toggleFullscreen() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("toggleFullscreen")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("toggleFullscreen", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_toggleFullscreen();
	}
	
	void _D_ofAppGlutWindow::enableSetupScreen() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("enableSetupScreen")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("enableSetupScreen", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_enableSetupScreen();
	}
	
	void _D_ofAppGlutWindow::disableSetupScreen() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("disableSetupScreen")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("disableSetupScreen", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_disableSetupScreen();
	}
	
}

DECLARE_STATIC(jof::JofAppRunner);
namespace jof {
	v8::Handle<v8::Value> JofAppRunner::ofSetupOpenGL(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void   ofSetupOpenGL(ofAppBaseWindow * windowPtr, int w, int h, int screenMode)
		if (bea::Convert<ofAppBaseWindow*>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2]) && bea::Convert<int>::Is(args[3])) {
			ofAppBaseWindow* windowPtr = bea::Convert<ofAppBaseWindow*>::FromJS(args[0], 0);
			int w = bea::Convert<int>::FromJS(args[1], 1);
			int h = bea::Convert<int>::FromJS(args[2], 2);
			int screenMode = bea::Convert<int>::FromJS(args[3], 3);
			::ofSetupOpenGL(windowPtr, w, h, screenMode);
			return args.This();
		}
		//void   ofSetupOpenGL(int w, int h, int screenMode)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2])) {
			int w = bea::Convert<int>::FromJS(args[0], 0);
			int h = bea::Convert<int>::FromJS(args[1], 1);
			int screenMode = bea::Convert<int>::FromJS(args[2], 2);
			::ofSetupOpenGL(w, h, screenMode);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofRunApp(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void   ofRunApp(ofBaseApp * OFSA = NULL)
		ofBaseApp* OFSA = bea::Optional<ofBaseApp*>::FromJS(args, 0,  NULL);
		::ofRunApp(OFSA);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetAppPtr(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofBaseApp * ofGetAppPtr()
		ofBaseApp* fnRetVal = ::ofGetAppPtr();
		return bea::Convert<ofBaseApp*>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetFrameRate(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float   ofGetFrameRate()
		float fnRetVal = ::ofGetFrameRate();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetFrameNum(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetFrameNum()
		int fnRetVal = ::ofGetFrameNum();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofSetFrameRate(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void   ofSetFrameRate(int targetRate)
		int targetRate = bea::Convert<int>::FromJS(args[0], 0);
		::ofSetFrameRate(targetRate);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofSleepMillis(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  ofSleepMillis(int millis)
		int millis = bea::Convert<int>::FromJS(args[0], 0);
		::ofSleepMillis(millis);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetLastFrameTime(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//double  ofGetLastFrameTime()
		double fnRetVal = ::ofGetLastFrameTime();
		return bea::Convert<double>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofHideCursor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void   ofHideCursor()
		::ofHideCursor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofShowCursor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void   ofShowCursor()
		::ofShowCursor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetWindowPositionX(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetWindowPositionX()
		int fnRetVal = ::ofGetWindowPositionX();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetWindowPositionY(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetWindowPositionY()
		int fnRetVal = ::ofGetWindowPositionY();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetScreenWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetScreenWidth()
		int fnRetVal = ::ofGetScreenWidth();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetScreenHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetScreenHeight()
		int fnRetVal = ::ofGetScreenHeight();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetWindowMode(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetWindowMode()
		int fnRetVal = ::ofGetWindowMode();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetWidth()
		int fnRetVal = ::ofGetWidth();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofGetHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int   ofGetHeight()
		int fnRetVal = ::ofGetHeight();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofSetWindowPosition(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void   ofSetWindowPosition(int x, int y)
		int x = bea::Convert<int>::FromJS(args[0], 0);
		int y = bea::Convert<int>::FromJS(args[1], 1);
		::ofSetWindowPosition(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofSetWindowShape(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void   ofSetWindowShape(int width, int height)
		int width = bea::Convert<int>::FromJS(args[0], 0);
		int height = bea::Convert<int>::FromJS(args[1], 1);
		::ofSetWindowShape(width, height);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofSetWindowTitle(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void   ofSetWindowTitle(string title)
		string title = bea::Convert<string>::FromJS(args[0], 0);
		::ofSetWindowTitle(title);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofEnableSetupScreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  ofEnableSetupScreen()
		::ofEnableSetupScreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofDisableSetupScreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  ofDisableSetupScreen()
		::ofDisableSetupScreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofSetFullscreen(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  ofSetFullscreen(bool fullscreen)
		bool fullscreen = bea::Convert<bool>::FromJS(args[0], 0);
		::ofSetFullscreen(fullscreen);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofToggleFullscreen(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  ofToggleFullscreen()
		::ofToggleFullscreen();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofAppRunner::ofSetVerticalSync(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void   ofSetVerticalSync(bool bSync)
		bool bSync = bea::Convert<bool>::FromJS(args[0], 0);
		::ofSetVerticalSync(bSync);
		return args.This();
		METHOD_END();
	}
	
	void JofAppRunner::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedStatic<JofAppRunner>* obj = EXPOSE_STATIC(JofAppRunner, "ofAppRunner");
		//Exposed Methods
		obj->exposeMethod("ofSetupOpenGL", ofSetupOpenGL);
		obj->exposeMethod("ofRunApp", ofRunApp);
		obj->exposeMethod("ofGetAppPtr", ofGetAppPtr);
		obj->exposeMethod("ofGetFrameRate", ofGetFrameRate);
		obj->exposeMethod("ofGetFrameNum", ofGetFrameNum);
		obj->exposeMethod("ofSetFrameRate", ofSetFrameRate);
		obj->exposeMethod("ofSleepMillis", ofSleepMillis);
		obj->exposeMethod("ofGetLastFrameTime", ofGetLastFrameTime);
		obj->exposeMethod("ofHideCursor", ofHideCursor);
		obj->exposeMethod("ofShowCursor", ofShowCursor);
		obj->exposeMethod("ofGetWindowPositionX", ofGetWindowPositionX);
		obj->exposeMethod("ofGetWindowPositionY", ofGetWindowPositionY);
		obj->exposeMethod("ofGetScreenWidth", ofGetScreenWidth);
		obj->exposeMethod("ofGetScreenHeight", ofGetScreenHeight);
		obj->exposeMethod("ofGetWindowMode", ofGetWindowMode);
		obj->exposeMethod("ofGetWidth", ofGetWidth);
		obj->exposeMethod("ofGetHeight", ofGetHeight);
		obj->exposeMethod("ofSetWindowPosition", ofSetWindowPosition);
		obj->exposeMethod("ofSetWindowShape", ofSetWindowShape);
		obj->exposeMethod("ofSetWindowTitle", ofSetWindowTitle);
		obj->exposeMethod("ofEnableSetupScreen", ofEnableSetupScreen);
		obj->exposeMethod("ofDisableSetupScreen", ofDisableSetupScreen);
		obj->exposeMethod("ofSetFullscreen", ofSetFullscreen);
		obj->exposeMethod("ofToggleFullscreen", ofToggleFullscreen);
		obj->exposeMethod("ofSetVerticalSync", ofSetVerticalSync);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_STATIC(jof::JofSoundPlayerG);
namespace jof {
	v8::Handle<v8::Value> JofSoundPlayerG::ofSoundStopAll(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSoundStopAll()
		::ofSoundStopAll();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayerG::ofSoundSetVolume(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void ofSoundSetVolume(float vol)
		float vol = bea::Convert<float>::FromJS(args[0], 0);
		::ofSoundSetVolume(vol);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayerG::ofSoundUpdate(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSoundUpdate()
		::ofSoundUpdate();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayerG::ofSoundGetSpectrum(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//float * ofSoundGetSpectrum(int nBands)
		int nBands = bea::Convert<int>::FromJS(args[0], 0);
		bea::external<float> fnRetVal = ::ofSoundGetSpectrum(nBands);
		return bea::Convert<bea::external<float> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	void JofSoundPlayerG::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedStatic<JofSoundPlayerG>* obj = EXPOSE_STATIC(JofSoundPlayerG, "ofSoundPlayerG");
		//Exposed Methods
		obj->exposeMethod("ofSoundStopAll", ofSoundStopAll);
		obj->exposeMethod("ofSoundSetVolume", ofSoundSetVolume);
		obj->exposeMethod("ofSoundUpdate", ofSoundUpdate);
		obj->exposeMethod("ofSoundGetSpectrum", ofSoundGetSpectrum);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(ofSoundPlayer);
namespace jof {
	v8::Handle<v8::Value> JofSoundPlayer::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofSoundPlayer()
		ofSoundPlayer* fnRetVal = new ofSoundPlayer();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::loadSound(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void loadSound(string fileName, bool stream = false)
		string fileName = bea::Convert<string>::FromJS(args[0], 0);
		bool stream = bea::Optional<bool>::FromJS(args, 1,  false);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->loadSound(fileName, stream);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::unloadSound(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void unloadSound()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->unloadSound();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::play(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void play()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->play();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::stop(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void stop()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->stop();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::setVolume(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setVolume(float vol)
		float vol = bea::Convert<float>::FromJS(args[0], 0);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->setVolume(vol);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::setPan(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setPan(float vol)
		float vol = bea::Convert<float>::FromJS(args[0], 0);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->setPan(vol);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::setSpeed(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setSpeed(float spd)
		float spd = bea::Convert<float>::FromJS(args[0], 0);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->setSpeed(spd);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::setPaused(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setPaused(bool bP)
		bool bP = bea::Convert<bool>::FromJS(args[0], 0);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->setPaused(bP);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::setLoop(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setLoop(bool bLp)
		bool bLp = bea::Convert<bool>::FromJS(args[0], 0);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->setLoop(bLp);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::setMultiPlay(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setMultiPlay(bool bMp)
		bool bMp = bea::Convert<bool>::FromJS(args[0], 0);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->setMultiPlay(bMp);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::setPosition(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void setPosition(float pct)
		float pct = bea::Convert<float>::FromJS(args[0], 0);
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		_this->setPosition(pct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::getPosition(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float getPosition()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getPosition();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::getIsPlaying(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool getIsPlaying()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->getIsPlaying();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::getSpeed(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float getSpeed()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getSpeed();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::getPan(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float getPan()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getPan();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::initializeFmod(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//static void initializeFmod()
		ofSoundPlayer::initializeFmod();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::closeFmod(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//static void closeFmod()
		ofSoundPlayer::closeFmod();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundPlayer::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(args.This(), 0);
		return args.This();
		METHOD_END();
	}
	
	//Get Accessor isStreaming (bool)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_isStreaming( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->isStreaming);
		return scope.Close(retVal);
	}
	
	//Set Accessor isStreaming (bool)
	void JofSoundPlayer::accSet_isStreaming(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->isStreaming = _accValue;
	}
	
	//Get Accessor bMultiPlay (bool)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_bMultiPlay( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bMultiPlay);
		return scope.Close(retVal);
	}
	
	//Set Accessor bMultiPlay (bool)
	void JofSoundPlayer::accSet_bMultiPlay(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bMultiPlay = _accValue;
	}
	
	//Get Accessor bLoop (bool)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_bLoop( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bLoop);
		return scope.Close(retVal);
	}
	
	//Set Accessor bLoop (bool)
	void JofSoundPlayer::accSet_bLoop(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bLoop = _accValue;
	}
	
	//Get Accessor bLoadedOk (bool)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_bLoadedOk( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bLoadedOk);
		return scope.Close(retVal);
	}
	
	//Set Accessor bLoadedOk (bool)
	void JofSoundPlayer::accSet_bLoadedOk(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bLoadedOk = _accValue;
	}
	
	//Get Accessor bPaused (bool)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_bPaused( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bPaused);
		return scope.Close(retVal);
	}
	
	//Set Accessor bPaused (bool)
	void JofSoundPlayer::accSet_bPaused(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bPaused = _accValue;
	}
	
	//Get Accessor pan (float)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_pan( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<float>::ToJS(_this->pan);
		return scope.Close(retVal);
	}
	
	//Set Accessor pan (float)
	void JofSoundPlayer::accSet_pan(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		float _accValue = bea::Convert<float>::FromJS(v, 0);
		_this->pan = _accValue;
	}
	
	//Get Accessor volume (float)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_volume( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<float>::ToJS(_this->volume);
		return scope.Close(retVal);
	}
	
	//Set Accessor volume (float)
	void JofSoundPlayer::accSet_volume(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		float _accValue = bea::Convert<float>::FromJS(v, 0);
		_this->volume = _accValue;
	}
	
	//Get Accessor internalFreq (float)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_internalFreq( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<float>::ToJS(_this->internalFreq);
		return scope.Close(retVal);
	}
	
	//Set Accessor internalFreq (float)
	void JofSoundPlayer::accSet_internalFreq(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		float _accValue = bea::Convert<float>::FromJS(v, 0);
		_this->internalFreq = _accValue;
	}
	
	//Get Accessor speed (float)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_speed( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<float>::ToJS(_this->speed);
		return scope.Close(retVal);
	}
	
	//Set Accessor speed (float)
	void JofSoundPlayer::accSet_speed(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		float _accValue = bea::Convert<float>::FromJS(v, 0);
		_this->speed = _accValue;
	}
	
	//Get Accessor length (unsigned)
	v8::Handle<v8::Value> JofSoundPlayer::accGet_length( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<unsigned>::ToJS(_this->length);
		return scope.Close(retVal);
	}
	
	//Set Accessor length (unsigned)
	void JofSoundPlayer::accSet_length(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		ofSoundPlayer* _this = bea::Convert<ofSoundPlayer*>::FromJS(info.Holder(), 0); 
		unsigned _accValue = bea::Convert<unsigned>::FromJS(v, 0);
		_this->length = _accValue;
	}
	
	void JofSoundPlayer::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<ofSoundPlayer>* obj = EXPOSE_CLASS(ofSoundPlayer, "");
		//Exposed Methods
		obj->setConstructor(__constructor);
		obj->exposeMethod("loadSound", loadSound);
		obj->exposeMethod("unloadSound", unloadSound);
		obj->exposeMethod("play", play);
		obj->exposeMethod("stop", stop);
		obj->exposeMethod("setVolume", setVolume);
		obj->exposeMethod("setPan", setPan);
		obj->exposeMethod("setSpeed", setSpeed);
		obj->exposeMethod("setPaused", setPaused);
		obj->exposeMethod("setLoop", setLoop);
		obj->exposeMethod("setMultiPlay", setMultiPlay);
		obj->exposeMethod("setPosition", setPosition);
		obj->exposeMethod("getPosition", getPosition);
		obj->exposeMethod("getIsPlaying", getIsPlaying);
		obj->exposeMethod("getSpeed", getSpeed);
		obj->exposeMethod("getPan", getPan);
		obj->exposeMethod("initializeFmod", initializeFmod);
		obj->exposeMethod("closeFmod", closeFmod);
		obj->setPostAllocator(__postAllocator);
		//Accessors
		obj->exposeProperty("isStreaming", accGet_isStreaming, accSet_isStreaming);
		obj->exposeProperty("bMultiPlay", accGet_bMultiPlay, accSet_bMultiPlay);
		obj->exposeProperty("bLoop", accGet_bLoop, accSet_bLoop);
		obj->exposeProperty("bLoadedOk", accGet_bLoadedOk, accSet_bLoadedOk);
		obj->exposeProperty("bPaused", accGet_bPaused, accSet_bPaused);
		obj->exposeProperty("pan", accGet_pan, accSet_pan);
		obj->exposeProperty("volume", accGet_volume, accSet_volume);
		obj->exposeProperty("internalFreq", accGet_internalFreq, accSet_internalFreq);
		obj->exposeProperty("speed", accGet_speed, accSet_speed);
		obj->exposeProperty("length", accGet_length, accSet_length);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_STATIC(jof::JofSoundStream);
namespace jof {
	v8::Handle<v8::Value> JofSoundStream::ofSoundStreamSetup(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void ofSoundStreamSetup(int nOutputChannels, int nInputChannels, ofBaseApp * OFSA, int sampleRate, int bufferSize, int nBuffers)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<ofBaseApp*>::Is(args[2]) && bea::Convert<int>::Is(args[3]) && bea::Convert<int>::Is(args[4]) && bea::Convert<int>::Is(args[5])) {
			int nOutputChannels = bea::Convert<int>::FromJS(args[0], 0);
			int nInputChannels = bea::Convert<int>::FromJS(args[1], 1);
			ofBaseApp* OFSA = bea::Convert<ofBaseApp*>::FromJS(args[2], 2);
			int sampleRate = bea::Convert<int>::FromJS(args[3], 3);
			int bufferSize = bea::Convert<int>::FromJS(args[4], 4);
			int nBuffers = bea::Convert<int>::FromJS(args[5], 5);
			::ofSoundStreamSetup(nOutputChannels, nInputChannels, OFSA, sampleRate, bufferSize, nBuffers);
			return args.This();
		}
		//void ofSoundStreamSetup(int nOutputChannels, int nInputChannels, int sampleRate, int bufferSize, int nBuffers)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Convert<int>::Is(args[2]) && bea::Convert<int>::Is(args[3]) && bea::Convert<int>::Is(args[4])) {
			int nOutputChannels = bea::Convert<int>::FromJS(args[0], 0);
			int nInputChannels = bea::Convert<int>::FromJS(args[1], 1);
			int sampleRate = bea::Convert<int>::FromJS(args[2], 2);
			int bufferSize = bea::Convert<int>::FromJS(args[3], 3);
			int nBuffers = bea::Convert<int>::FromJS(args[4], 4);
			::ofSoundStreamSetup(nOutputChannels, nInputChannels, sampleRate, bufferSize, nBuffers);
			return args.This();
		}
		//void ofSoundStreamSetup(int nOutputChannels, int nInputChannels, ofBaseApp * OFSA = NULL)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1]) && bea::Optional<ofBaseApp*>::Is(args, 2)) {
			int nOutputChannels = bea::Convert<int>::FromJS(args[0], 0);
			int nInputChannels = bea::Convert<int>::FromJS(args[1], 1);
			ofBaseApp* OFSA = bea::Optional<ofBaseApp*>::FromJS(args, 2,  NULL);
			::ofSoundStreamSetup(nOutputChannels, nInputChannels, OFSA);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundStream::ofSoundStreamStop(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSoundStreamStop()
		::ofSoundStreamStop();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundStream::ofSoundStreamStart(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSoundStreamStart()
		::ofSoundStreamStart();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundStream::ofSoundStreamClose(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSoundStreamClose()
		::ofSoundStreamClose();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofSoundStream::ofSoundStreamListDevices(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void ofSoundStreamListDevices()
		::ofSoundStreamListDevices();
		return args.This();
		METHOD_END();
	}
	
	void JofSoundStream::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedStatic<JofSoundStream>* obj = EXPOSE_STATIC(JofSoundStream, "ofSoundStream");
		//Exposed Methods
		obj->exposeMethod("ofSoundStreamSetup", ofSoundStreamSetup);
		obj->exposeMethod("ofSoundStreamStop", ofSoundStreamStop);
		obj->exposeMethod("ofSoundStreamStart", ofSoundStreamStart);
		obj->exposeMethod("ofSoundStreamClose", ofSoundStreamClose);
		obj->exposeMethod("ofSoundStreamListDevices", ofSoundStreamListDevices);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

DECLARE_EXPOSED_CLASS(jof::_D_ofVideoPlayer);
namespace jof {
	v8::Handle<v8::Value> JofVideoPlayer::draw(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void draw(float x,float y,float w, float h) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1]) && bea::Convert<float>::Is(args[2]) && bea::Convert<float>::Is(args[3])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			float w = bea::Convert<float>::FromJS(args[2], 2);
			float h = bea::Convert<float>::FromJS(args[3], 3);
			jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y, w, h);
			return args.This();
		}
		//virtual void draw(float x,float y) = 0
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
			_this->_d_draw(x, y);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getHeight(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getHeight() = 0
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getHeight();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getWidth(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual float getWidth() = 0
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->_d_getWidth();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setAnchorPercent(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPercent(float xPct, float yPct)
		float xPct = bea::Convert<float>::FromJS(args[0], 0);
		float yPct = bea::Convert<float>::FromJS(args[1], 1);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->_d_setAnchorPercent(xPct, yPct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setAnchorPoint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//virtual void setAnchorPoint(float x, float y)
		if (bea::Convert<float>::Is(args[0]) && bea::Convert<float>::Is(args[1])) {
			float x = bea::Convert<float>::FromJS(args[0], 0);
			float y = bea::Convert<float>::FromJS(args[1], 1);
			jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
			_this->_d_setAnchorPoint(x, y);
			return args.This();
		}
		//void    setAnchorPoint(int x, int y)
		if (bea::Convert<int>::Is(args[0]) && bea::Convert<int>::Is(args[1])) {
			int x = bea::Convert<int>::FromJS(args[0], 0);
			int y = bea::Convert<int>::FromJS(args[1], 1);
			jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
			_this->setAnchorPoint(x, y);
			return args.This();
		}
		return v8::ThrowException(v8::Exception::Error(v8::String::New(("Could not determine overload from supplied arguments"))));
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::resetAnchor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void resetAnchor()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->_d_resetAnchor();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::__postAllocator(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void __postAllocator()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->bea_derived_setInstance(args.This());
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getTextureReference(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual ofTexture & getTextureReference()=0
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		ofTexture* fnRetVal = new ofTexture(_this->_d_getTextureReference());
		return bea::Convert<ofTexture*>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setUseTexture(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//virtual void setUseTexture(bool bUseTex)=0
		bool bUseTex = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->_d_setUseTexture(bUseTex);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getPixels(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual unsigned char * getPixels()=0
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		bea::external<unsigned char> fnRetVal = _this->_d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::update(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void update() = 0
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->_d_update();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::isFrameNew(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual bool isFrameNew()=0
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->_d_isFrameNew();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::close(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//virtual void close()=0
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->_d_close();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::__constructor(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//ofVideoPlayer ()
		ofVideoPlayer* fnRetVal = new jof::_D_ofVideoPlayer();
		return v8::External::New(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::loadMovie(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//bool     loadMovie(string name)
		string name = bea::Convert<string>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->loadMovie(name);
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::closeMovie(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void     closeMovie()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->closeMovie();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::idleMovie(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void     idleMovie()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->idleMovie();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::play(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void     play()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->play();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::stop(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void     stop()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->stop();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getPosition(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float     getPosition()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getPosition();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getSpeed(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float     getSpeed()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getSpeed();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getDuration(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//float     getDuration()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		float fnRetVal = _this->getDuration();
		return bea::Convert<float>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getIsMovieDone(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool    getIsMovieDone()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->getIsMovieDone();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setPosition(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void     setPosition(float pct)
		float pct = bea::Convert<float>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->setPosition(pct);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setVolume(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void     setVolume(int volume)
		int volume = bea::Convert<int>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->setVolume(volume);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setLoopState(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void     setLoopState(int state)
		int state = bea::Convert<int>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->setLoopState(state);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setSpeed(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void       setSpeed(float speed)
		float speed = bea::Convert<float>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->setSpeed(speed);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setFrame(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void    setFrame(int frame)
		int frame = bea::Convert<int>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->setFrame(frame);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::setPaused(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void     setPaused(bool bPause)
		bool bPause = bea::Convert<bool>::FromJS(args[0], 0);
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->setPaused(bPause);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getCurrentFrame(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int     getCurrentFrame()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		int fnRetVal = _this->getCurrentFrame();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::getTotalNumFrames(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//int     getTotalNumFrames()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		int fnRetVal = _this->getTotalNumFrames();
		return bea::Convert<int>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::firstFrame(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void    firstFrame()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->firstFrame();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::nextFrame(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void    nextFrame()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->nextFrame();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::previousFrame(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void    previousFrame()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		_this->previousFrame();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::isPaused(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool    isPaused()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->isPaused();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::isLoaded(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool    isLoaded()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->isLoaded();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JofVideoPlayer::isPlaying(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//bool    isPlaying()
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(args.This(), 0);
		bool fnRetVal = _this->isPlaying();
		return bea::Convert<bool>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	//Get Accessor height (int)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_height( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->height);
		return scope.Close(retVal);
	}
	
	//Set Accessor height (int)
	void JofVideoPlayer::accSet_height(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->height = _accValue;
	}
	
	//Get Accessor width (int)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_width( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->width);
		return scope.Close(retVal);
	}
	
	//Set Accessor width (int)
	void JofVideoPlayer::accSet_width(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->width = _accValue;
	}
	
	//Get Accessor speed (float)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_speed( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<float>::ToJS(_this->speed);
		return scope.Close(retVal);
	}
	
	//Set Accessor speed (float)
	void JofVideoPlayer::accSet_speed(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		float _accValue = bea::Convert<float>::FromJS(v, 0);
		_this->speed = _accValue;
	}
	
	//Get Accessor bLoaded (bool)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_bLoaded( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bLoaded);
		return scope.Close(retVal);
	}
	
	//Set Accessor bLoaded (bool)
	void JofVideoPlayer::accSet_bLoaded(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bLoaded = _accValue;
	}
	
	//Get Accessor currentLoopState (int)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_currentLoopState( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->currentLoopState);
		return scope.Close(retVal);
	}
	
	//Set Accessor currentLoopState (int)
	void JofVideoPlayer::accSet_currentLoopState(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->currentLoopState = _accValue;
	}
	
	//Get Accessor nFrames (int)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_nFrames( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<int>::ToJS(_this->nFrames);
		return scope.Close(retVal);
	}
	
	//Set Accessor nFrames (int)
	void JofVideoPlayer::accSet_nFrames(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		int _accValue = bea::Convert<int>::FromJS(v, 0);
		_this->nFrames = _accValue;
	}
	
	//Get Accessor pixels (bea::external<unsigned char>)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_pixels( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bea::external<unsigned char> >::ToJS(_this->pixels);
		return scope.Close(retVal);
	}
	
	//Set Accessor pixels (bea::external<unsigned char>)
	void JofVideoPlayer::accSet_pixels(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		bea::external<unsigned char> _accValue = bea::Convert<bea::external<unsigned char> >::FromJS(v, 0);
		_this->pixels = _accValue;
	}
	
	//Get Accessor bHavePixelsChanged (bool)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_bHavePixelsChanged( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bHavePixelsChanged);
		return scope.Close(retVal);
	}
	
	//Set Accessor bHavePixelsChanged (bool)
	void JofVideoPlayer::accSet_bHavePixelsChanged(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bHavePixelsChanged = _accValue;
	}
	
	//Get Accessor tex (ofTexture*)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_tex( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<ofTexture*>::ToJS(&_this->tex);
		return scope.Close(retVal);
	}
	
	//Set Accessor tex (ofTexture*)
	void JofVideoPlayer::accSet_tex(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		ofTexture* _accValue = bea::Convert<ofTexture*>::FromJS(v, 0);
		_this->tex = *_accValue;
	}
	
	//Get Accessor bUseTexture (bool)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_bUseTexture( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->bUseTexture);
		return scope.Close(retVal);
	}
	
	//Set Accessor bUseTexture (bool)
	void JofVideoPlayer::accSet_bUseTexture(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->bUseTexture = _accValue;
	}
	
	//Get Accessor allocated (bool)
	v8::Handle<v8::Value> JofVideoPlayer::accGet_allocated( v8::Local<v8::String> prop, const v8::AccessorInfo& info) {
		v8::HandleScope scope; 
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		v8::Handle<v8::Value> retVal = bea::Convert<bool>::ToJS(_this->allocated);
		return scope.Close(retVal);
	}
	
	//Set Accessor allocated (bool)
	void JofVideoPlayer::accSet_allocated(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info) {
		v8::HandleScope scope;
		jof::_D_ofVideoPlayer* _this = bea::Convert<jof::_D_ofVideoPlayer*>::FromJS(info.Holder(), 0); 
		bool _accValue = bea::Convert<bool>::FromJS(v, 0);
		_this->allocated = _accValue;
	}
	
	void JofVideoPlayer::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedClass<jof::_D_ofVideoPlayer>* obj = EXPOSE_CLASS(jof::_D_ofVideoPlayer, "ofVideoPlayer");
		//Exposed Methods
		obj->exposeMethod("draw", draw);
		obj->exposeMethod("getHeight", getHeight);
		obj->exposeMethod("getWidth", getWidth);
		obj->exposeMethod("setAnchorPercent", setAnchorPercent);
		obj->exposeMethod("setAnchorPoint", setAnchorPoint);
		obj->exposeMethod("resetAnchor", resetAnchor);
		obj->setPostAllocator(__postAllocator);
		obj->exposeMethod("getTextureReference", getTextureReference);
		obj->exposeMethod("setUseTexture", setUseTexture);
		obj->exposeMethod("getPixels", getPixels);
		obj->exposeMethod("update", update);
		obj->exposeMethod("isFrameNew", isFrameNew);
		obj->exposeMethod("close", close);
		obj->setConstructor(__constructor);
		obj->exposeMethod("loadMovie", loadMovie);
		obj->exposeMethod("closeMovie", closeMovie);
		obj->exposeMethod("idleMovie", idleMovie);
		obj->exposeMethod("play", play);
		obj->exposeMethod("stop", stop);
		obj->exposeMethod("getPosition", getPosition);
		obj->exposeMethod("getSpeed", getSpeed);
		obj->exposeMethod("getDuration", getDuration);
		obj->exposeMethod("getIsMovieDone", getIsMovieDone);
		obj->exposeMethod("setPosition", setPosition);
		obj->exposeMethod("setVolume", setVolume);
		obj->exposeMethod("setLoopState", setLoopState);
		obj->exposeMethod("setSpeed", setSpeed);
		obj->exposeMethod("setFrame", setFrame);
		obj->exposeMethod("setPaused", setPaused);
		obj->exposeMethod("getCurrentFrame", getCurrentFrame);
		obj->exposeMethod("getTotalNumFrames", getTotalNumFrames);
		obj->exposeMethod("firstFrame", firstFrame);
		obj->exposeMethod("nextFrame", nextFrame);
		obj->exposeMethod("previousFrame", previousFrame);
		obj->exposeMethod("isPaused", isPaused);
		obj->exposeMethod("isLoaded", isLoaded);
		obj->exposeMethod("isPlaying", isPlaying);
		//Accessors
		obj->exposeProperty("height", accGet_height, accSet_height);
		obj->exposeProperty("width", accGet_width, accSet_width);
		obj->exposeProperty("speed", accGet_speed, accSet_speed);
		obj->exposeProperty("bLoaded", accGet_bLoaded, accSet_bLoaded);
		obj->exposeProperty("currentLoopState", accGet_currentLoopState, accSet_currentLoopState);
		obj->exposeProperty("nFrames", accGet_nFrames, accSet_nFrames);
		obj->exposeProperty("pixels", accGet_pixels, accSet_pixels);
		obj->exposeProperty("bHavePixelsChanged", accGet_bHavePixelsChanged, accSet_bHavePixelsChanged);
		obj->exposeProperty("tex", accGet_tex, accSet_tex);
		obj->exposeProperty("bUseTexture", accGet_bUseTexture, accSet_bUseTexture);
		obj->exposeProperty("allocated", accGet_allocated, accSet_allocated);
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
	void _D_ofVideoPlayer::draw(float x, float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("draw", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y);
	}
	
	void _D_ofVideoPlayer::draw(float x, float y, float w,  float h) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("draw")) {
			v8::Handle<v8::Value> v8args[4] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y), bea::Convert<float>::ToJS(w), bea::Convert<float>::ToJS(h)};
			v8retVal = bea_derived_callJS("draw", 4, v8args);
		}
		if (v8retVal.IsEmpty())  _d_draw(x, y, w, h);
	}
	
	float _D_ofVideoPlayer::getHeight() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getHeight")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getHeight", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getHeight();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	float _D_ofVideoPlayer::getWidth() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getWidth")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getWidth", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getWidth();
		return bea::Convert<float>::FromJS(v8retVal, 0);
	}
	
	void _D_ofVideoPlayer::setAnchorPercent(float xPct,  float yPct) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPercent")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(xPct), bea::Convert<float>::ToJS(yPct)};
			v8retVal = bea_derived_callJS("setAnchorPercent", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPercent(xPct, yPct);
	}
	
	void _D_ofVideoPlayer::setAnchorPoint(float x,  float y) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setAnchorPoint")) {
			v8::Handle<v8::Value> v8args[2] = {bea::Convert<float>::ToJS(x), bea::Convert<float>::ToJS(y)};
			v8retVal = bea_derived_callJS("setAnchorPoint", 2, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setAnchorPoint(x, y);
	}
	
	void _D_ofVideoPlayer::resetAnchor() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("resetAnchor")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("resetAnchor", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_resetAnchor();
	}
	
	ofTexture& _D_ofVideoPlayer::getTextureReference() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getTextureReference")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getTextureReference", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getTextureReference();
		return *bea::Convert<ofTexture*>::FromJS(v8retVal, 0);
	}
	
	void _D_ofVideoPlayer::setUseTexture(bool bUseTex) {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("setUseTexture")) {
			v8::Handle<v8::Value> v8args[1] = {bea::Convert<bool>::ToJS(bUseTex)};
			v8retVal = bea_derived_callJS("setUseTexture", 1, v8args);
		}
		if (v8retVal.IsEmpty())  _d_setUseTexture(bUseTex);
	}
	
	unsigned char* _D_ofVideoPlayer::getPixels() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("getPixels")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("getPixels", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_getPixels();
		return bea::Convert<bea::external<unsigned char> >::FromJS(v8retVal, 0);
	}
	
	void _D_ofVideoPlayer::update() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("update")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("update", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_update();
	}
	
	bool _D_ofVideoPlayer::isFrameNew() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("isFrameNew")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("isFrameNew", 0, v8args);
		}
		if (v8retVal.IsEmpty()) return _d_isFrameNew();
		return bea::Convert<bool>::FromJS(v8retVal, 0);
	}
	
	void _D_ofVideoPlayer::close() {
		v8::Locker v8locker;
		v8::HandleScope v8scope; v8::Handle<v8::Value> v8retVal;
		if (bea_derived_hasOverride("close")) {
			v8::Handle<v8::Value> v8args[1];
			v8retVal = bea_derived_callJS("close", 0, v8args);
		}
		if (v8retVal.IsEmpty())  _d_close();
	}
	
}

namespace jof {
	void ExposeConstants(v8::Handle<v8::Object> target) {
		BEA_DEFINE_CONSTANT(target, OF_VERSION);
		BEA_DEFINE_CONSTANT(target, OF_LOOP_NONE);
		BEA_DEFINE_CONSTANT(target, OF_LOOP_PALINDROME);
		BEA_DEFINE_CONSTANT(target, OF_LOOP_NORMAL);
		BEA_DEFINE_CONSTANT(target, OF_LOG_VERBOSE);
		BEA_DEFINE_CONSTANT(target, OF_LOG_NOTICE);
		BEA_DEFINE_CONSTANT(target, OF_LOG_WARNING);
		BEA_DEFINE_CONSTANT(target, OF_LOG_ERROR);
		BEA_DEFINE_CONSTANT(target, OF_LOG_FATAL_ERROR);
		BEA_DEFINE_CONSTANT(target, OF_LOG_SILENT);
		BEA_DEFINE_CONSTANT(target, PI);
		BEA_DEFINE_CONSTANT(target, TWO_PI);
		BEA_DEFINE_CONSTANT(target, M_TWO_PI);
		BEA_DEFINE_CONSTANT(target, FOUR_PI);
		BEA_DEFINE_CONSTANT(target, HALF_PI);
		BEA_DEFINE_CONSTANT(target, DEG_TO_RAD);
		BEA_DEFINE_CONSTANT(target, RAD_TO_DEG);
		BEA_DEFINE_CONSTANT(target, OF_FILLED);
		BEA_DEFINE_CONSTANT(target, OF_OUTLINE);
		BEA_DEFINE_CONSTANT(target, OF_WINDOW);
		BEA_DEFINE_CONSTANT(target, OF_FULLSCREEN);
		BEA_DEFINE_CONSTANT(target, OF_GAME_MODE);
		BEA_DEFINE_CONSTANT(target, OF_RECTMODE_CORNER);
		BEA_DEFINE_CONSTANT(target, OF_RECTMODE_CENTER);
		BEA_DEFINE_CONSTANT(target, OF_IMAGE_GRAYSCALE);
		BEA_DEFINE_CONSTANT(target, OF_IMAGE_COLOR);
		BEA_DEFINE_CONSTANT(target, OF_IMAGE_COLOR_ALPHA);
		BEA_DEFINE_CONSTANT(target, OF_IMAGE_UNDEFINED);
		BEA_DEFINE_CONSTANT(target, OF_MAX_STYLE_HISTORY);
		BEA_DEFINE_CONSTANT(target, OF_MAX_CIRCLE_PTS);
		BEA_DEFINE_CONSTANT(target, OF_POLY_WINDING_ODD);
		BEA_DEFINE_CONSTANT(target, OF_POLY_WINDING_NONZERO);
		BEA_DEFINE_CONSTANT(target, OF_POLY_WINDING_POSITIVE);
		BEA_DEFINE_CONSTANT(target, OF_POLY_WINDING_NEGATIVE);
		BEA_DEFINE_CONSTANT(target, OF_POLY_WINDING_ABS_GEQ_TWO);
		BEA_DEFINE_CONSTANT(target, OF_CLOSE);
		BEA_DEFINE_CONSTANT(target, OF_KEY_MODIFIER);
		BEA_DEFINE_CONSTANT(target, OF_KEY_RETURN);
		BEA_DEFINE_CONSTANT(target, OF_KEY_ESC);
		BEA_DEFINE_CONSTANT(target, OF_KEY_BACKSPACE);
		BEA_DEFINE_CONSTANT(target, OF_KEY_DEL);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F1);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F2);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F3);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F4);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F5);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F6);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F7);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F8);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F9);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F10);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F11);
		BEA_DEFINE_CONSTANT(target, OF_KEY_F12);
		BEA_DEFINE_CONSTANT(target, OF_KEY_LEFT);
		BEA_DEFINE_CONSTANT(target, OF_KEY_UP);
		BEA_DEFINE_CONSTANT(target, OF_KEY_RIGHT);
		BEA_DEFINE_CONSTANT(target, OF_KEY_DOWN);
		BEA_DEFINE_CONSTANT(target, OF_KEY_PAGE_UP);
		BEA_DEFINE_CONSTANT(target, OF_KEY_PAGE_DOWN);
		BEA_DEFINE_CONSTANT(target, OF_KEY_HOME);
		BEA_DEFINE_CONSTANT(target, OF_KEY_END);
		BEA_DEFINE_CONSTANT(target, OF_KEY_INSERT);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_RESTORE);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_BLACK);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_RED);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_GREEN);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_YELLOW);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_BLUE);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_PURPLE);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_CYAN);
		BEA_DEFINE_CONSTANT(target, OF_CONSOLE_COLOR_WHITE);
		BEA_DEFINE_CONSTANT(target, OF_COMPRESS_NONE);
		BEA_DEFINE_CONSTANT(target, OF_COMPRESS_SRGB);
		BEA_DEFINE_CONSTANT(target, OF_COMPRESS_ARB);
		BEA_DEFINE_CONSTANT(target, CIRC_RESOLUTION);
		BEA_DEFINE_CONSTANT(target, TTF_SHAPE_SIMPLIFICATION_AMNT);
		BEA_DEFINE_CONSTANT(target, NUM_CHARACTER_TO_START);
	}
	
}

namespace jof {
	void Project::expose(v8::Handle<v8::Object> target) {
		JofMath::_InitJSObject(target);
		JofUtils::_InitJSObject(target);
		JIndexable::_InitJSObject(target);
		JBeaBuffer::_InitJSObject(target);
		JofBaseDraws::_InitJSObject(target);
		JofBaseUpdates::_InitJSObject(target);
		JofBaseHasTexture::_InitJSObject(target);
		JofBaseHasPixels::_InitJSObject(target);
		JofBaseImage::_InitJSObject(target);
		JofBaseVideo::_InitJSObject(target);
		JofImage::_InitJSObject(target);
		JofTexture::_InitJSObject(target);
		JofGraphics::_InitJSObject(target);
		JofTTFContour::_InitJSObject(target);
		JofTTFCharacter::_InitJSObject(target);
		JofTrueTypeFont::_InitJSObject(target);
		JofBaseApp::_InitJSObject(target);
		JofAppBaseWindow::_InitJSObject(target);
		JofAppGlutWindow::_InitJSObject(target);
		JofAppRunner::_InitJSObject(target);
		JofSoundPlayerG::_InitJSObject(target);
		JofSoundPlayer::_InitJSObject(target);
		JofSoundStream::_InitJSObject(target);
		JofVideoPlayer::_InitJSObject(target);
		ExposeConstants(target);
	}
	
}
