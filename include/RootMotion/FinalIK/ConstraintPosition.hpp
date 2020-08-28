// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.ConstraintPosition
  class ConstraintPosition : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Vector3 position
    // Offset: 0x1C
    UnityEngine::Vector3 position;
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const {
      return position;
    }
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x13AED78
    static ConstraintPosition* New_ctor(UnityEngine::Transform* transform);
    // public override System.Void UpdateConstraint()
    // Offset: 0x13AEC64
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
    // public System.Void .ctor()
    // Offset: 0x13AED70
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConstraintPosition* New_ctor();
  }; // RootMotion.FinalIK.ConstraintPosition
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintPosition*, "RootMotion.FinalIK", "ConstraintPosition");
#pragma pack(pop)
