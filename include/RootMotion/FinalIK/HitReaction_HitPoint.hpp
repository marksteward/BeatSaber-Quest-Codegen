// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction
#include "RootMotion/FinalIK/HitReaction.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPoint
  class HitReaction::HitPoint : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD2C500
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2C538
    // public UnityEngine.Collider collider
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2C570
    // private System.Single crossFadeTime
    // Size: 0x4
    // Offset: 0x20
    float crossFadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD2C5BC
    // private System.Single <crossFader>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float crossFader;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD2C5CC
    // private System.Single <timer>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD2C5DC
    // private UnityEngine.Vector3 <force>k__BackingField
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 force;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xD2C5EC
    // private UnityEngine.Vector3 <point>k__BackingField
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single length
    // Size: 0x4
    // Offset: 0x44
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single crossFadeSpeed
    // Size: 0x4
    // Offset: 0x48
    float crossFadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastTime
    // Size: 0x4
    // Offset: 0x4C
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HitPoint
    HitPoint(::Il2CppString* name_ = {}, UnityEngine::Collider* collider_ = {}, float crossFadeTime_ = {}, float crossFader_ = {}, float timer_ = {}, UnityEngine::Vector3 force_ = {}, UnityEngine::Vector3 point_ = {}, float length_ = {}, float crossFadeSpeed_ = {}, float lastTime_ = {}) noexcept : name{name_}, collider{collider_}, crossFadeTime{crossFadeTime_}, crossFader{crossFader_}, timer{timer_}, force{force_}, point{point_}, length{length_}, crossFadeSpeed{crossFadeSpeed_}, lastTime{lastTime_} {}
    // public System.Boolean get_inProgress()
    // Offset: 0x1AA16D8
    bool get_inProgress();
    // protected System.Single get_crossFader()
    // Offset: 0x1AA1C80
    float get_crossFader();
    // private System.Void set_crossFader(System.Single value)
    // Offset: 0x1AA1C88
    void set_crossFader(float value);
    // protected System.Single get_timer()
    // Offset: 0x1AA1C90
    float get_timer();
    // private System.Void set_timer(System.Single value)
    // Offset: 0x1AA1C98
    void set_timer(float value);
    // protected UnityEngine.Vector3 get_force()
    // Offset: 0x1AA1CA0
    UnityEngine::Vector3 get_force();
    // private System.Void set_force(UnityEngine.Vector3 value)
    // Offset: 0x1AA1CAC
    void set_force(UnityEngine::Vector3 value);
    // protected UnityEngine.Vector3 get_point()
    // Offset: 0x1AA1CB8
    UnityEngine::Vector3 get_point();
    // private System.Void set_point(UnityEngine.Vector3 value)
    // Offset: 0x1AA1CC4
    void set_point(UnityEngine::Vector3 value);
    // public System.Void Hit(UnityEngine.Vector3 force, UnityEngine.Vector3 point)
    // Offset: 0x1AA1B4C
    void Hit(UnityEngine::Vector3 force, UnityEngine::Vector3 point);
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x1AA17C0
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // protected System.Single GetLength()
    // Offset: 0xFFFFFFFF
    float GetLength();
    // protected System.Void CrossFadeStart()
    // Offset: 0xFFFFFFFF
    void CrossFadeStart();
    // protected System.Void OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0xFFFFFFFF
    void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // protected System.Void .ctor()
    // Offset: 0x1AA1CD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPoint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::HitPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPoint*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReaction/HitPoint
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPoint), 76 + sizeof(float)> __RootMotion_FinalIK_HitReaction_HitPointSizeCheck;
  static_assert(sizeof(HitReaction::HitPoint) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPoint*, "RootMotion.FinalIK", "HitReaction/HitPoint");
