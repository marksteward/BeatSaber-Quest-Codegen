// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitSpline
  // [HelpURLAttribute] Offset: E076A4
  // [AddComponentMenu] Offset: E076A4
  class RotationLimitSpline : public RootMotion::FinalIK::RotationLimit {
    public:
    // [RangeAttribute] Offset: 0xE0A3E0
    // public System.Single twistLimit
    // Size: 0x4
    // Offset: 0x38
    float twistLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: twistLimit and: spline
    char __padding0[0x4] = {};
    // [HideInInspector] Offset: 0xE0A3FC
    // public UnityEngine.AnimationCurve spline
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* spline;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // Creating value type constructor for type: RotationLimitSpline
    RotationLimitSpline(float twistLimit_ = {}, UnityEngine::AnimationCurve* spline_ = {}) noexcept : twistLimit{twistLimit_}, spline{spline_} {}
    // private System.Void OpenUserManual()
    // Offset: 0x1AA8A68
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1AA8AB4
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1AA8B00
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1AA8B4C
    void ASThread();
    // public System.Void SetSpline(UnityEngine.Keyframe[] keyframes)
    // Offset: 0x1AA8B98
    void SetSpline(::Array<UnityEngine::Keyframe>* keyframes);
    // public UnityEngine.Quaternion LimitSwing(UnityEngine.Quaternion rotation)
    // Offset: 0x1AA8C6C
    UnityEngine::Quaternion LimitSwing(UnityEngine::Quaternion rotation);
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1AA8BB4
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1AA8F98
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitSpline* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::RotationLimitSpline::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitSpline*, creationType>()));
    }
  }; // RootMotion.FinalIK.RotationLimitSpline
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitSpline), 64 + sizeof(UnityEngine::AnimationCurve*)> __RootMotion_FinalIK_RotationLimitSplineSizeCheck;
  static_assert(sizeof(RotationLimitSpline) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitSpline*, "RootMotion.FinalIK", "RotationLimitSpline");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::SetSpline
// Il2CppName: SetSpline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)(::Array<UnityEngine::Keyframe>*)>(&RootMotion::FinalIK::RotationLimitSpline::SetSpline)> {
  static const MethodInfo* get() {
    static auto* keyframes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "SetSpline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyframes});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::LimitSwing
// Il2CppName: LimitSwing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitSpline::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitSpline::LimitSwing)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "LimitSwing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitSpline::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitSpline::LimitRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
