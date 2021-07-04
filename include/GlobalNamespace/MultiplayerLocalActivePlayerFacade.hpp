// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: IMultiplayerLevelEndActionsListener
#include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
// Including type: IStartSeekSongControllerProvider
#include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
  // Forward declaring type: MultiplayerLocalActivePlayerIntroAnimator
  class MultiplayerLocalActivePlayerIntroAnimator;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerFacade
  class MultiplayerLocalActivePlayerFacade : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher, public GlobalNamespace::IMultiplayerLevelEndActionsListener, public GlobalNamespace::IStartSeekSongControllerProvider*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory
    class Factory;
    // private UnityEngine.GameObject[] _activeOnlyGameObjects
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::GameObject*>* activeOnlyGameObjects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // private UnityEngine.GameObject _outroAnimator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* outroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D34C
    // private readonly IStartSeekSongController _songController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IStartSeekSongController* songController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IStartSeekSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D35C
    // private readonly MultiplayerLocalActivePlayerIntroAnimator _introAnimator
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* introAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D36C
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D37C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D38C
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D39C
    // private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D3AC
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerFacade
    MultiplayerLocalActivePlayerFacade(::Array<UnityEngine::GameObject*>* activeOnlyGameObjects_ = {}, UnityEngine::GameObject* outroAnimator_ = {}, GlobalNamespace::IStartSeekSongController* songController_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* introAnimator_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent_ = {}, System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent_ = {}) noexcept : activeOnlyGameObjects{activeOnlyGameObjects_}, outroAnimator{outroAnimator_}, songController{songController_}, introAnimator{introAnimator_}, gameSongController{gameSongController_}, beatmapObjectManager{beatmapObjectManager_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, playerDidFinishEvent{playerDidFinishEvent_}, playerNetworkDidFailedEvent{playerNetworkDidFailedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher
    operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsListener
    operator GlobalNamespace::IMultiplayerLevelEndActionsListener() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsListener*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStartSeekSongControllerProvider
    operator GlobalNamespace::IStartSeekSongControllerProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStartSeekSongControllerProvider*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MultiplayerLocalActivePlayerIntroAnimator get_introAnimator()
    // Offset: 0x102A490
    GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* get_introAnimator();
    // public UnityEngine.GameObject get_outroAnimator()
    // Offset: 0x102A498
    UnityEngine::GameObject* get_outroAnimator();
    // public IStartSeekSongController get_songController()
    // Offset: 0x102A4A0
    GlobalNamespace::IStartSeekSongController* get_songController();
    // public System.Void add_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x102A4A8
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x102A54C
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x102A5F0
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x102A694
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void ReportPlayerDidFinish(MultiplayerLevelCompletionResults results)
    // Offset: 0x102A738
    void ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0x102A7AC
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void DisablePlayer()
    // Offset: 0x102A820
    void DisablePlayer();
    // public System.Void PauseSpawning()
    // Offset: 0x102A890
    void PauseSpawning();
    // public System.Void ResumeSpawning()
    // Offset: 0x102A944
    void ResumeSpawning();
    // public System.Void __ForceStopSong()
    // Offset: 0x102A9F8
    void __ForceStopSong();
    // public UnityEngine.GameObject[] __GetActiveOnlyGameObjects()
    // Offset: 0x102AA40
    ::Array<UnityEngine::GameObject*>* __GetActiveOnlyGameObjects();
    // public System.Void .ctor()
    // Offset: 0x102AA48
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerFacade*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerFacade
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerFacade), 88 + sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)> __GlobalNamespace_MultiplayerLocalActivePlayerFacadeSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerFacade) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerFacade*, "", "MultiplayerLocalActivePlayerFacade");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator
// Il2CppName: get_introAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator
// Il2CppName: get_outroAnimator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController
// Il2CppName: get_songController
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent
// Il2CppName: add_playerDidFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent
// Il2CppName: remove_playerDidFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent
// Il2CppName: add_playerNetworkDidFailedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent
// Il2CppName: remove_playerNetworkDidFailedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish
// Il2CppName: ReportPlayerDidFinish
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed
// Il2CppName: ReportPlayerNetworkDidFailed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer
// Il2CppName: DisablePlayer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning
// Il2CppName: PauseSpawning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning
// Il2CppName: ResumeSpawning
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong
// Il2CppName: __ForceStopSong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects
// Il2CppName: __GetActiveOnlyGameObjects
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
