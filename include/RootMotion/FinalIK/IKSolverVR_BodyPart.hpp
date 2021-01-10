// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/BodyPart
  // [] Offset: FFFFFFFF
  class IKSolverVR::BodyPart : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB932C
    // private System.Single <sqrMag>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float sqrMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDB933C
    // private System.Single <mag>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float mag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HideInInspector] Offset: 0xDB934C
    // public RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*) == 0x8);
    // protected System.Boolean initiated
    // Size: 0x1
    // Offset: 0x20
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: rootPosition
    char __padding3[0x3] = {};
    // protected UnityEngine.Vector3 rootPosition
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 rootPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected UnityEngine.Quaternion rootRotation
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Quaternion rootRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // protected System.Int32 index
    // Size: 0x4
    // Offset: 0x40
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 LOD
    // Size: 0x4
    // Offset: 0x44
    int LOD;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BodyPart
    BodyPart(float sqrMag_ = {}, float mag_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones_ = {}, bool initiated_ = {}, UnityEngine::Vector3 rootPosition_ = {}, UnityEngine::Quaternion rootRotation_ = {}, int index_ = {}, int LOD_ = {}) noexcept : sqrMag{sqrMag_}, mag{mag_}, bones{bones_}, initiated{initiated_}, rootPosition{rootPosition_}, rootRotation{rootRotation_}, index{index_}, LOD{LOD_} {}
    // protected System.Void OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void OnRead(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void PreSolve()
    // Offset: 0xFFFFFFFF
    void PreSolve();
    // public System.Void Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    // Offset: 0xFFFFFFFF
    void Write(::Array<UnityEngine::Vector3>*& solvedPositions, ::Array<UnityEngine::Quaternion>*& solvedRotations);
    // public System.Void ApplyOffsets()
    // Offset: 0xFFFFFFFF
    void ApplyOffsets();
    // public System.Void ResetOffsets()
    // Offset: 0xFFFFFFFF
    void ResetOffsets();
    // public System.Single get_sqrMag()
    // Offset: 0x17DC404
    float get_sqrMag();
    // private System.Void set_sqrMag(System.Single value)
    // Offset: 0x17DC40C
    void set_sqrMag(float value);
    // public System.Single get_mag()
    // Offset: 0x17DC414
    float get_mag();
    // private System.Void set_mag(System.Single value)
    // Offset: 0x17DC41C
    void set_mag(float value);
    // public System.Void SetLOD(System.Int32 LOD)
    // Offset: 0x17DC424
    void SetLOD(int LOD);
    // public System.Void Read(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0x17DC42C
    void Read(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void MovePosition(UnityEngine.Vector3 position)
    // Offset: 0x17DC7E8
    void MovePosition(UnityEngine::Vector3 position);
    // public System.Void MoveRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x17DC954
    void MoveRotation(UnityEngine::Quaternion rotation);
    // public System.Void Translate(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x17DCBE4
    void Translate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void TranslateRoot(UnityEngine.Vector3 newRootPos, UnityEngine.Quaternion newRootRot)
    // Offset: 0x17DCC38
    void TranslateRoot(UnityEngine::Vector3 newRootPos, UnityEngine::Quaternion newRootRot);
    // public System.Void RotateTo(RootMotion.FinalIK.IKSolverVR/VirtualBone bone, UnityEngine.Quaternion rotation, System.Single weight)
    // Offset: 0x17DBCD4
    void RotateTo(RootMotion::FinalIK::IKSolverVR::VirtualBone* bone, UnityEngine::Quaternion rotation, float weight);
    // public System.Void Visualize(UnityEngine.Color color)
    // Offset: 0x17DCE24
    void Visualize(UnityEngine::Color color);
    // public System.Void Visualize()
    // Offset: 0x17DCF68
    void Visualize();
    // protected System.Void .ctor()
    // Offset: 0x17DC360
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::BodyPart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::BodyPart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::BodyPart*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverVR/BodyPart
  static check_size<sizeof(IKSolverVR::BodyPart), 68 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_BodyPartSizeCheck;
  static_assert(sizeof(IKSolverVR::BodyPart) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::BodyPart*, "RootMotion.FinalIK", "IKSolverVR/BodyPart");
#pragma pack(pop)
