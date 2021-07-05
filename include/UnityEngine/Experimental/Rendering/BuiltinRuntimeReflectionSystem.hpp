// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
  // [NativeHeaderAttribute] Offset: D927E4
  class BuiltinRuntimeReflectionSystem : public ::Il2CppObject/*, public UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*/ {
    public:
    // Creating value type constructor for type: BuiltinRuntimeReflectionSystem
    BuiltinRuntimeReflectionSystem() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem
    operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem() noexcept {
      return *reinterpret_cast<UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(this);
    }
    // public System.Boolean TickRealtimeProbes()
    // Offset: 0x1B98948
    bool TickRealtimeProbes();
    // public System.Void Dispose()
    // Offset: 0x1B989B0
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1B989B4
    void Dispose(bool disposing);
    // static private System.Boolean BuiltinUpdate()
    // Offset: 0x1B9897C
    static bool BuiltinUpdate();
    // static private UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
    // Offset: 0x1B989B8
    static UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* Internal_BuiltinRuntimeReflectionSystem_New();
    // public System.Void .ctor()
    // Offset: 0x1B98A14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuiltinRuntimeReflectionSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuiltinRuntimeReflectionSystem*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::TickRealtimeProbes
// Il2CppName: TickRealtimeProbes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::*)()>(&UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::TickRealtimeProbes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*), "TickRealtimeProbes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::*)()>(&UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::*)(bool)>(&UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::BuiltinUpdate
// Il2CppName: BuiltinUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::BuiltinUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*), "BuiltinUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New
// Il2CppName: Internal_BuiltinRuntimeReflectionSystem_New
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* (*)()>(&UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*), "Internal_BuiltinRuntimeReflectionSystem_New", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
