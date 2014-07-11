#pragma once

#include <glbinding/nogl.h>
#include <glbinding/featured/gl33core.h>

#include <glbinding/FunctionObjects.h>


namespace gl33core
{

using namespace gl;


inline void glActiveTexture(gl33core::GLenum texture)
{
   	return FunctionObjects::ActiveTexture(static_cast<gl::GLenum>(texture));
}

inline void glAttachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::AttachShader(program, shader);
}

inline void glBeginConditionalRender(GLuint id, gl33core::GLenum mode)
{
   	return FunctionObjects::BeginConditionalRender(id, static_cast<gl::GLenum>(mode));
}

inline void glBeginQuery(gl33core::GLenum target, GLuint id)
{
   	return FunctionObjects::BeginQuery(static_cast<gl::GLenum>(target), id);
}

inline void glBeginTransformFeedback(gl33core::GLenum primitiveMode)
{
   	return FunctionObjects::BeginTransformFeedback(static_cast<gl::GLenum>(primitiveMode));
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindAttribLocation(program, index, name);
}

inline void glBindBuffer(gl33core::GLenum target, GLuint buffer)
{
   	return FunctionObjects::BindBuffer(static_cast<gl::GLenum>(target), buffer);
}

inline void glBindBufferBase(gl33core::GLenum target, GLuint index, GLuint buffer)
{
   	return FunctionObjects::BindBufferBase(static_cast<gl::GLenum>(target), index, buffer);
}

