// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger
#include "RootMotion/FinalIK/InteractionTrigger.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.CharacterPosition
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionTrigger::CharacterPosition : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xEA4568
    // public System.Boolean use
    // Size: 0x1
    // Offset: 0x10
    bool use;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: use and: offset
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0xEA45A0
    // public UnityEngine.Vector2 offset
    // Size: 0x8
    // Offset: 0x14
    UnityEngine::Vector2 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [TooltipAttribute] Offset: 0xEA45D8
    // [RangeAttribute] Offset: 0xEA45D8
    // public System.Single angleOffset
    // Size: 0x4
    // Offset: 0x1C
    float angleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEA4634
    // [RangeAttribute] Offset: 0xEA4634
    // public System.Single maxAngle
    // Size: 0x4
    // Offset: 0x20
    float maxAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEA468C
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x24
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEA46C4
    // public System.Boolean orbit
    // Size: 0x1
    // Offset: 0x28
    bool orbit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xEA46FC
    // public System.Boolean fixYAxis
    // Size: 0x1
    // Offset: 0x29
    bool fixYAxis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CharacterPosition
    CharacterPosition(bool use_ = {}, UnityEngine::Vector2 offset_ = {}, float angleOffset_ = {}, float maxAngle_ = {}, float radius_ = {}, bool orbit_ = {}, bool fixYAxis_ = {}) noexcept : use{use_}, offset{offset_}, angleOffset{angleOffset_}, maxAngle{maxAngle_}, radius{radius_}, orbit{orbit_}, fixYAxis{fixYAxis_} {}
    // Get instance field: public System.Boolean use
    bool _get_use();
    // Set instance field: public System.Boolean use
    void _set_use(bool value);
    // Get instance field: public UnityEngine.Vector2 offset
    UnityEngine::Vector2 _get_offset();
    // Set instance field: public UnityEngine.Vector2 offset
    void _set_offset(UnityEngine::Vector2 value);
    // Get instance field: public System.Single angleOffset
    float _get_angleOffset();
    // Set instance field: public System.Single angleOffset
    void _set_angleOffset(float value);
    // Get instance field: public System.Single maxAngle
    float _get_maxAngle();
    // Set instance field: public System.Single maxAngle
    void _set_maxAngle(float value);
    // Get instance field: public System.Single radius
    float _get_radius();
    // Set instance field: public System.Single radius
    void _set_radius(float value);
    // Get instance field: public System.Boolean orbit
    bool _get_orbit();
    // Set instance field: public System.Boolean orbit
    void _set_orbit(bool value);
    // Get instance field: public System.Boolean fixYAxis
    bool _get_fixYAxis();
    // Set instance field: public System.Boolean fixYAxis
    void _set_fixYAxis(bool value);
    // public UnityEngine.Vector3 get_offset3D()
    // Offset: 0x172BB08
    UnityEngine::Vector3 get_offset3D();
    // public UnityEngine.Vector3 get_direction3D()
    // Offset: 0x172BB44
    UnityEngine::Vector3 get_direction3D();
    // public System.Boolean IsInRange(UnityEngine.Transform character, UnityEngine.Transform trigger, out System.Single error)
    // Offset: 0x172BC3C
    bool IsInRange(UnityEngine::Transform* character, UnityEngine::Transform* trigger, ByRef<float> error);
    // public System.Void .ctor()
    // Offset: 0x172C2B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTrigger::CharacterPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionTrigger::CharacterPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTrigger::CharacterPosition*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.CharacterPosition
  #pragma pack(pop)
  static check_size<sizeof(InteractionTrigger::CharacterPosition), 41 + sizeof(bool)> __RootMotion_FinalIK_InteractionTrigger_CharacterPositionSizeCheck;
  static_assert(sizeof(InteractionTrigger::CharacterPosition) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger::CharacterPosition*, "RootMotion.FinalIK", "InteractionTrigger/CharacterPosition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::CharacterPosition::get_offset3D
// Il2CppName: get_offset3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::InteractionTrigger::CharacterPosition::*)()>(&RootMotion::FinalIK::InteractionTrigger::CharacterPosition::get_offset3D)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger::CharacterPosition*), "get_offset3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::CharacterPosition::get_direction3D
// Il2CppName: get_direction3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::InteractionTrigger::CharacterPosition::*)()>(&RootMotion::FinalIK::InteractionTrigger::CharacterPosition::get_direction3D)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger::CharacterPosition*), "get_direction3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::CharacterPosition::IsInRange
// Il2CppName: IsInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionTrigger::CharacterPosition::*)(UnityEngine::Transform*, UnityEngine::Transform*, ByRef<float>)>(&RootMotion::FinalIK::InteractionTrigger::CharacterPosition::IsInRange)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger::CharacterPosition*), "IsInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character, trigger, error});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::CharacterPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
