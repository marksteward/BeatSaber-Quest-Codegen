// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: LevelFailedTextEffect
  class LevelFailedTextEffect;
  // Forward declaring type: IMultiplayerLevelEndActionsPublisher
  class IMultiplayerLevelEndActionsPublisher;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActiveLevelFailController
  class MultiplayerLocalActiveLevelFailController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActiveLevelFailController::$PlayerFailedCoroutine$d__8
    class $PlayerFailedCoroutine$d__8;
    // private LevelFailedTextEffect _levelFailedTextEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LevelFailedTextEffect* levelFailedTextEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFailedTextEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D2DC
    // private readonly IMultiplayerLevelEndActionsPublisher _levelEndActionsPublisher
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMultiplayerLevelEndActionsPublisher* levelEndActionsPublisher;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D2EC
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D2FC
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D30C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D31C
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActiveLevelFailController
    MultiplayerLocalActiveLevelFailController(GlobalNamespace::LevelFailedTextEffect* levelFailedTextEffect_ = {}, GlobalNamespace::IMultiplayerLevelEndActionsPublisher* levelEndActionsPublisher_ = {}, GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager_ = {}) noexcept : levelFailedTextEffect{levelFailedTextEffect_}, levelEndActionsPublisher{levelEndActionsPublisher_}, beatmapObjectSpawnController{beatmapObjectSpawnController_}, gameSongController{gameSongController_}, beatmapObjectManager{beatmapObjectManager_}, multiplayerPlayersManager{multiplayerPlayersManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x102A038
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x102A128
    void OnDestroy();
    // private System.Collections.IEnumerator PlayerFailedCoroutine()
    // Offset: 0x102A228
    System::Collections::IEnumerator* PlayerFailedCoroutine();
    // private System.Void HandlePlayerDidFinish(MultiplayerLevelCompletionResults levelCompletionResults)
    // Offset: 0x102A2C4
    void HandlePlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x102A318
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActiveLevelFailController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActiveLevelFailController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActiveLevelFailController*, creationType>()));
    }
  }; // MultiplayerLocalActiveLevelFailController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActiveLevelFailController), 64 + sizeof(GlobalNamespace::MultiplayerPlayersManager*)> __GlobalNamespace_MultiplayerLocalActiveLevelFailControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActiveLevelFailController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActiveLevelFailController*, "", "MultiplayerLocalActiveLevelFailController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveLevelFailController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveLevelFailController::*)()>(&GlobalNamespace::MultiplayerLocalActiveLevelFailController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveLevelFailController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveLevelFailController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveLevelFailController::*)()>(&GlobalNamespace::MultiplayerLocalActiveLevelFailController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveLevelFailController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveLevelFailController::PlayerFailedCoroutine
// Il2CppName: PlayerFailedCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MultiplayerLocalActiveLevelFailController::*)()>(&GlobalNamespace::MultiplayerLocalActiveLevelFailController::PlayerFailedCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveLevelFailController*), "PlayerFailedCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveLevelFailController::HandlePlayerDidFinish
// Il2CppName: HandlePlayerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveLevelFailController::*)(GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLocalActiveLevelFailController::HandlePlayerDidFinish)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveLevelFailController*), "HandlePlayerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveLevelFailController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
