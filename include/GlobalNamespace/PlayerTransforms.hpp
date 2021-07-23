// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: PlayerTransforms
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerTransforms : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _originTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* originTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _leftHandTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightHandTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _overrideHeadPos
    // Size: 0x1
    // Offset: 0x38
    bool overrideHeadPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideHeadPos and: overriddenHeadPos
    char __padding4[0x3] = {};
    // private UnityEngine.Vector3 _overriddenHeadPos
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 overriddenHeadPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _headWorldPos
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 headWorldPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _headWorldRot
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Quaternion headWorldRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _headPseudoLocalPos
    // Size: 0xC
    // Offset: 0x64
    UnityEngine::Vector3 headPseudoLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _headPseudoLocalRot
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Quaternion headPseudoLocalRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _leftHandPseudoLocalPos
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 leftHandPseudoLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _leftHandPseudoLocalRot
    // Size: 0x10
    // Offset: 0x8C
    UnityEngine::Quaternion leftHandPseudoLocalRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _rightHandPseudoLocalPos
    // Size: 0xC
    // Offset: 0x9C
    UnityEngine::Vector3 rightHandPseudoLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rightHandPseudoLocalRot
    // Size: 0x10
    // Offset: 0xA8
    UnityEngine::Quaternion rightHandPseudoLocalRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Transform _originParentTransform
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Transform* originParentTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _useOriginParentTransformForPseudoLocalCalculations
    // Size: 0x1
    // Offset: 0xC0
    bool useOriginParentTransformForPseudoLocalCalculations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerTransforms
    PlayerTransforms(UnityEngine::Transform* headTransform_ = {}, UnityEngine::Transform* originTransform_ = {}, UnityEngine::Transform* leftHandTransform_ = {}, UnityEngine::Transform* rightHandTransform_ = {}, bool overrideHeadPos_ = {}, UnityEngine::Vector3 overriddenHeadPos_ = {}, UnityEngine::Vector3 headWorldPos_ = {}, UnityEngine::Quaternion headWorldRot_ = {}, UnityEngine::Vector3 headPseudoLocalPos_ = {}, UnityEngine::Quaternion headPseudoLocalRot_ = {}, UnityEngine::Vector3 leftHandPseudoLocalPos_ = {}, UnityEngine::Quaternion leftHandPseudoLocalRot_ = {}, UnityEngine::Vector3 rightHandPseudoLocalPos_ = {}, UnityEngine::Quaternion rightHandPseudoLocalRot_ = {}, UnityEngine::Transform* originParentTransform_ = {}, bool useOriginParentTransformForPseudoLocalCalculations_ = {}) noexcept : headTransform{headTransform_}, originTransform{originTransform_}, leftHandTransform{leftHandTransform_}, rightHandTransform{rightHandTransform_}, overrideHeadPos{overrideHeadPos_}, overriddenHeadPos{overriddenHeadPos_}, headWorldPos{headWorldPos_}, headWorldRot{headWorldRot_}, headPseudoLocalPos{headPseudoLocalPos_}, headPseudoLocalRot{headPseudoLocalRot_}, leftHandPseudoLocalPos{leftHandPseudoLocalPos_}, leftHandPseudoLocalRot{leftHandPseudoLocalRot_}, rightHandPseudoLocalPos{rightHandPseudoLocalPos_}, rightHandPseudoLocalRot{rightHandPseudoLocalRot_}, originParentTransform{originParentTransform_}, useOriginParentTransformForPseudoLocalCalculations{useOriginParentTransformForPseudoLocalCalculations_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Transform _headTransform
    UnityEngine::Transform* _get__headTransform();
    // Set instance field: private UnityEngine.Transform _headTransform
    void _set__headTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Transform _originTransform
    UnityEngine::Transform* _get__originTransform();
    // Set instance field: private UnityEngine.Transform _originTransform
    void _set__originTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Transform _leftHandTransform
    UnityEngine::Transform* _get__leftHandTransform();
    // Set instance field: private UnityEngine.Transform _leftHandTransform
    void _set__leftHandTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Transform _rightHandTransform
    UnityEngine::Transform* _get__rightHandTransform();
    // Set instance field: private UnityEngine.Transform _rightHandTransform
    void _set__rightHandTransform(UnityEngine::Transform* value);
    // Get instance field: private System.Boolean _overrideHeadPos
    bool _get__overrideHeadPos();
    // Set instance field: private System.Boolean _overrideHeadPos
    void _set__overrideHeadPos(bool value);
    // Get instance field: private UnityEngine.Vector3 _overriddenHeadPos
    UnityEngine::Vector3 _get__overriddenHeadPos();
    // Set instance field: private UnityEngine.Vector3 _overriddenHeadPos
    void _set__overriddenHeadPos(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 _headWorldPos
    UnityEngine::Vector3 _get__headWorldPos();
    // Set instance field: private UnityEngine.Vector3 _headWorldPos
    void _set__headWorldPos(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion _headWorldRot
    UnityEngine::Quaternion _get__headWorldRot();
    // Set instance field: private UnityEngine.Quaternion _headWorldRot
    void _set__headWorldRot(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 _headPseudoLocalPos
    UnityEngine::Vector3 _get__headPseudoLocalPos();
    // Set instance field: private UnityEngine.Vector3 _headPseudoLocalPos
    void _set__headPseudoLocalPos(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion _headPseudoLocalRot
    UnityEngine::Quaternion _get__headPseudoLocalRot();
    // Set instance field: private UnityEngine.Quaternion _headPseudoLocalRot
    void _set__headPseudoLocalRot(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 _leftHandPseudoLocalPos
    UnityEngine::Vector3 _get__leftHandPseudoLocalPos();
    // Set instance field: private UnityEngine.Vector3 _leftHandPseudoLocalPos
    void _set__leftHandPseudoLocalPos(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion _leftHandPseudoLocalRot
    UnityEngine::Quaternion _get__leftHandPseudoLocalRot();
    // Set instance field: private UnityEngine.Quaternion _leftHandPseudoLocalRot
    void _set__leftHandPseudoLocalRot(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 _rightHandPseudoLocalPos
    UnityEngine::Vector3 _get__rightHandPseudoLocalPos();
    // Set instance field: private UnityEngine.Vector3 _rightHandPseudoLocalPos
    void _set__rightHandPseudoLocalPos(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion _rightHandPseudoLocalRot
    UnityEngine::Quaternion _get__rightHandPseudoLocalRot();
    // Set instance field: private UnityEngine.Quaternion _rightHandPseudoLocalRot
    void _set__rightHandPseudoLocalRot(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Transform _originParentTransform
    UnityEngine::Transform* _get__originParentTransform();
    // Set instance field: private UnityEngine.Transform _originParentTransform
    void _set__originParentTransform(UnityEngine::Transform* value);
    // Get instance field: private System.Boolean _useOriginParentTransformForPseudoLocalCalculations
    bool _get__useOriginParentTransformForPseudoLocalCalculations();
    // Set instance field: private System.Boolean _useOriginParentTransformForPseudoLocalCalculations
    void _set__useOriginParentTransformForPseudoLocalCalculations(bool value);
    // public UnityEngine.Vector3 get_headWorldPos()
    // Offset: 0x11078EC
    UnityEngine::Vector3 get_headWorldPos();
    // public UnityEngine.Quaternion get_headWorldRot()
    // Offset: 0x11078F8
    UnityEngine::Quaternion get_headWorldRot();
    // public UnityEngine.Vector3 get_headPseudoLocalPos()
    // Offset: 0x1107904
    UnityEngine::Vector3 get_headPseudoLocalPos();
    // public UnityEngine.Quaternion get_headPseudoLocalRot()
    // Offset: 0x1107910
    UnityEngine::Quaternion get_headPseudoLocalRot();
    // public UnityEngine.Vector3 get_leftHandPseudoLocalPos()
    // Offset: 0x110791C
    UnityEngine::Vector3 get_leftHandPseudoLocalPos();
    // public UnityEngine.Quaternion get_leftHandPseudoLocalRot()
    // Offset: 0x1107928
    UnityEngine::Quaternion get_leftHandPseudoLocalRot();
    // public UnityEngine.Vector3 get_rightHandPseudoLocalPos()
    // Offset: 0x1107934
    UnityEngine::Vector3 get_rightHandPseudoLocalPos();
    // public UnityEngine.Quaternion get_rightHandPseudoLocalRot()
    // Offset: 0x1107940
    UnityEngine::Quaternion get_rightHandPseudoLocalRot();
    // protected System.Void Awake()
    // Offset: 0x110794C
    void Awake();
    // public System.Void OverrideHeadPos(UnityEngine.Vector3 pos)
    // Offset: 0x11079E0
    void OverrideHeadPos(UnityEngine::Vector3 pos);
    // protected System.Void Update()
    // Offset: 0x11079FC
    void Update();
    // public System.Single MoveTowardsHead(System.Single start, System.Single end, UnityEngine.Quaternion noteInverseWorldRotation, System.Single t)
    // Offset: 0x1107BD8
    float MoveTowardsHead(float start, float end, UnityEngine::Quaternion noteInverseWorldRotation, float t);
    // public System.Single GetZPosOffsetByHeadPosAtTime(System.Single start, System.Single end, System.Single t)
    // Offset: 0x1107D88
    float GetZPosOffsetByHeadPosAtTime(float start, float end, float t);
    // private System.Single GetZPos(System.Single start, System.Single end, System.Single headOffsetZ, System.Single t)
    // Offset: 0x1107CE8
    float GetZPos(float start, float end, float headOffsetZ, float t);
    // public System.Single HeadOffsetZ(UnityEngine.Quaternion noteInverseWorldRotation)
    // Offset: 0x1107C28
    float HeadOffsetZ(UnityEngine::Quaternion noteInverseWorldRotation);
    // public System.Void .ctor()
    // Offset: 0x1107D94
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTransforms* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerTransforms::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTransforms*, creationType>()));
    }
  }; // PlayerTransforms
  #pragma pack(pop)
  static check_size<sizeof(PlayerTransforms), 192 + sizeof(bool)> __GlobalNamespace_PlayerTransformsSizeCheck;
  static_assert(sizeof(PlayerTransforms) == 0xC1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerTransforms*, "", "PlayerTransforms");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headWorldPos
// Il2CppName: get_headWorldPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headWorldPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headWorldPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headWorldRot
// Il2CppName: get_headWorldRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headWorldRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headWorldRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headPseudoLocalPos
// Il2CppName: get_headPseudoLocalPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headPseudoLocalPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headPseudoLocalPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_headPseudoLocalRot
// Il2CppName: get_headPseudoLocalRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_headPseudoLocalRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_headPseudoLocalRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalPos
// Il2CppName: get_leftHandPseudoLocalPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_leftHandPseudoLocalPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalRot
// Il2CppName: get_leftHandPseudoLocalRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_leftHandPseudoLocalRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_leftHandPseudoLocalRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalPos
// Il2CppName: get_rightHandPseudoLocalPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_rightHandPseudoLocalPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalRot
// Il2CppName: get_rightHandPseudoLocalRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::get_rightHandPseudoLocalRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "get_rightHandPseudoLocalRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::OverrideHeadPos
// Il2CppName: OverrideHeadPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerTransforms::*)(UnityEngine::Vector3)>(&GlobalNamespace::PlayerTransforms::OverrideHeadPos)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "OverrideHeadPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerTransforms::*)()>(&GlobalNamespace::PlayerTransforms::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::MoveTowardsHead
// Il2CppName: MoveTowardsHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(float, float, UnityEngine::Quaternion, float)>(&GlobalNamespace::PlayerTransforms::MoveTowardsHead)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteInverseWorldRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "MoveTowardsHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, noteInverseWorldRotation, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::GetZPosOffsetByHeadPosAtTime
// Il2CppName: GetZPosOffsetByHeadPosAtTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(float, float, float)>(&GlobalNamespace::PlayerTransforms::GetZPosOffsetByHeadPosAtTime)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "GetZPosOffsetByHeadPosAtTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::GetZPos
// Il2CppName: GetZPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(float, float, float, float)>(&GlobalNamespace::PlayerTransforms::GetZPos)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headOffsetZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "GetZPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, headOffsetZ, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::HeadOffsetZ
// Il2CppName: HeadOffsetZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerTransforms::*)(UnityEngine::Quaternion)>(&GlobalNamespace::PlayerTransforms::HeadOffsetZ)> {
  static const MethodInfo* get() {
    static auto* noteInverseWorldRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerTransforms*), "HeadOffsetZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteInverseWorldRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerTransforms::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
