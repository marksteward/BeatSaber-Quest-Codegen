// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayersViewController
#include "GlobalNamespace/NetworkPlayersViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalNetworkPlayerModel
  class LocalNetworkPlayerModel;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: INetworkPlayerModel
  class INetworkPlayerModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBA
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkPlayersViewController
  class LocalNetworkPlayersViewController : public GlobalNamespace::NetworkPlayersViewController {
    public:
    // private UnityEngine.UI.Toggle _enableNetworkingToggle
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Toggle* enableNetworkingToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _enableOpenPartyToggle
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::Toggle* enableOpenPartyToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [InjectAttribute] Offset: 0xE255A4
    // private readonly LocalNetworkPlayerModel _localNetworkPlayerModel
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE255B4
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkConfig*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xB0
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private System.Boolean _enableBroadcasting
    // Size: 0x1
    // Offset: 0xB8
    bool enableBroadcasting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _allowAnyoneToJoin
    // Size: 0x1
    // Offset: 0xB9
    bool allowAnyoneToJoin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LocalNetworkPlayersViewController
    LocalNetworkPlayersViewController(UnityEngine::UI::Toggle* enableNetworkingToggle_ = {}, UnityEngine::UI::Toggle* enableOpenPartyToggle_ = {}, GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModel_ = {}, GlobalNamespace::INetworkConfig* networkConfig_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, bool enableBroadcasting_ = {}, bool allowAnyoneToJoin_ = {}) noexcept : enableNetworkingToggle{enableNetworkingToggle_}, enableOpenPartyToggle{enableOpenPartyToggle_}, localNetworkPlayerModel{localNetworkPlayerModel_}, networkConfig{networkConfig_}, toggleBinder{toggleBinder_}, enableBroadcasting{enableBroadcasting_}, allowAnyoneToJoin{allowAnyoneToJoin_} {}
    // private System.Void HandleNetworkingToggleChanged(System.Boolean enabled)
    // Offset: 0x23FFA74
    void HandleNetworkingToggleChanged(bool enabled);
    // private System.Void HandleOpenPartyToggleChanged(System.Boolean openParty)
    // Offset: 0x23FFA84
    void HandleOpenPartyToggleChanged(bool openParty);
    // private System.Void RefreshParty(System.Boolean overrideHide)
    // Offset: 0x23FF910
    void RefreshParty(bool overrideHide);
    // public override System.String get_myPartyTitle()
    // Offset: 0x23FF738
    // Implemented from: NetworkPlayersViewController
    // Base method: System.String NetworkPlayersViewController::get_myPartyTitle()
    ::Il2CppString* get_myPartyTitle();
    // public override System.String get_otherPlayersTitle()
    // Offset: 0x23FF780
    // Implemented from: NetworkPlayersViewController
    // Base method: System.String NetworkPlayersViewController::get_otherPlayersTitle()
    ::Il2CppString* get_otherPlayersTitle();
    // public override INetworkPlayerModel get_networkPlayerModel()
    // Offset: 0x23FF7C8
    // Implemented from: NetworkPlayersViewController
    // Base method: INetworkPlayerModel NetworkPlayersViewController::get_networkPlayerModel()
    GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();
    // protected override System.Void NetworkPlayersViewControllerDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x23FF7D0
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x23FFA30
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x23FFA40
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x23FFA94
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkPlayersViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkPlayersViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkPlayersViewController*, creationType>()));
    }
  }; // LocalNetworkPlayersViewController
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkPlayersViewController), 185 + sizeof(bool)> __GlobalNamespace_LocalNetworkPlayersViewControllerSizeCheck;
  static_assert(sizeof(LocalNetworkPlayersViewController) == 0xBA);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkPlayersViewController*, "", "LocalNetworkPlayersViewController");
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::HandleNetworkingToggleChanged
// Il2CppName: HandleNetworkingToggleChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::HandleOpenPartyToggleChanged
// Il2CppName: HandleOpenPartyToggleChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::RefreshParty
// Il2CppName: RefreshParty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::get_myPartyTitle
// Il2CppName: get_myPartyTitle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::get_otherPlayersTitle
// Il2CppName: get_otherPlayersTitle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::get_networkPlayerModel
// Il2CppName: get_networkPlayerModel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::NetworkPlayersViewControllerDidActivate
// Il2CppName: NetworkPlayersViewControllerDidActivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::DidDeactivate
// Il2CppName: DidDeactivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
