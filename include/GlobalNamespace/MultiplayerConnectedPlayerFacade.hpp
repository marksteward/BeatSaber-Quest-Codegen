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
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: MultiplayerConnectedPlayerIntroAnimator
  class MultiplayerConnectedPlayerIntroAnimator;
  // Forward declaring type: IMultiplayerConnectedPlayerOutroAnimator
  class IMultiplayerConnectedPlayerOutroAnimator;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: MultiplayerConnectedPlayerScoreDiffText
  class MultiplayerConnectedPlayerScoreDiffText;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: MultiplayerConnectedPlayerFacade
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerFacade : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory
    class Factory;
    // [InjectAttribute] Offset: 0xDC89DC
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeSyncController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xDC89EC
    // private readonly MultiplayerConnectedPlayerIntroAnimator _introAnimator
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* introAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xDC89FC
    // private readonly IMultiplayerConnectedPlayerOutroAnimator _outroAnimator
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator* outroAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8A0C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8A1C
    // private readonly MultiplayerConnectedPlayerScoreDiffText _scoreDiffText
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* scoreDiffText;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8A2C
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerFacade
    MultiplayerConnectedPlayerFacade(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeSyncController_ = {}, GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* introAnimator_ = {}, GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator* outroAnimator_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* scoreDiffText_ = {}, GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}) noexcept : songTimeSyncController{songTimeSyncController_}, introAnimator{introAnimator_}, outroAnimator{outroAnimator_}, beatmapObjectManager{beatmapObjectManager_}, scoreDiffText{scoreDiffText_}, beatmapObjectCallbackController{beatmapObjectCallbackController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MultiplayerConnectedPlayerIntroAnimator get_introAnimator()
    // Offset: 0xFA9BCC
    GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* get_introAnimator();
    // public IMultiplayerConnectedPlayerOutroAnimator get_outroAnimator()
    // Offset: 0xFA9BD4
    GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator* get_outroAnimator();
    // public MultiplayerConnectedPlayerScoreDiffText get_scoreDiffText()
    // Offset: 0xFA9BDC
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* get_scoreDiffText();
    // public System.Void SetSongStartSyncTime(System.Single songStartSyncTime)
    // Offset: 0xFA9BE4
    void SetSongStartSyncTime(float songStartSyncTime);
    // public System.Void PauseSpawning()
    // Offset: 0xFA9D1C
    void PauseSpawning();
    // public System.Void ResumeSpawning()
    // Offset: 0xFA9D38
    void ResumeSpawning();
    // public System.Void __ForceStopSong()
    // Offset: 0xFA9D54
    void __ForceStopSong();
    // public System.Void .ctor()
    // Offset: 0xFA9DA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerFacade*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerFacade
  static check_size<sizeof(MultiplayerConnectedPlayerFacade), 64 + sizeof(GlobalNamespace::BeatmapObjectCallbackController*)> __GlobalNamespace_MultiplayerConnectedPlayerFacadeSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerFacade) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerFacade*, "", "MultiplayerConnectedPlayerFacade");
#pragma pack(pop)
