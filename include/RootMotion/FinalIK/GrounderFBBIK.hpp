// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
  // Forward declaring type: IKEffector
  class IKEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderFBBIK
  // [HelpURLAttribute] Offset: D25F30
  // [AddComponentMenu] Offset: D25F30
  class GrounderFBBIK : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // Nested type: RootMotion::FinalIK::GrounderFBBIK::SpineEffector
    class SpineEffector;
    // [TooltipAttribute] Offset: 0xD272D8
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::FullBodyBipedIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xD27310
    // public System.Single spineBend
    // Size: 0x4
    // Offset: 0x48
    float spineBend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD27348
    // public System.Single spineSpeed
    // Size: 0x4
    // Offset: 0x4C
    float spineSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.GrounderFBBIK/SpineEffector[] spine
    // Size: 0x8
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::GrounderFBBIK::SpineEffector*>* spine;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::GrounderFBBIK::SpineEffector*>*) == 0x8);
    // private UnityEngine.Transform[] feet
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Transform*>* feet;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private UnityEngine.Vector3 spineOffset
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 spineOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstSolve
    // Size: 0x1
    // Offset: 0x6C
    bool firstSolve;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GrounderFBBIK
    GrounderFBBIK(RootMotion::FinalIK::FullBodyBipedIK* ik_ = {}, float spineBend_ = {}, float spineSpeed_ = {}, ::Array<RootMotion::FinalIK::GrounderFBBIK::SpineEffector*>* spine_ = {}, ::Array<UnityEngine::Transform*>* feet_ = {}, UnityEngine::Vector3 spineOffset_ = {}, bool firstSolve_ = {}) noexcept : ik{ik_}, spineBend{spineBend_}, spineSpeed{spineSpeed_}, spine{spine_}, feet{feet_}, spineOffset{spineOffset_}, firstSolve{firstSolve_} {}
    // private System.Void OpenTutorial()
    // Offset: 0x1A98C38
    void OpenTutorial();
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x1A98D9C
    bool IsReadyToInitiate();
    // private System.Void Update()
    // Offset: 0x1A98E34
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1A990F0
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1A990FC
    void LateUpdate();
    // private System.Void Initiate()
    // Offset: 0x1A98EF0
    void Initiate();
    // private System.Void OnSolverUpdate()
    // Offset: 0x1A99108
    void OnSolverUpdate();
    // private System.Void SetLegIK(RootMotion.FinalIK.IKEffector effector, RootMotion.FinalIK.Grounding/Leg leg)
    // Offset: 0x1A995A8
    void SetLegIK(RootMotion::FinalIK::IKEffector* effector, RootMotion::FinalIK::Grounding::Leg* leg);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x1A99768
    void OnDrawGizmosSelected();
    // private System.Void OnDestroy()
    // Offset: 0x1A998A0
    void OnDestroy();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1A98C84
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1A98CD0
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x1A98D1C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x1A999A0
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderFBBIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderFBBIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderFBBIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.GrounderFBBIK
  #pragma pack(pop)
  static check_size<sizeof(GrounderFBBIK), 108 + sizeof(bool)> __RootMotion_FinalIK_GrounderFBBIKSizeCheck;
  static_assert(sizeof(GrounderFBBIK) == 0x6D);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderFBBIK*, "RootMotion.FinalIK", "GrounderFBBIK");
