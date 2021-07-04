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
  class RenderPipeline : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD94B28
    // [DebuggerBrowsableAttribute] Offset: 0xD94B28
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
    // Offset: 0x1B2EDA8
    void InternalRender(UnityEngine::Rendering::ScriptableRenderContext context, ::Array<UnityEngine::Camera*>* cameras);
    // public System.Boolean get_disposed()
    // Offset: 0x1B2EE68
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x1B2EE70
    void set_disposed(bool value);
    // System.Void Dispose()
    // Offset: 0x1B2EE7C
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1B2EF04
    void Dispose(bool disposing);
  }; // UnityEngine.Rendering.RenderPipeline
  #pragma pack(pop)
  static check_size<sizeof(RenderPipeline), 16 + sizeof(bool)> __UnityEngine_Rendering_RenderPipelineSizeCheck;
  static_assert(sizeof(RenderPipeline) == 0x11);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipeline::Render)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &classof(::Array<::Array<UnityEngine::Camera*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::InternalRender
// Il2CppName: InternalRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(UnityEngine::Rendering::ScriptableRenderContext, ::Array<UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipeline::InternalRender)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &classof(::Array<::Array<UnityEngine::Camera*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "InternalRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderPipeline::*)()>(&UnityEngine::Rendering::RenderPipeline::get_disposed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(bool)>(&UnityEngine::Rendering::RenderPipeline::set_disposed)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)()>(&UnityEngine::Rendering::RenderPipeline::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(bool)>(&UnityEngine::Rendering::RenderPipeline::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
