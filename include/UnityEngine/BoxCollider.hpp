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
  // Autogenerated type: UnityEngine.BoxCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D90A0C
  // [NativeHeaderAttribute] Offset: D90A0C
  class BoxCollider : public UnityEngine::Collider {
    public:
    // Creating value type constructor for type: BoxCollider
    BoxCollider() noexcept {}
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0x23AD420
    void set_center(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_size()
    // Offset: 0x23AD4C8
    UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0x23AD578
    void set_size(UnityEngine::Vector3 value);
    // private System.Void set_center_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23AD478
    void set_center_Injected(UnityEngine::Vector3& value);
    // private System.Void get_size_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x23AD528
    void get_size_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_size_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23AD5D0
    void set_size_Injected(UnityEngine::Vector3& value);
  }; // UnityEngine.BoxCollider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BoxCollider*, "UnityEngine", "BoxCollider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(UnityEngine::Vector3)>(&UnityEngine::BoxCollider::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::BoxCollider::*)()>(&UnityEngine::BoxCollider::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(UnityEngine::Vector3)>(&UnityEngine::BoxCollider::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_center_Injected
// Il2CppName: set_center_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(UnityEngine::Vector3&)>(&UnityEngine::BoxCollider::set_center_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_center_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::get_size_Injected
// Il2CppName: get_size_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(UnityEngine::Vector3&)>(&UnityEngine::BoxCollider::get_size_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "get_size_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_size_Injected
// Il2CppName: set_size_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(UnityEngine::Vector3&)>(&UnityEngine::BoxCollider::set_size_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_size_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
