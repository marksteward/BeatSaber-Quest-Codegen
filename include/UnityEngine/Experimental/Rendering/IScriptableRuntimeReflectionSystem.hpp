// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
  class IScriptableRuntimeReflectionSystem/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IScriptableRuntimeReflectionSystem
    IScriptableRuntimeReflectionSystem() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Boolean TickRealtimeProbes()
    // Offset: 0xFFFFFFFF
    bool TickRealtimeProbes();
  }; // UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::TickRealtimeProbes
// Il2CppName: TickRealtimeProbes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::*)()>(&UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::TickRealtimeProbes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*), "TickRealtimeProbes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
