// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LineRenderer
  // [NativeHeaderAttribute] Offset: D8EAC0
  // [NativeHeaderAttribute] Offset: D8EAC0
  class LineRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: LineRenderer
    LineRenderer() noexcept {}
    // public System.Void set_startWidth(System.Single value)
    // Offset: 0x1C0A754
    void set_startWidth(float value);
    // public System.Void set_endWidth(System.Single value)
    // Offset: 0x1C0A7A4
    void set_endWidth(float value);
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0x1C0A7F4
    void set_useWorldSpace(bool value);
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0x1C0A844
    void set_startColor(UnityEngine::Color value);
    // public System.Void set_endColor(UnityEngine.Color value)
    // Offset: 0x1C0A8EC
    void set_endColor(UnityEngine::Color value);
    // public System.Void set_positionCount(System.Int32 value)
    // Offset: 0x1C0A994
    void set_positionCount(int value);
    // public System.Void SetPosition(System.Int32 index, UnityEngine.Vector3 position)
    // Offset: 0x1C0A9E4
    void SetPosition(int index, UnityEngine::Vector3 position);
    // public System.Void SetPositions(UnityEngine.Vector3[] positions)
    // Offset: 0x1C0AAA4
    void SetPositions(::Array<UnityEngine::Vector3>* positions);
    // private System.Void set_startColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1C0A89C
    void set_startColor_Injected(UnityEngine::Color& value);
    // private System.Void set_endColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1C0A944
    void set_endColor_Injected(UnityEngine::Color& value);
    // private System.Void SetPosition_Injected(System.Int32 index, ref UnityEngine.Vector3 position)
    // Offset: 0x1C0AA4C
    void SetPosition_Injected(int index, UnityEngine::Vector3& position);
  }; // UnityEngine.LineRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startWidth
// Il2CppName: set_startWidth
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endWidth
// Il2CppName: set_endWidth
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_useWorldSpace
// Il2CppName: set_useWorldSpace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startColor
// Il2CppName: set_startColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endColor
// Il2CppName: set_endColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_positionCount
// Il2CppName: set_positionCount
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition
// Il2CppName: SetPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPositions
// Il2CppName: SetPositions
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startColor_Injected
// Il2CppName: set_startColor_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endColor_Injected
// Il2CppName: set_endColor_Injected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition_Injected
// Il2CppName: SetPosition_Injected
// Cannot perform method pointer template specialization from operators!
