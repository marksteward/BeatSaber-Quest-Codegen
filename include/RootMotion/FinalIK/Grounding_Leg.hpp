// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounding
#include "RootMotion/FinalIK/Grounding.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x114
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Grounding/Leg
  class Grounding::Leg : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE0B2A0
    // private System.Boolean <isGrounded>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool isGrounded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isGrounded and: IKPosition
    char __padding0[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE0B2B0
    // private UnityEngine.Vector3 <IKPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 IKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotationOffset
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xE0B2C0
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: heightFromGround
    char __padding3[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE0B2D0
    // private System.Single <heightFromGround>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    float heightFromGround;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE0B2E0
    // private UnityEngine.Vector3 <velocity>k__BackingField
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: velocity and: transform
    char __padding5[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE0B2F0
    // private UnityEngine.Transform <transform>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE0B300
    // private System.Single <IKOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    float IKOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean invertFootCenter
    // Size: 0x1
    // Offset: 0x54
    bool invertFootCenter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: invertFootCenter and: heelHit
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE0B310
    // private UnityEngine.RaycastHit <heelHit>k__BackingField
    // Size: 0x2C
    // Offset: 0x58
    UnityEngine::RaycastHit heelHit;
    // Field size check
    static_assert(sizeof(UnityEngine::RaycastHit) == 0x2C);
    // [CompilerGeneratedAttribute] Offset: 0xE0B320
    // private UnityEngine.RaycastHit <capsuleHit>k__BackingField
    // Size: 0x2C
    // Offset: 0x84
    UnityEngine::RaycastHit capsuleHit;
    // Field size check
    static_assert(sizeof(UnityEngine::RaycastHit) == 0x2C);
    // private RootMotion.FinalIK.Grounding grounding
    // Size: 0x8
    // Offset: 0xB0
    RootMotion::FinalIK::Grounding* grounding;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding*) == 0x8);
    // private System.Single lastTime
    // Size: 0x4
    // Offset: 0xB8
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single deltaTime
    // Size: 0x4
    // Offset: 0xBC
    float deltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0xC0
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion toHitNormal
    // Size: 0x10
    // Offset: 0xCC
    UnityEngine::Quaternion toHitNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion r
    // Size: 0x10
    // Offset: 0xDC
    UnityEngine::Quaternion r;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 up
    // Size: 0xC
    // Offset: 0xEC
    UnityEngine::Vector3 up;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean doOverrideFootPosition
    // Size: 0x1
    // Offset: 0xF8
    bool doOverrideFootPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: doOverrideFootPosition and: overrideFootPosition
    char __padding18[0x3] = {};
    // private UnityEngine.Vector3 overrideFootPosition
    // Size: 0xC
    // Offset: 0xFC
    UnityEngine::Vector3 overrideFootPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 transformPosition
    // Size: 0xC
    // Offset: 0x108
    UnityEngine::Vector3 transformPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Leg
    Leg(bool isGrounded_ = {}, UnityEngine::Vector3 IKPosition_ = {}, UnityEngine::Quaternion rotationOffset_ = {}, bool initiated_ = {}, float heightFromGround_ = {}, UnityEngine::Vector3 velocity_ = {}, UnityEngine::Transform* transform_ = {}, float IKOffset_ = {}, bool invertFootCenter_ = {}, UnityEngine::RaycastHit heelHit_ = {}, UnityEngine::RaycastHit capsuleHit_ = {}, RootMotion::FinalIK::Grounding* grounding_ = {}, float lastTime_ = {}, float deltaTime_ = {}, UnityEngine::Vector3 lastPosition_ = {}, UnityEngine::Quaternion toHitNormal_ = {}, UnityEngine::Quaternion r_ = {}, UnityEngine::Vector3 up_ = {}, bool doOverrideFootPosition_ = {}, UnityEngine::Vector3 overrideFootPosition_ = {}, UnityEngine::Vector3 transformPosition_ = {}) noexcept : isGrounded{isGrounded_}, IKPosition{IKPosition_}, rotationOffset{rotationOffset_}, initiated{initiated_}, heightFromGround{heightFromGround_}, velocity{velocity_}, transform{transform_}, IKOffset{IKOffset_}, invertFootCenter{invertFootCenter_}, heelHit{heelHit_}, capsuleHit{capsuleHit_}, grounding{grounding_}, lastTime{lastTime_}, deltaTime{deltaTime_}, lastPosition{lastPosition_}, toHitNormal{toHitNormal_}, r{r_}, up{up_}, doOverrideFootPosition{doOverrideFootPosition_}, overrideFootPosition{overrideFootPosition_}, transformPosition{transformPosition_} {}
    // public System.Boolean get_isGrounded()
    // Offset: 0x1C615C0
    bool get_isGrounded();
    // private System.Void set_isGrounded(System.Boolean value)
    // Offset: 0x1C615C8
    void set_isGrounded(bool value);
    // public UnityEngine.Vector3 get_IKPosition()
    // Offset: 0x1C615D4
    UnityEngine::Vector3 get_IKPosition();
    // private System.Void set_IKPosition(UnityEngine.Vector3 value)
    // Offset: 0x1C615E0
    void set_IKPosition(UnityEngine::Vector3 value);
    // public System.Boolean get_initiated()
    // Offset: 0x1C615EC
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1C615F4
    void set_initiated(bool value);
    // public System.Single get_heightFromGround()
    // Offset: 0x1C61600
    float get_heightFromGround();
    // private System.Void set_heightFromGround(System.Single value)
    // Offset: 0x1C61608
    void set_heightFromGround(float value);
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x1C61610
    UnityEngine::Vector3 get_velocity();
    // private System.Void set_velocity(UnityEngine.Vector3 value)
    // Offset: 0x1C6161C
    void set_velocity(UnityEngine::Vector3 value);
    // public UnityEngine.Transform get_transform()
    // Offset: 0x1C61628
    UnityEngine::Transform* get_transform();
    // private System.Void set_transform(UnityEngine.Transform value)
    // Offset: 0x1C61630
    void set_transform(UnityEngine::Transform* value);
    // public System.Single get_IKOffset()
    // Offset: 0x1C61638
    float get_IKOffset();
    // private System.Void set_IKOffset(System.Single value)
    // Offset: 0x1C61640
    void set_IKOffset(float value);
    // public UnityEngine.RaycastHit get_heelHit()
    // Offset: 0x1C61648
    UnityEngine::RaycastHit get_heelHit();
    // private System.Void set_heelHit(UnityEngine.RaycastHit value)
    // Offset: 0x1C61660
    void set_heelHit(UnityEngine::RaycastHit value);
    // public UnityEngine.RaycastHit get_capsuleHit()
    // Offset: 0x1C61680
    UnityEngine::RaycastHit get_capsuleHit();
    // private System.Void set_capsuleHit(UnityEngine.RaycastHit value)
    // Offset: 0x1C61698
    void set_capsuleHit(UnityEngine::RaycastHit value);
    // public UnityEngine.RaycastHit get_GetHitPoint()
    // Offset: 0x1C616B8
    UnityEngine::RaycastHit get_GetHitPoint();
    // public System.Void SetFootPosition(UnityEngine.Vector3 position)
    // Offset: 0x1C61700
    void SetFootPosition(UnityEngine::Vector3 position);
    // public System.Void Initiate(RootMotion.FinalIK.Grounding grounding, UnityEngine.Transform transform)
    // Offset: 0x1C603E4
    void Initiate(RootMotion::FinalIK::Grounding* grounding, UnityEngine::Transform* transform);
    // public System.Void OnEnable()
    // Offset: 0x1C61714
    void OnEnable();
    // public System.Void Reset()
    // Offset: 0x1C610E0
    void Reset();
    // public System.Void Process()
    // Offset: 0x1C604F0
    void Process();
    // public System.Single get_stepHeightFromGround()
    // Offset: 0x1C62474
    float get_stepHeightFromGround();
    // private UnityEngine.RaycastHit GetCapsuleHit(UnityEngine.Vector3 offsetFromHeel)
    // Offset: 0x1C61EEC
    UnityEngine::RaycastHit GetCapsuleHit(UnityEngine::Vector3 offsetFromHeel);
    // private UnityEngine.RaycastHit GetRaycastHit(UnityEngine.Vector3 offsetFromHeel)
    // Offset: 0x1C61760
    UnityEngine::RaycastHit GetRaycastHit(UnityEngine::Vector3 offsetFromHeel);
    // private UnityEngine.Vector3 RotateNormal(UnityEngine.Vector3 normal)
    // Offset: 0x1C625F4
    UnityEngine::Vector3 RotateNormal(UnityEngine::Vector3 normal);
    // private System.Void SetFootToPoint(UnityEngine.Vector3 normal, UnityEngine.Vector3 point)
    // Offset: 0x1C61B98
    void SetFootToPoint(UnityEngine::Vector3 normal, UnityEngine::Vector3 point);
    // private System.Void SetFootToPlane(UnityEngine.Vector3 planeNormal, UnityEngine.Vector3 planePoint, UnityEngine.Vector3 heelHitPoint)
    // Offset: 0x1C61CA0
    void SetFootToPlane(UnityEngine::Vector3 planeNormal, UnityEngine::Vector3 planePoint, UnityEngine::Vector3 heelHitPoint);
    // private System.Single GetHeightFromGround(UnityEngine.Vector3 hitPoint)
    // Offset: 0x1C626F0
    float GetHeightFromGround(UnityEngine::Vector3 hitPoint);
    // private System.Void RotateFoot()
    // Offset: 0x1C62500
    void RotateFoot();
    // private UnityEngine.Quaternion GetRotationOffsetTarget()
    // Offset: 0x1C62874
    UnityEngine::Quaternion GetRotationOffsetTarget();
    // private System.Single get_rootYOffset()
    // Offset: 0x1C6274C
    float get_rootYOffset();
    // public System.Void .ctor()
    // Offset: 0x1C60334
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Grounding::Leg* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Grounding::Leg::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Grounding::Leg*, creationType>()));
    }
  }; // RootMotion.FinalIK.Grounding/Leg
  #pragma pack(pop)
  static check_size<sizeof(Grounding::Leg), 264 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_Grounding_LegSizeCheck;
  static_assert(sizeof(Grounding::Leg) == 0x114);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding::Leg*, "RootMotion.FinalIK", "Grounding/Leg");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_isGrounded
