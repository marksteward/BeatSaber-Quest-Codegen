// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GL
  // [NativeHeaderAttribute] Offset: D8E7B0
  // [NativeHeaderAttribute] Offset: D8E7B0
  // [NativeHeaderAttribute] Offset: D8E7B0
  // [StaticAccessorAttribute] Offset: D8E7B0
  // [NativeHeaderAttribute] Offset: D8E7B0
  class GL : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GL
    GL() noexcept {}
    // static public System.Void Vertex3(System.Single x, System.Single y, System.Single z)
    // Offset: 0x1B99028
    static void Vertex3(float x, float y, float z);
    // static public System.Void TexCoord3(System.Single x, System.Single y, System.Single z)
    // Offset: 0x1B99084
    static void TexCoord3(float x, float y, float z);
    // static public System.Void TexCoord(UnityEngine.Vector3 v)
    // Offset: 0x1B990E0
    static void TexCoord(UnityEngine::Vector3 v);
    // static public System.Void TexCoord2(System.Single x, System.Single y)
    // Offset: 0x1B9913C
    static void TexCoord2(float x, float y);
    // static public System.Boolean get_invertCulling()
    // Offset: 0x1B9918C
    static bool get_invertCulling();
    // static public System.Void set_invertCulling(System.Boolean value)
    // Offset: 0x1B991C0
    static void set_invertCulling(bool value);
    // static public System.Void Flush()
    // Offset: 0x1B99200
    static void Flush();
    // static public System.Void PushMatrix()
    // Offset: 0x1B99234
    static void PushMatrix();
    // static public System.Void PopMatrix()
    // Offset: 0x1B99268
    static void PopMatrix();
    // static public System.Void LoadOrtho()
    // Offset: 0x1B9929C
    static void LoadOrtho();
    // static private System.Void GLLoadPixelMatrixScript(System.Single left, System.Single right, System.Single bottom, System.Single top)
    // Offset: 0x1B992D0
    static void GLLoadPixelMatrixScript(float left, float right, float bottom, float top);
    // static public System.Void LoadPixelMatrix(System.Single left, System.Single right, System.Single bottom, System.Single top)
    // Offset: 0x1B99334
    static void LoadPixelMatrix(float left, float right, float bottom, float top);
    // static public System.Void Begin(System.Int32 mode)
    // Offset: 0x1B99398
    static void Begin(int mode);
    // static public System.Void End()
    // Offset: 0x1B993D8
    static void End();
    // static private System.Void GLClear(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor, System.Single depth)
    // Offset: 0x1B9940C
    static void GLClear(bool clearDepth, bool clearColor, UnityEngine::Color backgroundColor, float depth);
    // static public System.Void Clear(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor)
    // Offset: 0x1B994EC
    static void Clear(bool clearDepth, bool clearColor, UnityEngine::Color backgroundColor);
    // static public System.Void Viewport(UnityEngine.Rect pixelRect)
    // Offset: 0x1B994FC
    static void Viewport(UnityEngine::Rect pixelRect);
    // static private System.Void GLClear_Injected(System.Boolean clearDepth, System.Boolean clearColor, ref UnityEngine.Color backgroundColor, System.Single depth)
    // Offset: 0x1B99484
    static void GLClear_Injected(bool clearDepth, bool clearColor, UnityEngine::Color& backgroundColor, float depth);
    // static private System.Void Viewport_Injected(ref UnityEngine.Rect pixelRect)
    // Offset: 0x1B9954C
    static void Viewport_Injected(UnityEngine::Rect& pixelRect);
  }; // UnityEngine.GL
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GL*, "UnityEngine", "GL");
// Writing MetadataGetter for method: UnityEngine::GL::Vertex3
// Il2CppName: Vertex3
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::TexCoord3
// Il2CppName: TexCoord3
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::TexCoord
// Il2CppName: TexCoord
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::TexCoord2
// Il2CppName: TexCoord2
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::get_invertCulling
// Il2CppName: get_invertCulling
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::set_invertCulling
// Il2CppName: set_invertCulling
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::Flush
// Il2CppName: Flush
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::PushMatrix
// Il2CppName: PushMatrix
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::PopMatrix
// Il2CppName: PopMatrix
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::LoadOrtho
// Il2CppName: LoadOrtho
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::GLLoadPixelMatrixScript
// Il2CppName: GLLoadPixelMatrixScript
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::LoadPixelMatrix
// Il2CppName: LoadPixelMatrix
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::Begin
// Il2CppName: Begin
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::End
// Il2CppName: End
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::GLClear
// Il2CppName: GLClear
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::Clear
// Il2CppName: Clear
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::Viewport
// Il2CppName: Viewport
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::GLClear_Injected
// Il2CppName: GLClear_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GL::Viewport_Injected
// Il2CppName: Viewport_Injected
// Cannot perform method pointer template specialization from operators!
