// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingSpriteSpawner
  class FlyingSpriteSpawner;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BadNoteCutEffectSpawner
  class BadNoteCutEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private FlyingSpriteSpawner _failFlyingSpriteSpawner
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FlyingSpriteSpawner* failFlyingSpriteSpawner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingSpriteSpawner*) == 0x8);
    // [InjectAttribute] Offset: 0xD3935C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3936C
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3937C
    // private readonly CoreGameHUDController/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::CoreGameHUDController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CoreGameHUDController::InitData*) == 0x8);
    // Creating value type constructor for type: BadNoteCutEffectSpawner
    BadNoteCutEffectSpawner(GlobalNamespace::FlyingSpriteSpawner* failFlyingSpriteSpawner_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::CoreGameHUDController::InitData* initData_ = {}) noexcept : failFlyingSpriteSpawner{failFlyingSpriteSpawner_}, beatmapObjectManager{beatmapObjectManager_}, audioTimeSyncController{audioTimeSyncController_}, initData{initData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1025CB0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1025D68
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x1025E00
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo& noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0x1025F08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadNoteCutEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BadNoteCutEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadNoteCutEffectSpawner*, creationType>()));
    }
  }; // BadNoteCutEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(BadNoteCutEffectSpawner), 48 + sizeof(GlobalNamespace::CoreGameHUDController::InitData*)> __GlobalNamespace_BadNoteCutEffectSpawnerSizeCheck;
  static_assert(sizeof(BadNoteCutEffectSpawner) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BadNoteCutEffectSpawner*, "", "BadNoteCutEffectSpawner");
