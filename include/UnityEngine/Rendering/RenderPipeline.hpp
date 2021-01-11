// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderPipeline
  // [] Offset: FFFFFFFF
  class RenderPipeline : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD51A44
    // [CompilerGeneratedAttribute] Offset: 0xD51A44
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RenderPipeline
    RenderPipeline(bool disposed_ = {}) noexcept : disposed{disposed_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return disposed;
    }
    // protected System.Void Render(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0xFFFFFFFF
    void Render(UnityEngine::Rendering::ScriptableRenderContext context, ::Array<UnityEngine::Camera*>* cameras);
    // System.Void InternalRender(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0x16BC63C
    void InternalRender(UnityEngine::Rendering::ScriptableRenderContext context, ::Array<UnityEngine::Camera*>* cameras);
    // public System.Boolean get_disposed()
    // Offset: 0x16BC6FC
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x16BC704
    void set_disposed(bool value);
    // System.Void Dispose()
    // Offset: 0x16BC710
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16BC798
    void Dispose(bool disposing);
  }; // UnityEngine.Rendering.RenderPipeline
  static check_size<sizeof(RenderPipeline), 16 + sizeof(bool)> __UnityEngine_Rendering_RenderPipelineSizeCheck;
  static_assert(sizeof(RenderPipeline) == 0x11);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