// Il2CppName: get_isGrounded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_isGrounded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_isGrounded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_isGrounded
// Il2CppName: set_isGrounded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(bool)>(&RootMotion::FinalIK::Grounding::Leg::set_isGrounded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_isGrounded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_IKPosition
// Il2CppName: get_IKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_IKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_IKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_IKPosition
// Il2CppName: set_IKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::set_IKPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_IKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(bool)>(&RootMotion::FinalIK::Grounding::Leg::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_heightFromGround
// Il2CppName: get_heightFromGround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_heightFromGround)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_heightFromGround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_heightFromGround
// Il2CppName: set_heightFromGround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(float)>(&RootMotion::FinalIK::Grounding::Leg::set_heightFromGround)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_heightFromGround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_velocity
// Il2CppName: set_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::set_velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_transform
// Il2CppName: set_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::Grounding::Leg::set_transform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_IKOffset
// Il2CppName: get_IKOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_IKOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_IKOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_IKOffset
// Il2CppName: set_IKOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(float)>(&RootMotion::FinalIK::Grounding::Leg::set_IKOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_IKOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_heelHit
// Il2CppName: get_heelHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_heelHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_heelHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_heelHit
// Il2CppName: set_heelHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::RaycastHit)>(&RootMotion::FinalIK::Grounding::Leg::set_heelHit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_heelHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_capsuleHit
// Il2CppName: get_capsuleHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_capsuleHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_capsuleHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::set_capsuleHit
// Il2CppName: set_capsuleHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::RaycastHit)>(&RootMotion::FinalIK::Grounding::Leg::set_capsuleHit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "set_capsuleHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_GetHitPoint
// Il2CppName: get_GetHitPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_GetHitPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_GetHitPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::SetFootPosition
// Il2CppName: SetFootPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::SetFootPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "SetFootPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(RootMotion::FinalIK::Grounding*, UnityEngine::Transform*)>(&RootMotion::FinalIK::Grounding::Leg::Initiate)> {
  static const MethodInfo* get() {
    static auto* grounding = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "Grounding")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grounding, transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_stepHeightFromGround
