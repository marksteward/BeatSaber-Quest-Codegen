// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKConstraintBend
  class IKConstraintBend;
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.FBIKChain
  class FBIKChain : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::FBIKChain::ChildConstraint
    class ChildConstraint;
    // Nested type: RootMotion::FinalIK::FBIKChain::Smoothing
    struct Smoothing;
    // Autogenerated type: RootMotion.FinalIK.FBIKChain/Smoothing
    struct Smoothing : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Smoothing
      constexpr Smoothing(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.FBIKChain/Smoothing None
      static constexpr const int None = 0;
      // Get static field: static public RootMotion.FinalIK.FBIKChain/Smoothing None
      static RootMotion::FinalIK::FBIKChain::Smoothing _get_None();
      // Set static field: static public RootMotion.FinalIK.FBIKChain/Smoothing None
      static void _set_None(RootMotion::FinalIK::FBIKChain::Smoothing value);
      // static field const value: static public RootMotion.FinalIK.FBIKChain/Smoothing Exponential
      static constexpr const int Exponential = 1;
      // Get static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Exponential
      static RootMotion::FinalIK::FBIKChain::Smoothing _get_Exponential();
      // Set static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Exponential
      static void _set_Exponential(RootMotion::FinalIK::FBIKChain::Smoothing value);
      // static field const value: static public RootMotion.FinalIK.FBIKChain/Smoothing Cubic
      static constexpr const int Cubic = 2;
      // Get static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Cubic
      static RootMotion::FinalIK::FBIKChain::Smoothing _get_Cubic();
      // Set static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Cubic
      static void _set_Cubic(RootMotion::FinalIK::FBIKChain::Smoothing value);
    }; // RootMotion.FinalIK.FBIKChain/Smoothing
    // public System.Single pin
    // Offset: 0x10
    float pin;
    // public System.Single pull
    // Offset: 0x14
    float pull;
    // public System.Single push
    // Offset: 0x18
    float push;
    // public System.Single pushParent
    // Offset: 0x1C
    float pushParent;
    // public System.Single reach
    // Offset: 0x20
    float reach;
    // public RootMotion.FinalIK.FBIKChain/Smoothing reachSmoothing
    // Offset: 0x24
    RootMotion::FinalIK::FBIKChain::Smoothing reachSmoothing;
    // public RootMotion.FinalIK.FBIKChain/Smoothing pushSmoothing
    // Offset: 0x28
    RootMotion::FinalIK::FBIKChain::Smoothing pushSmoothing;
    // public RootMotion.FinalIK.IKSolver/Node[] nodes
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::IKSolver::Node*>* nodes;
    // public System.Int32[] children
    // Offset: 0x38
    ::Array<int>* children;
    // public RootMotion.FinalIK.FBIKChain/ChildConstraint[] childConstraints
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::FBIKChain::ChildConstraint*>* childConstraints;
    // public RootMotion.FinalIK.IKConstraintBend bendConstraint
    // Offset: 0x48
    RootMotion::FinalIK::IKConstraintBend* bendConstraint;
    // private System.Single rootLength
    // Offset: 0x50
    float rootLength;
    // private System.Boolean initiated
    // Offset: 0x54
    bool initiated;
    // private System.Single length
    // Offset: 0x58
    float length;
    // private System.Single distance
    // Offset: 0x5C
    float distance;
    // private RootMotion.FinalIK.IKSolver/Point p
    // Offset: 0x60
    RootMotion::FinalIK::IKSolver::Point* p;
    // private System.Single reachForce
    // Offset: 0x68
    float reachForce;
    // private System.Single pullParentSum
    // Offset: 0x6C
    float pullParentSum;
    // private System.Single[] crossFades
    // Offset: 0x70
    ::Array<float>* crossFades;
    // private System.Single sqrMag1
    // Offset: 0x78
    float sqrMag1;
    // private System.Single sqrMag2
    // Offset: 0x7C
    float sqrMag2;
    // private System.Single sqrMagDif
    // Offset: 0x80
    float sqrMagDif;
    // static field const value: static private System.Single maxLimbLength
    static constexpr const float maxLimbLength = 0.99999;
    // Get static field: static private System.Single maxLimbLength
    static float _get_maxLimbLength();
    // Set static field: static private System.Single maxLimbLength
    static void _set_maxLimbLength(float value);
    // public System.Void .ctor(System.Single pin, System.Single pull, UnityEngine.Transform[] nodeTransforms)
    // Offset: 0x13B3BDC
    static FBIKChain* New_ctor(float pin, float pull, ::Array<UnityEngine::Transform*>* nodeTransforms);
    // public System.Void SetNodes(UnityEngine.Transform[] boneTransforms)
    // Offset: 0x13B3D2C
    void SetNodes(::Array<UnityEngine::Transform*>* boneTransforms);
    // public System.Int32 GetNodeIndex(UnityEngine.Transform boneTransform)
    // Offset: 0x13B3E60
    int GetNodeIndex(UnityEngine::Transform* boneTransform);
    // public System.Boolean IsValid(System.String message)
    // Offset: 0x13B3F3C
    bool IsValid(::Il2CppString*& message);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x13B404C
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void ReadPose(RootMotion.FinalIK.IKSolverFullBody solver, System.Boolean fullBody)
    // Offset: 0x13B47C0
    void ReadPose(RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody);
    // private System.Void CalculateBoneLengths(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x13B41E8
    void CalculateBoneLengths(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Reach(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x13B4EAC
    void Reach(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public UnityEngine.Vector3 Push(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x13B5250
    UnityEngine::Vector3 Push(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void SolveTrigonometric(RootMotion.FinalIK.IKSolverFullBody solver, System.Boolean calculateBendDirection)
    // Offset: 0x13B5634
    void SolveTrigonometric(RootMotion::FinalIK::IKSolverFullBody* solver, bool calculateBendDirection);
    // public System.Void Stage1(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x13B5BB8
    void Stage1(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Stage2(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Vector3 position)
    // Offset: 0x13B6188
    void Stage2(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Vector3 position);
    // public System.Void SolveConstraintSystems(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x13B6420
    void SolveConstraintSystems(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Vector3 SolveFABRIKJoint(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single length)
    // Offset: 0x13B6080
    UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float length);
    // protected UnityEngine.Vector3 GetDirToBendPoint(UnityEngine.Vector3 direction, UnityEngine.Vector3 bendDirection, System.Single directionMagnitude)
    // Offset: 0x13B59A0
    UnityEngine::Vector3 GetDirToBendPoint(UnityEngine::Vector3 direction, UnityEngine::Vector3 bendDirection, float directionMagnitude);
    // private System.Void SolveChildConstraints(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x13B6008
    void SolveChildConstraints(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private System.Void SolveLinearConstraint(RootMotion.FinalIK.IKSolver/Node node1, RootMotion.FinalIK.IKSolver/Node node2, System.Single crossFade, System.Single distance)
    // Offset: 0x13B6508
    void SolveLinearConstraint(RootMotion::FinalIK::IKSolver::Node* node1, RootMotion::FinalIK::IKSolver::Node* node2, float crossFade, float distance);
    // public System.Void ForwardReach(UnityEngine.Vector3 position)
    // Offset: 0x13B5F28
    void ForwardReach(UnityEngine::Vector3 position);
    // private System.Void BackwardReach(UnityEngine.Vector3 position)
    // Offset: 0x13B6308
    void BackwardReach(UnityEngine::Vector3 position);
    // public System.Void .ctor()
    // Offset: 0x13B3AE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FBIKChain* New_ctor();
  }; // RootMotion.FinalIK.FBIKChain
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBIKChain*, "RootMotion.FinalIK", "FBIKChain");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBIKChain::Smoothing, "RootMotion.FinalIK", "FBIKChain/Smoothing");
#pragma pack(pop)
