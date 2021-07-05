// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyMessageHandler
#include "GlobalNamespace/PartyMessageHandler.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DiscoveryPolicy
  struct DiscoveryPolicy;
  // Forward declaring type: InvitePolicy
  struct InvitePolicy;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler/ServerStatusUpdatedDelegate
  class PartyMessageHandler::ServerStatusUpdatedDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ServerStatusUpdatedDelegate
    ServerStatusUpdatedDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1509AA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler::ServerStatusUpdatedDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler::ServerStatusUpdatedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String serverName, System.String password, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x15085C4
    void Invoke(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.IAsyncResult BeginInvoke(System.String serverName, System.String password, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1509AB8
    System::IAsyncResult* BeginInvoke(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1509BC0
    void EndInvoke(System::IAsyncResult* result);
  }; // PartyMessageHandler/ServerStatusUpdatedDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*, "", "PartyMessageHandler/ServerStatusUpdatedDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::*)(::Il2CppString*, ::Il2CppString*, GlobalNamespace::DiscoveryPolicy, GlobalNamespace::InvitePolicy, int, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* serverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* discoveryPolicy = &::il2cpp_utils::GetClassFromName("", "DiscoveryPolicy")->byval_arg;
    static auto* invitePolicy = &::il2cpp_utils::GetClassFromName("", "InvitePolicy")->byval_arg;
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverName, password, discoveryPolicy, invitePolicy, maxPlayerCount, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::*)(::Il2CppString*, ::Il2CppString*, GlobalNamespace::DiscoveryPolicy, GlobalNamespace::InvitePolicy, int, GlobalNamespace::GameplayServerConfiguration, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* serverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* discoveryPolicy = &::il2cpp_utils::GetClassFromName("", "DiscoveryPolicy")->byval_arg;
    static auto* invitePolicy = &::il2cpp_utils::GetClassFromName("", "InvitePolicy")->byval_arg;
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverName, password, discoveryPolicy, invitePolicy, maxPlayerCount, configuration, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::*)(System::IAsyncResult*)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
