// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.EmissionModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::EmissionModule/*, public System::ValueType*/ {
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // Creating value type constructor for type: EmissionModule
    constexpr EmissionModule(UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator UnityEngine::ParticleSystem*
    constexpr operator UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field: UnityEngine.ParticleSystem m_ParticleSystem
    UnityEngine::ParticleSystem* _get_m_ParticleSystem();
    // Set instance field: UnityEngine.ParticleSystem m_ParticleSystem
    void _set_m_ParticleSystem(UnityEngine::ParticleSystem* value);
    // public System.Boolean get_enabled()
    // Offset: 0xF0E9B0
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0xF0E9F0
    void set_enabled(bool value);
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0xF0E9A8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  EmissionModule(UnityEngine::ParticleSystem* particleSystem)
    // static private System.Boolean get_enabled_Injected(ref UnityEngine.ParticleSystem/UnityEngine.EmissionModule _unity_self)
    // Offset: 0x23BF288
    static bool get_enabled_Injected(UnityEngine::ParticleSystem::EmissionModule& _unity_self);
    // static private System.Void set_enabled_Injected(ref UnityEngine.ParticleSystem/UnityEngine.EmissionModule _unity_self, System.Boolean value)
    // Offset: 0x23BF318
    static void set_enabled_Injected(UnityEngine::ParticleSystem::EmissionModule& _unity_self, bool value);
  }; // UnityEngine.ParticleSystem/UnityEngine.EmissionModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::EmissionModule), 0 + sizeof(UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_EmissionModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::EmissionModule) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ParticleSystem::EmissionModule::*)()>(&UnityEngine::ParticleSystem::EmissionModule::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(bool)>(&UnityEngine::ParticleSystem::EmissionModule::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::EmissionModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_enabled_Injected
// Il2CppName: get_enabled_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ParticleSystem::EmissionModule&)>(&UnityEngine::ParticleSystem::EmissionModule::get_enabled_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_enabled_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_enabled_Injected
// Il2CppName: set_enabled_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ParticleSystem::EmissionModule&, bool)>(&UnityEngine::ParticleSystem::EmissionModule::set_enabled_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_enabled_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
