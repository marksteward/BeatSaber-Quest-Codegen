// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Amplifier
#include "RootMotion/FinalIK/Amplifier.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body
  // [TokenAttribute] Offset: FFFFFFFF
  class Amplifier::Body : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Amplifier::Body::EffectorLink
    class EffectorLink;
    // [TooltipAttribute] Offset: 0xEA4984
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xEA49BC
    // public UnityEngine.Transform relativeTo
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* relativeTo;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xEA49F4
    // public RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x20
    ::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>* effectorLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xEA4A2C
    // public System.Single verticalWeight
    // Size: 0x4
    // Offset: 0x28
    float verticalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEA4A64
    // public System.Single horizontalWeight
    // Size: 0x4
    // Offset: 0x2C
    float horizontalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEA4A9C
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x30
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastRelativePos
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 lastRelativePos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 smoothDelta
    // Size: 0xC
    // Offset: 0x40
    UnityEngine::Vector3 smoothDelta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0x4C
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Body
    Body(UnityEngine::Transform* transform_ = {}, UnityEngine::Transform* relativeTo_ = {}, ::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>* effectorLinks_ = {}, float verticalWeight_ = {}, float horizontalWeight_ = {}, float speed_ = {}, UnityEngine::Vector3 lastRelativePos_ = {}, UnityEngine::Vector3 smoothDelta_ = {}, bool firstUpdate_ = {}) noexcept : transform{transform_}, relativeTo{relativeTo_}, effectorLinks{effectorLinks_}, verticalWeight{verticalWeight_}, horizontalWeight{horizontalWeight_}, speed{speed_}, lastRelativePos{lastRelativePos_}, smoothDelta{smoothDelta_}, firstUpdate{firstUpdate_} {}
    // Get instance field: public UnityEngine.Transform transform
    UnityEngine::Transform* _get_transform();
    // Set instance field: public UnityEngine.Transform transform
    void _set_transform(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform relativeTo
    UnityEngine::Transform* _get_relativeTo();
    // Set instance field: public UnityEngine.Transform relativeTo
    void _set_relativeTo(UnityEngine::Transform* value);
    // Get instance field: public RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    ::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>* _get_effectorLinks();
    // Set instance field: public RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    void _set_effectorLinks(::Array<RootMotion::FinalIK::Amplifier::Body::EffectorLink*>* value);
    // Get instance field: public System.Single verticalWeight
    float _get_verticalWeight();
    // Set instance field: public System.Single verticalWeight
    void _set_verticalWeight(float value);
    // Get instance field: public System.Single horizontalWeight
    float _get_horizontalWeight();
    // Set instance field: public System.Single horizontalWeight
    void _set_horizontalWeight(float value);
    // Get instance field: public System.Single speed
    float _get_speed();
    // Set instance field: public System.Single speed
    void _set_speed(float value);
    // Get instance field: private UnityEngine.Vector3 lastRelativePos
    UnityEngine::Vector3 _get_lastRelativePos();
    // Set instance field: private UnityEngine.Vector3 lastRelativePos
    void _set_lastRelativePos(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 smoothDelta
    UnityEngine::Vector3 _get_smoothDelta();
    // Set instance field: private UnityEngine.Vector3 smoothDelta
    void _set_smoothDelta(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean firstUpdate
    bool _get_firstUpdate();
    // Set instance field: private System.Boolean firstUpdate
    void _set_firstUpdate(bool value);
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single w, System.Single deltaTime)
    // Offset: 0x187B8C4
    void Update(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float w, float deltaTime);
    // static private UnityEngine.Vector3 Multiply(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2)
    // Offset: 0x187BD30
    static UnityEngine::Vector3 Multiply(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2);
    // public System.Void .ctor()
    // Offset: 0x187BD40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Amplifier::Body* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Amplifier::Body::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Amplifier::Body*, creationType>()));
    }
  }; // RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body
  #pragma pack(pop)
  static check_size<sizeof(Amplifier::Body), 76 + sizeof(bool)> __RootMotion_FinalIK_Amplifier_BodySizeCheck;
  static_assert(sizeof(Amplifier::Body) == 0x4D);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier::Body*, "RootMotion.FinalIK", "Amplifier/Body");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::Body::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Amplifier::Body::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float, float)>(&RootMotion::FinalIK::Amplifier::Body::Update)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Amplifier::Body*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, w, deltaTime});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::Body::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::Amplifier::Body::Multiply)> {
  static const MethodInfo* get() {
    static auto* v1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Amplifier::Body*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v1, v2});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::Body::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
