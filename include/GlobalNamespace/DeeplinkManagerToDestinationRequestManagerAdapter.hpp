// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDestinationRequestManager
#include "GlobalNamespace/IDestinationRequestManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: MenuDestination
  class MenuDestination;
  // Forward declaring type: IDeeplinkManager
  class IDeeplinkManager;
  // Forward declaring type: Deeplink
  class Deeplink;
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DeeplinkManagerToDestinationRequestManagerAdapter
  // [] Offset: FFFFFFFF
  class DeeplinkManagerToDestinationRequestManagerAdapter : public ::Il2CppObject/*, public GlobalNamespace::IDestinationRequestManager*/ {
    public:
    // [InjectAttribute] Offset: 0xDC2A4C
    // private BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDC2A5C
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC2A6C
    // private System.Action`1<MenuDestination> didSendMenuDestinationRequestEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<GlobalNamespace::MenuDestination*>* didSendMenuDestinationRequestEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MenuDestination*>*) == 0x8);
    // private MenuDestination _currentMenuDestinationRequest
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MenuDestination* currentMenuDestinationRequest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuDestination*) == 0x8);
    // Creating value type constructor for type: DeeplinkManagerToDestinationRequestManagerAdapter
    DeeplinkManagerToDestinationRequestManagerAdapter(GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel_ = {}, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection_ = {}, System::Action_1<GlobalNamespace::MenuDestination*>* didSendMenuDestinationRequestEvent_ = {}, GlobalNamespace::MenuDestination* currentMenuDestinationRequest_ = {}) noexcept : beatmapLevelsModel{beatmapLevelsModel_}, beatmapCharacteristicCollection{beatmapCharacteristicCollection_}, didSendMenuDestinationRequestEvent{didSendMenuDestinationRequestEvent_}, currentMenuDestinationRequest{currentMenuDestinationRequest_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDestinationRequestManager
    operator GlobalNamespace::IDestinationRequestManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDestinationRequestManager*>(this);
    }
    // public System.Void Init(IDeeplinkManager deeplinkManager)
    // Offset: 0x1A59664
    void Init(GlobalNamespace::IDeeplinkManager* deeplinkManager);
    // protected System.Void HandleDeeplinkManagerDidReceiveDeeplink(Deeplink deeplink)
    // Offset: 0x1A5983C
    void HandleDeeplinkManagerDidReceiveDeeplink(GlobalNamespace::Deeplink* deeplink);
    // public System.Void add_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0x1A59514
    // Implemented from: IDestinationRequestManager
    // Base method: System.Void IDestinationRequestManager::add_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    void add_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public System.Void remove_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0x1A595B8
    // Implemented from: IDestinationRequestManager
    // Base method: System.Void IDestinationRequestManager::remove_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    void remove_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public MenuDestination get_currentMenuDestinationRequest()
    // Offset: 0x1A5965C
    // Implemented from: IDestinationRequestManager
    // Base method: MenuDestination IDestinationRequestManager::get_currentMenuDestinationRequest()
    GlobalNamespace::MenuDestination* get_currentMenuDestinationRequest();
    // public System.Void Clear()
    // Offset: 0x1A59C18
    // Implemented from: IDestinationRequestManager
    // Base method: System.Void IDestinationRequestManager::Clear()
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x1A59C24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeeplinkManagerToDestinationRequestManagerAdapter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeeplinkManagerToDestinationRequestManagerAdapter*, creationType>()));
    }
  }; // DeeplinkManagerToDestinationRequestManagerAdapter
  static check_size<sizeof(DeeplinkManagerToDestinationRequestManagerAdapter), 40 + sizeof(GlobalNamespace::MenuDestination*)> __GlobalNamespace_DeeplinkManagerToDestinationRequestManagerAdapterSizeCheck;
  static_assert(sizeof(DeeplinkManagerToDestinationRequestManagerAdapter) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*, "", "DeeplinkManagerToDestinationRequestManagerAdapter");
