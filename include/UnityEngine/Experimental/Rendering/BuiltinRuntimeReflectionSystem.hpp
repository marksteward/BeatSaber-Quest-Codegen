// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
#include "UnityEngine/Experimental/Rendering/IScriptableRuntimeReflectionSystem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4F9A8
  class BuiltinRuntimeReflectionSystem : public ::Il2CppObject/*, public UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*/ {
    public:
    // Creating value type constructor for type: BuiltinRuntimeReflectionSystem
    BuiltinRuntimeReflectionSystem() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem
    operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem() noexcept {
      return *reinterpret_cast<UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(this);
    }
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1689E2C
    void Dispose(bool disposing);
    // static private System.Boolean BuiltinUpdate()
    // Offset: 0x1689DF4
    static bool BuiltinUpdate();
    // static private UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
    // Offset: 0x1689E30
    static UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* Internal_BuiltinRuntimeReflectionSystem_New();
    // public System.Boolean TickRealtimeProbes()
    // Offset: 0x1689DC0
    // Implemented from: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
    // Base method: System.Boolean IScriptableRuntimeReflectionSystem::TickRealtimeProbes()
    bool TickRealtimeProbes();
    // public System.Void Dispose()
    // Offset: 0x1689E28
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x1689E8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuiltinRuntimeReflectionSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuiltinRuntimeReflectionSystem*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
#pragma pack(pop)
