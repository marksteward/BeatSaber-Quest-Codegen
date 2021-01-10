// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DynamicBoneColliderBase
  class DynamicBoneColliderBase;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x108
  // Autogenerated type: DynamicBone
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DB43E4
  class DynamicBone : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::DynamicBone::UpdateMode
    struct UpdateMode;
    // Nested type: GlobalNamespace::DynamicBone::FreezeAxis
    struct FreezeAxis;
    // Nested type: GlobalNamespace::DynamicBone::Particle
    class Particle;
    // Size: 0x4
    // Autogenerated type: DynamicBone/UpdateMode
    // [] Offset: FFFFFFFF
    struct UpdateMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: UpdateMode
      constexpr UpdateMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBone/UpdateMode Normal
      static constexpr const int Normal = 0;
      // Get static field: static public DynamicBone/UpdateMode Normal
      static GlobalNamespace::DynamicBone::UpdateMode _get_Normal();
      // Set static field: static public DynamicBone/UpdateMode Normal
      static void _set_Normal(GlobalNamespace::DynamicBone::UpdateMode value);
      // static field const value: static public DynamicBone/UpdateMode AnimatePhysics
      static constexpr const int AnimatePhysics = 1;
      // Get static field: static public DynamicBone/UpdateMode AnimatePhysics
      static GlobalNamespace::DynamicBone::UpdateMode _get_AnimatePhysics();
      // Set static field: static public DynamicBone/UpdateMode AnimatePhysics
      static void _set_AnimatePhysics(GlobalNamespace::DynamicBone::UpdateMode value);
      // static field const value: static public DynamicBone/UpdateMode UnscaledTime
      static constexpr const int UnscaledTime = 2;
      // Get static field: static public DynamicBone/UpdateMode UnscaledTime
      static GlobalNamespace::DynamicBone::UpdateMode _get_UnscaledTime();
      // Set static field: static public DynamicBone/UpdateMode UnscaledTime
      static void _set_UnscaledTime(GlobalNamespace::DynamicBone::UpdateMode value);
    }; // DynamicBone/UpdateMode
    static check_size<sizeof(DynamicBone::UpdateMode), 0 + sizeof(int)> __GlobalNamespace_DynamicBone_UpdateModeSizeCheck;
    static_assert(sizeof(DynamicBone::UpdateMode) == 0x4);
    // Size: 0x4
    // Autogenerated type: DynamicBone/FreezeAxis
    // [] Offset: FFFFFFFF
    struct FreezeAxis/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: FreezeAxis
      constexpr FreezeAxis(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBone/FreezeAxis None
      static constexpr const int None = 0;
      // Get static field: static public DynamicBone/FreezeAxis None
      static GlobalNamespace::DynamicBone::FreezeAxis _get_None();
      // Set static field: static public DynamicBone/FreezeAxis None
      static void _set_None(GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis X
      static constexpr const int X = 1;
      // Get static field: static public DynamicBone/FreezeAxis X
      static GlobalNamespace::DynamicBone::FreezeAxis _get_X();
      // Set static field: static public DynamicBone/FreezeAxis X
      static void _set_X(GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis Y
      static constexpr const int Y = 2;
      // Get static field: static public DynamicBone/FreezeAxis Y
      static GlobalNamespace::DynamicBone::FreezeAxis _get_Y();
      // Set static field: static public DynamicBone/FreezeAxis Y
      static void _set_Y(GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis Z
      static constexpr const int Z = 3;
      // Get static field: static public DynamicBone/FreezeAxis Z
      static GlobalNamespace::DynamicBone::FreezeAxis _get_Z();
      // Set static field: static public DynamicBone/FreezeAxis Z
      static void _set_Z(GlobalNamespace::DynamicBone::FreezeAxis value);
    }; // DynamicBone/FreezeAxis
    static check_size<sizeof(DynamicBone::FreezeAxis), 0 + sizeof(int)> __GlobalNamespace_DynamicBone_FreezeAxisSizeCheck;
    static_assert(sizeof(DynamicBone::FreezeAxis) == 0x4);
    // public UnityEngine.Transform m_Root
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* m_Root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single m_UpdateRate
    // Size: 0x4
    // Offset: 0x20
    float m_UpdateRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public DynamicBone/UpdateMode m_UpdateMode
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::DynamicBone::UpdateMode m_UpdateMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DynamicBone::UpdateMode) == 0x4);
    // [RangeAttribute] Offset: 0xDB448C
    // public System.Single m_Damping
    // Size: 0x4
    // Offset: 0x28
    float m_Damping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Damping and: m_DampingDistrib
    char __padding3[0x4] = {};
    // public UnityEngine.AnimationCurve m_DampingDistrib
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* m_DampingDistrib;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0xDB44A4
    // public System.Single m_Elasticity
    // Size: 0x4
    // Offset: 0x38
    float m_Elasticity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Elasticity and: m_ElasticityDistrib
    char __padding5[0x4] = {};
    // public UnityEngine.AnimationCurve m_ElasticityDistrib
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* m_ElasticityDistrib;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0xDB44BC
    // public System.Single m_Stiffness
    // Size: 0x4
    // Offset: 0x48
    float m_Stiffness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Stiffness and: m_StiffnessDistrib
    char __padding7[0x4] = {};
    // public UnityEngine.AnimationCurve m_StiffnessDistrib
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationCurve* m_StiffnessDistrib;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0xDB44D4
    // public System.Single m_Inert
    // Size: 0x4
    // Offset: 0x58
    float m_Inert;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Inert and: m_InertDistrib
    char __padding9[0x4] = {};
    // public UnityEngine.AnimationCurve m_InertDistrib
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::AnimationCurve* m_InertDistrib;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single m_Radius
    // Size: 0x4
    // Offset: 0x68
    float m_Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Radius and: m_RadiusDistrib
    char __padding11[0x4] = {};
    // public UnityEngine.AnimationCurve m_RadiusDistrib
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::AnimationCurve* m_RadiusDistrib;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single m_EndLength
    // Size: 0x4
    // Offset: 0x78
    float m_EndLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 m_EndOffset
    // Size: 0xC
    // Offset: 0x7C
    UnityEngine::Vector3 m_EndOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_Gravity
    // Size: 0xC
    // Offset: 0x88
    UnityEngine::Vector3 m_Gravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_Force
    // Size: 0xC
    // Offset: 0x94
    UnityEngine::Vector3 m_Force;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Collections.Generic.List`1<DynamicBoneColliderBase> m_Colliders
    // Size: 0x8
    // Offset: 0xA0
    System::Collections::Generic::List_1<GlobalNamespace::DynamicBoneColliderBase*>* m_Colliders;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::DynamicBoneColliderBase*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Transform> m_Exclusions
    // Size: 0x8
    // Offset: 0xA8
    System::Collections::Generic::List_1<UnityEngine::Transform*>* m_Exclusions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Transform*>*) == 0x8);
    // public DynamicBone/FreezeAxis m_FreezeAxis
    // Size: 0x4
    // Offset: 0xB0
    GlobalNamespace::DynamicBone::FreezeAxis m_FreezeAxis;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DynamicBone::FreezeAxis) == 0x4);
    // public System.Boolean m_DistantDisable
    // Size: 0x1
    // Offset: 0xB4
    bool m_DistantDisable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_DistantDisable and: m_ReferenceObject
    char __padding20[0x3] = {};
    // public UnityEngine.Transform m_ReferenceObject
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Transform* m_ReferenceObject;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single m_DistanceToObject
    // Size: 0x4
    // Offset: 0xC0
    float m_DistanceToObject;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 m_LocalGravity
    // Size: 0xC
    // Offset: 0xC4
    UnityEngine::Vector3 m_LocalGravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_ObjectMove
    // Size: 0xC
    // Offset: 0xD0
    UnityEngine::Vector3 m_ObjectMove;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_ObjectPrevPosition
    // Size: 0xC
    // Offset: 0xDC
    UnityEngine::Vector3 m_ObjectPrevPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single m_BoneTotalLength
    // Size: 0x4
    // Offset: 0xE8
    float m_BoneTotalLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_ObjectScale
    // Size: 0x4
    // Offset: 0xEC
    float m_ObjectScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Time
    // Size: 0x4
    // Offset: 0xF0
    float m_Time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Weight
    // Size: 0x4
    // Offset: 0xF4
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_DistantDisabled
    // Size: 0x1
    // Offset: 0xF8
    bool m_DistantDisabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_DistantDisabled and: m_Particles
    char __padding30[0x7] = {};
    // private System.Collections.Generic.List`1<DynamicBone/Particle> m_Particles
    // Size: 0x8
    // Offset: 0x100
    System::Collections::Generic::List_1<GlobalNamespace::DynamicBone::Particle*>* m_Particles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::DynamicBone::Particle*>*) == 0x8);
    // Creating value type constructor for type: DynamicBone
    DynamicBone(UnityEngine::Transform* m_Root_ = {}, float m_UpdateRate_ = {}, GlobalNamespace::DynamicBone::UpdateMode m_UpdateMode_ = {}, float m_Damping_ = {}, UnityEngine::AnimationCurve* m_DampingDistrib_ = {}, float m_Elasticity_ = {}, UnityEngine::AnimationCurve* m_ElasticityDistrib_ = {}, float m_Stiffness_ = {}, UnityEngine::AnimationCurve* m_StiffnessDistrib_ = {}, float m_Inert_ = {}, UnityEngine::AnimationCurve* m_InertDistrib_ = {}, float m_Radius_ = {}, UnityEngine::AnimationCurve* m_RadiusDistrib_ = {}, float m_EndLength_ = {}, UnityEngine::Vector3 m_EndOffset_ = {}, UnityEngine::Vector3 m_Gravity_ = {}, UnityEngine::Vector3 m_Force_ = {}, System::Collections::Generic::List_1<GlobalNamespace::DynamicBoneColliderBase*>* m_Colliders_ = {}, System::Collections::Generic::List_1<UnityEngine::Transform*>* m_Exclusions_ = {}, GlobalNamespace::DynamicBone::FreezeAxis m_FreezeAxis_ = {}, bool m_DistantDisable_ = {}, UnityEngine::Transform* m_ReferenceObject_ = {}, float m_DistanceToObject_ = {}, UnityEngine::Vector3 m_LocalGravity_ = {}, UnityEngine::Vector3 m_ObjectMove_ = {}, UnityEngine::Vector3 m_ObjectPrevPosition_ = {}, float m_BoneTotalLength_ = {}, float m_ObjectScale_ = {}, float m_Time_ = {}, float m_Weight_ = {}, bool m_DistantDisabled_ = {}, System::Collections::Generic::List_1<GlobalNamespace::DynamicBone::Particle*>* m_Particles_ = {}) noexcept : m_Root{m_Root_}, m_UpdateRate{m_UpdateRate_}, m_UpdateMode{m_UpdateMode_}, m_Damping{m_Damping_}, m_DampingDistrib{m_DampingDistrib_}, m_Elasticity{m_Elasticity_}, m_ElasticityDistrib{m_ElasticityDistrib_}, m_Stiffness{m_Stiffness_}, m_StiffnessDistrib{m_StiffnessDistrib_}, m_Inert{m_Inert_}, m_InertDistrib{m_InertDistrib_}, m_Radius{m_Radius_}, m_RadiusDistrib{m_RadiusDistrib_}, m_EndLength{m_EndLength_}, m_EndOffset{m_EndOffset_}, m_Gravity{m_Gravity_}, m_Force{m_Force_}, m_Colliders{m_Colliders_}, m_Exclusions{m_Exclusions_}, m_FreezeAxis{m_FreezeAxis_}, m_DistantDisable{m_DistantDisable_}, m_ReferenceObject{m_ReferenceObject_}, m_DistanceToObject{m_DistanceToObject_}, m_LocalGravity{m_LocalGravity_}, m_ObjectMove{m_ObjectMove_}, m_ObjectPrevPosition{m_ObjectPrevPosition_}, m_BoneTotalLength{m_BoneTotalLength_}, m_ObjectScale{m_ObjectScale_}, m_Time{m_Time_}, m_Weight{m_Weight_}, m_DistantDisabled{m_DistantDisabled_}, m_Particles{m_Particles_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x19E353C
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x19E36BC
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x19E3710
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x19E3740
    void LateUpdate();
    // private System.Void PreUpdate()
    // Offset: 0x19E36EC
    void PreUpdate();
    // private System.Void CheckDistance()
    // Offset: 0x19E37A0
    void CheckDistance();
    // private System.Void OnEnable()
    // Offset: 0x19E3E44
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x19E3E48
    void OnDisable();
    // private System.Void OnValidate()
    // Offset: 0x19E3E4C
    void OnValidate();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x19E3F68
    void OnDrawGizmosSelected();
    // public System.Void SetWeight(System.Single w)
    // Offset: 0x19E410C
    void SetWeight(float w);
    // public System.Single GetWeight()
    // Offset: 0x19E4168
    float GetWeight();
    // private System.Void UpdateDynamicBones(System.Single t)
    // Offset: 0x19E39A4
    void UpdateDynamicBones(float t);
    // private System.Void SetupParticles()
    // Offset: 0x19E3540
    void SetupParticles();
    // private System.Void AppendParticles(UnityEngine.Transform b, System.Int32 parentIndex, System.Single boneLength)
    // Offset: 0x19E5518
    void AppendParticles(UnityEngine::Transform* b, int parentIndex, float boneLength);
    // public System.Void UpdateParameters()
    // Offset: 0x19E5BA0
    void UpdateParameters();
    // private System.Void InitTransforms()
    // Offset: 0x19E3BE8
    void InitTransforms();
    // private System.Void ResetParticlesPosition()
    // Offset: 0x19E3CE8
    void ResetParticlesPosition();
    // private System.Void UpdateParticles1()
    // Offset: 0x19E4170
    void UpdateParticles1();
    // private System.Void UpdateParticles2()
    // Offset: 0x19E4480
    void UpdateParticles2();
    // private System.Void SkipUpdateParticles()
    // Offset: 0x19E4C0C
    void SkipUpdateParticles();
    // static private UnityEngine.Vector3 MirrorVector(UnityEngine.Vector3 v, UnityEngine.Vector3 axis)
    // Offset: 0x19E5F60
    static UnityEngine::Vector3 MirrorVector(UnityEngine::Vector3 v, UnityEngine::Vector3 axis);
    // private System.Void ApplyParticlesToTransforms()
    // Offset: 0x19E523C
    void ApplyParticlesToTransforms();
    // public System.Void .ctor()
    // Offset: 0x19E6040
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DynamicBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicBone*, creationType>()));
    }
  }; // DynamicBone
  static check_size<sizeof(DynamicBone), 256 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::DynamicBone::Particle*>*)> __GlobalNamespace_DynamicBoneSizeCheck;
  static_assert(sizeof(DynamicBone) == 0x108);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone*, "", "DynamicBone");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone::UpdateMode, "", "DynamicBone/UpdateMode");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBone::FreezeAxis, "", "DynamicBone/FreezeAxis");
#pragma pack(pop)
