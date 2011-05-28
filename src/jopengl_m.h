#ifndef __JOPENGL_M_H__
#define __JOPENGL_M_H__

namespace bea{

	template<> 
	struct Convert<signed char>{
		static inline bool Is(v8::Handle<v8::Value> v){
			return Convert<char>::Is(v);
		}

		static inline signed char FromJS(v8::Handle<v8::Value> v, int nArg){
			return Convert<char>::FromJS(v, nArg);
		}

		static inline v8::Handle<v8::Value> ToJS(const signed char& val){
			return Convert<char>::ToJS(val);
		}
	};
}

#endif //__JOPENGL_M_H__