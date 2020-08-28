// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction
#include "RootMotion/FinalIK/HitReaction.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPoint
  class HitReaction::HitPoint : public ::Il2CppObject {
    public:
    // public System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // public UnityEngine.Collider collider
    // Offset: 0x18
    UnityEngine::Collider* collider;
    // private System.Single crossFadeTime
    // Offset: 0x20
    float crossFadeTime;
    // private System.Single <crossFader>k__BackingField
    // Offset: 0x24
    float crossFader;
    // private System.Single <timer>k__BackingField
    // Offset: 0x28
    float timer;
    // private UnityEngine.Vector3 <force>k__BackingField
    // Offset: 0x2C
    UnityEngine::Vector3 force;
    // private UnityEngine.Vector3 <point>k__BackingField
    // Offset: 0x38
    UnityEngine::Vector3 point;
    // private System.Single length
    // Offset: 0x44
    float length;
    // private System.Single crossFadeSpeed
    // Offset: 0x48
    float crossFadeSpeed;
    // private System.Single lastTime
    // Offset: 0x4C
    float lastTime;
    // public System.Boolean get_inProgress()
    // Offset: 0x137F668
    bool get_inProgress();
    // protected System.Single get_crossFader()
    // Offset: 0x137FC10
    float get_crossFader();
    // private System.Void set_crossFader(System.Single value)
    // Offset: 0x137FC18
    void set_crossFader(float value);
    // protected System.Single get_timer()
    // Offset: 0x137FC20
    float get_timer();
    // private System.Void set_timer(System.Single value)
    // Offset: 0x137FC28
    void set_timer(float value);
    // protected UnityEngine.Vector3 get_force()
    // Offset: 0x137FC30
    UnityEngine::Vector3 get_force();
    // private System.Void set_force(UnityEngine.Vector3 value)
    // Offset: 0x137FC3C
    void set_force(UnityEngine::Vector3 value);
    // protected UnityEngine.Vector3 get_point()
    // Offset: 0x137FC48
    UnityEngine::Vector3 get_point();
    // private System.Void set_point(UnityEngine.Vector3 value)
    // Offset: 0x137FC54
    void set_point(UnityEngine::Vector3 value);
    // public System.Void Hit(UnityEngine.Vector3 force, UnityEngine.Vector3 point)
    // Offset: 0x137FADC
    void Hit(UnityEngine::Vector3 force, UnityEngine::Vector3 point);
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x137F750
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
    // Offset: 0x137FC60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HitReaction::HitPoint* New_ctor();
  }; // RootMotion.FinalIK.HitReaction/HitPoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPoint*, "RootMotion.FinalIK", "HitReaction/HitPoint");
#pragma pack(pop)
