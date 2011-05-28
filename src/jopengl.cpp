#include <bea.h>
#include "jopengl.h"
#include <vector>
#include <windows.h>
#include <gl/gl.h>
#include "jopengl_m.h"
namespace bea {
	
}

DECLARE_STATIC(jopengl::JOpenGL);
namespace jopengl {
	v8::Handle<v8::Value> JOpenGL::glAccum(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glAccum (GLenum op, GLfloat value)
		GLenum op = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLfloat value = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glAccum(op, value);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glAlphaFunc(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glAlphaFunc (GLenum func, GLclampf ref)
		GLenum func = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLclampf ref = bea::Convert<GLclampf>::FromJS(args[1], 1);
		::glAlphaFunc(func, ref);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glAreTexturesResident(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//GLboolean  glAreTexturesResident (GLsizei n, const GLuint *textures:@vector, GLboolean *residences:@vector)
		GLsizei n = bea::Convert<GLsizei>::FromJS(args[0], 0);
		bea::vector<GLuint> textures = bea::Convert<bea::vector<GLuint> >::FromJS(args[1], 1);
		bea::vector<GLboolean> residences = bea::Convert<bea::vector<GLboolean> >::FromJS(args[2], 2);
		GLboolean fnRetVal = ::glAreTexturesResident(n, textures, residences);
		return bea::Convert<GLboolean>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glArrayElement(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glArrayElement (GLint i)
		GLint i = bea::Convert<GLint>::FromJS(args[0], 0);
		::glArrayElement(i);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glBegin(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glBegin (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glBegin(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glBindTexture(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glBindTexture (GLenum target, GLuint texture)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLuint texture = bea::Convert<GLuint>::FromJS(args[1], 1);
		::glBindTexture(target, texture);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glBitmap(const v8::Arguments& args) {
		METHOD_BEGIN(7);
		//void  glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap:@external)
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[0], 0);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[1], 1);
		GLfloat xorig = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat yorig = bea::Convert<GLfloat>::FromJS(args[3], 3);
		GLfloat xmove = bea::Convert<GLfloat>::FromJS(args[4], 4);
		GLfloat ymove = bea::Convert<GLfloat>::FromJS(args[5], 5);
		bea::external<GLubyte> bitmap = bea::Convert<bea::external<GLubyte> >::FromJS(args[6], 6);
		::glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glBlendFunc(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glBlendFunc (GLenum sfactor, GLenum dfactor)
		GLenum sfactor = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum dfactor = bea::Convert<GLenum>::FromJS(args[1], 1);
		::glBlendFunc(sfactor, dfactor);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCallList(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glCallList (GLuint list)
		GLuint list = bea::Convert<GLuint>::FromJS(args[0], 0);
		::glCallList(list);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCallLists(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glCallLists (GLsizei n, GLenum type, const GLvoid *lists:@external)
		GLsizei n = bea::Convert<GLsizei>::FromJS(args[0], 0);
		GLenum type = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::external<GLvoid> lists = bea::Convert<bea::external<GLvoid> >::FromJS(args[2], 2);
		::glCallLists(n, type, lists);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glClear(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glClear (GLbitfield mask)
		GLbitfield mask = bea::Convert<GLbitfield>::FromJS(args[0], 0);
		::glClear(mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glClearAccum(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
		GLfloat red = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat green = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat blue = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat alpha = bea::Convert<GLfloat>::FromJS(args[3], 3);
		::glClearAccum(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glClearColor(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
		GLclampf red = bea::Convert<GLclampf>::FromJS(args[0], 0);
		GLclampf green = bea::Convert<GLclampf>::FromJS(args[1], 1);
		GLclampf blue = bea::Convert<GLclampf>::FromJS(args[2], 2);
		GLclampf alpha = bea::Convert<GLclampf>::FromJS(args[3], 3);
		::glClearColor(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glClearDepth(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glClearDepth (GLclampd depth)
		GLclampd depth = bea::Convert<GLclampd>::FromJS(args[0], 0);
		::glClearDepth(depth);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glClearIndex(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glClearIndex (GLfloat c)
		GLfloat c = bea::Convert<GLfloat>::FromJS(args[0], 0);
		::glClearIndex(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glClearStencil(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glClearStencil (GLint s)
		GLint s = bea::Convert<GLint>::FromJS(args[0], 0);
		::glClearStencil(s);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glClipPlane(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glClipPlane (GLenum plane, const GLdouble *equation:@vector)
		GLenum plane = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLdouble> equation = bea::Convert<bea::vector<GLdouble> >::FromJS(args[1], 1);
		::glClipPlane(plane, equation);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3b(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3b (GLbyte red, GLbyte green, GLbyte blue)
		GLbyte red = bea::Convert<GLbyte>::FromJS(args[0], 0);
		GLbyte green = bea::Convert<GLbyte>::FromJS(args[1], 1);
		GLbyte blue = bea::Convert<GLbyte>::FromJS(args[2], 2);
		::glColor3b(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3bv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3bv (const GLbyte *v:@vector)
		bea::vector<GLbyte> v = bea::Convert<bea::vector<GLbyte> >::FromJS(args[0], 0);
		::glColor3bv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3d(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3d (GLdouble red, GLdouble green, GLdouble blue)
		GLdouble red = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble green = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble blue = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glColor3d(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glColor3dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3f(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3f (GLfloat red, GLfloat green, GLfloat blue)
		GLfloat red = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat green = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat blue = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glColor3f(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glColor3fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3i(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3i (GLint red, GLint green, GLint blue)
		GLint red = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint green = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint blue = bea::Convert<GLint>::FromJS(args[2], 2);
		::glColor3i(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glColor3iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3s(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3s (GLshort red, GLshort green, GLshort blue)
		GLshort red = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort green = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort blue = bea::Convert<GLshort>::FromJS(args[2], 2);
		::glColor3s(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glColor3sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3ub(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3ub (GLubyte red, GLubyte green, GLubyte blue)
		GLubyte red = bea::Convert<GLubyte>::FromJS(args[0], 0);
		GLubyte green = bea::Convert<GLubyte>::FromJS(args[1], 1);
		GLubyte blue = bea::Convert<GLubyte>::FromJS(args[2], 2);
		::glColor3ub(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3ubv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3ubv (const GLubyte *v:@vector)
		bea::vector<GLubyte> v = bea::Convert<bea::vector<GLubyte> >::FromJS(args[0], 0);
		::glColor3ubv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3ui(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3ui (GLuint red, GLuint green, GLuint blue)
		GLuint red = bea::Convert<GLuint>::FromJS(args[0], 0);
		GLuint green = bea::Convert<GLuint>::FromJS(args[1], 1);
		GLuint blue = bea::Convert<GLuint>::FromJS(args[2], 2);
		::glColor3ui(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3uiv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3uiv (const GLuint *v:@vector)
		bea::vector<GLuint> v = bea::Convert<bea::vector<GLuint> >::FromJS(args[0], 0);
		::glColor3uiv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3us(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glColor3us (GLushort red, GLushort green, GLushort blue)
		GLushort red = bea::Convert<GLushort>::FromJS(args[0], 0);
		GLushort green = bea::Convert<GLushort>::FromJS(args[1], 1);
		GLushort blue = bea::Convert<GLushort>::FromJS(args[2], 2);
		::glColor3us(red, green, blue);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor3usv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor3usv (const GLushort *v:@vector)
		bea::vector<GLushort> v = bea::Convert<bea::vector<GLushort> >::FromJS(args[0], 0);
		::glColor3usv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4b(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
		GLbyte red = bea::Convert<GLbyte>::FromJS(args[0], 0);
		GLbyte green = bea::Convert<GLbyte>::FromJS(args[1], 1);
		GLbyte blue = bea::Convert<GLbyte>::FromJS(args[2], 2);
		GLbyte alpha = bea::Convert<GLbyte>::FromJS(args[3], 3);
		::glColor4b(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4bv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4bv (const GLbyte *v:@vector)
		bea::vector<GLbyte> v = bea::Convert<bea::vector<GLbyte> >::FromJS(args[0], 0);
		::glColor4bv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4d(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
		GLdouble red = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble green = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble blue = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble alpha = bea::Convert<GLdouble>::FromJS(args[3], 3);
		::glColor4d(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glColor4dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4f(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
		GLfloat red = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat green = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat blue = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat alpha = bea::Convert<GLfloat>::FromJS(args[3], 3);
		::glColor4f(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glColor4fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4i(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4i (GLint red, GLint green, GLint blue, GLint alpha)
		GLint red = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint green = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint blue = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint alpha = bea::Convert<GLint>::FromJS(args[3], 3);
		::glColor4i(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glColor4iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4s(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha)
		GLshort red = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort green = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort blue = bea::Convert<GLshort>::FromJS(args[2], 2);
		GLshort alpha = bea::Convert<GLshort>::FromJS(args[3], 3);
		::glColor4s(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glColor4sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4ub(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
		GLubyte red = bea::Convert<GLubyte>::FromJS(args[0], 0);
		GLubyte green = bea::Convert<GLubyte>::FromJS(args[1], 1);
		GLubyte blue = bea::Convert<GLubyte>::FromJS(args[2], 2);
		GLubyte alpha = bea::Convert<GLubyte>::FromJS(args[3], 3);
		::glColor4ub(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4ubv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4ubv (const GLubyte *v:@vector)
		bea::vector<GLubyte> v = bea::Convert<bea::vector<GLubyte> >::FromJS(args[0], 0);
		::glColor4ubv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4ui(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha)
		GLuint red = bea::Convert<GLuint>::FromJS(args[0], 0);
		GLuint green = bea::Convert<GLuint>::FromJS(args[1], 1);
		GLuint blue = bea::Convert<GLuint>::FromJS(args[2], 2);
		GLuint alpha = bea::Convert<GLuint>::FromJS(args[3], 3);
		::glColor4ui(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4uiv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4uiv (const GLuint *v:@vector)
		bea::vector<GLuint> v = bea::Convert<bea::vector<GLuint> >::FromJS(args[0], 0);
		::glColor4uiv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4us(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha)
		GLushort red = bea::Convert<GLushort>::FromJS(args[0], 0);
		GLushort green = bea::Convert<GLushort>::FromJS(args[1], 1);
		GLushort blue = bea::Convert<GLushort>::FromJS(args[2], 2);
		GLushort alpha = bea::Convert<GLushort>::FromJS(args[3], 3);
		::glColor4us(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColor4usv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glColor4usv (const GLushort *v:@vector)
		bea::vector<GLushort> v = bea::Convert<bea::vector<GLushort> >::FromJS(args[0], 0);
		::glColor4usv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColorMask(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
		GLboolean red = bea::Convert<GLboolean>::FromJS(args[0], 0);
		GLboolean green = bea::Convert<GLboolean>::FromJS(args[1], 1);
		GLboolean blue = bea::Convert<GLboolean>::FromJS(args[2], 2);
		GLboolean alpha = bea::Convert<GLboolean>::FromJS(args[3], 3);
		::glColorMask(red, green, blue, alpha);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColorMaterial(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glColorMaterial (GLenum face, GLenum mode)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum mode = bea::Convert<GLenum>::FromJS(args[1], 1);
		::glColorMaterial(face, mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glColorPointer(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer:@external)
		GLint size = bea::Convert<GLint>::FromJS(args[0], 0);
		GLenum type = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLsizei stride = bea::Convert<GLsizei>::FromJS(args[2], 2);
		bea::external<GLvoid> pointer = bea::Convert<bea::external<GLvoid> >::FromJS(args[3], 3);
		::glColorPointer(size, type, stride, pointer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCopyPixels(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//void  glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[2], 2);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[3], 3);
		GLenum type = bea::Convert<GLenum>::FromJS(args[4], 4);
		::glCopyPixels(x, y, width, height, type);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCopyTexImage1D(const v8::Arguments& args) {
		METHOD_BEGIN(7);
		//void  glCopyTexImage1D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLenum internalFormat = bea::Convert<GLenum>::FromJS(args[2], 2);
		GLint x = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint y = bea::Convert<GLint>::FromJS(args[4], 4);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[5], 5);
		GLint border = bea::Convert<GLint>::FromJS(args[6], 6);
		::glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCopyTexImage2D(const v8::Arguments& args) {
		METHOD_BEGIN(8);
		//void  glCopyTexImage2D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLenum internalFormat = bea::Convert<GLenum>::FromJS(args[2], 2);
		GLint x = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint y = bea::Convert<GLint>::FromJS(args[4], 4);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[5], 5);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[6], 6);
		GLint border = bea::Convert<GLint>::FromJS(args[7], 7);
		::glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCopyTexSubImage1D(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void  glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint xoffset = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint x = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint y = bea::Convert<GLint>::FromJS(args[4], 4);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[5], 5);
		::glCopyTexSubImage1D(target, level, xoffset, x, y, width);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCopyTexSubImage2D(const v8::Arguments& args) {
		METHOD_BEGIN(8);
		//void  glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint xoffset = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint yoffset = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint x = bea::Convert<GLint>::FromJS(args[4], 4);
		GLint y = bea::Convert<GLint>::FromJS(args[5], 5);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[6], 6);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[7], 7);
		::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glCullFace(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glCullFace (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glCullFace(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDeleteLists(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glDeleteLists (GLuint list, GLsizei range)
		GLuint list = bea::Convert<GLuint>::FromJS(args[0], 0);
		GLsizei range = bea::Convert<GLsizei>::FromJS(args[1], 1);
		::glDeleteLists(list, range);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDeleteTextures(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glDeleteTextures (GLsizei n, const GLuint *textures:@vector)
		GLsizei n = bea::Convert<GLsizei>::FromJS(args[0], 0);
		bea::vector<GLuint> textures = bea::Convert<bea::vector<GLuint> >::FromJS(args[1], 1);
		::glDeleteTextures(n, textures);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDepthFunc(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glDepthFunc (GLenum func)
		GLenum func = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glDepthFunc(func);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDepthMask(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glDepthMask (GLboolean flag)
		GLboolean flag = bea::Convert<GLboolean>::FromJS(args[0], 0);
		::glDepthMask(flag);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDepthRange(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glDepthRange (GLclampd zNear, GLclampd zFar)
		GLclampd zNear = bea::Convert<GLclampd>::FromJS(args[0], 0);
		GLclampd zFar = bea::Convert<GLclampd>::FromJS(args[1], 1);
		::glDepthRange(zNear, zFar);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDisable(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glDisable (GLenum cap)
		GLenum cap = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glDisable(cap);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDisableClientState(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glDisableClientState (GLenum array)
		GLenum array = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glDisableClientState(array);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDrawArrays(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glDrawArrays (GLenum mode, GLint first, GLsizei count)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint first = bea::Convert<GLint>::FromJS(args[1], 1);
		GLsizei count = bea::Convert<GLsizei>::FromJS(args[2], 2);
		::glDrawArrays(mode, first, count);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDrawBuffer(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glDrawBuffer (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glDrawBuffer(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDrawElements(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices:@external)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLsizei count = bea::Convert<GLsizei>::FromJS(args[1], 1);
		GLenum type = bea::Convert<GLenum>::FromJS(args[2], 2);
		bea::external<GLvoid> indices = bea::Convert<bea::external<GLvoid> >::FromJS(args[3], 3);
		::glDrawElements(mode, count, type, indices);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glDrawPixels(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//void  glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels:@external)
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[0], 0);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[1], 1);
		GLenum format = bea::Convert<GLenum>::FromJS(args[2], 2);
		GLenum type = bea::Convert<GLenum>::FromJS(args[3], 3);
		bea::external<GLvoid> pixels = bea::Convert<bea::external<GLvoid> >::FromJS(args[4], 4);
		::glDrawPixels(width, height, format, type, pixels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEdgeFlag(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEdgeFlag (GLboolean flag)
		GLboolean flag = bea::Convert<GLboolean>::FromJS(args[0], 0);
		::glEdgeFlag(flag);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEdgeFlagPointer(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glEdgeFlagPointer (GLsizei stride, const GLvoid *pointer:@external)
		GLsizei stride = bea::Convert<GLsizei>::FromJS(args[0], 0);
		bea::external<GLvoid> pointer = bea::Convert<bea::external<GLvoid> >::FromJS(args[1], 1);
		::glEdgeFlagPointer(stride, pointer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEdgeFlagv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEdgeFlagv (const GLboolean *flag:@vector)
		bea::vector<GLboolean> flag = bea::Convert<bea::vector<GLboolean> >::FromJS(args[0], 0);
		::glEdgeFlagv(flag);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEnable(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEnable (GLenum cap)
		GLenum cap = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glEnable(cap);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEnableClientState(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEnableClientState (GLenum array)
		GLenum array = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glEnableClientState(array);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEnd(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glEnd ()
		::glEnd();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEndList(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glEndList ()
		::glEndList();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord1d(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEvalCoord1d (GLdouble u)
		GLdouble u = bea::Convert<GLdouble>::FromJS(args[0], 0);
		::glEvalCoord1d(u);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord1dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEvalCoord1dv (const GLdouble *u:@vector)
		bea::vector<GLdouble> u = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glEvalCoord1dv(u);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord1f(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEvalCoord1f (GLfloat u)
		GLfloat u = bea::Convert<GLfloat>::FromJS(args[0], 0);
		::glEvalCoord1f(u);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord1fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEvalCoord1fv (const GLfloat *u:@vector)
		bea::vector<GLfloat> u = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glEvalCoord1fv(u);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord2d(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glEvalCoord2d (GLdouble u, GLdouble v)
		GLdouble u = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble v = bea::Convert<GLdouble>::FromJS(args[1], 1);
		::glEvalCoord2d(u, v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord2dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEvalCoord2dv (const GLdouble *u:@vector)
		bea::vector<GLdouble> u = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glEvalCoord2dv(u);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord2f(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glEvalCoord2f (GLfloat u, GLfloat v)
		GLfloat u = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat v = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glEvalCoord2f(u, v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalCoord2fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEvalCoord2fv (const GLfloat *u:@vector)
		bea::vector<GLfloat> u = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glEvalCoord2fv(u);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalMesh1(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glEvalMesh1 (GLenum mode, GLint i1, GLint i2)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint i1 = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint i2 = bea::Convert<GLint>::FromJS(args[2], 2);
		::glEvalMesh1(mode, i1, i2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalMesh2(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//void  glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint i1 = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint i2 = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint j1 = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint j2 = bea::Convert<GLint>::FromJS(args[4], 4);
		::glEvalMesh2(mode, i1, i2, j1, j2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalPoint1(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glEvalPoint1 (GLint i)
		GLint i = bea::Convert<GLint>::FromJS(args[0], 0);
		::glEvalPoint1(i);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glEvalPoint2(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glEvalPoint2 (GLint i, GLint j)
		GLint i = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint j = bea::Convert<GLint>::FromJS(args[1], 1);
		::glEvalPoint2(i, j);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFeedbackBuffer(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer:@external)
		GLsizei size = bea::Convert<GLsizei>::FromJS(args[0], 0);
		GLenum type = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::external<GLfloat> buffer = bea::Convert<bea::external<GLfloat> >::FromJS(args[2], 2);
		::glFeedbackBuffer(size, type, buffer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFinish(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glFinish ()
		::glFinish();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFlush(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glFlush ()
		::glFlush();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFogf(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glFogf (GLenum pname, GLfloat param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glFogf(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFogfv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glFogfv (GLenum pname, const GLfloat *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[1], 1);
		::glFogfv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFogi(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glFogi (GLenum pname, GLint param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint param = bea::Convert<GLint>::FromJS(args[1], 1);
		::glFogi(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFogiv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glFogiv (GLenum pname, const GLint *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[1], 1);
		::glFogiv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFrontFace(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glFrontFace (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glFrontFace(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glFrustum(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void  glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
		GLdouble left = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble right = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble bottom = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble top = bea::Convert<GLdouble>::FromJS(args[3], 3);
		GLdouble zNear = bea::Convert<GLdouble>::FromJS(args[4], 4);
		GLdouble zFar = bea::Convert<GLdouble>::FromJS(args[5], 5);
		::glFrustum(left, right, bottom, top, zNear, zFar);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGenLists(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//GLuint  glGenLists (GLsizei range)
		GLsizei range = bea::Convert<GLsizei>::FromJS(args[0], 0);
		GLuint fnRetVal = ::glGenLists(range);
		return bea::Convert<GLuint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGenTextures(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGenTextures (GLsizei n, GLuint *textures:@external)
		GLsizei n = bea::Convert<GLsizei>::FromJS(args[0], 0);
		bea::external<GLuint> textures = bea::Convert<bea::external<GLuint> >::FromJS(args[1], 1);
		::glGenTextures(n, textures);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetBooleanv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetBooleanv (GLenum pname, GLboolean *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLboolean> params = bea::Convert<bea::vector<GLboolean> >::FromJS(args[1], 1);
		::glGetBooleanv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetClipPlane(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetClipPlane (GLenum plane, GLdouble *equation:@vector)
		GLenum plane = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLdouble> equation = bea::Convert<bea::vector<GLdouble> >::FromJS(args[1], 1);
		::glGetClipPlane(plane, equation);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetDoublev(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetDoublev (GLenum pname, GLdouble *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLdouble> params = bea::Convert<bea::vector<GLdouble> >::FromJS(args[1], 1);
		::glGetDoublev(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetError(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//GLenum  glGetError ()
		GLenum fnRetVal = ::glGetError();
		return bea::Convert<GLenum>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetFloatv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetFloatv (GLenum pname, GLfloat *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[1], 1);
		::glGetFloatv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetIntegerv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetIntegerv (GLenum pname, GLint *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[1], 1);
		::glGetIntegerv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetLightfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetLightfv (GLenum light, GLenum pname, GLfloat *params:@vector)
		GLenum light = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glGetLightfv(light, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetLightiv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetLightiv (GLenum light, GLenum pname, GLint *params:@vector)
		GLenum light = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glGetLightiv(light, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetMapdv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetMapdv (GLenum target, GLenum query, GLdouble *v:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum query = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[2], 2);
		::glGetMapdv(target, query, v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetMapfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetMapfv (GLenum target, GLenum query, GLfloat *v:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum query = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glGetMapfv(target, query, v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetMapiv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetMapiv (GLenum target, GLenum query, GLint *v:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum query = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glGetMapiv(target, query, v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetMaterialfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params:@vector)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glGetMaterialfv(face, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetMaterialiv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetMaterialiv (GLenum face, GLenum pname, GLint *params:@vector)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glGetMaterialiv(face, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetPixelMapfv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetPixelMapfv (GLenum map, GLfloat *values:@vector)
		GLenum map = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLfloat> values = bea::Convert<bea::vector<GLfloat> >::FromJS(args[1], 1);
		::glGetPixelMapfv(map, values);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetPixelMapuiv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetPixelMapuiv (GLenum map, GLuint *values:@vector)
		GLenum map = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLuint> values = bea::Convert<bea::vector<GLuint> >::FromJS(args[1], 1);
		::glGetPixelMapuiv(map, values);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetPixelMapusv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetPixelMapusv (GLenum map, GLushort *values:@vector)
		GLenum map = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLushort> values = bea::Convert<bea::vector<GLushort> >::FromJS(args[1], 1);
		::glGetPixelMapusv(map, values);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetPointerv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glGetPointerv (GLenum pname, GLvoid* *params:@external)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::external<GLvoid*> params = bea::Convert<bea::external<GLvoid*> >::FromJS(args[1], 1);
		::glGetPointerv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetPolygonStipple(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glGetPolygonStipple (GLubyte *mask:@vector)
		bea::vector<GLubyte> mask = bea::Convert<bea::vector<GLubyte> >::FromJS(args[0], 0);
		::glGetPolygonStipple(mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexEnvfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glGetTexEnvfv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexEnviv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetTexEnviv (GLenum target, GLenum pname, GLint *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glGetTexEnviv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexGendv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params:@vector)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLdouble> params = bea::Convert<bea::vector<GLdouble> >::FromJS(args[2], 2);
		::glGetTexGendv(coord, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexGenfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params:@vector)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glGetTexGenfv(coord, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexGeniv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetTexGeniv (GLenum coord, GLenum pname, GLint *params:@vector)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glGetTexGeniv(coord, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexImage(const v8::Arguments& args) {
		METHOD_BEGIN(5);
		//void  glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels:@external)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLenum format = bea::Convert<GLenum>::FromJS(args[2], 2);
		GLenum type = bea::Convert<GLenum>::FromJS(args[3], 3);
		bea::external<GLvoid> pixels = bea::Convert<bea::external<GLvoid> >::FromJS(args[4], 4);
		::glGetTexImage(target, level, format, type, pixels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexLevelParameterfv(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[2], 2);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[3], 3);
		::glGetTexLevelParameterfv(target, level, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexLevelParameteriv(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[2], 2);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[3], 3);
		::glGetTexLevelParameteriv(target, level, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexParameterfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glGetTexParameterfv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glGetTexParameteriv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glGetTexParameteriv (GLenum target, GLenum pname, GLint *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glGetTexParameteriv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glHint(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glHint (GLenum target, GLenum mode)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum mode = bea::Convert<GLenum>::FromJS(args[1], 1);
		::glHint(target, mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexMask(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexMask (GLuint mask)
		GLuint mask = bea::Convert<GLuint>::FromJS(args[0], 0);
		::glIndexMask(mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexPointer(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer:@external)
		GLenum type = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLsizei stride = bea::Convert<GLsizei>::FromJS(args[1], 1);
		bea::external<GLvoid> pointer = bea::Convert<bea::external<GLvoid> >::FromJS(args[2], 2);
		::glIndexPointer(type, stride, pointer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexd(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexd (GLdouble c)
		GLdouble c = bea::Convert<GLdouble>::FromJS(args[0], 0);
		::glIndexd(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexdv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexdv (const GLdouble *c:@vector)
		bea::vector<GLdouble> c = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glIndexdv(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexf(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexf (GLfloat c)
		GLfloat c = bea::Convert<GLfloat>::FromJS(args[0], 0);
		::glIndexf(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexfv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexfv (const GLfloat *c:@vector)
		bea::vector<GLfloat> c = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glIndexfv(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexi(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexi (GLint c)
		GLint c = bea::Convert<GLint>::FromJS(args[0], 0);
		::glIndexi(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexiv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexiv (const GLint *c:@vector)
		bea::vector<GLint> c = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glIndexiv(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexs(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexs (GLshort c)
		GLshort c = bea::Convert<GLshort>::FromJS(args[0], 0);
		::glIndexs(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexsv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexsv (const GLshort *c:@vector)
		bea::vector<GLshort> c = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glIndexsv(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexub(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexub (GLubyte c)
		GLubyte c = bea::Convert<GLubyte>::FromJS(args[0], 0);
		::glIndexub(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIndexubv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glIndexubv (const GLubyte *c:@vector)
		bea::vector<GLubyte> c = bea::Convert<bea::vector<GLubyte> >::FromJS(args[0], 0);
		::glIndexubv(c);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glInitNames(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glInitNames ()
		::glInitNames();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIsEnabled(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//GLboolean  glIsEnabled (GLenum cap)
		GLenum cap = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLboolean fnRetVal = ::glIsEnabled(cap);
		return bea::Convert<GLboolean>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIsList(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//GLboolean  glIsList (GLuint list)
		GLuint list = bea::Convert<GLuint>::FromJS(args[0], 0);
		GLboolean fnRetVal = ::glIsList(list);
		return bea::Convert<GLboolean>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glIsTexture(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//GLboolean  glIsTexture (GLuint texture)
		GLuint texture = bea::Convert<GLuint>::FromJS(args[0], 0);
		GLboolean fnRetVal = ::glIsTexture(texture);
		return bea::Convert<GLboolean>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLightModelf(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glLightModelf (GLenum pname, GLfloat param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glLightModelf(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLightModelfv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glLightModelfv (GLenum pname, const GLfloat *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[1], 1);
		::glLightModelfv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLightModeli(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glLightModeli (GLenum pname, GLint param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint param = bea::Convert<GLint>::FromJS(args[1], 1);
		::glLightModeli(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLightModeliv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glLightModeliv (GLenum pname, const GLint *params:@vector)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[1], 1);
		::glLightModeliv(pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLightf(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glLightf (GLenum light, GLenum pname, GLfloat param)
		GLenum light = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glLightf(light, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLightfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glLightfv (GLenum light, GLenum pname, const GLfloat *params:@vector)
		GLenum light = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glLightfv(light, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLighti(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glLighti (GLenum light, GLenum pname, GLint param)
		GLenum light = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLint param = bea::Convert<GLint>::FromJS(args[2], 2);
		::glLighti(light, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLightiv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glLightiv (GLenum light, GLenum pname, const GLint *params:@vector)
		GLenum light = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glLightiv(light, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLineStipple(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glLineStipple (GLint factor, GLushort pattern)
		GLint factor = bea::Convert<GLint>::FromJS(args[0], 0);
		GLushort pattern = bea::Convert<GLushort>::FromJS(args[1], 1);
		::glLineStipple(factor, pattern);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLineWidth(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glLineWidth (GLfloat width)
		GLfloat width = bea::Convert<GLfloat>::FromJS(args[0], 0);
		::glLineWidth(width);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glListBase(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glListBase (GLuint base)
		GLuint base = bea::Convert<GLuint>::FromJS(args[0], 0);
		::glListBase(base);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLoadIdentity(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glLoadIdentity ()
		::glLoadIdentity();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLoadMatrixd(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glLoadMatrixd (const GLdouble *m:@vector)
		bea::vector<GLdouble> m = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glLoadMatrixd(m);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLoadMatrixf(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glLoadMatrixf (const GLfloat *m:@vector)
		bea::vector<GLfloat> m = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glLoadMatrixf(m);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLoadName(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glLoadName (GLuint name)
		GLuint name = bea::Convert<GLuint>::FromJS(args[0], 0);
		::glLoadName(name);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glLogicOp(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glLogicOp (GLenum opcode)
		GLenum opcode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glLogicOp(opcode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMap1d(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void  glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLdouble u1 = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble u2 = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLint stride = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint order = bea::Convert<GLint>::FromJS(args[4], 4);
		bea::vector<GLdouble> points = bea::Convert<bea::vector<GLdouble> >::FromJS(args[5], 5);
		::glMap1d(target, u1, u2, stride, order, points);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMap1f(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void  glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLfloat u1 = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat u2 = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLint stride = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint order = bea::Convert<GLint>::FromJS(args[4], 4);
		bea::vector<GLfloat> points = bea::Convert<bea::vector<GLfloat> >::FromJS(args[5], 5);
		::glMap1f(target, u1, u2, stride, order, points);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMap2d(const v8::Arguments& args) {
		METHOD_BEGIN(10);
		//void  glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLdouble u1 = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble u2 = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLint ustride = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint uorder = bea::Convert<GLint>::FromJS(args[4], 4);
		GLdouble v1 = bea::Convert<GLdouble>::FromJS(args[5], 5);
		GLdouble v2 = bea::Convert<GLdouble>::FromJS(args[6], 6);
		GLint vstride = bea::Convert<GLint>::FromJS(args[7], 7);
		GLint vorder = bea::Convert<GLint>::FromJS(args[8], 8);
		bea::vector<GLdouble> points = bea::Convert<bea::vector<GLdouble> >::FromJS(args[9], 9);
		::glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMap2f(const v8::Arguments& args) {
		METHOD_BEGIN(10);
		//void  glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLfloat u1 = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat u2 = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLint ustride = bea::Convert<GLint>::FromJS(args[3], 3);
		GLint uorder = bea::Convert<GLint>::FromJS(args[4], 4);
		GLfloat v1 = bea::Convert<GLfloat>::FromJS(args[5], 5);
		GLfloat v2 = bea::Convert<GLfloat>::FromJS(args[6], 6);
		GLint vstride = bea::Convert<GLint>::FromJS(args[7], 7);
		GLint vorder = bea::Convert<GLint>::FromJS(args[8], 8);
		bea::vector<GLfloat> points = bea::Convert<bea::vector<GLfloat> >::FromJS(args[9], 9);
		::glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMapGrid1d(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glMapGrid1d (GLint un, GLdouble u1, GLdouble u2)
		GLint un = bea::Convert<GLint>::FromJS(args[0], 0);
		GLdouble u1 = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble u2 = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glMapGrid1d(un, u1, u2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMapGrid1f(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glMapGrid1f (GLint un, GLfloat u1, GLfloat u2)
		GLint un = bea::Convert<GLint>::FromJS(args[0], 0);
		GLfloat u1 = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat u2 = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glMapGrid1f(un, u1, u2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMapGrid2d(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void  glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
		GLint un = bea::Convert<GLint>::FromJS(args[0], 0);
		GLdouble u1 = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble u2 = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLint vn = bea::Convert<GLint>::FromJS(args[3], 3);
		GLdouble v1 = bea::Convert<GLdouble>::FromJS(args[4], 4);
		GLdouble v2 = bea::Convert<GLdouble>::FromJS(args[5], 5);
		::glMapGrid2d(un, u1, u2, vn, v1, v2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMapGrid2f(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void  glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
		GLint un = bea::Convert<GLint>::FromJS(args[0], 0);
		GLfloat u1 = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat u2 = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLint vn = bea::Convert<GLint>::FromJS(args[3], 3);
		GLfloat v1 = bea::Convert<GLfloat>::FromJS(args[4], 4);
		GLfloat v2 = bea::Convert<GLfloat>::FromJS(args[5], 5);
		::glMapGrid2f(un, u1, u2, vn, v1, v2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMaterialf(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glMaterialf (GLenum face, GLenum pname, GLfloat param)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glMaterialf(face, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMaterialfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glMaterialfv (GLenum face, GLenum pname, const GLfloat *params:@vector)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glMaterialfv(face, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMateriali(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glMateriali (GLenum face, GLenum pname, GLint param)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLint param = bea::Convert<GLint>::FromJS(args[2], 2);
		::glMateriali(face, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMaterialiv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glMaterialiv (GLenum face, GLenum pname, const GLint *params:@vector)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glMaterialiv(face, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMatrixMode(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glMatrixMode (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glMatrixMode(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMultMatrixd(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glMultMatrixd (const GLdouble *m:@vector)
		bea::vector<GLdouble> m = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glMultMatrixd(m);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glMultMatrixf(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glMultMatrixf (const GLfloat *m:@vector)
		bea::vector<GLfloat> m = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glMultMatrixf(m);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNewList(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glNewList (GLuint list, GLenum mode)
		GLuint list = bea::Convert<GLuint>::FromJS(args[0], 0);
		GLenum mode = bea::Convert<GLenum>::FromJS(args[1], 1);
		::glNewList(list, mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3b(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz)
		GLbyte nx = bea::Convert<GLbyte>::FromJS(args[0], 0);
		GLbyte ny = bea::Convert<GLbyte>::FromJS(args[1], 1);
		GLbyte nz = bea::Convert<GLbyte>::FromJS(args[2], 2);
		::glNormal3b(nx, ny, nz);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3bv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glNormal3bv (const GLbyte *v:@vector)
		bea::vector<GLbyte> v = bea::Convert<bea::vector<GLbyte> >::FromJS(args[0], 0);
		::glNormal3bv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3d(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz)
		GLdouble nx = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble ny = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble nz = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glNormal3d(nx, ny, nz);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glNormal3dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glNormal3dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3f(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz)
		GLfloat nx = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat ny = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat nz = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glNormal3f(nx, ny, nz);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glNormal3fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glNormal3fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3i(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glNormal3i (GLint nx, GLint ny, GLint nz)
		GLint nx = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint ny = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint nz = bea::Convert<GLint>::FromJS(args[2], 2);
		::glNormal3i(nx, ny, nz);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glNormal3iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glNormal3iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3s(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glNormal3s (GLshort nx, GLshort ny, GLshort nz)
		GLshort nx = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort ny = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort nz = bea::Convert<GLshort>::FromJS(args[2], 2);
		::glNormal3s(nx, ny, nz);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormal3sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glNormal3sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glNormal3sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glNormalPointer(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer:@external)
		GLenum type = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLsizei stride = bea::Convert<GLsizei>::FromJS(args[1], 1);
		bea::external<GLvoid> pointer = bea::Convert<bea::external<GLvoid> >::FromJS(args[2], 2);
		::glNormalPointer(type, stride, pointer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glOrtho(const v8::Arguments& args) {
		METHOD_BEGIN(6);
		//void  glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
		GLdouble left = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble right = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble bottom = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble top = bea::Convert<GLdouble>::FromJS(args[3], 3);
		GLdouble zNear = bea::Convert<GLdouble>::FromJS(args[4], 4);
		GLdouble zFar = bea::Convert<GLdouble>::FromJS(args[5], 5);
		::glOrtho(left, right, bottom, top, zNear, zFar);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPassThrough(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glPassThrough (GLfloat token)
		GLfloat token = bea::Convert<GLfloat>::FromJS(args[0], 0);
		::glPassThrough(token);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelMapfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glPixelMapfv (GLenum map, GLsizei mapsize, const GLfloat *values:@vector)
		GLenum map = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLsizei mapsize = bea::Convert<GLsizei>::FromJS(args[1], 1);
		bea::vector<GLfloat> values = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glPixelMapfv(map, mapsize, values);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelMapuiv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glPixelMapuiv (GLenum map, GLsizei mapsize, const GLuint *values:@vector)
		GLenum map = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLsizei mapsize = bea::Convert<GLsizei>::FromJS(args[1], 1);
		bea::vector<GLuint> values = bea::Convert<bea::vector<GLuint> >::FromJS(args[2], 2);
		::glPixelMapuiv(map, mapsize, values);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelMapusv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glPixelMapusv (GLenum map, GLsizei mapsize, const GLushort *values:@vector)
		GLenum map = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLsizei mapsize = bea::Convert<GLsizei>::FromJS(args[1], 1);
		bea::vector<GLushort> values = bea::Convert<bea::vector<GLushort> >::FromJS(args[2], 2);
		::glPixelMapusv(map, mapsize, values);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelStoref(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glPixelStoref (GLenum pname, GLfloat param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glPixelStoref(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelStorei(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glPixelStorei (GLenum pname, GLint param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint param = bea::Convert<GLint>::FromJS(args[1], 1);
		::glPixelStorei(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelTransferf(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glPixelTransferf (GLenum pname, GLfloat param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glPixelTransferf(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelTransferi(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glPixelTransferi (GLenum pname, GLint param)
		GLenum pname = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint param = bea::Convert<GLint>::FromJS(args[1], 1);
		::glPixelTransferi(pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPixelZoom(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glPixelZoom (GLfloat xfactor, GLfloat yfactor)
		GLfloat xfactor = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat yfactor = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glPixelZoom(xfactor, yfactor);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPointSize(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glPointSize (GLfloat size)
		GLfloat size = bea::Convert<GLfloat>::FromJS(args[0], 0);
		::glPointSize(size);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPolygonMode(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glPolygonMode (GLenum face, GLenum mode)
		GLenum face = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum mode = bea::Convert<GLenum>::FromJS(args[1], 1);
		::glPolygonMode(face, mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPolygonOffset(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glPolygonOffset (GLfloat factor, GLfloat units)
		GLfloat factor = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat units = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glPolygonOffset(factor, units);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPolygonStipple(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glPolygonStipple (const GLubyte *mask:@vector)
		bea::vector<GLubyte> mask = bea::Convert<bea::vector<GLubyte> >::FromJS(args[0], 0);
		::glPolygonStipple(mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPopAttrib(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glPopAttrib ()
		::glPopAttrib();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPopClientAttrib(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glPopClientAttrib ()
		::glPopClientAttrib();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPopMatrix(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glPopMatrix ()
		::glPopMatrix();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPopName(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glPopName ()
		::glPopName();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPrioritizeTextures(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glPrioritizeTextures (GLsizei n, const GLuint *textures:@vector, const GLclampf *priorities:@vector)
		GLsizei n = bea::Convert<GLsizei>::FromJS(args[0], 0);
		bea::vector<GLuint> textures = bea::Convert<bea::vector<GLuint> >::FromJS(args[1], 1);
		bea::vector<GLclampf> priorities = bea::Convert<bea::vector<GLclampf> >::FromJS(args[2], 2);
		::glPrioritizeTextures(n, textures, priorities);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPushAttrib(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glPushAttrib (GLbitfield mask)
		GLbitfield mask = bea::Convert<GLbitfield>::FromJS(args[0], 0);
		::glPushAttrib(mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPushClientAttrib(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glPushClientAttrib (GLbitfield mask)
		GLbitfield mask = bea::Convert<GLbitfield>::FromJS(args[0], 0);
		::glPushClientAttrib(mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPushMatrix(const v8::Arguments& args) {
		METHOD_BEGIN(0);
		//void  glPushMatrix ()
		::glPushMatrix();
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glPushName(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glPushName (GLuint name)
		GLuint name = bea::Convert<GLuint>::FromJS(args[0], 0);
		::glPushName(name);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2d(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRasterPos2d (GLdouble x, GLdouble y)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		::glRasterPos2d(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos2dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glRasterPos2dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2f(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRasterPos2f (GLfloat x, GLfloat y)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glRasterPos2f(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos2fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glRasterPos2fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2i(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRasterPos2i (GLint x, GLint y)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		::glRasterPos2i(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos2iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glRasterPos2iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2s(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRasterPos2s (GLshort x, GLshort y)
		GLshort x = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort y = bea::Convert<GLshort>::FromJS(args[1], 1);
		::glRasterPos2s(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos2sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos2sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glRasterPos2sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3d(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glRasterPos3d (GLdouble x, GLdouble y, GLdouble z)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble z = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glRasterPos3d(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos3dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glRasterPos3dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3f(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glRasterPos3f (GLfloat x, GLfloat y, GLfloat z)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat z = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glRasterPos3f(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos3fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glRasterPos3fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3i(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glRasterPos3i (GLint x, GLint y, GLint z)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint z = bea::Convert<GLint>::FromJS(args[2], 2);
		::glRasterPos3i(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos3iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glRasterPos3iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3s(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glRasterPos3s (GLshort x, GLshort y, GLshort z)
		GLshort x = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort y = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort z = bea::Convert<GLshort>::FromJS(args[2], 2);
		::glRasterPos3s(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos3sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos3sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glRasterPos3sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4d(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble z = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble w = bea::Convert<GLdouble>::FromJS(args[3], 3);
		::glRasterPos4d(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos4dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glRasterPos4dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4f(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat z = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat w = bea::Convert<GLfloat>::FromJS(args[3], 3);
		::glRasterPos4f(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos4fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glRasterPos4fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4i(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRasterPos4i (GLint x, GLint y, GLint z, GLint w)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint z = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint w = bea::Convert<GLint>::FromJS(args[3], 3);
		::glRasterPos4i(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos4iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glRasterPos4iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4s(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w)
		GLshort x = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort y = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort z = bea::Convert<GLshort>::FromJS(args[2], 2);
		GLshort w = bea::Convert<GLshort>::FromJS(args[3], 3);
		::glRasterPos4s(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRasterPos4sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glRasterPos4sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glRasterPos4sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glReadBuffer(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glReadBuffer (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glReadBuffer(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glReadPixels(const v8::Arguments& args) {
		METHOD_BEGIN(7);
		//void  glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels:@external)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[2], 2);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[3], 3);
		GLenum format = bea::Convert<GLenum>::FromJS(args[4], 4);
		GLenum type = bea::Convert<GLenum>::FromJS(args[5], 5);
		bea::external<GLvoid> pixels = bea::Convert<bea::external<GLvoid> >::FromJS(args[6], 6);
		::glReadPixels(x, y, width, height, format, type, pixels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRectd(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
		GLdouble x1 = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y1 = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble x2 = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble y2 = bea::Convert<GLdouble>::FromJS(args[3], 3);
		::glRectd(x1, y1, x2, y2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRectdv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRectdv (const GLdouble *v1:@vector, const GLdouble *v2:@vector)
		bea::vector<GLdouble> v1 = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		bea::vector<GLdouble> v2 = bea::Convert<bea::vector<GLdouble> >::FromJS(args[1], 1);
		::glRectdv(v1, v2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRectf(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
		GLfloat x1 = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y1 = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat x2 = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat y2 = bea::Convert<GLfloat>::FromJS(args[3], 3);
		::glRectf(x1, y1, x2, y2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRectfv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRectfv (const GLfloat *v1:@vector, const GLfloat *v2:@vector)
		bea::vector<GLfloat> v1 = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		bea::vector<GLfloat> v2 = bea::Convert<bea::vector<GLfloat> >::FromJS(args[1], 1);
		::glRectfv(v1, v2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRecti(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRecti (GLint x1, GLint y1, GLint x2, GLint y2)
		GLint x1 = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y1 = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint x2 = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint y2 = bea::Convert<GLint>::FromJS(args[3], 3);
		::glRecti(x1, y1, x2, y2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRectiv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRectiv (const GLint *v1:@vector, const GLint *v2:@vector)
		bea::vector<GLint> v1 = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		bea::vector<GLint> v2 = bea::Convert<bea::vector<GLint> >::FromJS(args[1], 1);
		::glRectiv(v1, v2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRects(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2)
		GLshort x1 = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort y1 = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort x2 = bea::Convert<GLshort>::FromJS(args[2], 2);
		GLshort y2 = bea::Convert<GLshort>::FromJS(args[3], 3);
		::glRects(x1, y1, x2, y2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRectsv(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glRectsv (const GLshort *v1:@vector, const GLshort *v2:@vector)
		bea::vector<GLshort> v1 = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		bea::vector<GLshort> v2 = bea::Convert<bea::vector<GLshort> >::FromJS(args[1], 1);
		::glRectsv(v1, v2);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRenderMode(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//GLint  glRenderMode (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint fnRetVal = ::glRenderMode(mode);
		return bea::Convert<GLint>::ToJS(fnRetVal);
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRotated(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
		GLdouble angle = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble z = bea::Convert<GLdouble>::FromJS(args[3], 3);
		::glRotated(angle, x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glRotatef(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
		GLfloat angle = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat z = bea::Convert<GLfloat>::FromJS(args[3], 3);
		::glRotatef(angle, x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glScaled(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glScaled (GLdouble x, GLdouble y, GLdouble z)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble z = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glScaled(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glScalef(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glScalef (GLfloat x, GLfloat y, GLfloat z)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat z = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glScalef(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glScissor(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glScissor (GLint x, GLint y, GLsizei width, GLsizei height)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[2], 2);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[3], 3);
		::glScissor(x, y, width, height);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glSelectBuffer(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glSelectBuffer (GLsizei size, GLuint *buffer:@external)
		GLsizei size = bea::Convert<GLsizei>::FromJS(args[0], 0);
		bea::external<GLuint> buffer = bea::Convert<bea::external<GLuint> >::FromJS(args[1], 1);
		::glSelectBuffer(size, buffer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glShadeModel(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glShadeModel (GLenum mode)
		GLenum mode = bea::Convert<GLenum>::FromJS(args[0], 0);
		::glShadeModel(mode);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glStencilFunc(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glStencilFunc (GLenum func, GLint ref, GLuint mask)
		GLenum func = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint ref = bea::Convert<GLint>::FromJS(args[1], 1);
		GLuint mask = bea::Convert<GLuint>::FromJS(args[2], 2);
		::glStencilFunc(func, ref, mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glStencilMask(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glStencilMask (GLuint mask)
		GLuint mask = bea::Convert<GLuint>::FromJS(args[0], 0);
		::glStencilMask(mask);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glStencilOp(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glStencilOp (GLenum fail, GLenum zfail, GLenum zpass)
		GLenum fail = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum zfail = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLenum zpass = bea::Convert<GLenum>::FromJS(args[2], 2);
		::glStencilOp(fail, zfail, zpass);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1d(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1d (GLdouble s)
		GLdouble s = bea::Convert<GLdouble>::FromJS(args[0], 0);
		::glTexCoord1d(s);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glTexCoord1dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1f(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1f (GLfloat s)
		GLfloat s = bea::Convert<GLfloat>::FromJS(args[0], 0);
		::glTexCoord1f(s);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glTexCoord1fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1i(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1i (GLint s)
		GLint s = bea::Convert<GLint>::FromJS(args[0], 0);
		::glTexCoord1i(s);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glTexCoord1iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1s(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1s (GLshort s)
		GLshort s = bea::Convert<GLshort>::FromJS(args[0], 0);
		::glTexCoord1s(s);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord1sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord1sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glTexCoord1sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2d(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glTexCoord2d (GLdouble s, GLdouble t)
		GLdouble s = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble t = bea::Convert<GLdouble>::FromJS(args[1], 1);
		::glTexCoord2d(s, t);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord2dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glTexCoord2dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2f(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glTexCoord2f (GLfloat s, GLfloat t)
		GLfloat s = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat t = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glTexCoord2f(s, t);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord2fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glTexCoord2fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2i(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glTexCoord2i (GLint s, GLint t)
		GLint s = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint t = bea::Convert<GLint>::FromJS(args[1], 1);
		::glTexCoord2i(s, t);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord2iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glTexCoord2iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2s(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glTexCoord2s (GLshort s, GLshort t)
		GLshort s = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort t = bea::Convert<GLshort>::FromJS(args[1], 1);
		::glTexCoord2s(s, t);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord2sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord2sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glTexCoord2sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3d(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexCoord3d (GLdouble s, GLdouble t, GLdouble r)
		GLdouble s = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble t = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble r = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glTexCoord3d(s, t, r);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord3dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glTexCoord3dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3f(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexCoord3f (GLfloat s, GLfloat t, GLfloat r)
		GLfloat s = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat t = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat r = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glTexCoord3f(s, t, r);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord3fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glTexCoord3fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3i(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexCoord3i (GLint s, GLint t, GLint r)
		GLint s = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint t = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint r = bea::Convert<GLint>::FromJS(args[2], 2);
		::glTexCoord3i(s, t, r);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord3iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glTexCoord3iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3s(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexCoord3s (GLshort s, GLshort t, GLshort r)
		GLshort s = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort t = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort r = bea::Convert<GLshort>::FromJS(args[2], 2);
		::glTexCoord3s(s, t, r);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord3sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord3sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glTexCoord3sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4d(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q)
		GLdouble s = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble t = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble r = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble q = bea::Convert<GLdouble>::FromJS(args[3], 3);
		::glTexCoord4d(s, t, r, q);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord4dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glTexCoord4dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4f(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q)
		GLfloat s = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat t = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat r = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat q = bea::Convert<GLfloat>::FromJS(args[3], 3);
		::glTexCoord4f(s, t, r, q);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord4fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glTexCoord4fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4i(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glTexCoord4i (GLint s, GLint t, GLint r, GLint q)
		GLint s = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint t = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint r = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint q = bea::Convert<GLint>::FromJS(args[3], 3);
		::glTexCoord4i(s, t, r, q);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord4iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glTexCoord4iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4s(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q)
		GLshort s = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort t = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort r = bea::Convert<GLshort>::FromJS(args[2], 2);
		GLshort q = bea::Convert<GLshort>::FromJS(args[3], 3);
		::glTexCoord4s(s, t, r, q);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoord4sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glTexCoord4sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glTexCoord4sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexCoordPointer(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer:@external)
		GLint size = bea::Convert<GLint>::FromJS(args[0], 0);
		GLenum type = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLsizei stride = bea::Convert<GLsizei>::FromJS(args[2], 2);
		bea::external<GLvoid> pointer = bea::Convert<bea::external<GLvoid> >::FromJS(args[3], 3);
		::glTexCoordPointer(size, type, stride, pointer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexEnvf(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexEnvf (GLenum target, GLenum pname, GLfloat param)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glTexEnvf(target, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexEnvfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glTexEnvfv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexEnvi(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexEnvi (GLenum target, GLenum pname, GLint param)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLint param = bea::Convert<GLint>::FromJS(args[2], 2);
		::glTexEnvi(target, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexEnviv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexEnviv (GLenum target, GLenum pname, const GLint *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glTexEnviv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexGend(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexGend (GLenum coord, GLenum pname, GLdouble param)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLdouble param = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glTexGend(coord, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexGendv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexGendv (GLenum coord, GLenum pname, const GLdouble *params:@vector)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLdouble> params = bea::Convert<bea::vector<GLdouble> >::FromJS(args[2], 2);
		::glTexGendv(coord, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexGenf(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexGenf (GLenum coord, GLenum pname, GLfloat param)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glTexGenf(coord, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexGenfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params:@vector)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glTexGenfv(coord, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexGeni(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexGeni (GLenum coord, GLenum pname, GLint param)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLint param = bea::Convert<GLint>::FromJS(args[2], 2);
		::glTexGeni(coord, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexGeniv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexGeniv (GLenum coord, GLenum pname, const GLint *params:@vector)
		GLenum coord = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glTexGeniv(coord, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexImage1D(const v8::Arguments& args) {
		METHOD_BEGIN(8);
		//void  glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels:@external)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint internalformat = bea::Convert<GLint>::FromJS(args[2], 2);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[3], 3);
		GLint border = bea::Convert<GLint>::FromJS(args[4], 4);
		GLenum format = bea::Convert<GLenum>::FromJS(args[5], 5);
		GLenum type = bea::Convert<GLenum>::FromJS(args[6], 6);
		bea::external<GLvoid> pixels = bea::Convert<bea::external<GLvoid> >::FromJS(args[7], 7);
		::glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexImage2D(const v8::Arguments& args) {
		METHOD_BEGIN(9);
		//void  glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels:@external)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint internalformat = bea::Convert<GLint>::FromJS(args[2], 2);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[3], 3);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[4], 4);
		GLint border = bea::Convert<GLint>::FromJS(args[5], 5);
		GLenum format = bea::Convert<GLenum>::FromJS(args[6], 6);
		GLenum type = bea::Convert<GLenum>::FromJS(args[7], 7);
		bea::external<GLvoid> pixels = bea::Convert<bea::external<GLvoid> >::FromJS(args[8], 8);
		::glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexParameterf(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexParameterf (GLenum target, GLenum pname, GLfloat param)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLfloat param = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glTexParameterf(target, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexParameterfv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLfloat> params = bea::Convert<bea::vector<GLfloat> >::FromJS(args[2], 2);
		::glTexParameterfv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexParameteri(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexParameteri (GLenum target, GLenum pname, GLint param)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLint param = bea::Convert<GLint>::FromJS(args[2], 2);
		::glTexParameteri(target, pname, param);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexParameteriv(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTexParameteriv (GLenum target, GLenum pname, const GLint *params:@vector)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLenum pname = bea::Convert<GLenum>::FromJS(args[1], 1);
		bea::vector<GLint> params = bea::Convert<bea::vector<GLint> >::FromJS(args[2], 2);
		::glTexParameteriv(target, pname, params);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexSubImage1D(const v8::Arguments& args) {
		METHOD_BEGIN(7);
		//void  glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels:@external)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint xoffset = bea::Convert<GLint>::FromJS(args[2], 2);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[3], 3);
		GLenum format = bea::Convert<GLenum>::FromJS(args[4], 4);
		GLenum type = bea::Convert<GLenum>::FromJS(args[5], 5);
		bea::external<GLvoid> pixels = bea::Convert<bea::external<GLvoid> >::FromJS(args[6], 6);
		::glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTexSubImage2D(const v8::Arguments& args) {
		METHOD_BEGIN(9);
		//void  glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels:@external)
		GLenum target = bea::Convert<GLenum>::FromJS(args[0], 0);
		GLint level = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint xoffset = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint yoffset = bea::Convert<GLint>::FromJS(args[3], 3);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[4], 4);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[5], 5);
		GLenum format = bea::Convert<GLenum>::FromJS(args[6], 6);
		GLenum type = bea::Convert<GLenum>::FromJS(args[7], 7);
		bea::external<GLvoid> pixels = bea::Convert<bea::external<GLvoid> >::FromJS(args[8], 8);
		::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTranslated(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTranslated (GLdouble x, GLdouble y, GLdouble z)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble z = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glTranslated(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glTranslatef(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glTranslatef (GLfloat x, GLfloat y, GLfloat z)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat z = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glTranslatef(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2d(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glVertex2d (GLdouble x, GLdouble y)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		::glVertex2d(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex2dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glVertex2dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2f(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glVertex2f (GLfloat x, GLfloat y)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		::glVertex2f(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex2fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glVertex2fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2i(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glVertex2i (GLint x, GLint y)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		::glVertex2i(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex2iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glVertex2iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2s(const v8::Arguments& args) {
		METHOD_BEGIN(2);
		//void  glVertex2s (GLshort x, GLshort y)
		GLshort x = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort y = bea::Convert<GLshort>::FromJS(args[1], 1);
		::glVertex2s(x, y);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex2sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex2sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glVertex2sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3d(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glVertex3d (GLdouble x, GLdouble y, GLdouble z)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble z = bea::Convert<GLdouble>::FromJS(args[2], 2);
		::glVertex3d(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex3dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glVertex3dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3f(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glVertex3f (GLfloat x, GLfloat y, GLfloat z)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat z = bea::Convert<GLfloat>::FromJS(args[2], 2);
		::glVertex3f(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex3fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glVertex3fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3i(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glVertex3i (GLint x, GLint y, GLint z)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint z = bea::Convert<GLint>::FromJS(args[2], 2);
		::glVertex3i(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex3iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glVertex3iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3s(const v8::Arguments& args) {
		METHOD_BEGIN(3);
		//void  glVertex3s (GLshort x, GLshort y, GLshort z)
		GLshort x = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort y = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort z = bea::Convert<GLshort>::FromJS(args[2], 2);
		::glVertex3s(x, y, z);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex3sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex3sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glVertex3sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4d(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
		GLdouble x = bea::Convert<GLdouble>::FromJS(args[0], 0);
		GLdouble y = bea::Convert<GLdouble>::FromJS(args[1], 1);
		GLdouble z = bea::Convert<GLdouble>::FromJS(args[2], 2);
		GLdouble w = bea::Convert<GLdouble>::FromJS(args[3], 3);
		::glVertex4d(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4dv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex4dv (const GLdouble *v:@vector)
		bea::vector<GLdouble> v = bea::Convert<bea::vector<GLdouble> >::FromJS(args[0], 0);
		::glVertex4dv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4f(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
		GLfloat x = bea::Convert<GLfloat>::FromJS(args[0], 0);
		GLfloat y = bea::Convert<GLfloat>::FromJS(args[1], 1);
		GLfloat z = bea::Convert<GLfloat>::FromJS(args[2], 2);
		GLfloat w = bea::Convert<GLfloat>::FromJS(args[3], 3);
		::glVertex4f(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4fv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex4fv (const GLfloat *v:@vector)
		bea::vector<GLfloat> v = bea::Convert<bea::vector<GLfloat> >::FromJS(args[0], 0);
		::glVertex4fv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4i(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glVertex4i (GLint x, GLint y, GLint z, GLint w)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLint z = bea::Convert<GLint>::FromJS(args[2], 2);
		GLint w = bea::Convert<GLint>::FromJS(args[3], 3);
		::glVertex4i(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4iv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex4iv (const GLint *v:@vector)
		bea::vector<GLint> v = bea::Convert<bea::vector<GLint> >::FromJS(args[0], 0);
		::glVertex4iv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4s(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w)
		GLshort x = bea::Convert<GLshort>::FromJS(args[0], 0);
		GLshort y = bea::Convert<GLshort>::FromJS(args[1], 1);
		GLshort z = bea::Convert<GLshort>::FromJS(args[2], 2);
		GLshort w = bea::Convert<GLshort>::FromJS(args[3], 3);
		::glVertex4s(x, y, z, w);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertex4sv(const v8::Arguments& args) {
		METHOD_BEGIN(1);
		//void  glVertex4sv (const GLshort *v:@vector)
		bea::vector<GLshort> v = bea::Convert<bea::vector<GLshort> >::FromJS(args[0], 0);
		::glVertex4sv(v);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glVertexPointer(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer:@external)
		GLint size = bea::Convert<GLint>::FromJS(args[0], 0);
		GLenum type = bea::Convert<GLenum>::FromJS(args[1], 1);
		GLsizei stride = bea::Convert<GLsizei>::FromJS(args[2], 2);
		bea::external<GLvoid> pointer = bea::Convert<bea::external<GLvoid> >::FromJS(args[3], 3);
		::glVertexPointer(size, type, stride, pointer);
		return args.This();
		METHOD_END();
	}
	
	v8::Handle<v8::Value> JOpenGL::glViewport(const v8::Arguments& args) {
		METHOD_BEGIN(4);
		//void  glViewport (GLint x, GLint y, GLsizei width, GLsizei height)
		GLint x = bea::Convert<GLint>::FromJS(args[0], 0);
		GLint y = bea::Convert<GLint>::FromJS(args[1], 1);
		GLsizei width = bea::Convert<GLsizei>::FromJS(args[2], 2);
		GLsizei height = bea::Convert<GLsizei>::FromJS(args[3], 3);
		::glViewport(x, y, width, height);
		return args.This();
		METHOD_END();
	}
	
	void JOpenGL::_InitJSObject(v8::Handle<v8::Object> target) {
		bea::ExposedStatic<JOpenGL>* obj = EXPOSE_STATIC(JOpenGL, "OpenGL");
		//Exposed Methods
		obj->exposeMethod("glAccum", glAccum);
		obj->exposeMethod("glAlphaFunc", glAlphaFunc);
		obj->exposeMethod("glAreTexturesResident", glAreTexturesResident);
		obj->exposeMethod("glArrayElement", glArrayElement);
		obj->exposeMethod("glBegin", glBegin);
		obj->exposeMethod("glBindTexture", glBindTexture);
		obj->exposeMethod("glBitmap", glBitmap);
		obj->exposeMethod("glBlendFunc", glBlendFunc);
		obj->exposeMethod("glCallList", glCallList);
		obj->exposeMethod("glCallLists", glCallLists);
		obj->exposeMethod("glClear", glClear);
		obj->exposeMethod("glClearAccum", glClearAccum);
		obj->exposeMethod("glClearColor", glClearColor);
		obj->exposeMethod("glClearDepth", glClearDepth);
		obj->exposeMethod("glClearIndex", glClearIndex);
		obj->exposeMethod("glClearStencil", glClearStencil);
		obj->exposeMethod("glClipPlane", glClipPlane);
		obj->exposeMethod("glColor3b", glColor3b);
		obj->exposeMethod("glColor3bv", glColor3bv);
		obj->exposeMethod("glColor3d", glColor3d);
		obj->exposeMethod("glColor3dv", glColor3dv);
		obj->exposeMethod("glColor3f", glColor3f);
		obj->exposeMethod("glColor3fv", glColor3fv);
		obj->exposeMethod("glColor3i", glColor3i);
		obj->exposeMethod("glColor3iv", glColor3iv);
		obj->exposeMethod("glColor3s", glColor3s);
		obj->exposeMethod("glColor3sv", glColor3sv);
		obj->exposeMethod("glColor3ub", glColor3ub);
		obj->exposeMethod("glColor3ubv", glColor3ubv);
		obj->exposeMethod("glColor3ui", glColor3ui);
		obj->exposeMethod("glColor3uiv", glColor3uiv);
		obj->exposeMethod("glColor3us", glColor3us);
		obj->exposeMethod("glColor3usv", glColor3usv);
		obj->exposeMethod("glColor4b", glColor4b);
		obj->exposeMethod("glColor4bv", glColor4bv);
		obj->exposeMethod("glColor4d", glColor4d);
		obj->exposeMethod("glColor4dv", glColor4dv);
		obj->exposeMethod("glColor4f", glColor4f);
		obj->exposeMethod("glColor4fv", glColor4fv);
		obj->exposeMethod("glColor4i", glColor4i);
		obj->exposeMethod("glColor4iv", glColor4iv);
		obj->exposeMethod("glColor4s", glColor4s);
		obj->exposeMethod("glColor4sv", glColor4sv);
		obj->exposeMethod("glColor4ub", glColor4ub);
		obj->exposeMethod("glColor4ubv", glColor4ubv);
		obj->exposeMethod("glColor4ui", glColor4ui);
		obj->exposeMethod("glColor4uiv", glColor4uiv);
		obj->exposeMethod("glColor4us", glColor4us);
		obj->exposeMethod("glColor4usv", glColor4usv);
		obj->exposeMethod("glColorMask", glColorMask);
		obj->exposeMethod("glColorMaterial", glColorMaterial);
		obj->exposeMethod("glColorPointer", glColorPointer);
		obj->exposeMethod("glCopyPixels", glCopyPixels);
		obj->exposeMethod("glCopyTexImage1D", glCopyTexImage1D);
		obj->exposeMethod("glCopyTexImage2D", glCopyTexImage2D);
		obj->exposeMethod("glCopyTexSubImage1D", glCopyTexSubImage1D);
		obj->exposeMethod("glCopyTexSubImage2D", glCopyTexSubImage2D);
		obj->exposeMethod("glCullFace", glCullFace);
		obj->exposeMethod("glDeleteLists", glDeleteLists);
		obj->exposeMethod("glDeleteTextures", glDeleteTextures);
		obj->exposeMethod("glDepthFunc", glDepthFunc);
		obj->exposeMethod("glDepthMask", glDepthMask);
		obj->exposeMethod("glDepthRange", glDepthRange);
		obj->exposeMethod("glDisable", glDisable);
		obj->exposeMethod("glDisableClientState", glDisableClientState);
		obj->exposeMethod("glDrawArrays", glDrawArrays);
		obj->exposeMethod("glDrawBuffer", glDrawBuffer);
		obj->exposeMethod("glDrawElements", glDrawElements);
		obj->exposeMethod("glDrawPixels", glDrawPixels);
		obj->exposeMethod("glEdgeFlag", glEdgeFlag);
		obj->exposeMethod("glEdgeFlagPointer", glEdgeFlagPointer);
		obj->exposeMethod("glEdgeFlagv", glEdgeFlagv);
		obj->exposeMethod("glEnable", glEnable);
		obj->exposeMethod("glEnableClientState", glEnableClientState);
		obj->exposeMethod("glEnd", glEnd);
		obj->exposeMethod("glEndList", glEndList);
		obj->exposeMethod("glEvalCoord1d", glEvalCoord1d);
		obj->exposeMethod("glEvalCoord1dv", glEvalCoord1dv);
		obj->exposeMethod("glEvalCoord1f", glEvalCoord1f);
		obj->exposeMethod("glEvalCoord1fv", glEvalCoord1fv);
		obj->exposeMethod("glEvalCoord2d", glEvalCoord2d);
		obj->exposeMethod("glEvalCoord2dv", glEvalCoord2dv);
		obj->exposeMethod("glEvalCoord2f", glEvalCoord2f);
		obj->exposeMethod("glEvalCoord2fv", glEvalCoord2fv);
		obj->exposeMethod("glEvalMesh1", glEvalMesh1);
		obj->exposeMethod("glEvalMesh2", glEvalMesh2);
		obj->exposeMethod("glEvalPoint1", glEvalPoint1);
		obj->exposeMethod("glEvalPoint2", glEvalPoint2);
		obj->exposeMethod("glFeedbackBuffer", glFeedbackBuffer);
		obj->exposeMethod("glFinish", glFinish);
		obj->exposeMethod("glFlush", glFlush);
		obj->exposeMethod("glFogf", glFogf);
		obj->exposeMethod("glFogfv", glFogfv);
		obj->exposeMethod("glFogi", glFogi);
		obj->exposeMethod("glFogiv", glFogiv);
		obj->exposeMethod("glFrontFace", glFrontFace);
		obj->exposeMethod("glFrustum", glFrustum);
		obj->exposeMethod("glGenLists", glGenLists);
		obj->exposeMethod("glGenTextures", glGenTextures);
		obj->exposeMethod("glGetBooleanv", glGetBooleanv);
		obj->exposeMethod("glGetClipPlane", glGetClipPlane);
		obj->exposeMethod("glGetDoublev", glGetDoublev);
		obj->exposeMethod("glGetError", glGetError);
		obj->exposeMethod("glGetFloatv", glGetFloatv);
		obj->exposeMethod("glGetIntegerv", glGetIntegerv);
		obj->exposeMethod("glGetLightfv", glGetLightfv);
		obj->exposeMethod("glGetLightiv", glGetLightiv);
		obj->exposeMethod("glGetMapdv", glGetMapdv);
		obj->exposeMethod("glGetMapfv", glGetMapfv);
		obj->exposeMethod("glGetMapiv", glGetMapiv);
		obj->exposeMethod("glGetMaterialfv", glGetMaterialfv);
		obj->exposeMethod("glGetMaterialiv", glGetMaterialiv);
		obj->exposeMethod("glGetPixelMapfv", glGetPixelMapfv);
		obj->exposeMethod("glGetPixelMapuiv", glGetPixelMapuiv);
		obj->exposeMethod("glGetPixelMapusv", glGetPixelMapusv);
		obj->exposeMethod("glGetPointerv", glGetPointerv);
		obj->exposeMethod("glGetPolygonStipple", glGetPolygonStipple);
		obj->exposeMethod("glGetString", glGetString);
		obj->exposeMethod("glGetTexEnvfv", glGetTexEnvfv);
		obj->exposeMethod("glGetTexEnviv", glGetTexEnviv);
		obj->exposeMethod("glGetTexGendv", glGetTexGendv);
		obj->exposeMethod("glGetTexGenfv", glGetTexGenfv);
		obj->exposeMethod("glGetTexGeniv", glGetTexGeniv);
		obj->exposeMethod("glGetTexImage", glGetTexImage);
		obj->exposeMethod("glGetTexLevelParameterfv", glGetTexLevelParameterfv);
		obj->exposeMethod("glGetTexLevelParameteriv", glGetTexLevelParameteriv);
		obj->exposeMethod("glGetTexParameterfv", glGetTexParameterfv);
		obj->exposeMethod("glGetTexParameteriv", glGetTexParameteriv);
		obj->exposeMethod("glHint", glHint);
		obj->exposeMethod("glIndexMask", glIndexMask);
		obj->exposeMethod("glIndexPointer", glIndexPointer);
		obj->exposeMethod("glIndexd", glIndexd);
		obj->exposeMethod("glIndexdv", glIndexdv);
		obj->exposeMethod("glIndexf", glIndexf);
		obj->exposeMethod("glIndexfv", glIndexfv);
		obj->exposeMethod("glIndexi", glIndexi);
		obj->exposeMethod("glIndexiv", glIndexiv);
		obj->exposeMethod("glIndexs", glIndexs);
		obj->exposeMethod("glIndexsv", glIndexsv);
		obj->exposeMethod("glIndexub", glIndexub);
		obj->exposeMethod("glIndexubv", glIndexubv);
		obj->exposeMethod("glInitNames", glInitNames);
		obj->exposeMethod("glIsEnabled", glIsEnabled);
		obj->exposeMethod("glIsList", glIsList);
		obj->exposeMethod("glIsTexture", glIsTexture);
		obj->exposeMethod("glLightModelf", glLightModelf);
		obj->exposeMethod("glLightModelfv", glLightModelfv);
		obj->exposeMethod("glLightModeli", glLightModeli);
		obj->exposeMethod("glLightModeliv", glLightModeliv);
		obj->exposeMethod("glLightf", glLightf);
		obj->exposeMethod("glLightfv", glLightfv);
		obj->exposeMethod("glLighti", glLighti);
		obj->exposeMethod("glLightiv", glLightiv);
		obj->exposeMethod("glLineStipple", glLineStipple);
		obj->exposeMethod("glLineWidth", glLineWidth);
		obj->exposeMethod("glListBase", glListBase);
		obj->exposeMethod("glLoadIdentity", glLoadIdentity);
		obj->exposeMethod("glLoadMatrixd", glLoadMatrixd);
		obj->exposeMethod("glLoadMatrixf", glLoadMatrixf);
		obj->exposeMethod("glLoadName", glLoadName);
		obj->exposeMethod("glLogicOp", glLogicOp);
		obj->exposeMethod("glMap1d", glMap1d);
		obj->exposeMethod("glMap1f", glMap1f);
		obj->exposeMethod("glMap2d", glMap2d);
		obj->exposeMethod("glMap2f", glMap2f);
		obj->exposeMethod("glMapGrid1d", glMapGrid1d);
		obj->exposeMethod("glMapGrid1f", glMapGrid1f);
		obj->exposeMethod("glMapGrid2d", glMapGrid2d);
		obj->exposeMethod("glMapGrid2f", glMapGrid2f);
		obj->exposeMethod("glMaterialf", glMaterialf);
		obj->exposeMethod("glMaterialfv", glMaterialfv);
		obj->exposeMethod("glMateriali", glMateriali);
		obj->exposeMethod("glMaterialiv", glMaterialiv);
		obj->exposeMethod("glMatrixMode", glMatrixMode);
		obj->exposeMethod("glMultMatrixd", glMultMatrixd);
		obj->exposeMethod("glMultMatrixf", glMultMatrixf);
		obj->exposeMethod("glNewList", glNewList);
		obj->exposeMethod("glNormal3b", glNormal3b);
		obj->exposeMethod("glNormal3bv", glNormal3bv);
		obj->exposeMethod("glNormal3d", glNormal3d);
		obj->exposeMethod("glNormal3dv", glNormal3dv);
		obj->exposeMethod("glNormal3f", glNormal3f);
		obj->exposeMethod("glNormal3fv", glNormal3fv);
		obj->exposeMethod("glNormal3i", glNormal3i);
		obj->exposeMethod("glNormal3iv", glNormal3iv);
		obj->exposeMethod("glNormal3s", glNormal3s);
		obj->exposeMethod("glNormal3sv", glNormal3sv);
		obj->exposeMethod("glNormalPointer", glNormalPointer);
		obj->exposeMethod("glOrtho", glOrtho);
		obj->exposeMethod("glPassThrough", glPassThrough);
		obj->exposeMethod("glPixelMapfv", glPixelMapfv);
		obj->exposeMethod("glPixelMapuiv", glPixelMapuiv);
		obj->exposeMethod("glPixelMapusv", glPixelMapusv);
		obj->exposeMethod("glPixelStoref", glPixelStoref);
		obj->exposeMethod("glPixelStorei", glPixelStorei);
		obj->exposeMethod("glPixelTransferf", glPixelTransferf);
		obj->exposeMethod("glPixelTransferi", glPixelTransferi);
		obj->exposeMethod("glPixelZoom", glPixelZoom);
		obj->exposeMethod("glPointSize", glPointSize);
		obj->exposeMethod("glPolygonMode", glPolygonMode);
		obj->exposeMethod("glPolygonOffset", glPolygonOffset);
		obj->exposeMethod("glPolygonStipple", glPolygonStipple);
		obj->exposeMethod("glPopAttrib", glPopAttrib);
		obj->exposeMethod("glPopClientAttrib", glPopClientAttrib);
		obj->exposeMethod("glPopMatrix", glPopMatrix);
		obj->exposeMethod("glPopName", glPopName);
		obj->exposeMethod("glPrioritizeTextures", glPrioritizeTextures);
		obj->exposeMethod("glPushAttrib", glPushAttrib);
		obj->exposeMethod("glPushClientAttrib", glPushClientAttrib);
		obj->exposeMethod("glPushMatrix", glPushMatrix);
		obj->exposeMethod("glPushName", glPushName);
		obj->exposeMethod("glRasterPos2d", glRasterPos2d);
		obj->exposeMethod("glRasterPos2dv", glRasterPos2dv);
		obj->exposeMethod("glRasterPos2f", glRasterPos2f);
		obj->exposeMethod("glRasterPos2fv", glRasterPos2fv);
		obj->exposeMethod("glRasterPos2i", glRasterPos2i);
		obj->exposeMethod("glRasterPos2iv", glRasterPos2iv);
		obj->exposeMethod("glRasterPos2s", glRasterPos2s);
		obj->exposeMethod("glRasterPos2sv", glRasterPos2sv);
		obj->exposeMethod("glRasterPos3d", glRasterPos3d);
		obj->exposeMethod("glRasterPos3dv", glRasterPos3dv);
		obj->exposeMethod("glRasterPos3f", glRasterPos3f);
		obj->exposeMethod("glRasterPos3fv", glRasterPos3fv);
		obj->exposeMethod("glRasterPos3i", glRasterPos3i);
		obj->exposeMethod("glRasterPos3iv", glRasterPos3iv);
		obj->exposeMethod("glRasterPos3s", glRasterPos3s);
		obj->exposeMethod("glRasterPos3sv", glRasterPos3sv);
		obj->exposeMethod("glRasterPos4d", glRasterPos4d);
		obj->exposeMethod("glRasterPos4dv", glRasterPos4dv);
		obj->exposeMethod("glRasterPos4f", glRasterPos4f);
		obj->exposeMethod("glRasterPos4fv", glRasterPos4fv);
		obj->exposeMethod("glRasterPos4i", glRasterPos4i);
		obj->exposeMethod("glRasterPos4iv", glRasterPos4iv);
		obj->exposeMethod("glRasterPos4s", glRasterPos4s);
		obj->exposeMethod("glRasterPos4sv", glRasterPos4sv);
		obj->exposeMethod("glReadBuffer", glReadBuffer);
		obj->exposeMethod("glReadPixels", glReadPixels);
		obj->exposeMethod("glRectd", glRectd);
		obj->exposeMethod("glRectdv", glRectdv);
		obj->exposeMethod("glRectf", glRectf);
		obj->exposeMethod("glRectfv", glRectfv);
		obj->exposeMethod("glRecti", glRecti);
		obj->exposeMethod("glRectiv", glRectiv);
		obj->exposeMethod("glRects", glRects);
		obj->exposeMethod("glRectsv", glRectsv);
		obj->exposeMethod("glRenderMode", glRenderMode);
		obj->exposeMethod("glRotated", glRotated);
		obj->exposeMethod("glRotatef", glRotatef);
		obj->exposeMethod("glScaled", glScaled);
		obj->exposeMethod("glScalef", glScalef);
		obj->exposeMethod("glScissor", glScissor);
		obj->exposeMethod("glSelectBuffer", glSelectBuffer);
		obj->exposeMethod("glShadeModel", glShadeModel);
		obj->exposeMethod("glStencilFunc", glStencilFunc);
		obj->exposeMethod("glStencilMask", glStencilMask);
		obj->exposeMethod("glStencilOp", glStencilOp);
		obj->exposeMethod("glTexCoord1d", glTexCoord1d);
		obj->exposeMethod("glTexCoord1dv", glTexCoord1dv);
		obj->exposeMethod("glTexCoord1f", glTexCoord1f);
		obj->exposeMethod("glTexCoord1fv", glTexCoord1fv);
		obj->exposeMethod("glTexCoord1i", glTexCoord1i);
		obj->exposeMethod("glTexCoord1iv", glTexCoord1iv);
		obj->exposeMethod("glTexCoord1s", glTexCoord1s);
		obj->exposeMethod("glTexCoord1sv", glTexCoord1sv);
		obj->exposeMethod("glTexCoord2d", glTexCoord2d);
		obj->exposeMethod("glTexCoord2dv", glTexCoord2dv);
		obj->exposeMethod("glTexCoord2f", glTexCoord2f);
		obj->exposeMethod("glTexCoord2fv", glTexCoord2fv);
		obj->exposeMethod("glTexCoord2i", glTexCoord2i);
		obj->exposeMethod("glTexCoord2iv", glTexCoord2iv);
		obj->exposeMethod("glTexCoord2s", glTexCoord2s);
		obj->exposeMethod("glTexCoord2sv", glTexCoord2sv);
		obj->exposeMethod("glTexCoord3d", glTexCoord3d);
		obj->exposeMethod("glTexCoord3dv", glTexCoord3dv);
		obj->exposeMethod("glTexCoord3f", glTexCoord3f);
		obj->exposeMethod("glTexCoord3fv", glTexCoord3fv);
		obj->exposeMethod("glTexCoord3i", glTexCoord3i);
		obj->exposeMethod("glTexCoord3iv", glTexCoord3iv);
		obj->exposeMethod("glTexCoord3s", glTexCoord3s);
		obj->exposeMethod("glTexCoord3sv", glTexCoord3sv);
		obj->exposeMethod("glTexCoord4d", glTexCoord4d);
		obj->exposeMethod("glTexCoord4dv", glTexCoord4dv);
		obj->exposeMethod("glTexCoord4f", glTexCoord4f);
		obj->exposeMethod("glTexCoord4fv", glTexCoord4fv);
		obj->exposeMethod("glTexCoord4i", glTexCoord4i);
		obj->exposeMethod("glTexCoord4iv", glTexCoord4iv);
		obj->exposeMethod("glTexCoord4s", glTexCoord4s);
		obj->exposeMethod("glTexCoord4sv", glTexCoord4sv);
		obj->exposeMethod("glTexCoordPointer", glTexCoordPointer);
		obj->exposeMethod("glTexEnvf", glTexEnvf);
		obj->exposeMethod("glTexEnvfv", glTexEnvfv);
		obj->exposeMethod("glTexEnvi", glTexEnvi);
		obj->exposeMethod("glTexEnviv", glTexEnviv);
		obj->exposeMethod("glTexGend", glTexGend);
		obj->exposeMethod("glTexGendv", glTexGendv);
		obj->exposeMethod("glTexGenf", glTexGenf);
		obj->exposeMethod("glTexGenfv", glTexGenfv);
		obj->exposeMethod("glTexGeni", glTexGeni);
		obj->exposeMethod("glTexGeniv", glTexGeniv);
		obj->exposeMethod("glTexImage1D", glTexImage1D);
		obj->exposeMethod("glTexImage2D", glTexImage2D);
		obj->exposeMethod("glTexParameterf", glTexParameterf);
		obj->exposeMethod("glTexParameterfv", glTexParameterfv);
		obj->exposeMethod("glTexParameteri", glTexParameteri);
		obj->exposeMethod("glTexParameteriv", glTexParameteriv);
		obj->exposeMethod("glTexSubImage1D", glTexSubImage1D);
		obj->exposeMethod("glTexSubImage2D", glTexSubImage2D);
		obj->exposeMethod("glTranslated", glTranslated);
		obj->exposeMethod("glTranslatef", glTranslatef);
		obj->exposeMethod("glVertex2d", glVertex2d);
		obj->exposeMethod("glVertex2dv", glVertex2dv);
		obj->exposeMethod("glVertex2f", glVertex2f);
		obj->exposeMethod("glVertex2fv", glVertex2fv);
		obj->exposeMethod("glVertex2i", glVertex2i);
		obj->exposeMethod("glVertex2iv", glVertex2iv);
		obj->exposeMethod("glVertex2s", glVertex2s);
		obj->exposeMethod("glVertex2sv", glVertex2sv);
		obj->exposeMethod("glVertex3d", glVertex3d);
		obj->exposeMethod("glVertex3dv", glVertex3dv);
		obj->exposeMethod("glVertex3f", glVertex3f);
		obj->exposeMethod("glVertex3fv", glVertex3fv);
		obj->exposeMethod("glVertex3i", glVertex3i);
		obj->exposeMethod("glVertex3iv", glVertex3iv);
		obj->exposeMethod("glVertex3s", glVertex3s);
		obj->exposeMethod("glVertex3sv", glVertex3sv);
		obj->exposeMethod("glVertex4d", glVertex4d);
		obj->exposeMethod("glVertex4dv", glVertex4dv);
		obj->exposeMethod("glVertex4f", glVertex4f);
		obj->exposeMethod("glVertex4fv", glVertex4fv);
		obj->exposeMethod("glVertex4i", glVertex4i);
		obj->exposeMethod("glVertex4iv", glVertex4iv);
		obj->exposeMethod("glVertex4s", glVertex4s);
		obj->exposeMethod("glVertex4sv", glVertex4sv);
		obj->exposeMethod("glVertexPointer", glVertexPointer);
		obj->exposeMethod("glViewport", glViewport);
		//Accessors
		//Expose object to the Javascript
		obj->exposeTo(target);
	}
	
}

namespace jopengl {
	void ExposeConstants(v8::Handle<v8::Object> target) {
		BEA_DEFINE_CONSTANT(target, GL_VERSION_1_1);
		BEA_DEFINE_CONSTANT(target, GL_ACCUM);
		BEA_DEFINE_CONSTANT(target, GL_LOAD);
		BEA_DEFINE_CONSTANT(target, GL_RETURN);
		BEA_DEFINE_CONSTANT(target, GL_MULT);
		BEA_DEFINE_CONSTANT(target, GL_ADD);
		BEA_DEFINE_CONSTANT(target, GL_NEVER);
		BEA_DEFINE_CONSTANT(target, GL_LESS);
		BEA_DEFINE_CONSTANT(target, GL_EQUAL);
		BEA_DEFINE_CONSTANT(target, GL_LEQUAL);
		BEA_DEFINE_CONSTANT(target, GL_GREATER);
		BEA_DEFINE_CONSTANT(target, GL_NOTEQUAL);
		BEA_DEFINE_CONSTANT(target, GL_GEQUAL);
		BEA_DEFINE_CONSTANT(target, GL_ALWAYS);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_BIT);
		BEA_DEFINE_CONSTANT(target, GL_POINT_BIT);
		BEA_DEFINE_CONSTANT(target, GL_LINE_BIT);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_BIT);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_STIPPLE_BIT);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MODE_BIT);
		BEA_DEFINE_CONSTANT(target, GL_LIGHTING_BIT);
		BEA_DEFINE_CONSTANT(target, GL_FOG_BIT);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_BUFFER_BIT);
		BEA_DEFINE_CONSTANT(target, GL_ACCUM_BUFFER_BIT);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_BUFFER_BIT);
		BEA_DEFINE_CONSTANT(target, GL_VIEWPORT_BIT);
		BEA_DEFINE_CONSTANT(target, GL_TRANSFORM_BIT);
		BEA_DEFINE_CONSTANT(target, GL_ENABLE_BIT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_BUFFER_BIT);
		BEA_DEFINE_CONSTANT(target, GL_HINT_BIT);
		BEA_DEFINE_CONSTANT(target, GL_EVAL_BIT);
		BEA_DEFINE_CONSTANT(target, GL_LIST_BIT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_BIT);
		BEA_DEFINE_CONSTANT(target, GL_SCISSOR_BIT);
		BEA_DEFINE_CONSTANT(target, GL_ALL_ATTRIB_BITS);
		BEA_DEFINE_CONSTANT(target, GL_POINTS);
		BEA_DEFINE_CONSTANT(target, GL_LINES);
		BEA_DEFINE_CONSTANT(target, GL_LINE_LOOP);
		BEA_DEFINE_CONSTANT(target, GL_LINE_STRIP);
		BEA_DEFINE_CONSTANT(target, GL_TRIANGLES);
		BEA_DEFINE_CONSTANT(target, GL_TRIANGLE_STRIP);
		BEA_DEFINE_CONSTANT(target, GL_TRIANGLE_FAN);
		BEA_DEFINE_CONSTANT(target, GL_QUADS);
		BEA_DEFINE_CONSTANT(target, GL_QUAD_STRIP);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON);
		BEA_DEFINE_CONSTANT(target, GL_ZERO);
		BEA_DEFINE_CONSTANT(target, GL_ONE);
		BEA_DEFINE_CONSTANT(target, GL_SRC_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_ONE_MINUS_SRC_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_SRC_ALPHA);
		BEA_DEFINE_CONSTANT(target, GL_ONE_MINUS_SRC_ALPHA);
		BEA_DEFINE_CONSTANT(target, GL_DST_ALPHA);
		BEA_DEFINE_CONSTANT(target, GL_ONE_MINUS_DST_ALPHA);
		BEA_DEFINE_CONSTANT(target, GL_DST_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_ONE_MINUS_DST_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_SRC_ALPHA_SATURATE);
		BEA_DEFINE_CONSTANT(target, GL_TRUE);
		BEA_DEFINE_CONSTANT(target, GL_FALSE);
		BEA_DEFINE_CONSTANT(target, GL_CLIP_PLANE0);
		BEA_DEFINE_CONSTANT(target, GL_CLIP_PLANE1);
		BEA_DEFINE_CONSTANT(target, GL_CLIP_PLANE2);
		BEA_DEFINE_CONSTANT(target, GL_CLIP_PLANE3);
		BEA_DEFINE_CONSTANT(target, GL_CLIP_PLANE4);
		BEA_DEFINE_CONSTANT(target, GL_CLIP_PLANE5);
		BEA_DEFINE_CONSTANT(target, GL_BYTE);
		BEA_DEFINE_CONSTANT(target, GL_UNSIGNED_BYTE);
		BEA_DEFINE_CONSTANT(target, GL_SHORT);
		BEA_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT);
		BEA_DEFINE_CONSTANT(target, GL_INT);
		BEA_DEFINE_CONSTANT(target, GL_UNSIGNED_INT);
		BEA_DEFINE_CONSTANT(target, GL_FLOAT);
		BEA_DEFINE_CONSTANT(target, GL_2_BYTES);
		BEA_DEFINE_CONSTANT(target, GL_3_BYTES);
		BEA_DEFINE_CONSTANT(target, GL_4_BYTES);
		BEA_DEFINE_CONSTANT(target, GL_DOUBLE);
		BEA_DEFINE_CONSTANT(target, GL_NONE);
		BEA_DEFINE_CONSTANT(target, GL_FRONT_LEFT);
		BEA_DEFINE_CONSTANT(target, GL_FRONT_RIGHT);
		BEA_DEFINE_CONSTANT(target, GL_BACK_LEFT);
		BEA_DEFINE_CONSTANT(target, GL_BACK_RIGHT);
		BEA_DEFINE_CONSTANT(target, GL_FRONT);
		BEA_DEFINE_CONSTANT(target, GL_BACK);
		BEA_DEFINE_CONSTANT(target, GL_LEFT);
		BEA_DEFINE_CONSTANT(target, GL_RIGHT);
		BEA_DEFINE_CONSTANT(target, GL_FRONT_AND_BACK);
		BEA_DEFINE_CONSTANT(target, GL_AUX0);
		BEA_DEFINE_CONSTANT(target, GL_AUX1);
		BEA_DEFINE_CONSTANT(target, GL_AUX2);
		BEA_DEFINE_CONSTANT(target, GL_AUX3);
		BEA_DEFINE_CONSTANT(target, GL_NO_ERROR);
		BEA_DEFINE_CONSTANT(target, GL_INVALID_ENUM);
		BEA_DEFINE_CONSTANT(target, GL_INVALID_VALUE);
		BEA_DEFINE_CONSTANT(target, GL_INVALID_OPERATION);
		BEA_DEFINE_CONSTANT(target, GL_STACK_OVERFLOW);
		BEA_DEFINE_CONSTANT(target, GL_STACK_UNDERFLOW);
		BEA_DEFINE_CONSTANT(target, GL_OUT_OF_MEMORY);
		BEA_DEFINE_CONSTANT(target, GL_2D);
		BEA_DEFINE_CONSTANT(target, GL_3D);
		BEA_DEFINE_CONSTANT(target, GL_3D_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_3D_COLOR_TEXTURE);
		BEA_DEFINE_CONSTANT(target, GL_4D_COLOR_TEXTURE);
		BEA_DEFINE_CONSTANT(target, GL_PASS_THROUGH_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_POINT_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_LINE_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_BITMAP_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_DRAW_PIXEL_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_COPY_PIXEL_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_LINE_RESET_TOKEN);
		BEA_DEFINE_CONSTANT(target, GL_EXP);
		BEA_DEFINE_CONSTANT(target, GL_EXP2);
		BEA_DEFINE_CONSTANT(target, GL_CW);
		BEA_DEFINE_CONSTANT(target, GL_CCW);
		BEA_DEFINE_CONSTANT(target, GL_COEFF);
		BEA_DEFINE_CONSTANT(target, GL_ORDER);
		BEA_DEFINE_CONSTANT(target, GL_DOMAIN);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_NORMAL);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_TEXTURE_COORDS);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_TEXTURE_COORDS);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_POSITION);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_POSITION_VALID);
		BEA_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_DISTANCE);
		BEA_DEFINE_CONSTANT(target, GL_POINT_SMOOTH);
		BEA_DEFINE_CONSTANT(target, GL_POINT_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_POINT_SIZE_RANGE);
		BEA_DEFINE_CONSTANT(target, GL_POINT_SIZE_GRANULARITY);
		BEA_DEFINE_CONSTANT(target, GL_LINE_SMOOTH);
		BEA_DEFINE_CONSTANT(target, GL_LINE_WIDTH);
		BEA_DEFINE_CONSTANT(target, GL_LINE_WIDTH_RANGE);
		BEA_DEFINE_CONSTANT(target, GL_LINE_WIDTH_GRANULARITY);
		BEA_DEFINE_CONSTANT(target, GL_LINE_STIPPLE);
		BEA_DEFINE_CONSTANT(target, GL_LINE_STIPPLE_PATTERN);
		BEA_DEFINE_CONSTANT(target, GL_LINE_STIPPLE_REPEAT);
		BEA_DEFINE_CONSTANT(target, GL_LIST_MODE);
		BEA_DEFINE_CONSTANT(target, GL_MAX_LIST_NESTING);
		BEA_DEFINE_CONSTANT(target, GL_LIST_BASE);
		BEA_DEFINE_CONSTANT(target, GL_LIST_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_MODE);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_SMOOTH);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_STIPPLE);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG);
		BEA_DEFINE_CONSTANT(target, GL_CULL_FACE);
		BEA_DEFINE_CONSTANT(target, GL_CULL_FACE_MODE);
		BEA_DEFINE_CONSTANT(target, GL_FRONT_FACE);
		BEA_DEFINE_CONSTANT(target, GL_LIGHTING);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_LOCAL_VIEWER);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_TWO_SIDE);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_AMBIENT);
		BEA_DEFINE_CONSTANT(target, GL_SHADE_MODEL);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL_FACE);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL_PARAMETER);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL);
		BEA_DEFINE_CONSTANT(target, GL_FOG);
		BEA_DEFINE_CONSTANT(target, GL_FOG_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_FOG_DENSITY);
		BEA_DEFINE_CONSTANT(target, GL_FOG_START);
		BEA_DEFINE_CONSTANT(target, GL_FOG_END);
		BEA_DEFINE_CONSTANT(target, GL_FOG_MODE);
		BEA_DEFINE_CONSTANT(target, GL_FOG_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_RANGE);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_TEST);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_WRITEMASK);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_CLEAR_VALUE);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_FUNC);
		BEA_DEFINE_CONSTANT(target, GL_ACCUM_CLEAR_VALUE);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_TEST);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_CLEAR_VALUE);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_FUNC);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_VALUE_MASK);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_FAIL);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_PASS_DEPTH_FAIL);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_PASS_DEPTH_PASS);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_REF);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_WRITEMASK);
		BEA_DEFINE_CONSTANT(target, GL_MATRIX_MODE);
		BEA_DEFINE_CONSTANT(target, GL_NORMALIZE);
		BEA_DEFINE_CONSTANT(target, GL_VIEWPORT);
		BEA_DEFINE_CONSTANT(target, GL_MODELVIEW_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_PROJECTION_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_MODELVIEW_MATRIX);
		BEA_DEFINE_CONSTANT(target, GL_PROJECTION_MATRIX);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_MATRIX);
		BEA_DEFINE_CONSTANT(target, GL_ATTRIB_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_CLIENT_ATTRIB_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA_TEST);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA_TEST_FUNC);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA_TEST_REF);
		BEA_DEFINE_CONSTANT(target, GL_DITHER);
		BEA_DEFINE_CONSTANT(target, GL_BLEND_DST);
		BEA_DEFINE_CONSTANT(target, GL_BLEND_SRC);
		BEA_DEFINE_CONSTANT(target, GL_BLEND);
		BEA_DEFINE_CONSTANT(target, GL_LOGIC_OP_MODE);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_LOGIC_OP);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_LOGIC_OP);
		BEA_DEFINE_CONSTANT(target, GL_AUX_BUFFERS);
		BEA_DEFINE_CONSTANT(target, GL_DRAW_BUFFER);
		BEA_DEFINE_CONSTANT(target, GL_READ_BUFFER);
		BEA_DEFINE_CONSTANT(target, GL_SCISSOR_BOX);
		BEA_DEFINE_CONSTANT(target, GL_SCISSOR_TEST);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_CLEAR_VALUE);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_WRITEMASK);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_CLEAR_VALUE);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_WRITEMASK);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_MODE);
		BEA_DEFINE_CONSTANT(target, GL_RGBA_MODE);
		BEA_DEFINE_CONSTANT(target, GL_DOUBLEBUFFER);
		BEA_DEFINE_CONSTANT(target, GL_STEREO);
		BEA_DEFINE_CONSTANT(target, GL_RENDER_MODE);
		BEA_DEFINE_CONSTANT(target, GL_PERSPECTIVE_CORRECTION_HINT);
		BEA_DEFINE_CONSTANT(target, GL_POINT_SMOOTH_HINT);
		BEA_DEFINE_CONSTANT(target, GL_LINE_SMOOTH_HINT);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_SMOOTH_HINT);
		BEA_DEFINE_CONSTANT(target, GL_FOG_HINT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_S);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_T);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_R);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_Q);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_I);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_S_TO_S);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_R);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_G);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_B);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_A);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_R_TO_R);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_G_TO_G);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_B_TO_B);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_A_TO_A);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_I_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_S_TO_S_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_R_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_G_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_B_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_A_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_R_TO_R_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_G_TO_G_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_B_TO_B_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PIXEL_MAP_A_TO_A_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_UNPACK_SWAP_BYTES);
		BEA_DEFINE_CONSTANT(target, GL_UNPACK_LSB_FIRST);
		BEA_DEFINE_CONSTANT(target, GL_UNPACK_ROW_LENGTH);
		BEA_DEFINE_CONSTANT(target, GL_UNPACK_SKIP_ROWS);
		BEA_DEFINE_CONSTANT(target, GL_UNPACK_SKIP_PIXELS);
		BEA_DEFINE_CONSTANT(target, GL_UNPACK_ALIGNMENT);
		BEA_DEFINE_CONSTANT(target, GL_PACK_SWAP_BYTES);
		BEA_DEFINE_CONSTANT(target, GL_PACK_LSB_FIRST);
		BEA_DEFINE_CONSTANT(target, GL_PACK_ROW_LENGTH);
		BEA_DEFINE_CONSTANT(target, GL_PACK_SKIP_ROWS);
		BEA_DEFINE_CONSTANT(target, GL_PACK_SKIP_PIXELS);
		BEA_DEFINE_CONSTANT(target, GL_PACK_ALIGNMENT);
		BEA_DEFINE_CONSTANT(target, GL_MAP_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_MAP_STENCIL);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_SHIFT);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_OFFSET);
		BEA_DEFINE_CONSTANT(target, GL_RED_SCALE);
		BEA_DEFINE_CONSTANT(target, GL_RED_BIAS);
		BEA_DEFINE_CONSTANT(target, GL_ZOOM_X);
		BEA_DEFINE_CONSTANT(target, GL_ZOOM_Y);
		BEA_DEFINE_CONSTANT(target, GL_GREEN_SCALE);
		BEA_DEFINE_CONSTANT(target, GL_GREEN_BIAS);
		BEA_DEFINE_CONSTANT(target, GL_BLUE_SCALE);
		BEA_DEFINE_CONSTANT(target, GL_BLUE_BIAS);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA_SCALE);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA_BIAS);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_SCALE);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_BIAS);
		BEA_DEFINE_CONSTANT(target, GL_MAX_EVAL_ORDER);
		BEA_DEFINE_CONSTANT(target, GL_MAX_LIGHTS);
		BEA_DEFINE_CONSTANT(target, GL_MAX_CLIP_PLANES);
		BEA_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_MAX_PIXEL_MAP_TABLE);
		BEA_DEFINE_CONSTANT(target, GL_MAX_ATTRIB_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_MAX_MODELVIEW_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_MAX_NAME_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_MAX_PROJECTION_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_MAX_VIEWPORT_DIMS);
		BEA_DEFINE_CONSTANT(target, GL_MAX_CLIENT_ATTRIB_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_SUBPIXEL_BITS);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_BITS);
		BEA_DEFINE_CONSTANT(target, GL_RED_BITS);
		BEA_DEFINE_CONSTANT(target, GL_GREEN_BITS);
		BEA_DEFINE_CONSTANT(target, GL_BLUE_BITS);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA_BITS);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_BITS);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_BITS);
		BEA_DEFINE_CONSTANT(target, GL_ACCUM_RED_BITS);
		BEA_DEFINE_CONSTANT(target, GL_ACCUM_GREEN_BITS);
		BEA_DEFINE_CONSTANT(target, GL_ACCUM_BLUE_BITS);
		BEA_DEFINE_CONSTANT(target, GL_ACCUM_ALPHA_BITS);
		BEA_DEFINE_CONSTANT(target, GL_NAME_STACK_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_AUTO_NORMAL);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_COLOR_4);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_NORMAL);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_1);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_2);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_3);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_4);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_VERTEX_3);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_VERTEX_4);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_COLOR_4);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_NORMAL);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_1);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_2);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_3);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_4);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_VERTEX_3);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_VERTEX_4);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_GRID_DOMAIN);
		BEA_DEFINE_CONSTANT(target, GL_MAP1_GRID_SEGMENTS);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_GRID_DOMAIN);
		BEA_DEFINE_CONSTANT(target, GL_MAP2_GRID_SEGMENTS);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_1D);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_2D);
		BEA_DEFINE_CONSTANT(target, GL_FEEDBACK_BUFFER_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_FEEDBACK_BUFFER_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_FEEDBACK_BUFFER_TYPE);
		BEA_DEFINE_CONSTANT(target, GL_SELECTION_BUFFER_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_SELECTION_BUFFER_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_WIDTH);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_HEIGHT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_INTERNAL_FORMAT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_BORDER_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_BORDER);
		BEA_DEFINE_CONSTANT(target, GL_DONT_CARE);
		BEA_DEFINE_CONSTANT(target, GL_FASTEST);
		BEA_DEFINE_CONSTANT(target, GL_NICEST);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT0);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT1);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT2);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT3);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT4);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT5);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT6);
		BEA_DEFINE_CONSTANT(target, GL_LIGHT7);
		BEA_DEFINE_CONSTANT(target, GL_AMBIENT);
		BEA_DEFINE_CONSTANT(target, GL_DIFFUSE);
		BEA_DEFINE_CONSTANT(target, GL_SPECULAR);
		BEA_DEFINE_CONSTANT(target, GL_POSITION);
		BEA_DEFINE_CONSTANT(target, GL_SPOT_DIRECTION);
		BEA_DEFINE_CONSTANT(target, GL_SPOT_EXPONENT);
		BEA_DEFINE_CONSTANT(target, GL_SPOT_CUTOFF);
		BEA_DEFINE_CONSTANT(target, GL_CONSTANT_ATTENUATION);
		BEA_DEFINE_CONSTANT(target, GL_LINEAR_ATTENUATION);
		BEA_DEFINE_CONSTANT(target, GL_QUADRATIC_ATTENUATION);
		BEA_DEFINE_CONSTANT(target, GL_CLEAR);
		BEA_DEFINE_CONSTANT(target, GL_AND);
		BEA_DEFINE_CONSTANT(target, GL_AND_REVERSE);
		BEA_DEFINE_CONSTANT(target, GL_COPY);
		BEA_DEFINE_CONSTANT(target, GL_AND_INVERTED);
		BEA_DEFINE_CONSTANT(target, GL_NOOP);
		BEA_DEFINE_CONSTANT(target, GL_XOR);
		BEA_DEFINE_CONSTANT(target, GL_OR);
		BEA_DEFINE_CONSTANT(target, GL_NOR);
		BEA_DEFINE_CONSTANT(target, GL_EQUIV);
		BEA_DEFINE_CONSTANT(target, GL_INVERT);
		BEA_DEFINE_CONSTANT(target, GL_OR_REVERSE);
		BEA_DEFINE_CONSTANT(target, GL_COPY_INVERTED);
		BEA_DEFINE_CONSTANT(target, GL_OR_INVERTED);
		BEA_DEFINE_CONSTANT(target, GL_NAND);
		BEA_DEFINE_CONSTANT(target, GL_SET);
		BEA_DEFINE_CONSTANT(target, GL_EMISSION);
		BEA_DEFINE_CONSTANT(target, GL_SHININESS);
		BEA_DEFINE_CONSTANT(target, GL_AMBIENT_AND_DIFFUSE);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEXES);
		BEA_DEFINE_CONSTANT(target, GL_MODELVIEW);
		BEA_DEFINE_CONSTANT(target, GL_PROJECTION);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE);
		BEA_DEFINE_CONSTANT(target, GL_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_STENCIL_INDEX);
		BEA_DEFINE_CONSTANT(target, GL_DEPTH_COMPONENT);
		BEA_DEFINE_CONSTANT(target, GL_RED);
		BEA_DEFINE_CONSTANT(target, GL_GREEN);
		BEA_DEFINE_CONSTANT(target, GL_BLUE);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA);
		BEA_DEFINE_CONSTANT(target, GL_RGB);
		BEA_DEFINE_CONSTANT(target, GL_RGBA);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE_ALPHA);
		BEA_DEFINE_CONSTANT(target, GL_BITMAP);
		BEA_DEFINE_CONSTANT(target, GL_POINT);
		BEA_DEFINE_CONSTANT(target, GL_LINE);
		BEA_DEFINE_CONSTANT(target, GL_FILL);
		BEA_DEFINE_CONSTANT(target, GL_RENDER);
		BEA_DEFINE_CONSTANT(target, GL_FEEDBACK);
		BEA_DEFINE_CONSTANT(target, GL_SELECT);
		BEA_DEFINE_CONSTANT(target, GL_FLAT);
		BEA_DEFINE_CONSTANT(target, GL_SMOOTH);
		BEA_DEFINE_CONSTANT(target, GL_KEEP);
		BEA_DEFINE_CONSTANT(target, GL_REPLACE);
		BEA_DEFINE_CONSTANT(target, GL_INCR);
		BEA_DEFINE_CONSTANT(target, GL_DECR);
		BEA_DEFINE_CONSTANT(target, GL_VENDOR);
		BEA_DEFINE_CONSTANT(target, GL_RENDERER);
		BEA_DEFINE_CONSTANT(target, GL_VERSION);
		BEA_DEFINE_CONSTANT(target, GL_EXTENSIONS);
		BEA_DEFINE_CONSTANT(target, GL_S);
		BEA_DEFINE_CONSTANT(target, GL_T);
		BEA_DEFINE_CONSTANT(target, GL_R);
		BEA_DEFINE_CONSTANT(target, GL_Q);
		BEA_DEFINE_CONSTANT(target, GL_MODULATE);
		BEA_DEFINE_CONSTANT(target, GL_DECAL);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_ENV_MODE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_ENV_COLOR);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_ENV);
		BEA_DEFINE_CONSTANT(target, GL_EYE_LINEAR);
		BEA_DEFINE_CONSTANT(target, GL_OBJECT_LINEAR);
		BEA_DEFINE_CONSTANT(target, GL_SPHERE_MAP);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_MODE);
		BEA_DEFINE_CONSTANT(target, GL_OBJECT_PLANE);
		BEA_DEFINE_CONSTANT(target, GL_EYE_PLANE);
		BEA_DEFINE_CONSTANT(target, GL_NEAREST);
		BEA_DEFINE_CONSTANT(target, GL_LINEAR);
		BEA_DEFINE_CONSTANT(target, GL_NEAREST_MIPMAP_NEAREST);
		BEA_DEFINE_CONSTANT(target, GL_LINEAR_MIPMAP_NEAREST);
		BEA_DEFINE_CONSTANT(target, GL_NEAREST_MIPMAP_LINEAR);
		BEA_DEFINE_CONSTANT(target, GL_LINEAR_MIPMAP_LINEAR);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_MAG_FILTER);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_MIN_FILTER);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_WRAP_S);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_WRAP_T);
		BEA_DEFINE_CONSTANT(target, GL_CLAMP);
		BEA_DEFINE_CONSTANT(target, GL_REPEAT);
		BEA_DEFINE_CONSTANT(target, GL_CLIENT_PIXEL_STORE_BIT);
		BEA_DEFINE_CONSTANT(target, GL_CLIENT_VERTEX_ARRAY_BIT);
		BEA_DEFINE_CONSTANT(target, GL_CLIENT_ALL_ATTRIB_BITS);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_FACTOR);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_UNITS);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_POINT);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_LINE);
		BEA_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_FILL);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA4);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA8);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA12);
		BEA_DEFINE_CONSTANT(target, GL_ALPHA16);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE4);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE8);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE12);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE16);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE4_ALPHA4);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE6_ALPHA2);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE8_ALPHA8);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE12_ALPHA4);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE12_ALPHA12);
		BEA_DEFINE_CONSTANT(target, GL_LUMINANCE16_ALPHA16);
		BEA_DEFINE_CONSTANT(target, GL_INTENSITY);
		BEA_DEFINE_CONSTANT(target, GL_INTENSITY4);
		BEA_DEFINE_CONSTANT(target, GL_INTENSITY8);
		BEA_DEFINE_CONSTANT(target, GL_INTENSITY12);
		BEA_DEFINE_CONSTANT(target, GL_INTENSITY16);
		BEA_DEFINE_CONSTANT(target, GL_R3_G3_B2);
		BEA_DEFINE_CONSTANT(target, GL_RGB4);
		BEA_DEFINE_CONSTANT(target, GL_RGB5);
		BEA_DEFINE_CONSTANT(target, GL_RGB8);
		BEA_DEFINE_CONSTANT(target, GL_RGB10);
		BEA_DEFINE_CONSTANT(target, GL_RGB12);
		BEA_DEFINE_CONSTANT(target, GL_RGB16);
		BEA_DEFINE_CONSTANT(target, GL_RGBA2);
		BEA_DEFINE_CONSTANT(target, GL_RGBA4);
		BEA_DEFINE_CONSTANT(target, GL_RGB5_A1);
		BEA_DEFINE_CONSTANT(target, GL_RGBA8);
		BEA_DEFINE_CONSTANT(target, GL_RGB10_A2);
		BEA_DEFINE_CONSTANT(target, GL_RGBA12);
		BEA_DEFINE_CONSTANT(target, GL_RGBA16);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_RED_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_GREEN_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_BLUE_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_ALPHA_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_LUMINANCE_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_INTENSITY_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_1D);
		BEA_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_2D);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_PRIORITY);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_RESIDENT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_1D);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_2D);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_TYPE);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_STRIDE);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_TYPE);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_STRIDE);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_TYPE);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_STRIDE);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_TYPE);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_STRIDE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_SIZE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_TYPE);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_STRIDE);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_STRIDE);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_POINTER);
		BEA_DEFINE_CONSTANT(target, GL_V2F);
		BEA_DEFINE_CONSTANT(target, GL_V3F);
		BEA_DEFINE_CONSTANT(target, GL_C4UB_V2F);
		BEA_DEFINE_CONSTANT(target, GL_C4UB_V3F);
		BEA_DEFINE_CONSTANT(target, GL_C3F_V3F);
		BEA_DEFINE_CONSTANT(target, GL_N3F_V3F);
		BEA_DEFINE_CONSTANT(target, GL_C4F_N3F_V3F);
		BEA_DEFINE_CONSTANT(target, GL_T2F_V3F);
		BEA_DEFINE_CONSTANT(target, GL_T4F_V4F);
		BEA_DEFINE_CONSTANT(target, GL_T2F_C4UB_V3F);
		BEA_DEFINE_CONSTANT(target, GL_T2F_C3F_V3F);
		BEA_DEFINE_CONSTANT(target, GL_T2F_N3F_V3F);
		BEA_DEFINE_CONSTANT(target, GL_T2F_C4F_N3F_V3F);
		BEA_DEFINE_CONSTANT(target, GL_T4F_C4F_N3F_V4F);
		BEA_DEFINE_CONSTANT(target, GL_EXT_vertex_array);
		BEA_DEFINE_CONSTANT(target, GL_EXT_bgra);
		BEA_DEFINE_CONSTANT(target, GL_EXT_paletted_texture);
		BEA_DEFINE_CONSTANT(target, GL_WIN_swap_hint);
		BEA_DEFINE_CONSTANT(target, GL_WIN_draw_range_elements);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_EXT);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_EXT);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_EXT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_EXT);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_EXT);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_TYPE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_STRIDE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_COUNT_EXT);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_TYPE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_STRIDE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_COUNT_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_TYPE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_STRIDE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_COUNT_EXT);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_TYPE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_STRIDE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_COUNT_EXT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_TYPE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_STRIDE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_COUNT_EXT);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_STRIDE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_COUNT_EXT);
		BEA_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_POINTER_EXT);
		BEA_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_POINTER_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_POINTER_EXT);
		BEA_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_POINTER_EXT);
		BEA_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_POINTER_EXT);
		BEA_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_POINTER_EXT);
		BEA_DEFINE_CONSTANT(target, GL_DOUBLE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_BGR_EXT);
		BEA_DEFINE_CONSTANT(target, GL_BGRA_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_FORMAT_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_WIDTH_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_RED_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_GREEN_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_BLUE_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_ALPHA_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_LUMINANCE_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_TABLE_INTENSITY_SIZE_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEX1_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEX2_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEX4_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEX8_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEX12_EXT);
		BEA_DEFINE_CONSTANT(target, GL_COLOR_INDEX16_EXT);
		BEA_DEFINE_CONSTANT(target, GL_MAX_ELEMENTS_VERTICES_WIN);
		BEA_DEFINE_CONSTANT(target, GL_MAX_ELEMENTS_INDICES_WIN);
		BEA_DEFINE_CONSTANT(target, GL_PHONG_WIN);
		BEA_DEFINE_CONSTANT(target, GL_PHONG_HINT_WIN);
		BEA_DEFINE_CONSTANT(target, GL_FOG_SPECULAR_TEXTURE_WIN);
	}
	
}

namespace jopengl {
	void Project::expose(v8::Handle<v8::Object> target) {
		JOpenGL::_InitJSObject(target);
		ExposeConstants(target);
	}
	
}
