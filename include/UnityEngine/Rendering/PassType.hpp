// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.PassType
  // [] Offset: FFFFFFFF
  struct PassType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PassType
    constexpr PassType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.PassType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.Rendering.PassType Normal
    static UnityEngine::Rendering::PassType _get_Normal();
    // Set static field: static public UnityEngine.Rendering.PassType Normal
    static void _set_Normal(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType Vertex
    static constexpr const int Vertex = 1;
    // Get static field: static public UnityEngine.Rendering.PassType Vertex
    static UnityEngine::Rendering::PassType _get_Vertex();
    // Set static field: static public UnityEngine.Rendering.PassType Vertex
    static void _set_Vertex(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType VertexLM
    static constexpr const int VertexLM = 2;
    // Get static field: static public UnityEngine.Rendering.PassType VertexLM
    static UnityEngine::Rendering::PassType _get_VertexLM();
    // Set static field: static public UnityEngine.Rendering.PassType VertexLM
    static void _set_VertexLM(UnityEngine::Rendering::PassType value);
    // [ObsoleteAttribute] Offset: 0xD51884
    // static field const value: static public UnityEngine.Rendering.PassType VertexLMRGBM
    static constexpr const int VertexLMRGBM = 3;
    // Get static field: static public UnityEngine.Rendering.PassType VertexLMRGBM
    static UnityEngine::Rendering::PassType _get_VertexLMRGBM();
    // Set static field: static public UnityEngine.Rendering.PassType VertexLMRGBM
    static void _set_VertexLMRGBM(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType ForwardBase
    static constexpr const int ForwardBase = 4;
    // Get static field: static public UnityEngine.Rendering.PassType ForwardBase
    static UnityEngine::Rendering::PassType _get_ForwardBase();
    // Set static field: static public UnityEngine.Rendering.PassType ForwardBase
    static void _set_ForwardBase(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType ForwardAdd
    static constexpr const int ForwardAdd = 5;
    // Get static field: static public UnityEngine.Rendering.PassType ForwardAdd
    static UnityEngine::Rendering::PassType _get_ForwardAdd();
    // Set static field: static public UnityEngine.Rendering.PassType ForwardAdd
    static void _set_ForwardAdd(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType LightPrePassBase
    static constexpr const int LightPrePassBase = 6;
    // Get static field: static public UnityEngine.Rendering.PassType LightPrePassBase
    static UnityEngine::Rendering::PassType _get_LightPrePassBase();
    // Set static field: static public UnityEngine.Rendering.PassType LightPrePassBase
    static void _set_LightPrePassBase(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType LightPrePassFinal
    static constexpr const int LightPrePassFinal = 7;
    // Get static field: static public UnityEngine.Rendering.PassType LightPrePassFinal
    static UnityEngine::Rendering::PassType _get_LightPrePassFinal();
    // Set static field: static public UnityEngine.Rendering.PassType LightPrePassFinal
    static void _set_LightPrePassFinal(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType ShadowCaster
    static constexpr const int ShadowCaster = 8;
    // Get static field: static public UnityEngine.Rendering.PassType ShadowCaster
    static UnityEngine::Rendering::PassType _get_ShadowCaster();
    // Set static field: static public UnityEngine.Rendering.PassType ShadowCaster
    static void _set_ShadowCaster(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType Deferred
    static constexpr const int Deferred = 10;
    // Get static field: static public UnityEngine.Rendering.PassType Deferred
    static UnityEngine::Rendering::PassType _get_Deferred();
    // Set static field: static public UnityEngine.Rendering.PassType Deferred
    static void _set_Deferred(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType Meta
    static constexpr const int Meta = 11;
    // Get static field: static public UnityEngine.Rendering.PassType Meta
    static UnityEngine::Rendering::PassType _get_Meta();
    // Set static field: static public UnityEngine.Rendering.PassType Meta
    static void _set_Meta(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType MotionVectors
    static constexpr const int MotionVectors = 12;
    // Get static field: static public UnityEngine.Rendering.PassType MotionVectors
    static UnityEngine::Rendering::PassType _get_MotionVectors();
    // Set static field: static public UnityEngine.Rendering.PassType MotionVectors
    static void _set_MotionVectors(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType ScriptableRenderPipeline
    static constexpr const int ScriptableRenderPipeline = 13;
    // Get static field: static public UnityEngine.Rendering.PassType ScriptableRenderPipeline
    static UnityEngine::Rendering::PassType _get_ScriptableRenderPipeline();
    // Set static field: static public UnityEngine.Rendering.PassType ScriptableRenderPipeline
    static void _set_ScriptableRenderPipeline(UnityEngine::Rendering::PassType value);
    // static field const value: static public UnityEngine.Rendering.PassType ScriptableRenderPipelineDefaultUnlit
    static constexpr const int ScriptableRenderPipelineDefaultUnlit = 14;
    // Get static field: static public UnityEngine.Rendering.PassType ScriptableRenderPipelineDefaultUnlit
    static UnityEngine::Rendering::PassType _get_ScriptableRenderPipelineDefaultUnlit();
    // Set static field: static public UnityEngine.Rendering.PassType ScriptableRenderPipelineDefaultUnlit
    static void _set_ScriptableRenderPipelineDefaultUnlit(UnityEngine::Rendering::PassType value);
  }; // UnityEngine.Rendering.PassType
  static check_size<sizeof(PassType), 0 + sizeof(int)> __UnityEngine_Rendering_PassTypeSizeCheck;
  static_assert(sizeof(PassType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::PassType, "UnityEngine.Rendering", "PassType");
