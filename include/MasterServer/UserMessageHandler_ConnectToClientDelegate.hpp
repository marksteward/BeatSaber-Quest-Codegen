// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler/ConnectToClientDelegate
  class UserMessageHandler::ConnectToClientDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ConnectToClientDelegate
    ConnectToClientDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12E8E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler::ConnectToClientDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::ConnectToClientDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler::ConnectToClientDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.Byte[] preMasterSecret, System.Byte[] myRandom, System.Byte[] remoteRandom, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer)
    // Offset: 0x12E84D8
    void Invoke(::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* myRandom, ::Array<uint8_t>* remoteRandom, bool isConnectionOwner, bool isDedicatedServer);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.Byte[] preMasterSecret, System.Byte[] myRandom, System.Byte[] remoteRandom, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12E8E1C
    System::IAsyncResult* BeginInvoke(::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* myRandom, ::Array<uint8_t>* remoteRandom, bool isConnectionOwner, bool isDedicatedServer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12E8F08
    void EndInvoke(System::IAsyncResult* result);
  }; // MasterServer.UserMessageHandler/ConnectToClientDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::ConnectToClientDelegate*, "MasterServer", "UserMessageHandler/ConnectToClientDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::ConnectToClientDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::ConnectToClientDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::ConnectToClientDelegate::*)(::Il2CppString*, ::Il2CppString*, System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint8_t>*, bool, bool)>(&MasterServer::UserMessageHandler::ConnectToClientDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* myRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* remoteRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDedicatedServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::ConnectToClientDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, remoteEndPoint, preMasterSecret, myRandom, remoteRandom, isConnectionOwner, isDedicatedServer});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::ConnectToClientDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (MasterServer::UserMessageHandler::ConnectToClientDelegate::*)(::Il2CppString*, ::Il2CppString*, System::Net::IPEndPoint*, ::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint8_t>*, bool, bool, System::AsyncCallback*, ::Il2CppObject*)>(&MasterServer::UserMessageHandler::ConnectToClientDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* myRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* remoteRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDedicatedServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::ConnectToClientDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, remoteEndPoint, preMasterSecret, myRandom, remoteRandom, isConnectionOwner, isDedicatedServer, callback, object});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::ConnectToClientDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::ConnectToClientDelegate::*)(System::IAsyncResult*)>(&MasterServer::UserMessageHandler::ConnectToClientDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::ConnectToClientDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
