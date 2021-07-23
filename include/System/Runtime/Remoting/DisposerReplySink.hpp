// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.DisposerReplySink
  // [TokenAttribute] Offset: FFFFFFFF
  class DisposerReplySink : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _next
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* next;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.IDisposable _disposable
    // Size: 0x8
    // Offset: 0x18
    System::IDisposable* disposable;
    // Field size check
    static_assert(sizeof(System::IDisposable*) == 0x8);
    // Creating value type constructor for type: DisposerReplySink
    DisposerReplySink(System::Runtime::Remoting::Messaging::IMessageSink* next_ = {}, System::IDisposable* disposable_ = {}) noexcept : next{next_}, disposable{disposable_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Get instance field: private System.Runtime.Remoting.Messaging.IMessageSink _next
    System::Runtime::Remoting::Messaging::IMessageSink* _get__next();
    // Set instance field: private System.Runtime.Remoting.Messaging.IMessageSink _next
    void _set__next(System::Runtime::Remoting::Messaging::IMessageSink* value);
    // Get instance field: private System.IDisposable _disposable
    System::IDisposable* _get__disposable();
    // Set instance field: private System.IDisposable _disposable
    void _set__disposable(System::IDisposable* value);
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink next, System.IDisposable disposable)
    // Offset: 0x19F098C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposerReplySink* New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* next, System::IDisposable* disposable) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::DisposerReplySink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposerReplySink*, creationType>(next, disposable)));
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x19F09C4
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x19F0AF4
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.DisposerReplySink
  #pragma pack(pop)
  static check_size<sizeof(DisposerReplySink), 24 + sizeof(System::IDisposable*)> __System_Runtime_Remoting_DisposerReplySinkSizeCheck;
  static_assert(sizeof(DisposerReplySink) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::DisposerReplySink*, "System.Runtime.Remoting", "DisposerReplySink");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::DisposerReplySink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::DisposerReplySink::SyncProcessMessage
// Il2CppName: SyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::DisposerReplySink::*)(System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::DisposerReplySink::SyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::DisposerReplySink*), "SyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::DisposerReplySink::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::DisposerReplySink::*)(System::Runtime::Remoting::Messaging::IMessage*, System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::DisposerReplySink::AsyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* replySink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::DisposerReplySink*), "AsyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, replySink});
  }
};
