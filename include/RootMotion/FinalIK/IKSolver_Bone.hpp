// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimit
  class RotationLimit;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolver::Bone : public RootMotion::FinalIK::IKSolver::Point {
    public:
    // public System.Single length
    // Size: 0x4
    // Offset: 0x54
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sqrMag
    // Size: 0x4
    // Offset: 0x58
    float sqrMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private RootMotion.FinalIK.RotationLimit _rotationLimit
    // Size: 0x8
    // Offset: 0x68
    RootMotion::FinalIK::RotationLimit* rotationLimit;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::RotationLimit*) == 0x8);
    // private System.Boolean isLimited
    // Size: 0x1
    // Offset: 0x70
    bool isLimited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Bone
    Bone(float length_ = {}, float sqrMag_ = {}, UnityEngine::Vector3 axis_ = {}, RootMotion::FinalIK::RotationLimit* rotationLimit_ = {}, bool isLimited_ = {}) noexcept : length{length_}, sqrMag{sqrMag_}, axis{axis_}, rotationLimit{rotationLimit_}, isLimited{isLimited_} {}
    // public RootMotion.FinalIK.RotationLimit get_rotationLimit()
    // Offset: 0x1C9E2F0
    RootMotion::FinalIK::RotationLimit* get_rotationLimit();
    // public System.Void set_rotationLimit(RootMotion.FinalIK.RotationLimit value)
    // Offset: 0x1C9E3E4
    void set_rotationLimit(RootMotion::FinalIK::RotationLimit* value);
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1C9EDA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Bone* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Bone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Bone*, creationType>(transform)));
    }
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1C9EE38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Bone* New_ctor(UnityEngine::Transform* transform, float weight) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Bone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Bone*, creationType>(transform, weight)));
    }
    // public System.Void Swing(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1C9E46C
    void Swing(UnityEngine::Vector3 swingTarget, float weight);
    // static public System.Void SolverSwing(RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone[] bones, System.Int32 index, UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1C9E72C
    static void SolverSwing(::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones, int index, UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void Swing2D(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1C9EA0C
    void Swing2D(UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void SetToSolverPosition()
    // Offset: 0x1C9EC74
    void SetToSolverPosition();
    // public System.Void .ctor()
    // Offset: 0x1C9EC9C
    // Implemented from: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Bone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Bone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Bone*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone
  #pragma pack(pop)
  static check_size<sizeof(IKSolver::Bone), 112 + sizeof(bool)> __RootMotion_FinalIK_IKSolver_BoneSizeCheck;
  static_assert(sizeof(IKSolver::Bone) == 0x71);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::Bone*, "RootMotion.FinalIK", "IKSolver/Bone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::get_rotationLimit
// Il2CppName: get_rotationLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RotationLimit* (RootMotion::FinalIK::IKSolver::Bone::*)()>(&RootMotion::FinalIK::IKSolver::Bone::get_rotationLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Bone*), "get_rotationLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::set_rotationLimit
// Il2CppName: set_rotationLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Bone::*)(RootMotion::FinalIK::RotationLimit*)>(&RootMotion::FinalIK::IKSolver::Bone::set_rotationLimit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "RotationLimit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Bone*), "set_rotationLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::Swing
// Il2CppName: Swing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Bone::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolver::Bone::Swing)> {
  static const MethodInfo* get() {
    static auto* swingTarget = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Bone*), "Swing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingTarget, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::SolverSwing
// Il2CppName: SolverSwing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolver::Bone*>*, int, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolver::Bone::SolverSwing)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver/Bone"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* swingTarget = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Bone*), "SolverSwing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, index, swingTarget, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::Swing2D
// Il2CppName: Swing2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Bone::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolver::Bone::Swing2D)> {
  static const MethodInfo* get() {
    static auto* swingTarget = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Bone*), "Swing2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingTarget, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::SetToSolverPosition
// Il2CppName: SetToSolverPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolver::Bone::*)()>(&RootMotion::FinalIK::IKSolver::Bone::SetToSolverPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolver::Bone*), "SetToSolverPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Bone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
