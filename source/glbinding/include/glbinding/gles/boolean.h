#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>


namespace gles
{

enum class GLboolean : unsigned char
{
    GL_FALSE = 0,
    GL_TRUE = 1
};

// import booleans to namespace

static const GLboolean GL_FALSE = GLboolean::GL_FALSE;
static const GLboolean GL_TRUE = GLboolean::GL_TRUE;

} // namespace gl