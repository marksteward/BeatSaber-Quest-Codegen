// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Cloth
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DD4384
  // [NativeHeaderAttribute] Offset: DD4384
  // [NativeClassAttribute] Offset: DD4384
  class Cloth : public UnityEngine::Component {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xDD4454
    // private System.Single <useContinuousCollision>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    float useContinuousCollision;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xDD4490
    // private readonly System.Boolean <selfCollision>k__BackingField
    // Size: 0x1
    // Offset: 0x1C
    bool selfCollision;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Cloth
    Cloth(float useContinuousCollision_ = {}, bool selfCollision_ = {}) noexcept : useContinuousCollision{useContinuousCollision_}, selfCollision{selfCollision_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_externalAcceleration(UnityEngine.Vector3 value)
    // Offset: 0x23CB194
    void set_externalAcceleration(UnityEngine::Vector3 value);
    // private System.Void set_externalAcceleration_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23CB1EC
    void set_externalAcceleration_Injected(UnityEngine::Vector3& value);
  }; // UnityEngine.Cloth
  #pragma pack(pop)
  static check_size<sizeof(Cloth), 28 + sizeof(bool)> __UnityEngine_ClothSizeCheck;
  static_assert(sizeof(Cloth) == 0x1D);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cloth*, "UnityEngine", "Cloth");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Cloth::set_externalAcceleration
// Il2CppName: set_externalAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cloth::*)(UnityEngine::Vector3)>(&UnityEngine::Cloth::set_externalAcceleration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cloth*), "set_externalAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cloth::set_externalAcceleration_Injected
// Il2CppName: set_externalAcceleration_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cloth::*)(UnityEngine::Vector3&)>(&UnityEngine::Cloth::set_externalAcceleration_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cloth*), "set_externalAcceleration_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
