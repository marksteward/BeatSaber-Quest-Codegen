// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.HumanBone
#include "UnityEngine/HumanBone.hpp"
// Including type: UnityEngine.SkeletonBone
#include "UnityEngine/SkeletonBone.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x3B
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.HumanDescription
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D965B4
  // [NativeHeaderAttribute] Offset: D965B4
  struct HumanDescription/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xD97624
    // public UnityEngine.HumanBone[] human
    // Size: 0x8
    // Offset: 0x0
    ::Array<UnityEngine::HumanBone>* human;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::HumanBone>*) == 0x8);
    // [NativeNameAttribute] Offset: 0xD9765C
    // public UnityEngine.SkeletonBone[] skeleton
    // Size: 0x8
    // Offset: 0x8
    ::Array<UnityEngine::SkeletonBone>* skeleton;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::SkeletonBone>*) == 0x8);
    // System.Single m_ArmTwist
    // Size: 0x4
    // Offset: 0x10
    float m_ArmTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_ForeArmTwist
    // Size: 0x4
    // Offset: 0x14
    float m_ForeArmTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_UpperLegTwist
    // Size: 0x4
    // Offset: 0x18
    float m_UpperLegTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_LegTwist
    // Size: 0x4
    // Offset: 0x1C
    float m_LegTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_ArmStretch
    // Size: 0x4
    // Offset: 0x20
    float m_ArmStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_LegStretch
    // Size: 0x4
    // Offset: 0x24
    float m_LegStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_FeetSpacing
    // Size: 0x4
    // Offset: 0x28
    float m_FeetSpacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_GlobalScale
    // Size: 0x4
    // Offset: 0x2C
    float m_GlobalScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.String m_RootMotionBoneName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_RootMotionBoneName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean m_HasTranslationDoF
    // Size: 0x1
    // Offset: 0x38
    bool m_HasTranslationDoF;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_HasExtraRoot
    // Size: 0x1
    // Offset: 0x39
    bool m_HasExtraRoot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_SkeletonHasParents
    // Size: 0x1
    // Offset: 0x3A
    bool m_SkeletonHasParents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HumanDescription
    constexpr HumanDescription(::Array<UnityEngine::HumanBone>* human_ = {}, ::Array<UnityEngine::SkeletonBone>* skeleton_ = {}, float m_ArmTwist_ = {}, float m_ForeArmTwist_ = {}, float m_UpperLegTwist_ = {}, float m_LegTwist_ = {}, float m_ArmStretch_ = {}, float m_LegStretch_ = {}, float m_FeetSpacing_ = {}, float m_GlobalScale_ = {}, ::Il2CppString* m_RootMotionBoneName_ = {}, bool m_HasTranslationDoF_ = {}, bool m_HasExtraRoot_ = {}, bool m_SkeletonHasParents_ = {}) noexcept : human{human_}, skeleton{skeleton_}, m_ArmTwist{m_ArmTwist_}, m_ForeArmTwist{m_ForeArmTwist_}, m_UpperLegTwist{m_UpperLegTwist_}, m_LegTwist{m_LegTwist_}, m_ArmStretch{m_ArmStretch_}, m_LegStretch{m_LegStretch_}, m_FeetSpacing{m_FeetSpacing_}, m_GlobalScale{m_GlobalScale_}, m_RootMotionBoneName{m_RootMotionBoneName_}, m_HasTranslationDoF{m_HasTranslationDoF_}, m_HasExtraRoot{m_HasExtraRoot_}, m_SkeletonHasParents{m_SkeletonHasParents_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public UnityEngine.HumanBone[] human
    ::Array<UnityEngine::HumanBone>* _get_human();
    // Set instance field: public UnityEngine.HumanBone[] human
    void _set_human(::Array<UnityEngine::HumanBone>* value);
    // Get instance field: public UnityEngine.SkeletonBone[] skeleton
    ::Array<UnityEngine::SkeletonBone>* _get_skeleton();
    // Set instance field: public UnityEngine.SkeletonBone[] skeleton
    void _set_skeleton(::Array<UnityEngine::SkeletonBone>* value);
    // Get instance field: System.Single m_ArmTwist
    float _get_m_ArmTwist();
    // Set instance field: System.Single m_ArmTwist
    void _set_m_ArmTwist(float value);
    // Get instance field: System.Single m_ForeArmTwist
    float _get_m_ForeArmTwist();
    // Set instance field: System.Single m_ForeArmTwist
    void _set_m_ForeArmTwist(float value);
    // Get instance field: System.Single m_UpperLegTwist
    float _get_m_UpperLegTwist();
    // Set instance field: System.Single m_UpperLegTwist
    void _set_m_UpperLegTwist(float value);
    // Get instance field: System.Single m_LegTwist
    float _get_m_LegTwist();
    // Set instance field: System.Single m_LegTwist
    void _set_m_LegTwist(float value);
    // Get instance field: System.Single m_ArmStretch
    float _get_m_ArmStretch();
    // Set instance field: System.Single m_ArmStretch
    void _set_m_ArmStretch(float value);
    // Get instance field: System.Single m_LegStretch
    float _get_m_LegStretch();
    // Set instance field: System.Single m_LegStretch
    void _set_m_LegStretch(float value);
    // Get instance field: System.Single m_FeetSpacing
    float _get_m_FeetSpacing();
    // Set instance field: System.Single m_FeetSpacing
    void _set_m_FeetSpacing(float value);
    // Get instance field: System.Single m_GlobalScale
    float _get_m_GlobalScale();
    // Set instance field: System.Single m_GlobalScale
    void _set_m_GlobalScale(float value);
    // Get instance field: System.String m_RootMotionBoneName
    ::Il2CppString* _get_m_RootMotionBoneName();
    // Set instance field: System.String m_RootMotionBoneName
    void _set_m_RootMotionBoneName(::Il2CppString* value);
    // Get instance field: System.Boolean m_HasTranslationDoF
    bool _get_m_HasTranslationDoF();
    // Set instance field: System.Boolean m_HasTranslationDoF
    void _set_m_HasTranslationDoF(bool value);
    // Get instance field: System.Boolean m_HasExtraRoot
    bool _get_m_HasExtraRoot();
    // Set instance field: System.Boolean m_HasExtraRoot
    void _set_m_HasExtraRoot(bool value);
    // Get instance field: System.Boolean m_SkeletonHasParents
    bool _get_m_SkeletonHasParents();
    // Set instance field: System.Boolean m_SkeletonHasParents
    void _set_m_SkeletonHasParents(bool value);
  }; // UnityEngine.HumanDescription
  #pragma pack(pop)
  static check_size<sizeof(HumanDescription), 58 + sizeof(bool)> __UnityEngine_HumanDescriptionSizeCheck;
  static_assert(sizeof(HumanDescription) == 0x3B);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanDescription, "UnityEngine", "HumanDescription");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
