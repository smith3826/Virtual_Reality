﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture__ctor_m2927948204 (RenderTexture_t1963041563 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_Internal_CreateRenderTexture_m1444121965 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetWidth_m1030655936 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetWidth_m3535686411 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___mono0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetHeight_m1940011033 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetHeight_m4218891754 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___mono0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void RenderTexture_Internal_SetSRGBReadWrite_m2486231130 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___mono0, bool ___sRGB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C"  int32_t RenderTexture_get_width_m1498578543 (RenderTexture_t1963041563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C"  void RenderTexture_set_width_m2449777612 (RenderTexture_t1963041563 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C"  int32_t RenderTexture_get_height_m4010076224 (RenderTexture_t1963041563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C"  void RenderTexture_set_height_m4249514117 (RenderTexture_t1963041563 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C"  void RenderTexture_set_depth_m68043273 (RenderTexture_t1963041563 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture_set_format_m2539201833 (RenderTexture_t1963041563 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
extern "C"  void RenderTexture_set_antiAliasing_m3431921842 (RenderTexture_t1963041563 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Release()
extern "C"  void RenderTexture_Release_m2820287481 (RenderTexture_t1963041563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_Release(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_INTERNAL_CALL_Release_m2325488906 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::DiscardContents()
extern "C"  void RenderTexture_DiscardContents_m1898044554 (RenderTexture_t1963041563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_INTERNAL_CALL_DiscardContents_m3754318489 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
extern "C"  RenderTexture_t1963041563 * RenderTexture_get_active_m1725644858 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1002947377 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
