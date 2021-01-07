// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: MasterServer.MessageHandler/<>c__DisplayClass97_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA9CD4
  class MessageHandler::$$c__DisplayClass97_0 : public ::Il2CppObject {
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
    // Creating value type constructor for type: $$c__DisplayClass97_0
    $$c__DisplayClass97_0(MasterServer::MessageHandler* $$4__this_ = {}, uint protocolVersion_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, System::Threading::CancellationToken cancellationToken_ = {}) noexcept : $$4__this{$$4__this_}, protocolVersion{protocolVersion_}, remoteEndPoint{remoteEndPoint_}, cancellationToken{cancellationToken_} {}
    // System.Threading.Tasks.Task <SendMultipartMessageWithRetryAsync>b__0(MasterServer.IMasterServerReliableRequest mm)
    // Offset: 0x1ADC508
    System::Threading::Tasks::Task* $SendMultipartMessageWithRetryAsync$b__0(MasterServer::IMasterServerReliableRequest* mm);
    // public System.Void .ctor()
    // Offset: 0x1ADC500
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::$$c__DisplayClass97_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("$$c__DisplayClass97_0").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::$$c__DisplayClass97_0*, creationType>()));
    }
  }; // MasterServer.MessageHandler/<>c__DisplayClass97_0
  static check_size<sizeof(MessageHandler::$$c__DisplayClass97_0), 40 + sizeof(System::Threading::CancellationToken)> __MasterServer_MessageHandler_$$c__DisplayClass97_0SizeCheck;
  static_assert(sizeof(MessageHandler::$$c__DisplayClass97_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::$$c__DisplayClass97_0*, "MasterServer", "MessageHandler/<>c__DisplayClass97_0");
#pragma pack(pop)