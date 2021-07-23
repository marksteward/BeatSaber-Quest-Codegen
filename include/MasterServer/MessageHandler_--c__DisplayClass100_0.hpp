// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
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
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.<>c__DisplayClass100_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MessageHandler::$$c__DisplayClass100_0 : public ::Il2CppObject {
    public:
    // public MasterServer.MessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    MasterServer::MessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler*) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x18
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: protocolVersion and: remoteEndPoint
    char __padding1[0x4] = {};
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x20
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass100_0
    $$c__DisplayClass100_0(MasterServer::MessageHandler* $$4__this_ = {}, uint protocolVersion_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, System::Threading::CancellationToken cancellationToken_ = {}) noexcept : $$4__this{$$4__this_}, protocolVersion{protocolVersion_}, remoteEndPoint{remoteEndPoint_}, cancellationToken{cancellationToken_} {}
    // Get instance field: public MasterServer.MessageHandler <>4__this
    MasterServer::MessageHandler* _get_$$4__this();
    // Set instance field: public MasterServer.MessageHandler <>4__this
    void _set_$$4__this(MasterServer::MessageHandler* value);
    // Get instance field: public System.UInt32 protocolVersion
    uint _get_protocolVersion();
    // Set instance field: public System.UInt32 protocolVersion
    void _set_protocolVersion(uint value);
    // Get instance field: public System.Net.IPEndPoint remoteEndPoint
    System::Net::IPEndPoint* _get_remoteEndPoint();
    // Set instance field: public System.Net.IPEndPoint remoteEndPoint
    void _set_remoteEndPoint(System::Net::IPEndPoint* value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // System.Threading.Tasks.Task <SendMultipartMessageWithRetryAsync>b__0(MasterServer.IMasterServerReliableRequest mm)
    // Offset: 0x12D88B8
    System::Threading::Tasks::Task* $SendMultipartMessageWithRetryAsync$b__0(MasterServer::IMasterServerReliableRequest* mm);
    // public System.Void .ctor()
    // Offset: 0x12D88B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::$$c__DisplayClass100_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass100_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::$$c__DisplayClass100_0*, creationType>()));
    }
  }; // MasterServer.MessageHandler/MasterServer.<>c__DisplayClass100_0
  #pragma pack(pop)
  static check_size<sizeof(MessageHandler::$$c__DisplayClass100_0), 40 + sizeof(System::Threading::CancellationToken)> __MasterServer_MessageHandler_$$c__DisplayClass100_0SizeCheck;
  static_assert(sizeof(MessageHandler::$$c__DisplayClass100_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::$$c__DisplayClass100_0*, "MasterServer", "MessageHandler/<>c__DisplayClass100_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::MessageHandler::$$c__DisplayClass100_0::$SendMultipartMessageWithRetryAsync$b__0
// Il2CppName: <SendMultipartMessageWithRetryAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::MessageHandler::$$c__DisplayClass100_0::*)(MasterServer::IMasterServerReliableRequest*)>(&MasterServer::MessageHandler::$$c__DisplayClass100_0::$SendMultipartMessageWithRetryAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* mm = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerReliableRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::$$c__DisplayClass100_0*), "<SendMultipartMessageWithRetryAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mm});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::$$c__DisplayClass100_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
