// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.AsyncRequest
  class AsyncRequest : public ::Il2CppObject {
    public:
    // System.Runtime.Remoting.Messaging.IMessageSink ReplySink
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* ReplySink;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // System.Runtime.Remoting.Messaging.IMessage MsgRequest
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::IMessage* MsgRequest;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessage*) == 0x8);
    // Creating value type constructor for type: AsyncRequest
    AsyncRequest(System::Runtime::Remoting::Messaging::IMessageSink* ReplySink_ = {}, System::Runtime::Remoting::Messaging::IMessage* MsgRequest_ = {}) noexcept : ReplySink{ReplySink_}, MsgRequest{MsgRequest_} {}
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessage msgRequest, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x13272F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncRequest* New_ctor(System::Runtime::Remoting::Messaging::IMessage* msgRequest, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Channels::AsyncRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncRequest*, creationType>(msgRequest, replySink)));
    }
  }; // System.Runtime.Remoting.Channels.AsyncRequest
  #pragma pack(pop)
  static check_size<sizeof(AsyncRequest), 24 + sizeof(System::Runtime::Remoting::Messaging::IMessage*)> __System_Runtime_Remoting_Channels_AsyncRequestSizeCheck;
  static_assert(sizeof(AsyncRequest) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::AsyncRequest*, "System.Runtime.Remoting.Channels", "AsyncRequest");
