// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPose
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPose/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion orientation
    // Size: 0x10
    // Offset: 0xC
    UnityEngine::Quaternion orientation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: OVRPose
    constexpr OVRPose(UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion orientation_ = {}) noexcept : position{position_}, orientation{orientation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static public OVRPose get_identity()
    // Offset: 0x15F7ADC
    static GlobalNamespace::OVRPose get_identity();
    // public OVRPose Inverse()
    // Offset: 0xEE1418
    GlobalNamespace::OVRPose Inverse();
    // public OVRPose flipZ()
    // Offset: 0xEE1420
    GlobalNamespace::OVRPose flipZ();
    // public OVRPlugin/Posef ToPosef_Legacy()
    // Offset: 0xEE144C
    GlobalNamespace::OVRPlugin::Posef ToPosef_Legacy();
    // public OVRPlugin/Posef ToPosef()
    // Offset: 0xEE1454
    GlobalNamespace::OVRPlugin::Posef ToPosef();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEE13D4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEE13DC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // OVRPose
  #pragma pack(pop)
  static check_size<sizeof(OVRPose), 12 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_OVRPoseSizeCheck;
  static_assert(sizeof(OVRPose) == 0x1C);
  // static public System.Boolean op_Equality(OVRPose x, OVRPose y)
  // Offset: 0x15F7C48
  bool operator ==(const GlobalNamespace::OVRPose& x, const GlobalNamespace::OVRPose& y);
  // static public System.Boolean op_Inequality(OVRPose x, OVRPose y)
  // Offset: 0x15F7DB8
  bool operator !=(const GlobalNamespace::OVRPose& x, const GlobalNamespace::OVRPose& y);
  // static public OVRPose op_Multiply(OVRPose lhs, OVRPose rhs)
  // Offset: 0x15F7E04
  GlobalNamespace::OVRPose operator*(const GlobalNamespace::OVRPose& lhs, const GlobalNamespace::OVRPose& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPose, "", "OVRPose");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (*)()>(&GlobalNamespace::OVRPose::get_identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPose), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (GlobalNamespace::OVRPose::*)()>(&GlobalNamespace::OVRPose::Inverse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPose), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::flipZ
// Il2CppName: flipZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (GlobalNamespace::OVRPose::*)()>(&GlobalNamespace::OVRPose::flipZ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPose), "flipZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::ToPosef_Legacy
// Il2CppName: ToPosef_Legacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Posef (GlobalNamespace::OVRPose::*)()>(&GlobalNamespace::OVRPose::ToPosef_Legacy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPose), "ToPosef_Legacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::ToPosef
// Il2CppName: ToPosef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Posef (GlobalNamespace::OVRPose::*)()>(&GlobalNamespace::OVRPose::ToPosef)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPose), "ToPosef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPose::*)(::Il2CppObject*)>(&GlobalNamespace::OVRPose::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPose), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRPose::*)()>(&GlobalNamespace::OVRPose::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPose), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRPose::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
