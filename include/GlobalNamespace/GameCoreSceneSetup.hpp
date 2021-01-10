// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScreenCaptureAfterDelay
  class ScreenCaptureAfterDelay;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: GameCoreSceneSetupData
  class GameCoreSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: GameCoreSceneSetup
  // [] Offset: FFFFFFFF
  class GameCoreSceneSetup : public Zenject::MonoInstaller {
    public:
    // private ScreenCaptureAfterDelay _screenCaptureAfterDelayPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScreenCaptureAfterDelay* screenCaptureAfterDelayPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScreenCaptureAfterDelay*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDD2C10
    // private readonly GameCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameCoreSceneSetupData*) == 0x8);
    // Creating value type constructor for type: GameCoreSceneSetup
    GameCoreSceneSetup(GlobalNamespace::ScreenCaptureAfterDelay* screenCaptureAfterDelayPrefab_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::GameCoreSceneSetupData* sceneSetupData_ = {}) noexcept : screenCaptureAfterDelayPrefab{screenCaptureAfterDelayPrefab_}, mainSettingsModel{mainSettingsModel_}, sceneSetupData{sceneSetupData_} {}
    // static field const value: static private System.Single kPauseButtonPressDurationMultiplier
    static constexpr const float kPauseButtonPressDurationMultiplier = 0.75;
    // Get static field: static private System.Single kPauseButtonPressDurationMultiplier
    static float _get_kPauseButtonPressDurationMultiplier();
    // Set static field: static private System.Single kPauseButtonPressDurationMultiplier
    static void _set_kPauseButtonPressDurationMultiplier(float value);
    // public override System.Void InstallBindings()
    // Offset: 0x1A18178
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1A185A0
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameCoreSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameCoreSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameCoreSceneSetup*, creationType>()));
    }
  }; // GameCoreSceneSetup
  static check_size<sizeof(GameCoreSceneSetup), 48 + sizeof(GlobalNamespace::GameCoreSceneSetupData*)> __GlobalNamespace_GameCoreSceneSetupSizeCheck;
  static_assert(sizeof(GameCoreSceneSetup) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameCoreSceneSetup*, "", "GameCoreSceneSetup");
#pragma pack(pop)
