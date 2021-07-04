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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
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
  // Autogenerated type: PartyMessageHandler/ConnectToMasterServerDelegate
  class PartyMessageHandler::ConnectToMasterServerDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ConnectToMasterServerDelegate
    ConnectToMasterServerDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1509658
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler::ConnectToMasterServerDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler::ConnectToMasterServerDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.IPEndPoint endPoint, System.String serverName, System.String password, System.String secret, System.String userId, System.String userName, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x1508F48
    void Invoke(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.IAsyncResult BeginInvoke(System.Net.IPEndPoint endPoint, System.String serverName, System.String password, System.String secret, System.String userId, System.String userName, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1509668
    System::IAsyncResult* BeginInvoke(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x150978C
    void EndInvoke(System::IAsyncResult* result);
  }; // PartyMessageHandler/ConnectToMasterServerDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*, "", "PartyMessageHandler/ConnectToMasterServerDelegate");
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::*)(System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, GlobalNamespace::DiscoveryPolicy, GlobalNamespace::InvitePolicy, int, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::Invoke)> {
  const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* serverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* discoveryPolicy = &::il2cpp_utils::GetClassFromName("", "DiscoveryPolicy")->byval_arg;
    static auto* invitePolicy = &::il2cpp_utils::GetClassFromName("", "InvitePolicy")->byval_arg;
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, serverName, password, secret, userId, userName, discoveryPolicy, invitePolicy, maxPlayerCount, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::*)(System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, GlobalNamespace::DiscoveryPolicy, GlobalNamespace::InvitePolicy, int, GlobalNamespace::GameplayServerConfiguration, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* serverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* discoveryPolicy = &::il2cpp_utils::GetClassFromName("", "DiscoveryPolicy")->byval_arg;
    static auto* invitePolicy = &::il2cpp_utils::GetClassFromName("", "InvitePolicy")->byval_arg;
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, serverName, password, secret, userId, userName, discoveryPolicy, invitePolicy, maxPlayerCount, configuration, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::*)(System::IAsyncResult*)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
