// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Baker
#include "RootMotion/Baker.hpp"
// Including type: UnityEngine.HumanPose
#include "UnityEngine/HumanPose.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerMuscle
  class BakerMuscle;
  // Forward declaring type: BakerHumanoidQT
  class BakerHumanoidQT;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanPoseHandler
  class HumanPoseHandler;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x118
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.HumanoidBaker
  class HumanoidBaker : public RootMotion::Baker {
    public:
    // [TooltipAttribute] Offset: 0xD26C5C
    // public System.Boolean bakeHandIK
    // Size: 0x1
    // Offset: 0x74
    bool bakeHandIK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bakeHandIK and: IKKeyReductionError
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0xD26C94
    // [RangeAttribute] Offset: 0xD26C94
    // public System.Single IKKeyReductionError
    // Size: 0x4
    // Offset: 0x78
    float IKKeyReductionError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD26CEC
    // [RangeAttribute] Offset: 0xD26CEC
    // public System.Int32 muscleFrameRateDiv
    // Size: 0x4
    // Offset: 0x7C
    int muscleFrameRateDiv;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private RootMotion.BakerMuscle[] bakerMuscles
    // Size: 0x8
    // Offset: 0x80
    ::Array<RootMotion::BakerMuscle*>* bakerMuscles;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::BakerMuscle*>*) == 0x8);
    // private RootMotion.BakerHumanoidQT rootQT
    // Size: 0x8
    // Offset: 0x88
    RootMotion::BakerHumanoidQT* rootQT;
    // Field size check
    static_assert(sizeof(RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT leftFootQT
    // Size: 0x8
    // Offset: 0x90
    RootMotion::BakerHumanoidQT* leftFootQT;
    // Field size check
    static_assert(sizeof(RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT rightFootQT
    // Size: 0x8
    // Offset: 0x98
    RootMotion::BakerHumanoidQT* rightFootQT;
    // Field size check
    static_assert(sizeof(RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT leftHandQT
    // Size: 0x8
    // Offset: 0xA0
    RootMotion::BakerHumanoidQT* leftHandQT;
    // Field size check
    static_assert(sizeof(RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT rightHandQT
    // Size: 0x8
    // Offset: 0xA8
    RootMotion::BakerHumanoidQT* rightHandQT;
    // Field size check
    static_assert(sizeof(RootMotion::BakerHumanoidQT*) == 0x8);
    // private System.Single[] muscles
    // Size: 0x8
    // Offset: 0xB0
    ::Array<float>* muscles;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private UnityEngine.HumanPose pose
    // Size: 0x28
    // Offset: 0xB8
    UnityEngine::HumanPose pose;
    // Field size check
    static_assert(sizeof(UnityEngine::HumanPose) == 0x28);
    // private UnityEngine.HumanPoseHandler handler
    // Size: 0x8
    // Offset: 0xE0
    UnityEngine::HumanPoseHandler* handler;
    // Field size check
    static_assert(sizeof(UnityEngine::HumanPoseHandler*) == 0x8);
    // private UnityEngine.Vector3 bodyPosition
    // Size: 0xC
    // Offset: 0xE8
    UnityEngine::Vector3 bodyPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion bodyRotation
    // Size: 0x10
    // Offset: 0xF4
    UnityEngine::Quaternion bodyRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Int32 mN
    // Size: 0x4
    // Offset: 0x104
    int mN;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Quaternion lastBodyRotation
    // Size: 0x10
    // Offset: 0x108
    UnityEngine::Quaternion lastBodyRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: HumanoidBaker
    HumanoidBaker(bool bakeHandIK_ = {}, float IKKeyReductionError_ = {}, int muscleFrameRateDiv_ = {}, ::Array<RootMotion::BakerMuscle*>* bakerMuscles_ = {}, RootMotion::BakerHumanoidQT* rootQT_ = {}, RootMotion::BakerHumanoidQT* leftFootQT_ = {}, RootMotion::BakerHumanoidQT* rightFootQT_ = {}, RootMotion::BakerHumanoidQT* leftHandQT_ = {}, RootMotion::BakerHumanoidQT* rightHandQT_ = {}, ::Array<float>* muscles_ = {}, UnityEngine::HumanPose pose_ = {}, UnityEngine::HumanPoseHandler* handler_ = {}, UnityEngine::Vector3 bodyPosition_ = {}, UnityEngine::Quaternion bodyRotation_ = {}, int mN_ = {}, UnityEngine::Quaternion lastBodyRotation_ = {}) noexcept : bakeHandIK{bakeHandIK_}, IKKeyReductionError{IKKeyReductionError_}, muscleFrameRateDiv{muscleFrameRateDiv_}, bakerMuscles{bakerMuscles_}, rootQT{rootQT_}, leftFootQT{leftFootQT_}, rightFootQT{rightFootQT_}, leftHandQT{leftHandQT_}, rightHandQT{rightHandQT_}, muscles{muscles_}, pose{pose_}, handler{handler_}, bodyPosition{bodyPosition_}, bodyRotation{bodyRotation_}, mN{mN_}, lastBodyRotation{lastBodyRotation_} {}
    // private System.Void Awake()
    // Offset: 0x1912F28
    void Awake();
    // private System.Void UpdateHumanPose()
    // Offset: 0x1913A64
    void UpdateHumanPose();
    // protected override UnityEngine.Transform GetCharacterRoot()
    // Offset: 0x1913354
    // Implemented from: RootMotion.Baker
    // Base method: UnityEngine.Transform Baker::GetCharacterRoot()
    UnityEngine::Transform* GetCharacterRoot();
    // protected override System.Void OnStartBaking()
    // Offset: 0x1913370
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnStartBaking()
    void OnStartBaking();
    // protected override System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0x1913490
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetLoopFrame(System.Single time)
    void OnSetLoopFrame(float time);
    // protected override System.Void OnSetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x191356C
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetCurves(ref UnityEngine.AnimationClip clip)
    void OnSetCurves(UnityEngine::AnimationClip*& clip);
    // protected override System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0x191373C
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    void OnSetKeyframes(float time, bool lastFrame);
    // public System.Void .ctor()
    // Offset: 0x1913B40
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HumanoidBaker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::HumanoidBaker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HumanoidBaker*, creationType>()));
    }
  }; // RootMotion.HumanoidBaker
  #pragma pack(pop)
  static check_size<sizeof(HumanoidBaker), 264 + sizeof(UnityEngine::Quaternion)> __RootMotion_HumanoidBakerSizeCheck;
  static_assert(sizeof(HumanoidBaker) == 0x118);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::HumanoidBaker*, "RootMotion", "HumanoidBaker");
