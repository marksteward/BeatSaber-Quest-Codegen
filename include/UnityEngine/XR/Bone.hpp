// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Bone
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DA3D44
  // [NativeConditionalAttribute] Offset: DA3D44
  // [NativeHeaderAttribute] Offset: DA3D44
  // [StaticAccessorAttribute] Offset: DA3D44
  // [NativeHeaderAttribute] Offset: DA3D44
  // [NativeHeaderAttribute] Offset: DA3D44
  struct Bone/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::Bone>*/ {
    public:
    // private System.UInt64 m_DeviceId
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_DeviceId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt32 m_FeatureIndex
    // Size: 0x4
    // Offset: 0x8
    uint m_FeatureIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Bone
    constexpr Bone(uint64_t m_DeviceId_ = {}, uint m_FeatureIndex_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_FeatureIndex{m_FeatureIndex_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::Bone>
    operator System::IEquatable_1<UnityEngine::XR::Bone>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::Bone>*>(this);
    }
    // System.UInt64 get_deviceId()
    // Offset: 0xF0E308
    uint64_t get_deviceId();
    // System.UInt32 get_featureIndex()
    // Offset: 0xF0E310
    uint get_featureIndex();
    // public System.Boolean Equals(UnityEngine.XR.Bone other)
    // Offset: 0xF0E320
    bool Equals(UnityEngine::XR::Bone other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF0E318
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF0E344
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.Bone
  #pragma pack(pop)
  static check_size<sizeof(Bone), 8 + sizeof(uint)> __UnityEngine_XR_BoneSizeCheck;
  static_assert(sizeof(Bone) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Bone, "UnityEngine.XR", "Bone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Bone::get_deviceId
// Il2CppName: get_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::XR::Bone::*)()>(&UnityEngine::XR::Bone::get_deviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Bone), "get_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Bone::get_featureIndex
// Il2CppName: get_featureIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::XR::Bone::*)()>(&UnityEngine::XR::Bone::get_featureIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Bone), "get_featureIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Bone::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Bone::*)(UnityEngine::XR::Bone)>(&UnityEngine::XR::Bone::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "Bone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Bone), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Bone::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Bone::*)(::Il2CppObject*)>(&UnityEngine::XR::Bone::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Bone), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Bone::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Bone::*)()>(&UnityEngine::XR::Bone::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Bone), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
