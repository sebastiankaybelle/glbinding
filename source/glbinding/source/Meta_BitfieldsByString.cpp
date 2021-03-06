
#include "Meta_Maps.h"

#include <glbinding/gl/bitfield.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString
{
#ifdef GL_BY_STRINGS
    { "GL_CURRENT_BIT", static_cast<GLbitfield>(AttribMask::GL_CURRENT_BIT) },
    { "GL_POINT_BIT", static_cast<GLbitfield>(AttribMask::GL_POINT_BIT) },
    { "GL_LINE_BIT", static_cast<GLbitfield>(AttribMask::GL_LINE_BIT) },
    { "GL_POLYGON_BIT", static_cast<GLbitfield>(AttribMask::GL_POLYGON_BIT) },
    { "GL_POLYGON_STIPPLE_BIT", static_cast<GLbitfield>(AttribMask::GL_POLYGON_STIPPLE_BIT) },
    { "GL_PIXEL_MODE_BIT", static_cast<GLbitfield>(AttribMask::GL_PIXEL_MODE_BIT) },
    { "GL_LIGHTING_BIT", static_cast<GLbitfield>(AttribMask::GL_LIGHTING_BIT) },
    { "GL_FOG_BIT", static_cast<GLbitfield>(AttribMask::GL_FOG_BIT) },
    { "GL_DEPTH_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_DEPTH_BUFFER_BIT) },
    { "GL_ACCUM_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_ACCUM_BUFFER_BIT) },
    { "GL_STENCIL_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_STENCIL_BUFFER_BIT) },
    { "GL_VIEWPORT_BIT", static_cast<GLbitfield>(AttribMask::GL_VIEWPORT_BIT) },
    { "GL_TRANSFORM_BIT", static_cast<GLbitfield>(AttribMask::GL_TRANSFORM_BIT) },
    { "GL_ENABLE_BIT", static_cast<GLbitfield>(AttribMask::GL_ENABLE_BIT) },
    { "GL_COLOR_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_COLOR_BUFFER_BIT) },
    { "GL_HINT_BIT", static_cast<GLbitfield>(AttribMask::GL_HINT_BIT) },
    { "GL_EVAL_BIT", static_cast<GLbitfield>(AttribMask::GL_EVAL_BIT) },
    { "GL_LIST_BIT", static_cast<GLbitfield>(AttribMask::GL_LIST_BIT) },
    { "GL_TEXTURE_BIT", static_cast<GLbitfield>(AttribMask::GL_TEXTURE_BIT) },
    { "GL_SCISSOR_BIT", static_cast<GLbitfield>(AttribMask::GL_SCISSOR_BIT) },
    { "GL_MULTISAMPLE_BIT", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT) },
    { "GL_MULTISAMPLE_BIT_3DFX", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT_3DFX) },
    { "GL_MULTISAMPLE_BIT_ARB", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT_ARB) },
    { "GL_MULTISAMPLE_BIT_EXT", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT_EXT) },
    { "GL_ALL_ATTRIB_BITS", static_cast<GLbitfield>(AttribMask::GL_ALL_ATTRIB_BITS) },
    { "GL_MAP_READ_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_READ_BIT) },
    { "GL_MAP_WRITE_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_WRITE_BIT) },
    { "GL_MAP_INVALIDATE_RANGE_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT) },
    { "GL_MAP_INVALIDATE_BUFFER_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT) },
    { "GL_MAP_FLUSH_EXPLICIT_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT) },
    { "GL_MAP_UNSYNCHRONIZED_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT) },
    { "GL_MAP_PERSISTENT_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_PERSISTENT_BIT) },
    { "GL_MAP_COHERENT_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_COHERENT_BIT) },
    { "GL_DEPTH_BUFFER_BIT", static_cast<GLbitfield>(ClearBufferMask::GL_DEPTH_BUFFER_BIT) },
    { "GL_ACCUM_BUFFER_BIT", static_cast<GLbitfield>(ClearBufferMask::GL_ACCUM_BUFFER_BIT) },
    { "GL_STENCIL_BUFFER_BIT", static_cast<GLbitfield>(ClearBufferMask::GL_STENCIL_BUFFER_BIT) },
    { "GL_COLOR_BUFFER_BIT", static_cast<GLbitfield>(ClearBufferMask::GL_COLOR_BUFFER_BIT) },
    { "GL_COVERAGE_BUFFER_BIT_NV", static_cast<GLbitfield>(ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV) },
    { "GL_CLIENT_PIXEL_STORE_BIT", static_cast<GLbitfield>(ClientAttribMask::GL_CLIENT_PIXEL_STORE_BIT) },
    { "GL_CLIENT_VERTEX_ARRAY_BIT", static_cast<GLbitfield>(ClientAttribMask::GL_CLIENT_VERTEX_ARRAY_BIT) },
    { "GL_CLIENT_ALL_ATTRIB_BITS", static_cast<GLbitfield>(ClientAttribMask::GL_CLIENT_ALL_ATTRIB_BITS) },
    { "GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT) },
    { "GL_CONTEXT_FLAG_DEBUG_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT) },
    { "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT) },
    { "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB) },
    { "GL_CONTEXT_CORE_PROFILE_BIT", static_cast<GLbitfield>(ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT) },
    { "GL_CONTEXT_COMPATIBILITY_PROFILE_BIT", static_cast<GLbitfield>(ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT) },
    { "GL_TEXTURE_DEFORMATION_BIT_SGIX", static_cast<GLbitfield>(FfdMaskSGIX::GL_TEXTURE_DEFORMATION_BIT_SGIX) },
    { "GL_GEOMETRY_DEFORMATION_BIT_SGIX", static_cast<GLbitfield>(FfdMaskSGIX::GL_GEOMETRY_DEFORMATION_BIT_SGIX) },
    { "GL_COMP_BIT_ATI", static_cast<GLbitfield>(FragmentShaderColorModMaskATI::GL_COMP_BIT_ATI) },
    { "GL_NEGATE_BIT_ATI", static_cast<GLbitfield>(FragmentShaderColorModMaskATI::GL_NEGATE_BIT_ATI) },
    { "GL_BIAS_BIT_ATI", static_cast<GLbitfield>(FragmentShaderColorModMaskATI::GL_BIAS_BIT_ATI) },
    { "GL_RED_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestMaskATI::GL_RED_BIT_ATI) },
    { "GL_GREEN_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestMaskATI::GL_GREEN_BIT_ATI) },
    { "GL_BLUE_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestMaskATI::GL_BLUE_BIT_ATI) },
    { "GL_2X_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_2X_BIT_ATI) },
    { "GL_4X_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_4X_BIT_ATI) },
    { "GL_8X_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_8X_BIT_ATI) },
    { "GL_HALF_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_HALF_BIT_ATI) },
    { "GL_QUARTER_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_QUARTER_BIT_ATI) },
    { "GL_EIGHTH_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_EIGHTH_BIT_ATI) },
    { "GL_SATURATE_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_SATURATE_BIT_ATI) },
    { "GL_MAP_READ_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_READ_BIT) },
    { "GL_MAP_WRITE_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_WRITE_BIT) },
    { "GL_MAP_INVALIDATE_RANGE_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_INVALIDATE_RANGE_BIT) },
    { "GL_MAP_INVALIDATE_BUFFER_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_INVALIDATE_BUFFER_BIT) },
    { "GL_MAP_FLUSH_EXPLICIT_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_FLUSH_EXPLICIT_BIT) },
    { "GL_MAP_UNSYNCHRONIZED_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_UNSYNCHRONIZED_BIT) },
    { "GL_MAP_PERSISTENT_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_PERSISTENT_BIT) },
    { "GL_MAP_COHERENT_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_MAP_COHERENT_BIT) },
    { "GL_DYNAMIC_STORAGE_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_DYNAMIC_STORAGE_BIT) },
    { "GL_CLIENT_STORAGE_BIT", static_cast<GLbitfield>(MapBufferUsageMask::GL_CLIENT_STORAGE_BIT) },
    { "GL_SPARSE_STORAGE_BIT_ARB", static_cast<GLbitfield>(MapBufferUsageMask::GL_SPARSE_STORAGE_BIT_ARB) },
    { "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT) },
    { "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT) },
    { "GL_ELEMENT_ARRAY_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT) },
    { "GL_ELEMENT_ARRAY_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT) },
    { "GL_UNIFORM_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT) },
    { "GL_UNIFORM_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT_EXT) },
    { "GL_TEXTURE_FETCH_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT) },
    { "GL_TEXTURE_FETCH_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT_EXT) },
    { "GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV) },
    { "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT) },
    { "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT) },
    { "GL_COMMAND_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_COMMAND_BARRIER_BIT) },
    { "GL_COMMAND_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_COMMAND_BARRIER_BIT_EXT) },
    { "GL_PIXEL_BUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT) },
    { "GL_PIXEL_BUFFER_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT_EXT) },
    { "GL_TEXTURE_UPDATE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT) },
    { "GL_TEXTURE_UPDATE_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT) },
    { "GL_BUFFER_UPDATE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT) },
    { "GL_BUFFER_UPDATE_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT_EXT) },
    { "GL_FRAMEBUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT) },
    { "GL_FRAMEBUFFER_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT_EXT) },
    { "GL_TRANSFORM_FEEDBACK_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT) },
    { "GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT) },
    { "GL_ATOMIC_COUNTER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT) },
    { "GL_ATOMIC_COUNTER_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT) },
    { "GL_SHADER_STORAGE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT) },
    { "GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT) },
    { "GL_QUERY_BUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_QUERY_BUFFER_BARRIER_BIT) },
    { "GL_ALL_BARRIER_BITS", static_cast<GLbitfield>(MemoryBarrierMask::GL_ALL_BARRIER_BITS) },
    { "GL_ALL_BARRIER_BITS_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ALL_BARRIER_BITS_EXT) },
    { "GL_NONE_BIT", static_cast<GLbitfield>(PathFontStyle::GL_NONE_BIT) },
    { "GL_BOLD_BIT_NV", static_cast<GLbitfield>(PathFontStyle::GL_BOLD_BIT_NV) },
    { "GL_ITALIC_BIT_NV", static_cast<GLbitfield>(PathFontStyle::GL_ITALIC_BIT_NV) },
    { "GL_FONT_X_MIN_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_X_MIN_BOUNDS_BIT_NV) },
    { "GL_FONT_Y_MIN_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_Y_MIN_BOUNDS_BIT_NV) },
    { "GL_FONT_X_MAX_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_X_MAX_BOUNDS_BIT_NV) },
    { "GL_FONT_Y_MAX_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_Y_MAX_BOUNDS_BIT_NV) },
    { "GL_FONT_UNITS_PER_EM_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_UNITS_PER_EM_BIT_NV) },
    { "GL_FONT_ASCENDER_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_ASCENDER_BIT_NV) },
    { "GL_FONT_DESCENDER_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_DESCENDER_BIT_NV) },
    { "GL_FONT_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_HEIGHT_BIT_NV) },
    { "GL_BOLD_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_BOLD_BIT_NV) },
    { "GL_GLYPH_WIDTH_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_WIDTH_BIT_NV) },
    { "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV) },
    { "GL_GLYPH_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HEIGHT_BIT_NV) },
    { "GL_ITALIC_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_ITALIC_BIT_NV) },
    { "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV) },
    { "GL_FONT_UNDERLINE_POSITION_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_UNDERLINE_POSITION_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV) },
    { "GL_FONT_UNDERLINE_THICKNESS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_UNDERLINE_THICKNESS_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV) },
    { "GL_GLYPH_HAS_KERNING_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HAS_KERNING_BIT_NV) },
    { "GL_FONT_HAS_KERNING_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_HAS_KERNING_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_X_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV) },
    { "GL_FONT_NUM_GLYPH_INDICES_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_NUM_GLYPH_INDICES_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV) },
    { "GL_PERFQUERY_SINGLE_CONTEXT_INTEL", static_cast<GLbitfield>(PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL) },
    { "GL_PERFQUERY_GLOBAL_CONTEXT_INTEL", static_cast<GLbitfield>(PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL) },
    { "GL_SYNC_FLUSH_COMMANDS_BIT", static_cast<GLbitfield>(SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT) },
    { "GL_TEXTURE_STORAGE_SPARSE_BIT_AMD", static_cast<GLbitfield>(TextureStorageMaskAMD::GL_TEXTURE_STORAGE_SPARSE_BIT_AMD) },
    { "GL_UNUSED_BIT", static_cast<GLbitfield>(UnusedMask::GL_UNUSED_BIT) },
    { "GL_VERTEX_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_VERTEX_SHADER_BIT) },
    { "GL_FRAGMENT_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_FRAGMENT_SHADER_BIT) },
    { "GL_GEOMETRY_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_GEOMETRY_SHADER_BIT) },
    { "GL_TESS_CONTROL_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT) },
    { "GL_TESS_EVALUATION_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT) },
    { "GL_COMPUTE_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_COMPUTE_SHADER_BIT) },
    { "GL_ALL_SHADER_BITS", static_cast<GLbitfield>(UseProgramStageMask::GL_ALL_SHADER_BITS) },
    { "GL_VERTEX23_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_VERTEX23_BIT_PGI) },
    { "GL_VERTEX4_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_VERTEX4_BIT_PGI) },
    { "GL_COLOR3_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_COLOR3_BIT_PGI) },
    { "GL_COLOR4_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_COLOR4_BIT_PGI) },
    { "GL_EDGEFLAG_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_EDGEFLAG_BIT_PGI) },
    { "GL_INDEX_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_INDEX_BIT_PGI) },
    { "GL_MAT_AMBIENT_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_AMBIENT_BIT_PGI) },
    { "GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI) },
    { "GL_MAT_DIFFUSE_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_DIFFUSE_BIT_PGI) },
    { "GL_MAT_EMISSION_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_EMISSION_BIT_PGI) },
    { "GL_MAT_COLOR_INDEXES_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_COLOR_INDEXES_BIT_PGI) },
    { "GL_MAT_SHININESS_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_SHININESS_BIT_PGI) },
    { "GL_MAT_SPECULAR_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_SPECULAR_BIT_PGI) },
    { "GL_NORMAL_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_NORMAL_BIT_PGI) },
    { "GL_TEXCOORD1_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD1_BIT_PGI) },
    { "GL_TEXCOORD2_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD2_BIT_PGI) },
    { "GL_TEXCOORD3_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD3_BIT_PGI) },
    { "GL_TEXCOORD4_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD4_BIT_PGI) }
#endif
};

} // namespace glbinding
