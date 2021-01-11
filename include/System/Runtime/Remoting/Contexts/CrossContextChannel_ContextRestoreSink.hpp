// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Contexts.CrossContextChannel
#include "System/Runtime/Remoting/Contexts/CrossContextChannel.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink
  // [] Offset: FFFFFFFF
  class CrossContextChannel::ContextRestoreSink : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _next
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* next;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.Runtime.Remoting.Contexts.Context _context
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::Contexts::Context* context;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Contexts::Context*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMessage _call
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::IMessage* call;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessage*) == 0x8);
    // Creating value type constructor for type: ContextRestoreSink
    ContextRestoreSink(System::Runtime::Remoting::Messaging::IMessageSink* next_ = {}, System::Runtime::Remoting::Contexts::Context* context_ = {}, System::Runtime::Remoting::Messaging::IMessage* call_ = {}) noexcept : next{next_}, context{context_}, call{call_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink next, System.Runtime.Remoting.Contexts.Context context, System.Runtime.Remoting.Messaging.IMessage call)
    // Offset: 0x11745C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrossContextChannel::ContextRestoreSink* New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* next, System::Runtime::Remoting::Contexts::Context* context, System::Runtime::Remoting::Messaging::IMessage* call) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Contexts::CrossContextChannel::ContextRestoreSink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrossContextChannel::ContextRestoreSink*, creationType>(next, context, call)));
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1174624
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1174904
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink
  static check_size<sizeof(CrossContextChannel::ContextRestoreSink), 32 + sizeof(System::Runtime::Remoting::Messaging::IMessage*)> __System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSinkSizeCheck;
  static_assert(sizeof(CrossContextChannel::ContextRestoreSink) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::CrossContextChannel::ContextRestoreSink*, "System.Runtime.Remoting.Contexts", "CrossContextChannel/ContextRestoreSink");