inline void glBindBufferRange(gl33core::GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::BindBufferRange(static_cast<gl::GLenum>(target), index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFramebuffer(gl33core::GLenum target, GLuint framebuffer)
{
   	return FunctionObjects::BindFramebuffer(static_cast<gl::GLenum>(target), framebuffer);
}

inline void glBindRenderbuffer(gl33core::GLenum target, GLuint renderbuffer)
{
   	return FunctionObjects::BindRenderbuffer(static_cast<gl::GLenum>(target), renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
   	return FunctionObjects::BindSampler(unit, sampler);
}

inline void glBindTexture(gl33core::GLenum target, GLuint texture)
{
   	return FunctionObjects::BindTexture(static_cast<gl::GLenum>(target), texture);
}

inline void glBindVertexArray(GLuint array)
{
   	return FunctionObjects::BindVertexArray(array);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(gl33core::GLenum mode)
{
   	return FunctionObjects::BlendEquation(static_cast<gl::GLenum>(mode));
}

inline void glBlendEquationSeparate(gl33core::GLenum modeRGB, gl33core::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparate(static_cast<gl::GLenum>(modeRGB), static_cast<gl::GLenum>(modeAlpha));
}

inline void glBlendFunc(gl33core::GLenum sfactor, gl33core::GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(static_cast<gl::GLenum>(sfactor), static_cast<gl::GLenum>(dfactor));
}

inline void glBlendFuncSeparate(gl33core::GLenum sfactorRGB, gl33core::GLenum dfactorRGB, gl33core::GLenum sfactorAlpha, gl33core::GLenum dfactorAlpha)
{
   	return FunctionObjects::BlendFuncSeparate(static_cast<gl::GLenum>(sfactorRGB), static_cast<gl::GLenum>(dfactorRGB), static_cast<gl::GLenum>(sfactorAlpha), static_cast<gl::GLenum>(dfactorAlpha));
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, gl33core::ClearBufferMask mask, gl33core::GLenum filter)
{
   	return FunctionObjects::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, static_cast<gl::GLbitfield>(mask), static_cast<gl::GLenum>(filter));
}

inline void glBufferData(gl33core::GLenum target, GLsizeiptr size, const void * data, gl33core::GLenum usage)
{
   	return FunctionObjects::BufferData(static_cast<gl::GLenum>(target), size, data, static_cast<gl::GLenum>(usage));
}

inline void glBufferSubData(gl33core::GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
   	return FunctionObjects::BufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline GLenum glCheckFramebufferStatus(gl33core::GLenum target)
{
   	return static_cast<gl33core::GLenum>(FunctionObjects::CheckFramebufferStatus(static_cast<gl::GLenum>(target)));
}

inline void glClampColor(gl33core::GLenum target, gl33core::GLenum clamp)
{
   	return FunctionObjects::ClampColor(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(clamp));
}

inline void glClear(gl33core::ClearBufferMask mask)
{
   	return FunctionObjects::Clear(static_cast<gl::GLbitfield>(mask));
}

inline void glClearBufferfi(gl33core::GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
   	return FunctionObjects::ClearBufferfi(static_cast<gl::GLenum>(buffer), drawbuffer, depth, stencil);
}

inline void glClearBufferfv(gl33core::GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
   	return FunctionObjects::ClearBufferfv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferiv(gl33core::GLenum buffer, GLint drawbuffer, const GLint * value)
{
   	return FunctionObjects::ClearBufferiv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferuiv(gl33core::GLenum buffer, GLint drawbuffer, const GLuint * value)
{
   	return FunctionObjects::ClearBufferuiv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
   	return FunctionObjects::ClearDepth(depth);
}

inline void glClearStencil(GLint s)
{
   	return FunctionObjects::ClearStencil(s);
}

inline GLenum glClientWaitSync(GLsync sync, gl33core::SyncObjectMask flags, GLuint64 timeout)
{
   	return static_cast<gl33core::GLenum>(FunctionObjects::ClientWaitSync(sync, static_cast<gl::GLbitfield>(flags), timeout));
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
   	return FunctionObjects::ColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
   	return FunctionObjects::ColorMaski(index, r, g, b, a);
}

inline void glColorP3ui(gl33core::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP3ui(static_cast<gl::GLenum>(type), color);
}

inline void glColorP3uiv(gl33core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP3uiv(static_cast<gl::GLenum>(type), color);
}

inline void glColorP4ui(gl33core::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP4ui(static_cast<gl::GLenum>(type), color);
}

inline void glColorP4uiv(gl33core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP4uiv(static_cast<gl::GLenum>(type), color);
}

inline void glCompileShader(GLuint shader)
{
   	return FunctionObjects::CompileShader(shader);
}

inline void glCompressedTexImage1D(gl33core::GLenum target, GLint level, gl33core::GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, border, imageSize, data);
}

inline void glCompressedTexImage2D(gl33core::GLenum target, GLint level, gl33core::GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(gl33core::GLenum target, GLint level, gl33core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage3D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(gl33core::GLenum target, GLint level, GLint xoffset, GLsizei width, gl33core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage2D(gl33core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl33core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage3D(gl33core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl33core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCopyBufferSubData(gl33core::GLenum readTarget, gl33core::GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
   	return FunctionObjects::CopyBufferSubData(static_cast<gl::GLenum>(readTarget), static_cast<gl::GLenum>(writeTarget), readOffset, writeOffset, size);
}

inline void glCopyTexImage1D(gl33core::GLenum target, GLint level, gl33core::GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
   	return FunctionObjects::CopyTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, border);
}

inline void glCopyTexImage2D(gl33core::GLenum target, GLint level, gl33core::GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
   	return FunctionObjects::CopyTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, height, border);
}

inline void glCopyTexSubImage1D(gl33core::GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   	return FunctionObjects::CopyTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(gl33core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(gl33core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
   	return FunctionObjects::CreateProgram();
}

inline GLuint glCreateShader(gl33core::GLenum type)
{
   	return FunctionObjects::CreateShader(static_cast<gl::GLenum>(type));
}

inline void glCullFace(gl33core::GLenum mode)
{
   	return FunctionObjects::CullFace(static_cast<gl::GLenum>(mode));
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
   	return FunctionObjects::DeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
   	return FunctionObjects::DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteProgram(GLuint program)
{
   	return FunctionObjects::DeleteProgram(program);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
   	return FunctionObjects::DeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
   	return FunctionObjects::DeleteSamplers(count, samplers);
}

inline void glDeleteShader(GLuint shader)
{
   	return FunctionObjects::DeleteShader(shader);
}

inline void glDeleteSync(GLsync sync)
{
   	return FunctionObjects::DeleteSync(sync);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
   	return FunctionObjects::DeleteTextures(n, textures);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
   	return FunctionObjects::DeleteVertexArrays(n, arrays);
}

inline void glDepthFunc(gl33core::GLenum func)
{
   	return FunctionObjects::DepthFunc(static_cast<gl::GLenum>(func));
}

inline void glDepthMask(GLboolean flag)
{
   	return FunctionObjects::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
   	return FunctionObjects::DepthRange(near_, far_);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::DetachShader(program, shader);
}

inline void glDisable(gl33core::GLenum cap)
{
   	return FunctionObjects::Disable(static_cast<gl::GLenum>(cap));
}

inline void glDisableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::DisableVertexAttribArray(index);
}

inline void glDisablei(gl33core::GLenum target, GLuint index)
{
   	return FunctionObjects::Disablei(static_cast<gl::GLenum>(target), index);
}

inline void glDrawArrays(gl33core::GLenum mode, GLint first, GLsizei count)
{
   	return FunctionObjects::DrawArrays(static_cast<gl::GLenum>(mode), first, count);
}

inline void glDrawArraysInstanced(gl33core::GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
   	return FunctionObjects::DrawArraysInstanced(static_cast<gl::GLenum>(mode), first, count, instancecount);
}

inline void glDrawBuffer(gl33core::GLenum mode)
{
   	return FunctionObjects::DrawBuffer(static_cast<gl::GLenum>(mode));
}

inline void glDrawBuffers(GLsizei n, const gl33core::GLenum * bufs)
{
   	return FunctionObjects::DrawBuffers(n, reinterpret_cast<const gl::GLenum *>(bufs));
}

inline void glDrawElements(gl33core::GLenum mode, GLsizei count, gl33core::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawElementsBaseVertex(gl33core::GLenum mode, GLsizei count, gl33core::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawElementsBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, basevertex);
}

inline void glDrawElementsInstanced(gl33core::GLenum mode, GLsizei count, gl33core::GLenum type, const void * indices, GLsizei instancecount)
{
   	return FunctionObjects::DrawElementsInstanced(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount);
}

inline void glDrawElementsInstancedBaseVertex(gl33core::GLenum mode, GLsizei count, gl33core::GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
   	return FunctionObjects::DrawElementsInstancedBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount, basevertex);
}

inline void glDrawRangeElements(gl33core::GLenum mode, GLuint start, GLuint end, GLsizei count, gl33core::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawRangeElements(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawRangeElementsBaseVertex(gl33core::GLenum mode, GLuint start, GLuint end, GLsizei count, gl33core::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawRangeElementsBaseVertex(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices, basevertex);
}

inline void glEnable(gl33core::GLenum cap)
{
   	return FunctionObjects::Enable(static_cast<gl::GLenum>(cap));
}

inline void glEnableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::EnableVertexAttribArray(index);
}

inline void glEnablei(gl33core::GLenum target, GLuint index)
{
   	return FunctionObjects::Enablei(static_cast<gl::GLenum>(target), index);
}

inline void glEndConditionalRender()
{
   	return FunctionObjects::EndConditionalRender();
}

inline void glEndQuery(gl33core::GLenum target)
{
   	return FunctionObjects::EndQuery(static_cast<gl::GLenum>(target));
}

inline void glEndTransformFeedback()
{
   	return FunctionObjects::EndTransformFeedback();
}

inline GLsync glFenceSync(gl33core::GLenum condition, gl::GenericBitmask flags)
{
   	return FunctionObjects::FenceSync(static_cast<gl::GLenum>(condition), static_cast<gl::GLbitfield>(flags));
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFlushMappedBufferRange(gl33core::GLenum target, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::FlushMappedBufferRange(static_cast<gl::GLenum>(target), offset, length);
}

inline void glFramebufferRenderbuffer(gl33core::GLenum target, gl33core::GLenum attachment, gl33core::GLenum renderbuffertarget, GLuint renderbuffer)
{
   	return FunctionObjects::FramebufferRenderbuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(renderbuffertarget), renderbuffer);
}

inline void glFramebufferTexture(gl33core::GLenum target, gl33core::GLenum attachment, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), texture, level);
}

inline void glFramebufferTexture1D(gl33core::GLenum target, gl33core::GLenum attachment, gl33core::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture1D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture2D(gl33core::GLenum target, gl33core::GLenum attachment, gl33core::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture2D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture3D(gl33core::GLenum target, gl33core::GLenum attachment, gl33core::GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
   	return FunctionObjects::FramebufferTexture3D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level, zoffset);
}

inline void glFramebufferTextureLayer(gl33core::GLenum target, gl33core::GLenum attachment, GLuint texture, GLint level, GLint layer)
{
   	return FunctionObjects::FramebufferTextureLayer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), texture, level, layer);
}

inline void glFrontFace(gl33core::GLenum mode)
{
   	return FunctionObjects::FrontFace(static_cast<gl::GLenum>(mode));
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
   	return FunctionObjects::GenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
   	return FunctionObjects::GenFramebuffers(n, framebuffers);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
   	return FunctionObjects::GenRenderbuffers(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
   	return FunctionObjects::GenSamplers(count, samplers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
   	return FunctionObjects::GenTextures(n, textures);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
   	return FunctionObjects::GenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(gl33core::GLenum target)
{
   	return FunctionObjects::GenerateMipmap(static_cast<gl::GLenum>(target));
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl33core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveAttrib(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl33core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveUniform(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
   	return FunctionObjects::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformBlockiv(program, uniformBlockIndex, static_cast<gl::GLenum>(pname), params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
   	return FunctionObjects::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformsiv(program, uniformCount, uniformIndices, static_cast<gl::GLenum>(pname), params);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
   	return FunctionObjects::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetAttribLocation(program, name);
}

inline void glGetBooleani_v(gl33core::GLenum target, GLuint index, GLboolean * data)
{
   	return FunctionObjects::GetBooleani_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetBooleanv(gl33core::GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetBufferParameteri64v(gl33core::GLenum target, gl33core::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetBufferParameteri64v(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferParameteriv(gl33core::GLenum target, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetBufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferPointerv(gl33core::GLenum target, gl33core::GLenum pname, void ** params)
{
   	return FunctionObjects::GetBufferPointerv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferSubData(gl33core::GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
   	return FunctionObjects::GetBufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline void glGetCompressedTexImage(gl33core::GLenum target, GLint level, void * img)
{
   	return FunctionObjects::GetCompressedTexImage(static_cast<gl::GLenum>(target), level, img);
}

inline void glGetDoublev(gl33core::GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(static_cast<gl::GLenum>(pname), data);
}

inline GLenum glGetError()
{
   	return static_cast<gl33core::GLenum>(FunctionObjects::GetError());
}

inline void glGetFloatv(gl33core::GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(static_cast<gl::GLenum>(pname), data);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(gl33core::GLenum target, gl33core::GLenum attachment, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferAttachmentParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(pname), params);
}

inline void glGetInteger64i_v(gl33core::GLenum target, GLuint index, GLint64 * data)
{
   	return FunctionObjects::GetInteger64i_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetInteger64v(gl33core::GLenum pname, GLint64 * data)
{
   	return FunctionObjects::GetInteger64v(static_cast<gl::GLenum>(pname), data);
}

inline void glGetIntegeri_v(gl33core::GLenum target, GLuint index, GLint * data)
{
   	return FunctionObjects::GetIntegeri_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetIntegerv(gl33core::GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetMultisamplefv(gl33core::GLenum pname, GLuint index, GLfloat * val)
{
   	return FunctionObjects::GetMultisamplefv(static_cast<gl::GLenum>(pname), index, val);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramiv(program, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjecti64v(GLuint id, gl33core::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetQueryObjecti64v(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectiv(GLuint id, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryObjectiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectui64v(GLuint id, gl33core::GLenum pname, GLuint64 * params)
{
   	return FunctionObjects::GetQueryObjectui64v(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectuiv(GLuint id, gl33core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetQueryObjectuiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryiv(gl33core::GLenum target, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetRenderbufferParameteriv(gl33core::GLenum target, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetRenderbufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameterIiv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, gl33core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetSamplerParameterIuiv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterfv(GLuint sampler, gl33core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetSamplerParameterfv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameteriv(GLuint sampler, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameteriv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
   	return FunctionObjects::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetShaderiv(shader, static_cast<gl::GLenum>(pname), params);
}

inline const GLubyte * glGetString(gl33core::GLenum name)
{
   	return FunctionObjects::GetString(static_cast<gl::GLenum>(name));
}

inline const GLubyte * glGetStringi(gl33core::GLenum name, GLuint index)
{
   	return FunctionObjects::GetStringi(static_cast<gl::GLenum>(name), index);
}

inline void glGetSynciv(GLsync sync, gl33core::GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
   	return FunctionObjects::GetSynciv(sync, static_cast<gl::GLenum>(pname), bufSize, length, values);
}

inline void glGetTexImage(gl33core::GLenum target, GLint level, gl33core::GLenum format, gl33core::GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glGetTexLevelParameterfv(gl33core::GLenum target, GLint level, gl33core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexLevelParameteriv(gl33core::GLenum target, GLint level, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIiv(gl33core::GLenum target, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIuiv(gl33core::GLenum target, gl33core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetTexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterfv(gl33core::GLenum target, gl33core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameteriv(gl33core::GLenum target, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, gl33core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetTransformFeedbackVarying(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
   	return FunctionObjects::GetUniformBlockIndex(program, uniformBlockName);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
   	return FunctionObjects::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetUniformLocation(program, name);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
   	return FunctionObjects::GetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
   	return FunctionObjects::GetUniformiv(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
   	return FunctionObjects::GetUniformuiv(program, location, params);
}

inline void glGetVertexAttribIiv(GLuint index, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribIiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribIuiv(GLuint index, gl33core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetVertexAttribIuiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribPointerv(GLuint index, gl33core::GLenum pname, void ** pointer)
{
   	return FunctionObjects::GetVertexAttribPointerv(index, static_cast<gl::GLenum>(pname), pointer);
}

inline void glGetVertexAttribdv(GLuint index, gl33core::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribdv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribfv(GLuint index, gl33core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetVertexAttribfv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribiv(GLuint index, gl33core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glHint(gl33core::GLenum target, gl33core::GLenum mode)
{
   	return FunctionObjects::Hint(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(mode));
}

inline GLboolean glIsBuffer(GLuint buffer)
{
   	return FunctionObjects::IsBuffer(buffer);
}

inline GLboolean glIsEnabled(gl33core::GLenum cap)
{
   	return FunctionObjects::IsEnabled(static_cast<gl::GLenum>(cap));
}

inline GLboolean glIsEnabledi(gl33core::GLenum target, GLuint index)
{
   	return FunctionObjects::IsEnabledi(static_cast<gl::GLenum>(target), index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
   	return FunctionObjects::IsFramebuffer(framebuffer);
}

inline GLboolean glIsProgram(GLuint program)
{
   	return FunctionObjects::IsProgram(program);
}

inline GLboolean glIsQuery(GLuint id)
{
   	return FunctionObjects::IsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
   	return FunctionObjects::IsRenderbuffer(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
   	return FunctionObjects::IsSampler(sampler);
}

inline GLboolean glIsShader(GLuint shader)
{
   	return FunctionObjects::IsShader(shader);
}

inline GLboolean glIsSync(GLsync sync)
{
   	return FunctionObjects::IsSync(sync);
}

inline GLboolean glIsTexture(GLuint texture)
{
   	return FunctionObjects::IsTexture(texture);
}

inline GLboolean glIsVertexArray(GLuint array)
{
   	return FunctionObjects::IsVertexArray(array);
}

inline void glLineWidth(GLfloat width)
{
   	return FunctionObjects::LineWidth(width);
}

inline void glLinkProgram(GLuint program)
{
   	return FunctionObjects::LinkProgram(program);
}

inline void glLogicOp(gl33core::GLenum opcode)
{
   	return FunctionObjects::LogicOp(static_cast<gl::GLenum>(opcode));
}

inline void * glMapBuffer(gl33core::GLenum target, gl33core::GLenum access)
{
   	return FunctionObjects::MapBuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(access));
}

inline void * glMapBufferRange(gl33core::GLenum target, GLintptr offset, GLsizeiptr length, gl33core::BufferAccessMask access)
{
   	return FunctionObjects::MapBufferRange(static_cast<gl::GLenum>(target), offset, length, static_cast<gl::GLbitfield>(access));
}

inline void glMultiDrawArrays(gl33core::GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawArrays(static_cast<gl::GLenum>(mode), first, count, drawcount);
}

inline void glMultiDrawElements(gl33core::GLenum mode, const GLsizei * count, gl33core::GLenum type, const void *const* indices, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(gl33core::GLenum mode, const GLsizei * count, gl33core::GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
   	return FunctionObjects::MultiDrawElementsBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount, basevertex);
}

inline void glMultiTexCoordP1ui(gl33core::GLenum texture, gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP1ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP1uiv(gl33core::GLenum texture, gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP1uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP2ui(gl33core::GLenum texture, gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP2ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP2uiv(gl33core::GLenum texture, gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP2uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP3ui(gl33core::GLenum texture, gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP3ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP3uiv(gl33core::GLenum texture, gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP3uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP4ui(gl33core::GLenum texture, gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP4ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP4uiv(gl33core::GLenum texture, gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP4uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glNormalP3ui(gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::NormalP3ui(static_cast<gl::GLenum>(type), coords);
}

inline void glNormalP3uiv(gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::NormalP3uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glPixelStoref(gl33core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelStorei(gl33core::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterf(gl33core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PointParameterf(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterfv(gl33core::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::PointParameterfv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameteri(gl33core::GLenum pname, GLint param)
{
   	return FunctionObjects::PointParameteri(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameteriv(gl33core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::PointParameteriv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointSize(GLfloat size)
{
   	return FunctionObjects::PointSize(size);
}

inline void glPolygonMode(gl33core::GLenum face, gl33core::GLenum mode)
{
   	return FunctionObjects::PolygonMode(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(mode));
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
   	return FunctionObjects::PolygonOffset(factor, units);
}

inline void glPrimitiveRestartIndex(GLuint index)
{
   	return FunctionObjects::PrimitiveRestartIndex(index);
}

inline void glProvokingVertex(gl33core::GLenum mode)
{
   	return FunctionObjects::ProvokingVertex(static_cast<gl::GLenum>(mode));
}

inline void glQueryCounter(GLuint id, gl33core::GLenum target)
{
   	return FunctionObjects::QueryCounter(id, static_cast<gl::GLenum>(target));
}

inline void glReadBuffer(gl33core::GLenum mode)
{
   	return FunctionObjects::ReadBuffer(static_cast<gl::GLenum>(mode));
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl33core::GLenum format, gl33core::GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glRenderbufferStorage(gl33core::GLenum target, gl33core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorage(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glRenderbufferStorageMultisample(gl33core::GLenum target, GLsizei samples, gl33core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorageMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
   	return FunctionObjects::SampleCoverage(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, gl::GenericBitmask mask)
{
   	return FunctionObjects::SampleMaski(maskNumber, static_cast<gl::GLbitfield>(mask));
}

inline void glSamplerParameterIiv(GLuint sampler, gl33core::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameterIiv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterIuiv(GLuint sampler, gl33core::GLenum pname, const GLuint * param)
{
   	return FunctionObjects::SamplerParameterIuiv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterf(GLuint sampler, gl33core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::SamplerParameterf(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterfv(GLuint sampler, gl33core::GLenum pname, const GLfloat * param)
{
   	return FunctionObjects::SamplerParameterfv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameteri(GLuint sampler, gl33core::GLenum pname, GLint param)
{
   	return FunctionObjects::SamplerParameteri(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameteriv(GLuint sampler, gl33core::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameteriv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Scissor(x, y, width, height);
}

inline void glSecondaryColorP3ui(gl33core::GLenum type, GLuint color)
{
   	return FunctionObjects::SecondaryColorP3ui(static_cast<gl::GLenum>(type), color);
}

inline void glSecondaryColorP3uiv(gl33core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::SecondaryColorP3uiv(static_cast<gl::GLenum>(type), color);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
   	return FunctionObjects::ShaderSource(shader, count, string, length);
}

inline void glStencilFunc(gl33core::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilFuncSeparate(gl33core::GLenum face, gl33core::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFuncSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilMaskSeparate(gl33core::GLenum face, GLuint mask)
{
   	return FunctionObjects::StencilMaskSeparate(static_cast<gl::GLenum>(face), mask);
}

inline void glStencilOp(gl33core::GLenum fail, gl33core::GLenum zfail, gl33core::GLenum zpass)
{
   	return FunctionObjects::StencilOp(static_cast<gl::GLenum>(fail), static_cast<gl::GLenum>(zfail), static_cast<gl::GLenum>(zpass));
}

inline void glStencilOpSeparate(gl33core::GLenum face, gl33core::GLenum sfail, gl33core::GLenum dpfail, gl33core::GLenum dppass)
{
   	return FunctionObjects::StencilOpSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(sfail), static_cast<gl::GLenum>(dpfail), static_cast<gl::GLenum>(dppass));
}

inline void glTexBuffer(gl33core::GLenum target, gl33core::GLenum internalformat, GLuint buffer)
{
   	return FunctionObjects::TexBuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), buffer);
}

inline void glTexCoordP1ui(gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP1ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP1uiv(gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP1uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP2ui(gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP2ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP2uiv(gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP2uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP3ui(gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP3ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP3uiv(gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP3uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP4ui(gl33core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP4ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP4uiv(gl33core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP4uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexImage1D(gl33core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, gl33core::GLenum format, gl33core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(static_cast<gl::GLenum>(target), level, internalformat, width, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2D(gl33core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, gl33core::GLenum format, gl33core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(static_cast<gl::GLenum>(target), level, internalformat, width, height, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2DMultisample(gl33core::GLenum target, GLsizei samples, gl33core::GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage2DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, fixedsamplelocations);
}

inline void glTexImage3D(gl33core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, gl33core::GLenum format, gl33core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage3D(static_cast<gl::GLenum>(target), level, internalformat, width, height, depth, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage3DMultisample(gl33core::GLenum target, GLsizei samples, gl33core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage3DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, depth, fixedsamplelocations);
}

inline void glTexParameterIiv(gl33core::GLenum target, gl33core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterIuiv(gl33core::GLenum target, gl33core::GLenum pname, const GLuint * params)
{
   	return FunctionObjects::TexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterf(gl33core::GLenum target, gl33core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterfv(gl33core::GLenum target, gl33core::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameteri(gl33core::GLenum target, gl33core::GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameteriv(gl33core::GLenum target, gl33core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexSubImage1D(gl33core::GLenum target, GLint level, GLint xoffset, GLsizei width, gl33core::GLenum format, gl33core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage2D(gl33core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl33core::GLenum format, gl33core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage3D(gl33core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl33core::GLenum format, gl33core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, gl33core::GLenum bufferMode)
{
   	return FunctionObjects::TransformFeedbackVaryings(program, count, varyings, static_cast<gl::GLenum>(bufferMode));
}

inline void glUniform1f(GLint location, GLfloat v0)
{
   	return FunctionObjects::Uniform1f(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
   	return FunctionObjects::Uniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform1iv(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
   	return FunctionObjects::Uniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform1uiv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
   	return FunctionObjects::Uniform2f(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
   	return FunctionObjects::Uniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform2iv(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
   	return FunctionObjects::Uniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform2uiv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::Uniform3f(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
   	return FunctionObjects::Uniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform3iv(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
   	return FunctionObjects::Uniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform3uiv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
   	return FunctionObjects::Uniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
   	return FunctionObjects::Uniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform4iv(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
   	return FunctionObjects::Uniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform4uiv(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
   	return FunctionObjects::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x3fv(location, count, transpose, value);
}

inline GLboolean glUnmapBuffer(gl33core::GLenum target)
{
   	return FunctionObjects::UnmapBuffer(static_cast<gl::GLenum>(target));
}

inline void glUseProgram(GLuint program)
{
   	return FunctionObjects::UseProgram(program);
}

inline void glValidateProgram(GLuint program)
{
   	return FunctionObjects::ValidateProgram(program);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
   	return FunctionObjects::VertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
   	return FunctionObjects::VertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
   	return FunctionObjects::VertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
   	return FunctionObjects::VertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
   	return FunctionObjects::VertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
   	return FunctionObjects::VertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::VertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::VertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::VertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
   	return FunctionObjects::VertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::VertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::VertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::VertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4usv(index, v);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
   	return FunctionObjects::VertexAttribDivisor(index, divisor);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
   	return FunctionObjects::VertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
   	return FunctionObjects::VertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
   	return FunctionObjects::VertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
   	return FunctionObjects::VertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
   	return FunctionObjects::VertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
   	return FunctionObjects::VertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::VertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
   	return FunctionObjects::VertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttribI4usv(index, v);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, gl33core::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribIPointer(index, size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, gl33core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP1ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, gl33core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP1uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, gl33core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP2ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, gl33core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP2uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, gl33core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP3ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, gl33core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP3uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, gl33core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP4ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, gl33core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP4uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribPointer(GLuint index, GLint size, gl33core::GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribPointer(index, size, static_cast<gl::GLenum>(type), normalized, stride, pointer);
}

inline void glVertexP2ui(gl33core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP2ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP2uiv(gl33core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP2uiv(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP3ui(gl33core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP3ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP3uiv(gl33core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP3uiv(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP4ui(gl33core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP4ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP4uiv(gl33core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP4uiv(static_cast<gl::GLenum>(type), value);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Viewport(x, y, width, height);
}

inline void glWaitSync(GLsync sync, gl::GenericBitmask flags, GLuint64 timeout)
{
   	return FunctionObjects::WaitSync(sync, static_cast<gl::GLbitfield>(flags), timeout);
}


} // namespace gl33core
