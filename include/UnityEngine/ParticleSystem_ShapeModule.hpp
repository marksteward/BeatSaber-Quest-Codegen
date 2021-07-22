// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.ShapeModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::ShapeModule/*, public System::ValueType*/ {
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // Creating value type constructor for type: ShapeModule
    constexpr ShapeModule(UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator UnityEngine::ParticleSystem*
    constexpr operator UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0xF0F1A0
    void set_position(UnityEngine::Vector3 value);
    // public System.Void set_rotation(UnityEngine.Vector3 value)
    // Offset: 0xF0F1A8
    void set_rotation(UnityEngine::Vector3 value);
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0xF0F198
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  ShapeModule(UnityEngine::ParticleSystem* particleSystem)
    // static private System.Void set_position_Injected(ref UnityEngine.ParticleSystem/UnityEngine.ShapeModule _unity_self, ref UnityEngine.Vector3 value)
    // Offset: 0x23BFCAC
    static void set_position_Injected(UnityEngine::ParticleSystem::ShapeModule& _unity_self, UnityEngine::Vector3& value);
    // static private System.Void set_rotation_Injected(ref UnityEngine.ParticleSystem/UnityEngine.ShapeModule _unity_self, ref UnityEngine.Vector3 value)
    // Offset: 0x23BFD54
    static void set_rotation_Injected(UnityEngine::ParticleSystem::ShapeModule& _unity_self, UnityEngine::Vector3& value);
  }; // UnityEngine.ParticleSystem/UnityEngine.ShapeModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::ShapeModule), 0 + sizeof(UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_ShapeModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::ShapeModule) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::ShapeModule::*)(UnityEngine::Vector3)>(&UnityEngine::ParticleSystem::ShapeModule::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ShapeModule), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::ShapeModule::*)(UnityEngine::Vector3)>(&UnityEngine::ParticleSystem::ShapeModule::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ShapeModule), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::ShapeModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::set_position_Injected
// Il2CppName: set_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ParticleSystem::ShapeModule&, UnityEngine::Vector3&)>(&UnityEngine::ParticleSystem::ShapeModule::set_position_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/ShapeModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ShapeModule), "set_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::set_rotation_Injected
// Il2CppName: set_rotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ParticleSystem::ShapeModule&, UnityEngine::Vector3&)>(&UnityEngine::ParticleSystem::ShapeModule::set_rotation_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/ShapeModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ShapeModule), "set_rotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
