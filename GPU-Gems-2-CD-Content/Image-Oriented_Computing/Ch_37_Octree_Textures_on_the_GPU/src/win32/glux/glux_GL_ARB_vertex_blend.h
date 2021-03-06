
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:35 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_ARB_vertex_blend__
#define __GLUX_GL_ARB_vertex_blend__

GLUX_NEW_PLUGIN(GL_ARB_vertex_blend);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_MAX_VERTEX_UNITS_ARB
#  define GL_MAX_VERTEX_UNITS_ARB 0x86A4
#endif
#ifndef GL_ACTIVE_VERTEX_UNITS_ARB
#  define GL_ACTIVE_VERTEX_UNITS_ARB 0x86A5
#endif
#ifndef GL_WEIGHT_SUM_UNITY_ARB
#  define GL_WEIGHT_SUM_UNITY_ARB 0x86A6
#endif
#ifndef GL_VERTEX_BLEND_ARB
#  define GL_VERTEX_BLEND_ARB 0x86A7
#endif
#ifndef GL_CURRENT_WEIGHT_ARB
#  define GL_CURRENT_WEIGHT_ARB 0x86A8
#endif
#ifndef GL_WEIGHT_ARRAY_TYPE_ARB
#  define GL_WEIGHT_ARRAY_TYPE_ARB 0x86A9
#endif
#ifndef GL_WEIGHT_ARRAY_STRIDE_ARB
#  define GL_WEIGHT_ARRAY_STRIDE_ARB 0x86AA
#endif
#ifndef GL_WEIGHT_ARRAY_SIZE_ARB
#  define GL_WEIGHT_ARRAY_SIZE_ARB 0x86AB
#endif
#ifndef GL_WEIGHT_ARRAY_POINTER_ARB
#  define GL_WEIGHT_ARRAY_POINTER_ARB 0x86AC
#endif
#ifndef GL_WEIGHT_ARRAY_ARB
#  define GL_WEIGHT_ARRAY_ARB 0x86AD
#endif
#ifndef GL_MODELVIEW0_ARB
#  define GL_MODELVIEW0_ARB 0x1700
#endif
#ifndef GL_MODELVIEW1_ARB
#  define GL_MODELVIEW1_ARB 0x850A
#endif
#ifndef GL_MODELVIEW2_ARB
#  define GL_MODELVIEW2_ARB 0x8722
#endif
#ifndef GL_MODELVIEW3_ARB
#  define GL_MODELVIEW3_ARB 0x8723
#endif
#ifndef GL_MODELVIEW4_ARB
#  define GL_MODELVIEW4_ARB 0x8724
#endif
#ifndef GL_MODELVIEW5_ARB
#  define GL_MODELVIEW5_ARB 0x8725
#endif
#ifndef GL_MODELVIEW6_ARB
#  define GL_MODELVIEW6_ARB 0x8726
#endif
#ifndef GL_MODELVIEW7_ARB
#  define GL_MODELVIEW7_ARB 0x8727
#endif
#ifndef GL_MODELVIEW8_ARB
#  define GL_MODELVIEW8_ARB 0x8728
#endif
#ifndef GL_MODELVIEW9_ARB
#  define GL_MODELVIEW9_ARB 0x8729
#endif
#ifndef GL_MODELVIEW10_ARB
#  define GL_MODELVIEW10_ARB 0x872A
#endif
#ifndef GL_MODELVIEW11_ARB
#  define GL_MODELVIEW11_ARB 0x872B
#endif
#ifndef GL_MODELVIEW12_ARB
#  define GL_MODELVIEW12_ARB 0x872C
#endif
#ifndef GL_MODELVIEW13_ARB
#  define GL_MODELVIEW13_ARB 0x872D
#endif
#ifndef GL_MODELVIEW14_ARB
#  define GL_MODELVIEW14_ARB 0x872E
#endif
#ifndef GL_MODELVIEW15_ARB
#  define GL_MODELVIEW15_ARB 0x872F
#endif
#ifndef GL_MODELVIEW16_ARB
#  define GL_MODELVIEW16_ARB 0x8730
#endif
#ifndef GL_MODELVIEW17_ARB
#  define GL_MODELVIEW17_ARB 0x8731
#endif
#ifndef GL_MODELVIEW18_ARB
#  define GL_MODELVIEW18_ARB 0x8732
#endif
#ifndef GL_MODELVIEW19_ARB
#  define GL_MODELVIEW19_ARB 0x8733
#endif
#ifndef GL_MODELVIEW20_ARB
#  define GL_MODELVIEW20_ARB 0x8734
#endif
#ifndef GL_MODELVIEW21_ARB
#  define GL_MODELVIEW21_ARB 0x8735
#endif
#ifndef GL_MODELVIEW22_ARB
#  define GL_MODELVIEW22_ARB 0x8736
#endif
#ifndef GL_MODELVIEW23_ARB
#  define GL_MODELVIEW23_ARB 0x8737
#endif
#ifndef GL_MODELVIEW24_ARB
#  define GL_MODELVIEW24_ARB 0x8738
#endif
#ifndef GL_MODELVIEW25_ARB
#  define GL_MODELVIEW25_ARB 0x8739
#endif
#ifndef GL_MODELVIEW26_ARB
#  define GL_MODELVIEW26_ARB 0x873A
#endif
#ifndef GL_MODELVIEW27_ARB
#  define GL_MODELVIEW27_ARB 0x873B
#endif
#ifndef GL_MODELVIEW28_ARB
#  define GL_MODELVIEW28_ARB 0x873C
#endif
#ifndef GL_MODELVIEW29_ARB
#  define GL_MODELVIEW29_ARB 0x873D
#endif
#ifndef GL_MODELVIEW30_ARB
#  define GL_MODELVIEW30_ARB 0x873E
#endif
#ifndef GL_MODELVIEW31_ARB
#  define GL_MODELVIEW31_ARB 0x873F
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glWeightbvARB
typedef void (APIENTRYP PFNGLUXWEIGHTBVARBPROC) (GLint size, const GLbyte *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightsvARB
typedef void (APIENTRYP PFNGLUXWEIGHTSVARBPROC) (GLint size, const GLshort *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightivARB
typedef void (APIENTRYP PFNGLUXWEIGHTIVARBPROC) (GLint size, const GLint *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightfvARB
typedef void (APIENTRYP PFNGLUXWEIGHTFVARBPROC) (GLint size, const GLfloat *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightdvARB
typedef void (APIENTRYP PFNGLUXWEIGHTDVARBPROC) (GLint size, const GLdouble *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightubvARB
typedef void (APIENTRYP PFNGLUXWEIGHTUBVARBPROC) (GLint size, const GLubyte *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightusvARB
typedef void (APIENTRYP PFNGLUXWEIGHTUSVARBPROC) (GLint size, const GLushort *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightuivARB
typedef void (APIENTRYP PFNGLUXWEIGHTUIVARBPROC) (GLint size, const GLuint *weights);
#endif
#ifndef __GLUX__GLFCT_glWeightPointerARB
typedef void (APIENTRYP PFNGLUXWEIGHTPOINTERARBPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
#endif
#ifndef __GLUX__GLFCT_glVertexBlendARB
typedef void (APIENTRYP PFNGLUXVERTEXBLENDARBPROC) (GLint count);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glWeightbvARB
extern PFNGLUXWEIGHTBVARBPROC glWeightbvARB;
#endif
#ifndef __GLUX__GLFCT_glWeightsvARB
extern PFNGLUXWEIGHTSVARBPROC glWeightsvARB;
#endif
#ifndef __GLUX__GLFCT_glWeightivARB
extern PFNGLUXWEIGHTIVARBPROC glWeightivARB;
#endif
#ifndef __GLUX__GLFCT_glWeightfvARB
extern PFNGLUXWEIGHTFVARBPROC glWeightfvARB;
#endif
#ifndef __GLUX__GLFCT_glWeightdvARB
extern PFNGLUXWEIGHTDVARBPROC glWeightdvARB;
#endif
#ifndef __GLUX__GLFCT_glWeightubvARB
extern PFNGLUXWEIGHTUBVARBPROC glWeightubvARB;
#endif
#ifndef __GLUX__GLFCT_glWeightusvARB
extern PFNGLUXWEIGHTUSVARBPROC glWeightusvARB;
#endif
#ifndef __GLUX__GLFCT_glWeightuivARB
extern PFNGLUXWEIGHTUIVARBPROC glWeightuivARB;
#endif
#ifndef __GLUX__GLFCT_glWeightPointerARB
extern PFNGLUXWEIGHTPOINTERARBPROC glWeightPointerARB;
#endif
#ifndef __GLUX__GLFCT_glVertexBlendARB
extern PFNGLUXVERTEXBLENDARBPROC glVertexBlendARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
