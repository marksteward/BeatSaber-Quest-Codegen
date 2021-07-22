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
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
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
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentOverrideSettingsPanelController
  // [TokenAttribute] Offset: FFFFFFFF
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
    // [SpaceAttribute] Offset: 0xE0C684
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
    // [SpaceAttribute] Offset: 0xE0C6CC
    // private EnvironmentsListSO _allEnvironments
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::EnvironmentsListSO* allEnvironments;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentsListSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE0C704
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // private OverrideEnvironmentSettings _overrideEnvironmentSettings
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OverrideEnvironmentSettings*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x58
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EnvironmentOverrideSettingsPanelController
    EnvironmentOverrideSettingsPanelController(UnityEngine::UI::Toggle* overrideEnvironmentsToggle_ = {}, UnityEngine::GameObject* elementsGO_ = {}, ::Array<GlobalNamespace::EnvironmentOverrideSettingsPanelController::Elements*>* elements_ = {}, HMUI::PanelAnimationSO* presentPanelAnimation_ = {}, HMUI::PanelAnimationSO* dismissPanelAnimation_ = {}, GlobalNamespace::EnvironmentsListSO* allEnvironments_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings_ = {}, bool initialized_ = {}) noexcept : overrideEnvironmentsToggle{overrideEnvironmentsToggle_}, elementsGO{elementsGO_}, elements{elements_}, presentPanelAnimation{presentPanelAnimation_}, dismissPanelAnimation{dismissPanelAnimation_}, allEnvironments{allEnvironments_}, analyticsModel{analyticsModel_}, overrideEnvironmentSettings{overrideEnvironmentSettings_}, initialized{initialized_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRefreshable
    operator GlobalNamespace::IRefreshable() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRefreshable*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public OverrideEnvironmentSettings get_overrideEnvironmentSettings()
    // Offset: 0x1021720
    GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();
    // public System.Void SetData(OverrideEnvironmentSettings overrideEnvironmentSettings)
    // Offset: 0x1021728
    void SetData(GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);
    // protected System.Void OnDestroy()
    // Offset: 0x1021AB8
    void OnDestroy();
    // public System.Void Refresh()
    // Offset: 0x1021C40
    void Refresh();
    // private System.Void HandleDropDownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropDownWithTableView, System.Int32 idx)
    // Offset: 0x1021DA8
    void HandleDropDownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropDownWithTableView, int idx);
    // private System.Void HandleOverrideEnvironmentsToggleValueChanged(System.Boolean isOn)
    // Offset: 0x102200C
    void HandleOverrideEnvironmentsToggleValueChanged(bool isOn);
    // private System.Void <HandleOverrideEnvironmentsToggleValueChanged>b__16_0()
    // Offset: 0x10221F8
    void $HandleOverrideEnvironmentsToggleValueChanged$b__16_0();
    // public System.Void .ctor()
    // Offset: 0x10221F0
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
  static check_size<sizeof(EnvironmentOverrideSettingsPanelController), 88 + sizeof(bool)> __GlobalNamespace_EnvironmentOverrideSettingsPanelControllerSizeCheck;
  static_assert(sizeof(EnvironmentOverrideSettingsPanelController) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentOverrideSettingsPanelController*, "", "EnvironmentOverrideSettingsPanelController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::get_overrideEnvironmentSettings
// Il2CppName: get_overrideEnvironmentSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OverrideEnvironmentSettings* (GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::get_overrideEnvironmentSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*), "get_overrideEnvironmentSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(GlobalNamespace::OverrideEnvironmentSettings*)>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData)> {
  static const MethodInfo* get() {
    static auto* overrideEnvironmentSettings = &::il2cpp_utils::GetClassFromName("", "OverrideEnvironmentSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideEnvironmentSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx
// Il2CppName: HandleDropDownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropDownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*), "HandleDropDownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropDownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged
// Il2CppName: HandleOverrideEnvironmentsToggleValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(bool)>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*), "HandleOverrideEnvironmentsToggleValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::$HandleOverrideEnvironmentsToggleValueChanged$b__16_0
// Il2CppName: <HandleOverrideEnvironmentsToggleValueChanged>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&GlobalNamespace::EnvironmentOverrideSettingsPanelController::$HandleOverrideEnvironmentsToggleValueChanged$b__16_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*), "<HandleOverrideEnvironmentsToggleValueChanged>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentOverrideSettingsPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
