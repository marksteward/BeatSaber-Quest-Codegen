// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CapsuleCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D909C0
  // [NativeHeaderAttribute] Offset: D909C0
  class CapsuleCollider : public UnityEngine::Collider {
    public:
    // Creating value type constructor for type: CapsuleCollider
    CapsuleCollider() noexcept {}
    // public UnityEngine.Vector3 get_center()
    // Offset: 0x23AD620
    UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0x23AD6D0
    void set_center(UnityEngine::Vector3 value);
    // public System.Single get_radius()
    // Offset: 0x23AD778
    float get_radius();
    // public System.Void set_radius(System.Single value)
    // Offset: 0x23AD7B8
    void set_radius(float value);
    // public System.Single get_height()
    // Offset: 0x23AD808
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0x23AD848
    void set_height(float value);
    // public System.Void set_direction(System.Int32 value)
    // Offset: 0x23AD898
    void set_direction(int value);
    // private System.Void get_center_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x23AD680
    void get_center_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_center_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23AD728
    void set_center_Injected(UnityEngine::Vector3& value);
  }; // UnityEngine.CapsuleCollider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CapsuleCollider*, "UnityEngine", "CapsuleCollider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::CapsuleCollider::*)()>(&UnityEngine::CapsuleCollider::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CapsuleCollider::*)(UnityEngine::Vector3)>(&UnityEngine::CapsuleCollider::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::CapsuleCollider::*)()>(&UnityEngine::CapsuleCollider::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::set_radius
// Il2CppName: set_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CapsuleCollider::*)(float)>(&UnityEngine::CapsuleCollider::set_radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "set_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::CapsuleCollider::*)()>(&UnityEngine::CapsuleCollider::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CapsuleCollider::*)(float)>(&UnityEngine::CapsuleCollider::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::set_direction
// Il2CppName: set_direction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CapsuleCollider::*)(int)>(&UnityEngine::CapsuleCollider::set_direction)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "set_direction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::get_center_Injected
// Il2CppName: get_center_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CapsuleCollider::*)(UnityEngine::Vector3&)>(&UnityEngine::CapsuleCollider::get_center_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "get_center_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::CapsuleCollider::set_center_Injected
// Il2CppName: set_center_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CapsuleCollider::*)(UnityEngine::Vector3&)>(&UnityEngine::CapsuleCollider::set_center_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CapsuleCollider*), "set_center_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
