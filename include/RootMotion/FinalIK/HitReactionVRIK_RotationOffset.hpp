// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK
#include "RootMotion/FinalIK/HitReactionVRIK.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
#include "RootMotion/FinalIK/HitReactionVRIK_Offset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.RotationOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReactionVRIK::RotationOffset : public RootMotion::FinalIK::HitReactionVRIK::Offset {
    public:
    // Nested type: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink
    class RotationOffsetLink;
    // [TooltipAttribute] Offset: 0xDF8270
    // public System.Int32 curveIndex
    // Size: 0x4
    // Offset: 0x50
    int curveIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: curveIndex and: offsetLinks
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xDF82A8
    // public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.RotationOffset/RootMotion.FinalIK.RotationOffsetLink[] offsetLinks
    // Size: 0x8
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*>* offsetLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*>*) == 0x8);
    // private UnityEngine.Rigidbody rigidbody
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // Creating value type constructor for type: RotationOffset
    RotationOffset(int curveIndex_ = {}, ::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*>* offsetLinks_ = {}, UnityEngine::Rigidbody* rigidbody_ = {}) noexcept : curveIndex{curveIndex_}, offsetLinks{offsetLinks_}, rigidbody{rigidbody_} {}
    // Get instance field: public System.Int32 curveIndex
    int _get_curveIndex();
    // Set instance field: public System.Int32 curveIndex
    void _set_curveIndex(int value);
    // Get instance field: public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.RotationOffset/RootMotion.FinalIK.RotationOffsetLink[] offsetLinks
    ::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*>* _get_offsetLinks();
    // Set instance field: public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.RotationOffset/RootMotion.FinalIK.RotationOffsetLink[] offsetLinks
    void _set_offsetLinks(::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*>* value);
    // Get instance field: private UnityEngine.Rigidbody rigidbody
    UnityEngine::Rigidbody* _get_rigidbody();
    // Set instance field: private UnityEngine.Rigidbody rigidbody
    void _set_rigidbody(UnityEngine::Rigidbody* value);
    // public System.Void .ctor()
    // Offset: 0x1C96464
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Void Offset::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::RotationOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReactionVRIK::RotationOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::RotationOffset*, creationType>()));
    }
    // protected override System.Single GetLength(UnityEngine.AnimationCurve[] curves)
    // Offset: 0x1C95EDC
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Single Offset::GetLength(UnityEngine.AnimationCurve[] curves)
    float GetLength(::Array<UnityEngine::AnimationCurve*>* curves);
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1C95FC0
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Void Offset::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    // Offset: 0x1C96030
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
    // Base method: System.Void Offset::OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    void OnApply(RootMotion::FinalIK::VRIK* ik, ::Array<UnityEngine::AnimationCurve*>* curves, float weight);
  }; // RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.RotationOffset
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::RotationOffset), 96 + sizeof(UnityEngine::Rigidbody*)> __RootMotion_FinalIK_HitReactionVRIK_RotationOffsetSizeCheck;
  static_assert(sizeof(HitReactionVRIK::RotationOffset) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::RotationOffset*, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReactionVRIK::RotationOffset::*)(::Array<UnityEngine::AnimationCurve*>*)>(&RootMotion::FinalIK::HitReactionVRIK::RotationOffset::GetLength)> {
  static const MethodInfo* get() {
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::RotationOffset*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curves});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::RotationOffset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::RotationOffset::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::RotationOffset*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::RotationOffset::OnApply
// Il2CppName: OnApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::RotationOffset::*)(RootMotion::FinalIK::VRIK*, ::Array<UnityEngine::AnimationCurve*>*, float)>(&RootMotion::FinalIK::HitReactionVRIK::RotationOffset::OnApply)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::RotationOffset*), "OnApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, curves, weight});
  }
};
