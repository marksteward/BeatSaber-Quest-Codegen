// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolver
  class IKSolver : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::IKSolver::Point
    class Point;
    // Nested type: RootMotion::FinalIK::IKSolver::Bone
    class Bone;
    // Nested type: RootMotion::FinalIK::IKSolver::Node
    class Node;
    // Nested type: RootMotion::FinalIK::IKSolver::UpdateDelegate
    class UpdateDelegate;
    // Nested type: RootMotion::FinalIK::IKSolver::IterationDelegate
    class IterationDelegate;
    // [HideInInspector] Offset: 0xD285C4
    // public UnityEngine.Vector3 IKPosition
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 IKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xD285D4
    // [RangeAttribute] Offset: 0xD285D4
    // public System.Single IKPositionWeight
    // Size: 0x4
    // Offset: 0x1C
    float IKPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD28628
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: OnPreInitiate
    char __padding2[0x7] = {};
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreInitiate
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreInitiate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPostInitiate
    // Size: 0x8
    // Offset: 0x30
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostInitiate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreUpdate
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreUpdate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPostUpdate
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostUpdate;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // protected System.Boolean firstInitiation
    // Size: 0x1
    // Offset: 0x48
    bool firstInitiation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstInitiation and: root
    char __padding7[0x7] = {};
    // [HideInInspector] Offset: 0xD28638
    // protected UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: IKSolver
    IKSolver(UnityEngine::Vector3 IKPosition_ = {}, float IKPositionWeight_ = {}, bool initiated_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreInitiate_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostInitiate_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreUpdate_ = {}, RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostUpdate_ = {}, bool firstInitiation_ = {}, UnityEngine::Transform* root_ = {}) noexcept : IKPosition{IKPosition_}, IKPositionWeight{IKPositionWeight_}, initiated{initiated_}, OnPreInitiate{OnPreInitiate_}, OnPostInitiate{OnPostInitiate_}, OnPreUpdate{OnPreUpdate_}, OnPostUpdate{OnPostUpdate_}, firstInitiation{firstInitiation_}, root{root_} {}
    // public System.Boolean IsValid()
    // Offset: 0x1AAB09C
    bool IsValid();
    // public System.Boolean IsValid(ref System.String message)
    // Offset: 0xFFFFFFFF
    bool IsValid(::Il2CppString*& message);
    // public System.Void Initiate(UnityEngine.Transform root)
    // Offset: 0x1AA3AE8
    void Initiate(UnityEngine::Transform* root);
    // public System.Void Update()
    // Offset: 0x1AA3A08
    void Update();
    // public UnityEngine.Vector3 GetIKPosition()
    // Offset: 0x1AAB118
    UnityEngine::Vector3 GetIKPosition();
    // public System.Void SetIKPosition(UnityEngine.Vector3 position)
    // Offset: 0x1AAB124
    void SetIKPosition(UnityEngine::Vector3 position);
    // public System.Single GetIKPositionWeight()
    // Offset: 0x1AAB130
    float GetIKPositionWeight();
    // public System.Void SetIKPositionWeight(System.Single weight)
    // Offset: 0x1AAB138
    void SetIKPositionWeight(float weight);
    // public UnityEngine.Transform GetRoot()
    // Offset: 0x1AAB1BC
    UnityEngine::Transform* GetRoot();
    // public System.Boolean get_initiated()
    // Offset: 0x1AAB1C4
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1AAB1CC
    void set_initiated(bool value);
    // public RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0xFFFFFFFF
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0xFFFFFFFF
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public System.Void FixTransforms()
    // Offset: 0xFFFFFFFF
    void FixTransforms();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0xFFFFFFFF
    void StoreDefaultLocalState();
    // protected System.Void OnInitiate()
    // Offset: 0xFFFFFFFF
    void OnInitiate();
    // protected System.Void OnUpdate()
    // Offset: 0xFFFFFFFF
    void OnUpdate();
    // protected System.Void LogWarning(System.String message)
    // Offset: 0x1AAB1D8
    void LogWarning(::Il2CppString* message);
    // static public UnityEngine.Transform ContainsDuplicateBone(RootMotion.FinalIK.IKSolver/Bone[] bones)
    // Offset: 0x1AAB1F0
    static UnityEngine::Transform* ContainsDuplicateBone(::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones);
    // static public System.Boolean HierarchyIsValid(RootMotion.FinalIK.IKSolver/Bone[] bones)
    // Offset: 0x1AAB32C
    static bool HierarchyIsValid(::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones);
    // static protected System.Single PreSolveBones(ref RootMotion.FinalIK.IKSolver/Bone[] bones)
    // Offset: 0x1AAB3D8
    static float PreSolveBones(::Array<RootMotion::FinalIK::IKSolver::Bone*>*& bones);
    // protected System.Void .ctor()
    // Offset: 0x1AAB75C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolver
  #pragma pack(pop)
  static check_size<sizeof(IKSolver), 80 + sizeof(UnityEngine::Transform*)> __RootMotion_FinalIK_IKSolverSizeCheck;
  static_assert(sizeof(IKSolver) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver*, "RootMotion.FinalIK", "IKSolver");
