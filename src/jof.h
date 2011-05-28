#ifndef JOF_H
#define JOF_H
#include <bea.h>
#include "openf.h"
namespace jof {
	class JofMath {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> ofNextPow2(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSeedRandom(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRandom(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRandomf(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRandomuf(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofNormalize(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofMap(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofClamp(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofLerp(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDist(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDistSquared(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSign(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofInRange(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRadToDeg(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDegToRad(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofLerpDegrees(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofLerpRadians(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofAngleDifferenceDegrees(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofAngleDifferenceRadians(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRandomWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRandomHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofNoise(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSignedNoise(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofInsidePoly(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofLineSegmentIntersection(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofBezierPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofCurvePoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofBezierTangent(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofCurveTangent(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofUtils {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> ofNextPow2(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofResetElapsedTimeCounter(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetElapsedTimef(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetElapsedTimeMillis(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetFrameNum(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetSeconds(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetMinutes(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetHours(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetSystemTime(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetYear(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetMonth(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetDay(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetWeekday(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofLaunchBrowser(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEnableDataPath(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDisableDataPath(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofToDataPath(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetDataPathRoot(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofToString(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofToInt(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofToFloat(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetVersionInfo(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSaveScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSaveFrame(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSplitString(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetLogLevel(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofLog(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetConsoleColor(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRestoreConsoleColor(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JIndexable {
		protected:
			//Destructor
			static void __destructor(v8::Handle<v8::Value> value);
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> setPtr(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JBeaBuffer {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			static v8::Handle<v8::Value> ptr(const v8::Arguments& args);
			static v8::Handle<v8::Value> size(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_length(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_length(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofBaseDraws {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> draw(const v8::Arguments& args);
			static v8::Handle<v8::Value> getHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPercent(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> resetAnchor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofBaseDraws : public ofBaseDraws, public bea::DerivedClass {
		public:
			_D_ofBaseDraws() : ofBaseDraws(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_draw(float x, float y) {
				throw bea::Exception("'draw' : pure virtual function not defined.");
			}
			
			inline void _d_draw(float x, float y, float w,  float h) {
				throw bea::Exception("'draw' : pure virtual function not defined.");
			}
			
			inline float _d_getHeight() {
				throw bea::Exception("'getHeight' : pure virtual function not defined.");
			}
			
			inline float _d_getWidth() {
				throw bea::Exception("'getWidth' : pure virtual function not defined.");
			}
			
			inline void _d_setAnchorPercent(float xPct,  float yPct) {
				 ofBaseDraws::setAnchorPercent(xPct, yPct);
			}
			
			inline void _d_setAnchorPoint(float x,  float y) {
				 ofBaseDraws::setAnchorPoint(x, y);
			}
			
			inline void _d_resetAnchor() {
				 ofBaseDraws::resetAnchor();
			}
			
			//Native: These virtual functions will only be called from native code
			void draw(float x, float y);
			void draw(float x, float y, float w,  float h);
			float getHeight();
			float getWidth();
			void setAnchorPercent(float xPct,  float yPct);
			void setAnchorPoint(float x,  float y);
			void resetAnchor();
	};
	
}

namespace jof {
	class JofBaseUpdates {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> update(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofBaseUpdates : public ofBaseUpdates, public bea::DerivedClass {
		public:
			_D_ofBaseUpdates() : ofBaseUpdates(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_update() {
				throw bea::Exception("'update' : pure virtual function not defined.");
			}
			
			//Native: These virtual functions will only be called from native code
			void update();
	};
	
}

namespace jof {
	class JofBaseHasTexture {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> getTextureReference(const v8::Arguments& args);
			static v8::Handle<v8::Value> setUseTexture(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofBaseHasTexture : public ofBaseHasTexture, public bea::DerivedClass {
		public:
			_D_ofBaseHasTexture() : ofBaseHasTexture(){}
			//JS: These virtual functions will only be called from Javascript
			inline ofTexture& _d_getTextureReference() {
				throw bea::Exception("'getTextureReference' : pure virtual function not defined.");
			}
			
			inline void _d_setUseTexture(bool bUseTex) {
				throw bea::Exception("'setUseTexture' : pure virtual function not defined.");
			}
			
			//Native: These virtual functions will only be called from native code
			ofTexture& getTextureReference();
			void setUseTexture(bool bUseTex);
	};
	
}

namespace jof {
	class JofBaseHasPixels {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPixels(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofBaseHasPixels : public ofBaseHasPixels, public bea::DerivedClass {
		public:
			_D_ofBaseHasPixels() : ofBaseHasPixels(){}
			//JS: These virtual functions will only be called from Javascript
			inline unsigned char* _d_getPixels() {
				throw bea::Exception("'getPixels' : pure virtual function not defined.");
			}
			
			//Native: These virtual functions will only be called from native code
			unsigned char* getPixels();
	};
	
}

namespace jof {
	class JofBaseImage {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> draw(const v8::Arguments& args);
			static v8::Handle<v8::Value> getHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPercent(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> resetAnchor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			static v8::Handle<v8::Value> getTextureReference(const v8::Arguments& args);
			static v8::Handle<v8::Value> setUseTexture(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPixels(const v8::Arguments& args);
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofBaseImage : public ofBaseImage, public bea::DerivedClass {
		public:
			_D_ofBaseImage() : ofBaseImage(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_draw(float x, float y) {
				throw bea::Exception("'draw' : pure virtual function not defined.");
			}
			
			inline void _d_draw(float x, float y, float w,  float h) {
				throw bea::Exception("'draw' : pure virtual function not defined.");
			}
			
			inline float _d_getHeight() {
				throw bea::Exception("'getHeight' : pure virtual function not defined.");
			}
			
			inline float _d_getWidth() {
				throw bea::Exception("'getWidth' : pure virtual function not defined.");
			}
			
			inline void _d_setAnchorPercent(float xPct,  float yPct) {
				 ofBaseImage::setAnchorPercent(xPct, yPct);
			}
			
			inline void _d_setAnchorPoint(float x,  float y) {
				 ofBaseImage::setAnchorPoint(x, y);
			}
			
			inline void _d_resetAnchor() {
				 ofBaseImage::resetAnchor();
			}
			
			inline ofTexture& _d_getTextureReference() {
				throw bea::Exception("'getTextureReference' : pure virtual function not defined.");
			}
			
			inline void _d_setUseTexture(bool bUseTex) {
				throw bea::Exception("'setUseTexture' : pure virtual function not defined.");
			}
			
			inline unsigned char* _d_getPixels() {
				throw bea::Exception("'getPixels' : pure virtual function not defined.");
			}
			
			//Native: These virtual functions will only be called from native code
			void draw(float x, float y);
			void draw(float x, float y, float w,  float h);
			float getHeight();
			float getWidth();
			void setAnchorPercent(float xPct,  float yPct);
			void setAnchorPoint(float x,  float y);
			void resetAnchor();
			ofTexture& getTextureReference();
			void setUseTexture(bool bUseTex);
			unsigned char* getPixels();
	};
	
}

namespace jof {
	class JofBaseVideo {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> draw(const v8::Arguments& args);
			static v8::Handle<v8::Value> getHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPercent(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> resetAnchor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			static v8::Handle<v8::Value> getTextureReference(const v8::Arguments& args);
			static v8::Handle<v8::Value> setUseTexture(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPixels(const v8::Arguments& args);
			static v8::Handle<v8::Value> update(const v8::Arguments& args);
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> isFrameNew(const v8::Arguments& args);
			static v8::Handle<v8::Value> close(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofBaseVideo : public ofBaseVideo, public bea::DerivedClass {
		public:
			_D_ofBaseVideo() : ofBaseVideo(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_draw(float x, float y) {
				throw bea::Exception("'draw' : pure virtual function not defined.");
			}
			
			inline void _d_draw(float x, float y, float w,  float h) {
				throw bea::Exception("'draw' : pure virtual function not defined.");
			}
			
			inline float _d_getHeight() {
				throw bea::Exception("'getHeight' : pure virtual function not defined.");
			}
			
			inline float _d_getWidth() {
				throw bea::Exception("'getWidth' : pure virtual function not defined.");
			}
			
			inline void _d_setAnchorPercent(float xPct,  float yPct) {
				 ofBaseVideo::setAnchorPercent(xPct, yPct);
			}
			
			inline void _d_setAnchorPoint(float x,  float y) {
				 ofBaseVideo::setAnchorPoint(x, y);
			}
			
			inline void _d_resetAnchor() {
				 ofBaseVideo::resetAnchor();
			}
			
			inline ofTexture& _d_getTextureReference() {
				throw bea::Exception("'getTextureReference' : pure virtual function not defined.");
			}
			
			inline void _d_setUseTexture(bool bUseTex) {
				throw bea::Exception("'setUseTexture' : pure virtual function not defined.");
			}
			
			inline unsigned char* _d_getPixels() {
				throw bea::Exception("'getPixels' : pure virtual function not defined.");
			}
			
			inline void _d_update() {
				throw bea::Exception("'update' : pure virtual function not defined.");
			}
			
			inline bool _d_isFrameNew() {
				throw bea::Exception("'isFrameNew' : pure virtual function not defined.");
			}
			
			inline void _d_close() {
				throw bea::Exception("'close' : pure virtual function not defined.");
			}
			
			//Native: These virtual functions will only be called from native code
			void draw(float x, float y);
			void draw(float x, float y, float w,  float h);
			float getHeight();
			float getWidth();
			void setAnchorPercent(float xPct,  float yPct);
			void setAnchorPoint(float x,  float y);
			void resetAnchor();
			ofTexture& getTextureReference();
			void setUseTexture(bool bUseTex);
			unsigned char* getPixels();
			void update();
			bool isFrameNew();
			void close();
	};
	
}

namespace jof {
	class JofImage {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> draw(const v8::Arguments& args);
			static v8::Handle<v8::Value> getHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPercent(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> resetAnchor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			static v8::Handle<v8::Value> getTextureReference(const v8::Arguments& args);
			static v8::Handle<v8::Value> setUseTexture(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPixels(const v8::Arguments& args);
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> allocate(const v8::Arguments& args);
			static v8::Handle<v8::Value> clear(const v8::Arguments& args);
			static v8::Handle<v8::Value> clone(const v8::Arguments& args);
			static v8::Handle<v8::Value> loadImage(const v8::Arguments& args);
			static v8::Handle<v8::Value> saveImage(const v8::Arguments& args);
			static v8::Handle<v8::Value> setCompression(const v8::Arguments& args);
			static v8::Handle<v8::Value> setFromPixels(const v8::Arguments& args);
			static v8::Handle<v8::Value> setImageType(const v8::Arguments& args);
			static v8::Handle<v8::Value> resize(const v8::Arguments& args);
			static v8::Handle<v8::Value> grabScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> update(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_width(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_height(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bpp(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_type(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_width(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_height(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bpp(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_type(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofImage : public ofImage, public bea::DerivedClass {
		public:
			_D_ofImage() : ofImage(){}
			_D_ofImage(const ofImage& mom) : ofImage(mom){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_draw(float x, float y) {
				 ofImage::draw(x, y);
			}
			
			inline void _d_draw(float x, float y, float w,  float h) {
				 ofImage::draw(x, y, w, h);
			}
			
			inline float _d_getHeight() {
				return ofImage::getHeight();
			}
			
			inline float _d_getWidth() {
				return ofImage::getWidth();
			}
			
			inline void _d_setAnchorPercent(float xPct,  float yPct) {
				 ofImage::setAnchorPercent(xPct, yPct);
			}
			
			inline void _d_setAnchorPoint(float x,  float y) {
				 ofImage::setAnchorPoint(x, y);
			}
			
			inline void _d_resetAnchor() {
				 ofImage::resetAnchor();
			}
			
			inline ofTexture& _d_getTextureReference() {
				return ofImage::getTextureReference();
			}
			
			inline void _d_setUseTexture(bool bUseTex) {
				 ofImage::setUseTexture(bUseTex);
			}
			
			inline unsigned char* _d_getPixels() {
				return ofImage::getPixels();
			}
			
			//Native: These virtual functions will only be called from native code
			void draw(float x, float y);
			void draw(float x, float y, float w,  float h);
			float getHeight();
			float getWidth();
			void setAnchorPercent(float xPct,  float yPct);
			void setAnchorPoint(float x,  float y);
			void resetAnchor();
			ofTexture& getTextureReference();
			void setUseTexture(bool bUseTex);
			unsigned char* getPixels();
	};
	
}

namespace jof {
	class JofTexture {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> draw(const v8::Arguments& args);
			static v8::Handle<v8::Value> getHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPercent(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> resetAnchor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> allocate(const v8::Arguments& args);
			static v8::Handle<v8::Value> clear(const v8::Arguments& args);
			static v8::Handle<v8::Value> loadData(const v8::Arguments& args);
			static v8::Handle<v8::Value> loadScreenData(const v8::Arguments& args);
			static v8::Handle<v8::Value> bind(const v8::Arguments& args);
			static v8::Handle<v8::Value> unbind(const v8::Arguments& args);
			static v8::Handle<v8::Value> getCoordFromPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> getCoordFromPercent(const v8::Arguments& args);
			static v8::Handle<v8::Value> setTextureWrap(const v8::Arguments& args);
			static v8::Handle<v8::Value> setTextureMinMagFilter(const v8::Arguments& args);
			static v8::Handle<v8::Value> setCompression(const v8::Arguments& args);
			static v8::Handle<v8::Value> bAllocated(const v8::Arguments& args);
			static v8::Handle<v8::Value> getTextureData(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_texData(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_texData(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofTexture : public ofTexture, public bea::DerivedClass {
		public:
			_D_ofTexture() : ofTexture(){}
			_D_ofTexture(const ofTexture& mom) : ofTexture(mom){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_draw(float x, float y) {
				 ofTexture::draw(x, y);
			}
			
			inline void _d_draw(float x, float y, float w,  float h) {
				 ofTexture::draw(x, y, w, h);
			}
			
			inline float _d_getHeight() {
				return ofTexture::getHeight();
			}
			
			inline float _d_getWidth() {
				return ofTexture::getWidth();
			}
			
			inline void _d_setAnchorPercent(float xPct,  float yPct) {
				 ofTexture::setAnchorPercent(xPct, yPct);
			}
			
			inline void _d_setAnchorPoint(float x,  float y) {
				 ofTexture::setAnchorPoint(x, y);
			}
			
			inline void _d_resetAnchor() {
				 ofTexture::resetAnchor();
			}
			
			//Native: These virtual functions will only be called from native code
			void draw(float x, float y);
			void draw(float x, float y, float w,  float h);
			float getHeight();
			float getWidth();
			void setAnchorPercent(float xPct,  float yPct);
			void setAnchorPoint(float x,  float y);
			void resetAnchor();
	};
	
}

namespace jof {
	class JofGraphics {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> ofBgColorPtr(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofBackground(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetBackgroundAuto(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetRectMode(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetUsingArbTex(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEnableArbTex(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDisableArbTex(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetUsingNormalizedTexCoords(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEnableNormalizedTexCoords(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDisableNormalizedTexCoords(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetTextureWrap(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetUsingCustomTextureWrap(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRestoreTextureWrap(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetMinMagFilters(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetUsingCustomMinMagFilters(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRestoreMinMagFilters(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofbClearBg(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetRectMode(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetCurveResolution(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofTriangle(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofCircle(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEllipse(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofLine(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRect(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetCircleResolution(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofCurve(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofBezier(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofNoFill(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofFill(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetLineWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetColor(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEnableAlphaBlending(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDisableAlphaBlending(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEnableSmoothing(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDisableSmoothing(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetStyle(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetStyle(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofPushStyle(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofPopStyle(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofPushMatrix(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofPopMatrix(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofTranslate(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofScale(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRotate(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRotateX(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRotateY(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRotateZ(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDrawBitmapString(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetupGraphicDefaults(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetupScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofCurveVertex(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofBezierVertex(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetPolyMode(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofBeginShape(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofVertex(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEndShape(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofNextContour(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofTTFContour {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_pts(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_pts(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofTTFCharacter {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_contours(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_contours(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofTrueTypeFont {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> loadFont(const v8::Arguments& args);
			static v8::Handle<v8::Value> getLineHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> setLineHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> stringWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> stringHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> getStringBoundingBox(const v8::Arguments& args);
			static v8::Handle<v8::Value> drawString(const v8::Arguments& args);
			static v8::Handle<v8::Value> drawStringAsShapes(const v8::Arguments& args);
			static v8::Handle<v8::Value> getCharacterAsPoints(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_bLoadedOk(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bAntiAlised(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bFullCharacterSet(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_nCharacters(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_bLoadedOk(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bAntiAlised(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bFullCharacterSet(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_nCharacters(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofBaseApp {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> setup(const v8::Arguments& args);
			static v8::Handle<v8::Value> update(const v8::Arguments& args);
			static v8::Handle<v8::Value> draw(const v8::Arguments& args);
			static v8::Handle<v8::Value> exit(const v8::Arguments& args);
			static v8::Handle<v8::Value> windowResized(const v8::Arguments& args);
			static v8::Handle<v8::Value> keyPressed(const v8::Arguments& args);
			static v8::Handle<v8::Value> keyReleased(const v8::Arguments& args);
			static v8::Handle<v8::Value> mouseMoved(const v8::Arguments& args);
			static v8::Handle<v8::Value> mouseDragged(const v8::Arguments& args);
			static v8::Handle<v8::Value> mousePressed(const v8::Arguments& args);
			static v8::Handle<v8::Value> mouseReleased(const v8::Arguments& args);
			static v8::Handle<v8::Value> audioReceived(const v8::Arguments& args);
			static v8::Handle<v8::Value> audioRequested(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_mouseY(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_mouseX(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_mouseY(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_mouseX(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofBaseApp : public ofBaseApp, public bea::DerivedClass {
		public:
			_D_ofBaseApp() : ofBaseApp(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_setup() {
				 ofBaseApp::setup();
			}
			
			inline void _d_update() {
				 ofBaseApp::update();
			}
			
			inline void _d_draw() {
				 ofBaseApp::draw();
			}
			
			inline void _d_exit() {
				 ofBaseApp::exit();
			}
			
			inline void _d_windowResized(int w,  int h) {
				 ofBaseApp::windowResized(w, h);
			}
			
			inline void _d_keyPressed(int key) {
				 ofBaseApp::keyPressed(key);
			}
			
			inline void _d_keyReleased(int key) {
				 ofBaseApp::keyReleased(key);
			}
			
			inline void _d_mouseMoved(int x,  int y) {
				 ofBaseApp::mouseMoved(x, y);
			}
			
			inline void _d_mouseDragged(int x,  int y,  int button) {
				 ofBaseApp::mouseDragged(x, y, button);
			}
			
			inline void _d_mousePressed(int x,  int y,  int button) {
				 ofBaseApp::mousePressed(x, y, button);
			}
			
			inline void _d_mouseReleased() {
				 ofBaseApp::mouseReleased();
			}
			
			inline void _d_mouseReleased(int x,  int y,  int button) {
				 ofBaseApp::mouseReleased(x, y, button);
			}
			
			inline void _d_audioReceived(float * input,  int bufferSize,  int nChannels) {
				 ofBaseApp::audioReceived(input, bufferSize, nChannels);
			}
			
			inline void _d_audioRequested(float * output,  int bufferSize,  int nChannels) {
				 ofBaseApp::audioRequested(output, bufferSize, nChannels);
			}
			
			//Native: These virtual functions will only be called from native code
			void setup();
			void update();
			void draw();
			void exit();
			void windowResized(int w,  int h);
			void keyPressed(int key);
			void keyReleased(int key);
			void mouseMoved(int x,  int y);
			void mouseDragged(int x,  int y,  int button);
			void mousePressed(int x,  int y,  int button);
			void mouseReleased();
			void mouseReleased(int x,  int y,  int button);
			void audioReceived(float * input,  int bufferSize,  int nChannels);
			void audioRequested(float * output,  int bufferSize,  int nChannels);
	};
	
}

namespace jof {
	class JofAppBaseWindow {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> setupOpenGL(const v8::Arguments& args);
			static v8::Handle<v8::Value> initializeWindow(const v8::Arguments& args);
			static v8::Handle<v8::Value> runAppViaInfiniteLoop(const v8::Arguments& args);
			static v8::Handle<v8::Value> hideCursor(const v8::Arguments& args);
			static v8::Handle<v8::Value> showCursor(const v8::Arguments& args);
			static v8::Handle<v8::Value> setWindowPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> setWindowShape(const v8::Arguments& args);
			static v8::Handle<v8::Value> getFrameNum(const v8::Arguments& args);
			static v8::Handle<v8::Value> getFrameRate(const v8::Arguments& args);
			static v8::Handle<v8::Value> getLastFrameTime(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWindowPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWindowSize(const v8::Arguments& args);
			static v8::Handle<v8::Value> getScreenSize(const v8::Arguments& args);
			static v8::Handle<v8::Value> setFrameRate(const v8::Arguments& args);
			static v8::Handle<v8::Value> setWindowTitle(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWindowMode(const v8::Arguments& args);
			static v8::Handle<v8::Value> setFullscreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> toggleFullscreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> enableSetupScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> disableSetupScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofAppBaseWindow : public ofAppBaseWindow, public bea::DerivedClass {
		public:
			_D_ofAppBaseWindow() : ofAppBaseWindow(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_setupOpenGL(int w,  int h,  int screenMode) {
				 ofAppBaseWindow::setupOpenGL(w, h, screenMode);
			}
			
			inline void _d_initializeWindow() {
				 ofAppBaseWindow::initializeWindow();
			}
			
			inline void _d_runAppViaInfiniteLoop(ofBaseApp * appPtr) {
				 ofAppBaseWindow::runAppViaInfiniteLoop(appPtr);
			}
			
			inline void _d_hideCursor() {
				 ofAppBaseWindow::hideCursor();
			}
			
			inline void _d_showCursor() {
				 ofAppBaseWindow::showCursor();
			}
			
			inline void _d_setWindowPosition(int x,  int y) {
				 ofAppBaseWindow::setWindowPosition(x, y);
			}
			
			inline void _d_setWindowShape(int w,  int h) {
				 ofAppBaseWindow::setWindowShape(w, h);
			}
			
			inline int _d_getFrameNum() {
				return ofAppBaseWindow::getFrameNum();
			}
			
			inline float _d_getFrameRate() {
				return ofAppBaseWindow::getFrameRate();
			}
			
			inline double _d_getLastFrameTime() {
				return ofAppBaseWindow::getLastFrameTime();
			}
			
			inline ofPoint _d_getWindowPosition() {
				return ofAppBaseWindow::getWindowPosition();
			}
			
			inline ofPoint _d_getWindowSize() {
				return ofAppBaseWindow::getWindowSize();
			}
			
			inline ofPoint _d_getScreenSize() {
				return ofAppBaseWindow::getScreenSize();
			}
			
			inline void _d_setFrameRate(float targetRate) {
				 ofAppBaseWindow::setFrameRate(targetRate);
			}
			
			inline void _d_setWindowTitle(string title) {
				 ofAppBaseWindow::setWindowTitle(title);
			}
			
			inline int _d_getWindowMode() {
				return ofAppBaseWindow::getWindowMode();
			}
			
			inline void _d_setFullscreen(bool fullscreen) {
				 ofAppBaseWindow::setFullscreen(fullscreen);
			}
			
			inline void _d_toggleFullscreen() {
				 ofAppBaseWindow::toggleFullscreen();
			}
			
			inline void _d_enableSetupScreen() {
				 ofAppBaseWindow::enableSetupScreen();
			}
			
			inline void _d_disableSetupScreen() {
				 ofAppBaseWindow::disableSetupScreen();
			}
			
			//Native: These virtual functions will only be called from native code
			void setupOpenGL(int w,  int h,  int screenMode);
			void initializeWindow();
			void runAppViaInfiniteLoop(ofBaseApp * appPtr);
			void hideCursor();
			void showCursor();
			void setWindowPosition(int x,  int y);
			void setWindowShape(int w,  int h);
			int getFrameNum();
			float getFrameRate();
			double getLastFrameTime();
			ofPoint getWindowPosition();
			ofPoint getWindowSize();
			ofPoint getScreenSize();
			void setFrameRate(float targetRate);
			void setWindowTitle(string title);
			int getWindowMode();
			void setFullscreen(bool fullscreen);
			void toggleFullscreen();
			void enableSetupScreen();
			void disableSetupScreen();
	};
	
}

namespace jof {
	class JofAppGlutWindow {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> setupOpenGL(const v8::Arguments& args);
			static v8::Handle<v8::Value> initializeWindow(const v8::Arguments& args);
			static v8::Handle<v8::Value> runAppViaInfiniteLoop(const v8::Arguments& args);
			static v8::Handle<v8::Value> hideCursor(const v8::Arguments& args);
			static v8::Handle<v8::Value> showCursor(const v8::Arguments& args);
			static v8::Handle<v8::Value> setWindowPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> setWindowShape(const v8::Arguments& args);
			static v8::Handle<v8::Value> getFrameNum(const v8::Arguments& args);
			static v8::Handle<v8::Value> getFrameRate(const v8::Arguments& args);
			static v8::Handle<v8::Value> getLastFrameTime(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWindowPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWindowSize(const v8::Arguments& args);
			static v8::Handle<v8::Value> getScreenSize(const v8::Arguments& args);
			static v8::Handle<v8::Value> setFrameRate(const v8::Arguments& args);
			static v8::Handle<v8::Value> setWindowTitle(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWindowMode(const v8::Arguments& args);
			static v8::Handle<v8::Value> setFullscreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> toggleFullscreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> enableSetupScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> disableSetupScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> setGlutDisplayString(const v8::Arguments& args);
			static v8::Handle<v8::Value> exitApp(const v8::Arguments& args);
			static v8::Handle<v8::Value> display(const v8::Arguments& args);
			static v8::Handle<v8::Value> mouse_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> motion_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> passive_motion_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> idle_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> keyboard_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> keyboard_up_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> special_key_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> special_key_up_cb(const v8::Arguments& args);
			static v8::Handle<v8::Value> resize_cb(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_displayString(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_displayString(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofAppGlutWindow : public ofAppGlutWindow, public bea::DerivedClass {
		public:
			_D_ofAppGlutWindow() : ofAppGlutWindow(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_setupOpenGL(int w,  int h,  int screenMode) {
				 ofAppGlutWindow::setupOpenGL(w, h, screenMode);
			}
			
			inline void _d_initializeWindow() {
				 ofAppGlutWindow::initializeWindow();
			}
			
			inline void _d_runAppViaInfiniteLoop(ofBaseApp * appPtr) {
				 ofAppGlutWindow::runAppViaInfiniteLoop(appPtr);
			}
			
			inline void _d_hideCursor() {
				 ofAppGlutWindow::hideCursor();
			}
			
			inline void _d_showCursor() {
				 ofAppGlutWindow::showCursor();
			}
			
			inline void _d_setWindowPosition(int x,  int y) {
				 ofAppGlutWindow::setWindowPosition(x, y);
			}
			
			inline void _d_setWindowShape(int w,  int h) {
				 ofAppGlutWindow::setWindowShape(w, h);
			}
			
			inline int _d_getFrameNum() {
				return ofAppGlutWindow::getFrameNum();
			}
			
			inline float _d_getFrameRate() {
				return ofAppGlutWindow::getFrameRate();
			}
			
			inline double _d_getLastFrameTime() {
				return ofAppGlutWindow::getLastFrameTime();
			}
			
			inline ofPoint _d_getWindowPosition() {
				return ofAppGlutWindow::getWindowPosition();
			}
			
			inline ofPoint _d_getWindowSize() {
				return ofAppGlutWindow::getWindowSize();
			}
			
			inline ofPoint _d_getScreenSize() {
				return ofAppGlutWindow::getScreenSize();
			}
			
			inline void _d_setFrameRate(float targetRate) {
				 ofAppGlutWindow::setFrameRate(targetRate);
			}
			
			inline void _d_setWindowTitle(string title) {
				 ofAppGlutWindow::setWindowTitle(title);
			}
			
			inline int _d_getWindowMode() {
				return ofAppGlutWindow::getWindowMode();
			}
			
			inline void _d_setFullscreen(bool fullscreen) {
				 ofAppGlutWindow::setFullscreen(fullscreen);
			}
			
			inline void _d_toggleFullscreen() {
				 ofAppGlutWindow::toggleFullscreen();
			}
			
			inline void _d_enableSetupScreen() {
				 ofAppGlutWindow::enableSetupScreen();
			}
			
			inline void _d_disableSetupScreen() {
				 ofAppGlutWindow::disableSetupScreen();
			}
			
			//Native: These virtual functions will only be called from native code
			void setupOpenGL(int w,  int h,  int screenMode);
			void initializeWindow();
			void runAppViaInfiniteLoop(ofBaseApp * appPtr);
			void hideCursor();
			void showCursor();
			void setWindowPosition(int x,  int y);
			void setWindowShape(int w,  int h);
			int getFrameNum();
			float getFrameRate();
			double getLastFrameTime();
			ofPoint getWindowPosition();
			ofPoint getWindowSize();
			ofPoint getScreenSize();
			void setFrameRate(float targetRate);
			void setWindowTitle(string title);
			int getWindowMode();
			void setFullscreen(bool fullscreen);
			void toggleFullscreen();
			void enableSetupScreen();
			void disableSetupScreen();
	};
	
}

namespace jof {
	class JofAppRunner {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> ofSetupOpenGL(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofRunApp(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetAppPtr(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetFrameRate(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetFrameNum(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetFrameRate(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSleepMillis(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetLastFrameTime(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofHideCursor(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofShowCursor(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetWindowPositionX(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetWindowPositionY(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetScreenWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetScreenHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetWindowMode(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofGetHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetWindowPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetWindowShape(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetWindowTitle(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofEnableSetupScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofDisableSetupScreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetFullscreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofToggleFullscreen(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSetVerticalSync(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofSoundPlayerG {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> ofSoundStopAll(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSoundSetVolume(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSoundUpdate(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSoundGetSpectrum(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofSoundPlayer {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> loadSound(const v8::Arguments& args);
			static v8::Handle<v8::Value> unloadSound(const v8::Arguments& args);
			static v8::Handle<v8::Value> play(const v8::Arguments& args);
			static v8::Handle<v8::Value> stop(const v8::Arguments& args);
			static v8::Handle<v8::Value> setVolume(const v8::Arguments& args);
			static v8::Handle<v8::Value> setPan(const v8::Arguments& args);
			static v8::Handle<v8::Value> setSpeed(const v8::Arguments& args);
			static v8::Handle<v8::Value> setPaused(const v8::Arguments& args);
			static v8::Handle<v8::Value> setLoop(const v8::Arguments& args);
			static v8::Handle<v8::Value> setMultiPlay(const v8::Arguments& args);
			static v8::Handle<v8::Value> setPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> getIsPlaying(const v8::Arguments& args);
			static v8::Handle<v8::Value> getSpeed(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPan(const v8::Arguments& args);
			static v8::Handle<v8::Value> initializeFmod(const v8::Arguments& args);
			static v8::Handle<v8::Value> closeFmod(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_isStreaming(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bMultiPlay(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bLoop(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bLoadedOk(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bPaused(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_pan(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_volume(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_internalFreq(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_speed(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_length(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_isStreaming(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bMultiPlay(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bLoop(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bLoadedOk(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bPaused(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_pan(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_volume(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_internalFreq(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_speed(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_length(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofSoundStream {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> ofSoundStreamSetup(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSoundStreamStop(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSoundStreamStart(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSoundStreamClose(const v8::Arguments& args);
			static v8::Handle<v8::Value> ofSoundStreamListDevices(const v8::Arguments& args);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
}

namespace jof {
	class JofVideoPlayer {
		protected:
			//Exported methods
			static v8::Handle<v8::Value> draw(const v8::Arguments& args);
			static v8::Handle<v8::Value> getHeight(const v8::Arguments& args);
			static v8::Handle<v8::Value> getWidth(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPercent(const v8::Arguments& args);
			static v8::Handle<v8::Value> setAnchorPoint(const v8::Arguments& args);
			static v8::Handle<v8::Value> resetAnchor(const v8::Arguments& args);
			static v8::Handle<v8::Value> __postAllocator(const v8::Arguments& args);
			static v8::Handle<v8::Value> getTextureReference(const v8::Arguments& args);
			static v8::Handle<v8::Value> setUseTexture(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPixels(const v8::Arguments& args);
			static v8::Handle<v8::Value> update(const v8::Arguments& args);
			static v8::Handle<v8::Value> isFrameNew(const v8::Arguments& args);
			static v8::Handle<v8::Value> close(const v8::Arguments& args);
			static v8::Handle<v8::Value> __constructor(const v8::Arguments& args);
			static v8::Handle<v8::Value> loadMovie(const v8::Arguments& args);
			static v8::Handle<v8::Value> closeMovie(const v8::Arguments& args);
			static v8::Handle<v8::Value> idleMovie(const v8::Arguments& args);
			static v8::Handle<v8::Value> play(const v8::Arguments& args);
			static v8::Handle<v8::Value> stop(const v8::Arguments& args);
			static v8::Handle<v8::Value> getPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> getSpeed(const v8::Arguments& args);
			static v8::Handle<v8::Value> getDuration(const v8::Arguments& args);
			static v8::Handle<v8::Value> getIsMovieDone(const v8::Arguments& args);
			static v8::Handle<v8::Value> setPosition(const v8::Arguments& args);
			static v8::Handle<v8::Value> setVolume(const v8::Arguments& args);
			static v8::Handle<v8::Value> setLoopState(const v8::Arguments& args);
			static v8::Handle<v8::Value> setSpeed(const v8::Arguments& args);
			static v8::Handle<v8::Value> setFrame(const v8::Arguments& args);
			static v8::Handle<v8::Value> setPaused(const v8::Arguments& args);
			static v8::Handle<v8::Value> getCurrentFrame(const v8::Arguments& args);
			static v8::Handle<v8::Value> getTotalNumFrames(const v8::Arguments& args);
			static v8::Handle<v8::Value> firstFrame(const v8::Arguments& args);
			static v8::Handle<v8::Value> nextFrame(const v8::Arguments& args);
			static v8::Handle<v8::Value> previousFrame(const v8::Arguments& args);
			static v8::Handle<v8::Value> isPaused(const v8::Arguments& args);
			static v8::Handle<v8::Value> isLoaded(const v8::Arguments& args);
			static v8::Handle<v8::Value> isPlaying(const v8::Arguments& args);
			//Accessors - Getters
			static v8::Handle<v8::Value> accGet_height(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_width(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_speed(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bLoaded(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_currentLoopState(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_nFrames(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_pixels(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bHavePixelsChanged(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_tex(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_bUseTexture(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			static v8::Handle<v8::Value> accGet_allocated(v8::Local<v8::String> prop, const v8::AccessorInfo& info);
			//Accessors - Setters
			static void accSet_height(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_width(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_speed(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bLoaded(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_currentLoopState(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_nFrames(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_pixels(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bHavePixelsChanged(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_tex(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_bUseTexture(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
			static void accSet_allocated(v8::Local<v8::String> prop, v8::Local<v8::Value> v, const v8::AccessorInfo& info);
		public:
			static void _InitJSObject(v8::Handle<v8::Object> target);
	};
	
	class _D_ofVideoPlayer : public ofVideoPlayer, public bea::DerivedClass {
		public:
			_D_ofVideoPlayer() : ofVideoPlayer(){}
			//JS: These virtual functions will only be called from Javascript
			inline void _d_draw(float x, float y) {
				 ofVideoPlayer::draw(x, y);
			}
			
			inline void _d_draw(float x, float y, float w,  float h) {
				 ofVideoPlayer::draw(x, y, w, h);
			}
			
			inline float _d_getHeight() {
				return ofVideoPlayer::getHeight();
			}
			
			inline float _d_getWidth() {
				return ofVideoPlayer::getWidth();
			}
			
			inline void _d_setAnchorPercent(float xPct,  float yPct) {
				 ofVideoPlayer::setAnchorPercent(xPct, yPct);
			}
			
			inline void _d_setAnchorPoint(float x,  float y) {
				 ofVideoPlayer::setAnchorPoint(x, y);
			}
			
			inline void _d_resetAnchor() {
				 ofVideoPlayer::resetAnchor();
			}
			
			inline ofTexture& _d_getTextureReference() {
				return ofVideoPlayer::getTextureReference();
			}
			
			inline void _d_setUseTexture(bool bUseTex) {
				 ofVideoPlayer::setUseTexture(bUseTex);
			}
			
			inline unsigned char* _d_getPixels() {
				return ofVideoPlayer::getPixels();
			}
			
			inline void _d_update() {
				 ofVideoPlayer::update();
			}
			
			inline bool _d_isFrameNew() {
				return ofVideoPlayer::isFrameNew();
			}
			
			inline void _d_close() {
				 ofVideoPlayer::close();
			}
			
			//Native: These virtual functions will only be called from native code
			void draw(float x, float y);
			void draw(float x, float y, float w,  float h);
			float getHeight();
			float getWidth();
			void setAnchorPercent(float xPct,  float yPct);
			void setAnchorPoint(float x,  float y);
			void resetAnchor();
			ofTexture& getTextureReference();
			void setUseTexture(bool bUseTex);
			unsigned char* getPixels();
			void update();
			bool isFrameNew();
			void close();
	};
	
}

namespace jof {
	static void ExposeConstants(v8::Handle<v8::Object> target);
}

namespace jof {
	class Project {
		public:
			static void expose(v8::Handle<v8::Object> target);
	};
	
}

#endif //#ifndef JOF_H