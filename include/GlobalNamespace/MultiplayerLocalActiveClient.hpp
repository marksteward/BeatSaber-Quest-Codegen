// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: IScoreSyncStateManager
  class IScoreSyncStateManager;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ScoreController
  class ScoreController;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  // Autogenerated type: MultiplayerLocalActiveClient
  // [] Offset: FFFFFFFF
  class MultiplayerLocalActiveClient : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xDC9078
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC9088
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xDC9098
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xDC90A8
    // private readonly IScoreSyncStateManager _scoreSyncStateManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreSyncStateManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC90B8
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC90C8
    // private readonly IGameplayRpcManager _rpcManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IGameplayRpcManager* rpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC90D8
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC90E8
    // private readonly ScoreController _scoreController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreController*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActiveClient
    MultiplayerLocalActiveClient(GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager_ = {}, GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager_ = {}, GlobalNamespace::IGameplayRpcManager* rpcManager_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::ScoreController* scoreController_ = {}) noexcept : saberManager{saberManager_}, playerTransforms{playerTransforms_}, audioTimeSyncController{audioTimeSyncController_}, scoreSyncStateManager{scoreSyncStateManager_}, nodePoseSyncStateManager{nodePoseSyncStateManager_}, rpcManager{rpcManager_}, beatmapObjectManager{beatmapObjectManager_}, scoreController{scoreController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BeatmapObjectManager get_beatmapObjectManager()
    // Offset: 0xF6B9F0
    GlobalNamespace::BeatmapObjectManager* get_beatmapObjectManager();
    // protected System.Void Start()
    // Offset: 0xF6B9F8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF6BEB8
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0xF6C10C
    void LateUpdate();
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0xF6C52C
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xF6C630
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void ScoreControllerHandleComboDidChange(System.Int32 combo)
    // Offset: 0xF6C7D0
    void ScoreControllerHandleComboDidChange(int combo);
    // private System.Void ScoreControllerHandleMultiplierDidChange(System.Int32 multiplier, System.Single multiplierProgress)
    // Offset: 0xF6C8B8
    void ScoreControllerHandleMultiplierDidChange(int multiplier, float multiplierProgress);
    // private System.Void ScoreControllerHandleImmediateMaxPossibleScoreDidChange(System.Int32 immediateMaxPossibleRawScore, System.Int32 immediateMaxPossibleModifiedScore)
    // Offset: 0xF6C9A0
    void ScoreControllerHandleImmediateMaxPossibleScoreDidChange(int immediateMaxPossibleRawScore, int immediateMaxPossibleModifiedScore);
    // private System.Void ScoreControllerHandleScoreDidChange(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0xF6CA88
    void ScoreControllerHandleScoreDidChange(int rawScore, int modifiedScore);
    // public System.Void .ctor()
    // Offset: 0xF6CC04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActiveClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActiveClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActiveClient*, creationType>()));
    }
  }; // MultiplayerLocalActiveClient
  static check_size<sizeof(MultiplayerLocalActiveClient), 80 + sizeof(GlobalNamespace::ScoreController*)> __GlobalNamespace_MultiplayerLocalActiveClientSizeCheck;
  static_assert(sizeof(MultiplayerLocalActiveClient) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActiveClient*, "", "MultiplayerLocalActiveClient");
#pragma pack(pop)
