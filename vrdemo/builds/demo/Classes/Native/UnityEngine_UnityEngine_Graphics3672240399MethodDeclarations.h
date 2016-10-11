#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArgumen4047764288.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Graphics_DrawMeshNow_m872452541 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Vector3_t4282066566  ___position1, Quaternion_t1553702882  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow1_m44339171 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Vector3_t4282066566  ___position1, Quaternion_t1553702882  ___rotation2, int32_t ___materialIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow1_m2485926446 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mesh0, Vector3_t4282066566 * ___position1, Quaternion_t1553702882 * ___rotation2, int32_t ___materialIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color,UnityEngine.Material)
extern "C"  void Graphics_DrawTexture_m2707978657 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___screenRect0, Texture_t2526458961 * ___texture1, Rect_t4241904616  ___sourceRect2, int32_t ___leftBorder3, int32_t ___rightBorder4, int32_t ___topBorder5, int32_t ___bottomBorder6, Color_t4194546905  ___color7, Material_t3870600107 * ___mat8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C"  void Graphics_DrawTexture_m2938050632 (Il2CppObject * __this /* static, unused */, InternalDrawTextureArguments_t4047764288 * ___arguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
