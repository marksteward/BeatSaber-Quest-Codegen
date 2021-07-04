// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.BipedNaming
#include "RootMotion/BipedNaming.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BipedReferences
  class BipedReferences : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::BipedReferences::AutoDetectParams
    struct AutoDetectParams;
    // public UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform pelvis
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* pelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftThigh
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* leftThigh;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftCalf
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* leftCalf;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftFoot
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* leftFoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightThigh
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* rightThigh;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightCalf
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* rightCalf;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightFoot
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* rightFoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftUpperArm
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* leftUpperArm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftForearm
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* leftForearm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftHand
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* leftHand;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightUpperArm
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* rightUpperArm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightForearm
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* rightForearm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightHand
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* rightHand;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform head
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform[] spine
    // Size: 0x8
    // Offset: 0x88
    ::Array<UnityEngine::Transform*>* spine;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // public UnityEngine.Transform[] eyes
    // Size: 0x8
    // Offset: 0x90
    ::Array<UnityEngine::Transform*>* eyes;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // Creating value type constructor for type: BipedReferences
    BipedReferences(UnityEngine::Transform* root_ = {}, UnityEngine::Transform* pelvis_ = {}, UnityEngine::Transform* leftThigh_ = {}, UnityEngine::Transform* leftCalf_ = {}, UnityEngine::Transform* leftFoot_ = {}, UnityEngine::Transform* rightThigh_ = {}, UnityEngine::Transform* rightCalf_ = {}, UnityEngine::Transform* rightFoot_ = {}, UnityEngine::Transform* leftUpperArm_ = {}, UnityEngine::Transform* leftForearm_ = {}, UnityEngine::Transform* leftHand_ = {}, UnityEngine::Transform* rightUpperArm_ = {}, UnityEngine::Transform* rightForearm_ = {}, UnityEngine::Transform* rightHand_ = {}, UnityEngine::Transform* head_ = {}, ::Array<UnityEngine::Transform*>* spine_ = {}, ::Array<UnityEngine::Transform*>* eyes_ = {}) noexcept : root{root_}, pelvis{pelvis_}, leftThigh{leftThigh_}, leftCalf{leftCalf_}, leftFoot{leftFoot_}, rightThigh{rightThigh_}, rightCalf{rightCalf_}, rightFoot{rightFoot_}, leftUpperArm{leftUpperArm_}, leftForearm{leftForearm_}, leftHand{leftHand_}, rightUpperArm{rightUpperArm_}, rightForearm{rightForearm_}, rightHand{rightHand_}, head{head_}, spine{spine_}, eyes{eyes_} {}
    // public System.Boolean get_isFilled()
    // Offset: 0x1CA91BC
    bool get_isFilled();
    // public System.Boolean get_isEmpty()
    // Offset: 0x1CA95A8
    bool get_isEmpty();
    // public System.Boolean IsEmpty(System.Boolean includeRoot)
    // Offset: 0x1CA95B8
    bool IsEmpty(bool includeRoot);
    // public System.Boolean Contains(UnityEngine.Transform t, System.Boolean ignoreRoot)
    // Offset: 0x1CA99E4
    bool Contains(UnityEngine::Transform* t, bool ignoreRoot);
    // static public System.Boolean AutoDetectReferences(ref RootMotion.BipedReferences references, UnityEngine.Transform root, RootMotion.BipedReferences/AutoDetectParams autoDetectParams)
    // Offset: 0x1CA9E1C
    static bool AutoDetectReferences(RootMotion::BipedReferences*& references, UnityEngine::Transform* root, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static public System.Void DetectReferencesByNaming(ref RootMotion.BipedReferences references, UnityEngine.Transform root, RootMotion.BipedReferences/AutoDetectParams autoDetectParams)
    // Offset: 0x1CAA42C
    static void DetectReferencesByNaming(RootMotion::BipedReferences*& references, UnityEngine::Transform* root, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static public System.Void AssignHumanoidReferences(ref RootMotion.BipedReferences references, UnityEngine.Animator animator, RootMotion.BipedReferences/AutoDetectParams autoDetectParams)
    // Offset: 0x1CAA068
    static void AssignHumanoidReferences(RootMotion::BipedReferences*& references, UnityEngine::Animator* animator, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static public System.Boolean SetupError(RootMotion.BipedReferences references, ref System.String errorMessage)
    // Offset: 0x1CAABDC
    static bool SetupError(RootMotion::BipedReferences* references, ::Il2CppString*& errorMessage);
    // static public System.Boolean SetupWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1CAACD0
    static bool SetupWarning(RootMotion::BipedReferences* references, ::Il2CppString*& warningMessage);
    // static private System.Boolean IsNeckBone(UnityEngine.Transform bone, UnityEngine.Transform leftUpperArm)
    // Offset: 0x1CAB228
    static bool IsNeckBone(UnityEngine::Transform* bone, UnityEngine::Transform* leftUpperArm);
    // static private System.Boolean AddBoneToEyes(UnityEngine.Transform bone, ref RootMotion.BipedReferences references, RootMotion.BipedReferences/AutoDetectParams autoDetectParams)
    // Offset: 0x1CAB02C
    static bool AddBoneToEyes(UnityEngine::Transform* bone, RootMotion::BipedReferences*& references, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static private System.Boolean AddBoneToSpine(UnityEngine.Transform bone, ref RootMotion.BipedReferences references, RootMotion.BipedReferences/AutoDetectParams autoDetectParams)
    // Offset: 0x1CAAEA4
    static bool AddBoneToSpine(UnityEngine::Transform* bone, RootMotion::BipedReferences*& references, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static private System.Void DetectLimb(RootMotion.BipedNaming/BoneType boneType, RootMotion.BipedNaming/BoneSide boneSide, ref UnityEngine.Transform firstBone, ref UnityEngine.Transform secondBone, ref UnityEngine.Transform lastBone, UnityEngine.Transform[] transforms)
    // Offset: 0x1CAAD70
    static void DetectLimb(RootMotion::BipedNaming::BoneType boneType, RootMotion::BipedNaming::BoneSide boneSide, UnityEngine::Transform*& firstBone, UnityEngine::Transform*& secondBone, UnityEngine::Transform*& lastBone, ::Array<UnityEngine::Transform*>* transforms);
    // static private System.Void AddBoneToHierarchy(ref UnityEngine.Transform[] bones, UnityEngine.Transform transform)
    // Offset: 0x1CAB130
    static void AddBoneToHierarchy(::Array<UnityEngine::Transform*>*& bones, UnityEngine::Transform* transform);
    // static private System.Boolean LimbError(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, ref System.String errorMessage)
    // Offset: 0x1CAB324
    static bool LimbError(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, ::Il2CppString*& errorMessage);
    // static private System.Boolean LimbWarning(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, ref System.String warningMessage)
    // Offset: 0x1CABDC4
    static bool LimbWarning(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, ::Il2CppString*& warningMessage);
    // static private System.Boolean SpineError(RootMotion.BipedReferences references, ref System.String errorMessage)
    // Offset: 0x1CAB8A8
    static bool SpineError(RootMotion::BipedReferences* references, ::Il2CppString*& errorMessage);
    // static private System.Boolean SpineWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1CAC0B8
    static bool SpineWarning(RootMotion::BipedReferences* references, ::Il2CppString*& warningMessage);
    // static private System.Boolean EyesError(RootMotion.BipedReferences references, ref System.String errorMessage)
    // Offset: 0x1CABBE8
    static bool EyesError(RootMotion::BipedReferences* references, ::Il2CppString*& errorMessage);
    // static private System.Boolean EyesWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1CAC0C0
    static bool EyesWarning(RootMotion::BipedReferences* references, ::Il2CppString*& warningMessage);
    // static private System.Boolean RootHeightWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1CAC0C8
    static bool RootHeightWarning(RootMotion::BipedReferences* references, ::Il2CppString*& warningMessage);
    // static private System.Boolean FacingAxisWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1CAC288
    static bool FacingAxisWarning(RootMotion::BipedReferences* references, ::Il2CppString*& warningMessage);
    // static private System.Single GetVerticalOffset(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, UnityEngine.Quaternion rotation)
    // Offset: 0x1CAC4A0
    static float GetVerticalOffset(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1CA9FF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedReferences* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BipedReferences::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedReferences*, creationType>()));
    }
  }; // RootMotion.BipedReferences
  #pragma pack(pop)
  static check_size<sizeof(BipedReferences), 144 + sizeof(::Array<UnityEngine::Transform*>*)> __RootMotion_BipedReferencesSizeCheck;
  static_assert(sizeof(BipedReferences) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedReferences*, "RootMotion", "BipedReferences");
// Writing MetadataGetter for method: RootMotion::BipedReferences::get_isFilled
// Il2CppName: get_isFilled
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::get_isEmpty
// Il2CppName: get_isEmpty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::IsEmpty
// Il2CppName: IsEmpty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::Contains
// Il2CppName: Contains
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::AutoDetectReferences
// Il2CppName: AutoDetectReferences
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::DetectReferencesByNaming
// Il2CppName: DetectReferencesByNaming
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::AssignHumanoidReferences
// Il2CppName: AssignHumanoidReferences
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::SetupError
// Il2CppName: SetupError
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::SetupWarning
// Il2CppName: SetupWarning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::IsNeckBone
// Il2CppName: IsNeckBone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::AddBoneToEyes
// Il2CppName: AddBoneToEyes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::AddBoneToSpine
// Il2CppName: AddBoneToSpine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::DetectLimb
// Il2CppName: DetectLimb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::AddBoneToHierarchy
// Il2CppName: AddBoneToHierarchy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::LimbError
// Il2CppName: LimbError
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::LimbWarning
// Il2CppName: LimbWarning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::SpineError
// Il2CppName: SpineError
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::SpineWarning
// Il2CppName: SpineWarning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::EyesError
// Il2CppName: EyesError
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::EyesWarning
// Il2CppName: EyesWarning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::RootHeightWarning
// Il2CppName: RootHeightWarning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::FacingAxisWarning
// Il2CppName: FacingAxisWarning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::GetVerticalOffset
// Il2CppName: GetVerticalOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::BipedReferences::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
