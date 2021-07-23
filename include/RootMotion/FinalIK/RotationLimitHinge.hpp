// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitHinge
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DF20A4
  // [AddComponentMenu] Offset: DF20A4
  class RotationLimitHinge : public RootMotion::FinalIK::RotationLimit {
    public:
    // public System.Boolean useLimits
    // Size: 0x1
    // Offset: 0x38
    bool useLimits;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLimits and: min
    char __padding0[0x3] = {};
    // public System.Single min
    // Size: 0x4
    // Offset: 0x3C
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single max
    // Size: 0x4
    // Offset: 0x40
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single zeroAxisDisplayOffset
    // Size: 0x4
    // Offset: 0x44
    float zeroAxisDisplayOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion lastRotation
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Quaternion lastRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single lastAngle
    // Size: 0x4
    // Offset: 0x58
    float lastAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RotationLimitHinge
    RotationLimitHinge(bool useLimits_ = {}, float min_ = {}, float max_ = {}, float zeroAxisDisplayOffset_ = {}, UnityEngine::Quaternion lastRotation_ = {}, float lastAngle_ = {}) noexcept : useLimits{useLimits_}, min{min_}, max{max_}, zeroAxisDisplayOffset{zeroAxisDisplayOffset_}, lastRotation{lastRotation_}, lastAngle{lastAngle_} {}
    // Get instance field: public System.Boolean useLimits
    bool _get_useLimits();
    // Set instance field: public System.Boolean useLimits
    void _set_useLimits(bool value);
    // Get instance field: public System.Single min
    float _get_min();
    // Set instance field: public System.Single min
    void _set_min(float value);
    // Get instance field: public System.Single max
    float _get_max();
    // Set instance field: public System.Single max
    void _set_max(float value);
    // Get instance field: public System.Single zeroAxisDisplayOffset
    float _get_zeroAxisDisplayOffset();
    // Set instance field: public System.Single zeroAxisDisplayOffset
    void _set_zeroAxisDisplayOffset(float value);
    // Get instance field: private UnityEngine.Quaternion lastRotation
    UnityEngine::Quaternion _get_lastRotation();
    // Set instance field: private UnityEngine.Quaternion lastRotation
    void _set_lastRotation(UnityEngine::Quaternion value);
    // Get instance field: private System.Single lastAngle
    float _get_lastAngle();
    // Set instance field: private System.Single lastAngle
    void _set_lastAngle(float value);
    // private System.Void OpenUserManual()
    // Offset: 0x1ABB578
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1ABB5C4
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1ABB610
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1ABB65C
    void ASThread();
    // private UnityEngine.Quaternion LimitHinge(UnityEngine.Quaternion rotation)
    // Offset: 0x1ABB6D0
    UnityEngine::Quaternion LimitHinge(UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1ABB9D0
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitHinge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::RotationLimitHinge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitHinge*, creationType>()));
    }
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1ABB6A8
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation);
  }; // RootMotion.FinalIK.RotationLimitHinge
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitHinge), 88 + sizeof(float)> __RootMotion_FinalIK_RotationLimitHingeSizeCheck;
  static_assert(sizeof(RotationLimitHinge) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitHinge*, "RootMotion.FinalIK", "RotationLimitHinge");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::LimitHinge
// Il2CppName: LimitHinge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitHinge::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitHinge::LimitHinge)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "LimitHinge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitHinge::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitHinge::LimitRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
