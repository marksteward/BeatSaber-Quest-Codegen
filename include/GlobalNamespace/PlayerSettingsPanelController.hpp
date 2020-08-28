// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeightSettingsController
  class PlayerHeightSettingsController;
  // Forward declaring type: FormattedFloatListSettingsController
  class FormattedFloatListSettingsController;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSettingsPanelController
  class PlayerSettingsPanelController : public UnityEngine::MonoBehaviour, public GlobalNamespace::IRefreshable {
    public:
    // private UnityEngine.UI.Toggle _leftHandedToggle
    // Offset: 0x18
    UnityEngine::UI::Toggle* leftHandedToggle;
    // private UnityEngine.UI.Toggle _staticLightsToggle
    // Offset: 0x20
    UnityEngine::UI::Toggle* staticLightsToggle;
    // private UnityEngine.UI.Toggle _reduceDebrisToggle
    // Offset: 0x28
    UnityEngine::UI::Toggle* reduceDebrisToggle;
    // private UnityEngine.UI.Toggle _noTextsAndHudsToggle
    // Offset: 0x30
    UnityEngine::UI::Toggle* noTextsAndHudsToggle;
    // private UnityEngine.UI.Toggle _advanceHudToggle
    // Offset: 0x38
    UnityEngine::UI::Toggle* advanceHudToggle;
    // private UnityEngine.UI.Toggle _autoRestartToggle
    // Offset: 0x40
    UnityEngine::UI::Toggle* autoRestartToggle;
    // private PlayerHeightSettingsController _playerHeightSettingsController
    // Offset: 0x48
    GlobalNamespace::PlayerHeightSettingsController* playerHeightSettingsController;
    // private UnityEngine.UI.Toggle _automaticPlayerHeightToggle
    // Offset: 0x50
    UnityEngine::UI::Toggle* automaticPlayerHeightToggle;
    // private FormattedFloatListSettingsController _sfxVolumeSettingsController
    // Offset: 0x58
    GlobalNamespace::FormattedFloatListSettingsController* sfxVolumeSettingsController;
    // private FormattedFloatListSettingsController _saberTrailIntensitySettingsController
    // Offset: 0x60
    GlobalNamespace::FormattedFloatListSettingsController* saberTrailIntensitySettingsController;
    // private PlayerSpecificSettings _playerSpecificSettings
    // Offset: 0x68
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // private HMUI.ToggleBinder _toggleBinder
    // Offset: 0x70
    HMUI::ToggleBinder* toggleBinder;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public PlayerSpecificSettings get_playerSpecificSettings()
    // Offset: 0xC1B70C
    GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();
    // public System.Void SetData(PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0xC1B714
    void SetData(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // protected System.Void Awake()
    // Offset: 0xC1B754
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0xC1BA48
    void OnDestroy();
    // private System.Void HandleSFXVolumeSettingsControllerValueDidChange(FormattedFloatListSettingsController settingsController, System.Single value)
    // Offset: 0xC1BCD0
    void HandleSFXVolumeSettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* settingsController, float value);
    // private System.Void HandleSaberTrailIntensitySettingsControllerValueDidChange(FormattedFloatListSettingsController settingsController, System.Single value)
    // Offset: 0xC1BCEC
    void HandleSaberTrailIntensitySettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* settingsController, float value);
    // private System.Void <Awake>b__15_0(System.Boolean on)
    // Offset: 0xC1BD10
    void $Awake$b__15_0(bool on);
    // private System.Void <Awake>b__15_1(System.Boolean on)
    // Offset: 0xC1BD30
    void $Awake$b__15_1(bool on);
    // private System.Void <Awake>b__15_2(System.Boolean on)
    // Offset: 0xC1BD50
    void $Awake$b__15_2(bool on);
    // private System.Void <Awake>b__15_3(System.Boolean on)
    // Offset: 0xC1BD70
    void $Awake$b__15_3(bool on);
    // private System.Void <Awake>b__15_4(System.Boolean on)
    // Offset: 0xC1BD90
    void $Awake$b__15_4(bool on);
    // private System.Void <Awake>b__15_5(System.Boolean on)
    // Offset: 0xC1BDB0
    void $Awake$b__15_5(bool on);
    // private System.Void <Awake>b__15_6(System.Boolean on)
    // Offset: 0xC1BDD0
    void $Awake$b__15_6(bool on);
    // public System.Void Refresh()
    // Offset: 0xC1BBB0
    // Implemented from: IRefreshable
    // Base method: System.Void IRefreshable::Refresh()
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0xC1BD08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerSettingsPanelController* New_ctor();
  }; // PlayerSettingsPanelController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSettingsPanelController*, "", "PlayerSettingsPanelController");
#pragma pack(pop)
