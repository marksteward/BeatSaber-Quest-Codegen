// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentsListSO
  class EnvironmentsListSO;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentOverrideSettingsPanelController
  class EnvironmentOverrideSettingsPanelController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IRefreshable*/ {
    public:
    // Nested type: GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements
    class Elements;
    // Nested type: GlobalNamespace::EnvironmentOverrideSettingsPanelController::$$c
    class $$c;
    // private UnityEngine.UI.Toggle _overrideEnvironmentsToggle
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Toggle* overrideEnvironmentsToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.GameObject _elementsGO
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* elementsGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private EnvironmentOverrideSettingsPanelController/Elements[] _elements
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*>* elements;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xD41828
    // private HMUI.PanelAnimationSO _presentPanelAnimation
    // Size: 0x8
    // Offset: 0x30
    HMUI::PanelAnimationSO* presentPanelAnimation;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Size: 0x8
    // Offset: 0x38
    HMUI::PanelAnimationSO* dismissPanelAnimation;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD41870
    // private EnvironmentsListSO _allEnvironments
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::EnvironmentsListSO* allEnvironments;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentsListSO*) == 0x8);
    // private OverrideEnvironmentSettings _overrideEnvironmentSettings
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OverrideEnvironmentSettings*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x50
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EnvironmentOverrideSettingsPanelController
    EnvironmentOverrideSettingsPanelController(UnityEngine::UI::Toggle* overrideEnvironmentsToggle_ = {}, UnityEngine::GameObject* elementsGO_ = {}, ::Array<GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*>* elements_ = {}, HMUI::PanelAnimationSO* presentPanelAnimation_ = {}, HMUI::PanelAnimationSO* dismissPanelAnimation_ = {}, GlobalNamespace::EnvironmentsListSO* allEnvironments_ = {}, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings_ = {}, bool initialized_ = {}) noexcept : overrideEnvironmentsToggle{overrideEnvironmentsToggle_}, elementsGO{elementsGO_}, elements{elements_}, presentPanelAnimation{presentPanelAnimation_}, dismissPanelAnimation{dismissPanelAnimation_}, allEnvironments{allEnvironments_}, overrideEnvironmentSettings{overrideEnvironmentSettings_}, initialized{initialized_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRefreshable
    operator GlobalNamespace::IRefreshable() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRefreshable*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public OverrideEnvironmentSettings get_overrideEnvironmentSettings()
    // Offset: 0xF4EEF4
    GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();
    // public System.Void SetData(OverrideEnvironmentSettings overrideEnvironmentSettings)
    // Offset: 0xF4EEFC
    void SetData(GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);
    // protected System.Void OnDestroy()
    // Offset: 0xF4F28C
    void OnDestroy();
    // public System.Void Refresh()
    // Offset: 0xF4F414
    void Refresh();
    // private System.Void HandleDropDownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropDownWithTableView, System.Int32 idx)
    // Offset: 0xF4F57C
    void HandleDropDownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropDownWithTableView, int idx);
    // private System.Void HandleOverrideEnvironmentsToggleValueChanged(System.Boolean isOn)
    // Offset: 0xF4F6B8
    void HandleOverrideEnvironmentsToggleValueChanged(bool isOn);
    // private System.Void <HandleOverrideEnvironmentsToggleValueChanged>b__15_0()
    // Offset: 0xF4F7D4
    void $HandleOverrideEnvironmentsToggleValueChanged$b__15_0();
    // public System.Void .ctor()
    // Offset: 0xF4F7CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentOverrideSettingsPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentOverrideSettingsPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentOverrideSettingsPanelController*, creationType>()));
    }
  }; // EnvironmentOverrideSettingsPanelController
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentOverrideSettingsPanelController), 80 + sizeof(bool)> __GlobalNamespace_EnvironmentOverrideSettingsPanelControllerSizeCheck;
  static_assert(sizeof(EnvironmentOverrideSettingsPanelController) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentOverrideSettingsPanelController*, "", "EnvironmentOverrideSettingsPanelController");
