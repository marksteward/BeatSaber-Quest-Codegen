// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CreateServerFormController
  class CreateServerFormController;
  // Skipping declaration: IUnifiedNetworkPlayerModel because it is already included!
  // Forward declaring type: MultiplayerModeSettings
  class MultiplayerModeSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: CreateServerViewController
  class CreateServerViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _createServerButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* createServerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelCreateServerButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* cancelCreateServerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private CreateServerFormController _createServerFormController
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::CreateServerFormController* createServerFormController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreateServerFormController*) == 0x8);
    // [InjectAttribute] Offset: 0xE25C7C
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IUnifiedNetworkPlayerModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25C8C
    // private System.Action`2<System.Boolean,UnifiedNetworkPlayerModel/CreatePartyConfig> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>*) == 0x8);
    // private MultiplayerModeSettings _multiplayerModeSettings
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerModeSettings*) == 0x8);
    // Creating value type constructor for type: CreateServerViewController
    CreateServerViewController(UnityEngine::UI::Button* createServerButton_ = {}, UnityEngine::UI::Button* cancelCreateServerButton_ = {}, GlobalNamespace::CreateServerFormController* createServerFormController_ = {}, GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel_ = {}, System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>* didFinishEvent_ = {}, GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings_ = {}) noexcept : createServerButton{createServerButton_}, cancelCreateServerButton{cancelCreateServerButton_}, createServerFormController{createServerFormController_}, unifiedNetworkPlayerModel{unifiedNetworkPlayerModel_}, didFinishEvent{didFinishEvent_}, multiplayerModeSettings{multiplayerModeSettings_} {}
    // public System.Void add_didFinishEvent(System.Action`2<System.Boolean,UnifiedNetworkPlayerModel/CreatePartyConfig> value)
    // Offset: 0x1196C10
    void add_didFinishEvent(System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<System.Boolean,UnifiedNetworkPlayerModel/CreatePartyConfig> value)
    // Offset: 0x1196CB4
    void remove_didFinishEvent(System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>* value);
    // public MultiplayerModeSettings get_multiplayerModeSettings()
    // Offset: 0x1196D58
    GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();
    // public System.Void Setup(MultiplayerModeSettings multiplayerModeSettings)
    // Offset: 0x1196D60
    void Setup(GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);
    // private UnifiedNetworkPlayerModel/CreatePartyConfig CreatePartyConfig()
    // Offset: 0x1196EA8
    GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig* CreatePartyConfig();
    // private System.Void <DidActivate>b__11_0()
    // Offset: 0x11970F4
    void $DidActivate$b__11_0();
    // private System.Void <DidActivate>b__11_1()
    // Offset: 0x1197168
    void $DidActivate$b__11_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1196DAC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x11970EC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateServerViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreateServerViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateServerViewController*, creationType>()));
    }
  }; // CreateServerViewController
  #pragma pack(pop)
  static check_size<sizeof(CreateServerViewController), 152 + sizeof(GlobalNamespace::MultiplayerModeSettings*)> __GlobalNamespace_CreateServerViewControllerSizeCheck;
  static_assert(sizeof(CreateServerViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerViewController*, "", "CreateServerViewController");
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerViewController::*)(System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>*)>(&GlobalNamespace::CreateServerViewController::add_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("", "UnifiedNetworkPlayerModel/CreatePartyConfig")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerViewController::*)(System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>*)>(&GlobalNamespace::CreateServerViewController::remove_didFinishEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("", "UnifiedNetworkPlayerModel/CreatePartyConfig")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::get_multiplayerModeSettings
// Il2CppName: get_multiplayerModeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerModeSettings* (GlobalNamespace::CreateServerViewController::*)()>(&GlobalNamespace::CreateServerViewController::get_multiplayerModeSettings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "get_multiplayerModeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerViewController::*)(GlobalNamespace::MultiplayerModeSettings*)>(&GlobalNamespace::CreateServerViewController::Setup)> {
  const MethodInfo* get() {
    static auto* multiplayerModeSettings = &::il2cpp_utils::GetClassFromName("", "MultiplayerModeSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerModeSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::CreatePartyConfig
// Il2CppName: CreatePartyConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig* (GlobalNamespace::CreateServerViewController::*)()>(&GlobalNamespace::CreateServerViewController::CreatePartyConfig)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "CreatePartyConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::$DidActivate$b__11_0
// Il2CppName: <DidActivate>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerViewController::*)()>(&GlobalNamespace::CreateServerViewController::$DidActivate$b__11_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "<DidActivate>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::$DidActivate$b__11_1
// Il2CppName: <DidActivate>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerViewController::*)()>(&GlobalNamespace::CreateServerViewController::$DidActivate$b__11_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "<DidActivate>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerViewController::*)(bool, bool, bool)>(&GlobalNamespace::CreateServerViewController::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
