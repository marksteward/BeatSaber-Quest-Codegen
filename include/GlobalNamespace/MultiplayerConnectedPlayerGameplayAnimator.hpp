// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerGameplayAnimator
#include "GlobalNamespace/MultiplayerGameplayAnimator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBigAvatarAnimator
  class MultiplayerBigAvatarAnimator;
  // Forward declaring type: ScaleAnimator
  class ScaleAnimator;
  // Forward declaring type: MultiplayerConnectedPlayerLevelFailController
  class MultiplayerConnectedPlayerLevelFailController;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerConnectedPlayerSpectatingSpot
  class MultiplayerConnectedPlayerSpectatingSpot;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  // Autogenerated type: MultiplayerConnectedPlayerGameplayAnimator
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerGameplayAnimator : public GlobalNamespace::MultiplayerGameplayAnimator {
    public:
    // [SpaceAttribute] Offset: 0xDC8A3C
    // private MultiplayerBigAvatarAnimator _bigAvatarAnimator
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MultiplayerBigAvatarAnimator* bigAvatarAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBigAvatarAnimator*) == 0x8);
    // private ScaleAnimator _avatarScaleAnimator
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::ScaleAnimator* avatarScaleAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScaleAnimator*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC8A84
    // private System.Single _defaultLightsWidth
    // Size: 0x4
    // Offset: 0x78
    float defaultLightsWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _observedLightsWidth
    // Size: 0x4
    // Offset: 0x7C
    float observedLightsWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xDC8ACC
    // private readonly MultiplayerConnectedPlayerLevelFailController _failController
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8ADC
    // private readonly MultiplayerLayoutProvider _multiplayerLayoutProvider
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::MultiplayerLayoutProvider* multiplayerLayoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8AEC
    // private readonly MultiplayerConnectedPlayerSpectatingSpot _playerSpectatingSpot
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* playerSpectatingSpot;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerGameplayAnimator
    MultiplayerConnectedPlayerGameplayAnimator(GlobalNamespace::MultiplayerBigAvatarAnimator* bigAvatarAnimator_ = {}, GlobalNamespace::ScaleAnimator* avatarScaleAnimator_ = {}, float defaultLightsWidth_ = {}, float observedLightsWidth_ = {}, GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController_ = {}, GlobalNamespace::MultiplayerLayoutProvider* multiplayerLayoutProvider_ = {}, GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* playerSpectatingSpot_ = {}) noexcept : bigAvatarAnimator{bigAvatarAnimator_}, avatarScaleAnimator{avatarScaleAnimator_}, defaultLightsWidth{defaultLightsWidth_}, observedLightsWidth{observedLightsWidth_}, failController{failController_}, multiplayerLayoutProvider{multiplayerLayoutProvider_}, playerSpectatingSpot{playerSpectatingSpot_} {}
    // private System.Void TransitionIntoFailedState()
    // Offset: 0xFAA5C4
    void TransitionIntoFailedState();
    // private System.Void HandlePlayerDidFail()
    // Offset: 0xFAABA8
    void HandlePlayerDidFail();
    // private System.Void HandleIsObservedChanged(System.Boolean isObserved)
    // Offset: 0xFAABAC
    void HandleIsObservedChanged(bool isObserved);
    // protected override System.Void Start()
    // Offset: 0xFA9FA8
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::Start()
    void Start();
    // protected override System.Void OnDestroy()
    // Offset: 0xFAA19C
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::OnDestroy()
    void OnDestroy();
    // protected override System.Void AnimateNewLeaderSelected(System.Boolean isLeading)
    // Offset: 0xFAA72C
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::AnimateNewLeaderSelected(System.Boolean isLeading)
    void AnimateNewLeaderSelected(bool isLeading);
    // protected override System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0xFAA884
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::HandleStateChanged(MultiplayerController/State state)
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // public System.Void .ctor()
    // Offset: 0xFAAC38
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerGameplayAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerGameplayAnimator*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerGameplayAnimator
  static check_size<sizeof(MultiplayerConnectedPlayerGameplayAnimator), 144 + sizeof(GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*)> __GlobalNamespace_MultiplayerConnectedPlayerGameplayAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerGameplayAnimator) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*, "", "MultiplayerConnectedPlayerGameplayAnimator");
#pragma pack(pop)