// Il2CppName: get_stepHeightFromGround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_stepHeightFromGround)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_stepHeightFromGround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::GetCapsuleHit
// Il2CppName: GetCapsuleHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::GetCapsuleHit)> {
  static const MethodInfo* get() {
    static auto* offsetFromHeel = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "GetCapsuleHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetFromHeel});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::GetRaycastHit
// Il2CppName: GetRaycastHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::GetRaycastHit)> {
  static const MethodInfo* get() {
    static auto* offsetFromHeel = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "GetRaycastHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetFromHeel});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::RotateNormal
// Il2CppName: RotateNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::RotateNormal)> {
  static const MethodInfo* get() {
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "RotateNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::SetFootToPoint
// Il2CppName: SetFootToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::SetFootToPoint)> {
  static const MethodInfo* get() {
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "SetFootToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normal, point});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::SetFootToPlane
// Il2CppName: SetFootToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::SetFootToPlane)> {
  static const MethodInfo* get() {
    static auto* planeNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* planePoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* heelHitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "SetFootToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planeNormal, planePoint, heelHitPoint});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::GetHeightFromGround
// Il2CppName: GetHeightFromGround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::Grounding::Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Grounding::Leg::GetHeightFromGround)> {
  static const MethodInfo* get() {
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "GetHeightFromGround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitPoint});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::RotateFoot
// Il2CppName: RotateFoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::RotateFoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "RotateFoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::GetRotationOffsetTarget
// Il2CppName: GetRotationOffsetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::GetRotationOffsetTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "GetRotationOffsetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::get_rootYOffset
// Il2CppName: get_rootYOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::Grounding::Leg::*)()>(&RootMotion::FinalIK::Grounding::Leg::get_rootYOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Grounding::Leg*), "get_rootYOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Grounding::Leg::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
