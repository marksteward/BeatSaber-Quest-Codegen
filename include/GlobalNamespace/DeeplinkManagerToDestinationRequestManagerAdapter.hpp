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
  class DeeplinkManagerToDestinationRequestManagerAdapter : public ::Il2CppObject/*, public GlobalNamespace::IDestinationRequestManager*/ {
    public:
    // [InjectAttribute] Offset: 0xE160E0
    // private BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE160F0
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE16100
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
    // public System.Void add_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0x119D0D0
    void add_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public System.Void remove_didSendMenuDestinationRequestEvent(System.Action`1<MenuDestination> value)
    // Offset: 0x119D174
    void remove_didSendMenuDestinationRequestEvent(System::Action_1<GlobalNamespace::MenuDestination*>* value);
    // public MenuDestination get_currentMenuDestinationRequest()
    // Offset: 0x119D218
    GlobalNamespace::MenuDestination* get_currentMenuDestinationRequest();
    // public System.Void set_currentMenuDestinationRequest(MenuDestination value)
    // Offset: 0x119D220
    void set_currentMenuDestinationRequest(GlobalNamespace::MenuDestination* value);
    // public System.Void Init(IDeeplinkManager deeplinkManager)
    // Offset: 0x119D298
    void Init(GlobalNamespace::IDeeplinkManager* deeplinkManager);
    // public System.Void Clear()
    // Offset: 0x119D928
    void Clear();
    // protected System.Void HandleDeeplinkManagerDidReceiveDeeplink(Deeplink deeplink)
    // Offset: 0x119D470
    void HandleDeeplinkManagerDidReceiveDeeplink(GlobalNamespace::Deeplink* deeplink);
    // public System.Void .ctor()
    // Offset: 0x119D930
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeeplinkManagerToDestinationRequestManagerAdapter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeeplinkManagerToDestinationRequestManagerAdapter*, creationType>()));
    }
  }; // DeeplinkManagerToDestinationRequestManagerAdapter
  #pragma pack(pop)
  static check_size<sizeof(DeeplinkManagerToDestinationRequestManagerAdapter), 40 + sizeof(GlobalNamespace::MenuDestination*)> __GlobalNamespace_DeeplinkManagerToDestinationRequestManagerAdapterSizeCheck;
  static_assert(sizeof(DeeplinkManagerToDestinationRequestManagerAdapter) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*, "", "DeeplinkManagerToDestinationRequestManagerAdapter");
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::add_didSendMenuDestinationRequestEvent
// Il2CppName: add_didSendMenuDestinationRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(System::Action_1<GlobalNamespace::MenuDestination*>*)>(&GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::add_didSendMenuDestinationRequestEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MenuDestination")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*), "add_didSendMenuDestinationRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::remove_didSendMenuDestinationRequestEvent
// Il2CppName: remove_didSendMenuDestinationRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(System::Action_1<GlobalNamespace::MenuDestination*>*)>(&GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::remove_didSendMenuDestinationRequestEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MenuDestination")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*), "remove_didSendMenuDestinationRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::get_currentMenuDestinationRequest
// Il2CppName: get_currentMenuDestinationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MenuDestination* (GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)()>(&GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::get_currentMenuDestinationRequest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*), "get_currentMenuDestinationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::set_currentMenuDestinationRequest
// Il2CppName: set_currentMenuDestinationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(GlobalNamespace::MenuDestination*)>(&GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::set_currentMenuDestinationRequest)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MenuDestination")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*), "set_currentMenuDestinationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(GlobalNamespace::IDeeplinkManager*)>(&GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Init)> {
  const MethodInfo* get() {
    static auto* deeplinkManager = &::il2cpp_utils::GetClassFromName("", "IDeeplinkManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deeplinkManager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)()>(&GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::HandleDeeplinkManagerDidReceiveDeeplink
// Il2CppName: HandleDeeplinkManagerDidReceiveDeeplink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(GlobalNamespace::Deeplink*)>(&GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::HandleDeeplinkManagerDidReceiveDeeplink)> {
  const MethodInfo* get() {
    static auto* deeplink = &::il2cpp_utils::GetClassFromName("", "Deeplink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*), "HandleDeeplinkManagerDidReceiveDeeplink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deeplink});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
