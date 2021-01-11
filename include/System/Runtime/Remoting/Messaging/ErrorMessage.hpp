// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ErrorMessage
  // [] Offset: FFFFFFFF
  class ErrorMessage : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMethodCallMessage*/ {
    public:
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ErrorMessage
    ErrorMessage(::Il2CppString* uri_ = {}) noexcept : uri{uri_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodCallMessage
    operator System::Runtime::Remoting::Messaging::IMethodCallMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodCallMessage*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return uri;
    }
    // public System.Void .ctor()
    // Offset: 0x116DA8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::ErrorMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorMessage*, creationType>()));
    }
    // public System.Int32 get_ArgCount()
    // Offset: 0x117C5C4
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Int32 IMethodMessage::get_ArgCount()
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x117C5CC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object[] IMethodMessage::get_Args()
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x117C5D4
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Reflection.MethodBase IMethodMessage::get_MethodBase()
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x117C5DC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_MethodName()
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x117C624
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::get_MethodSignature()
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x117C62C
    // Implemented from: System.Runtime.Remoting.Messaging.IMessage
    // Base method: System.Collections.IDictionary IMessage::get_Properties()
    System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0x117C634
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x117C67C
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_Uri()
    ::Il2CppString* get_Uri();
    // public System.Object GetArg(System.Int32 arg_num)
    // Offset: 0x117C684
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::GetArg(System.Int32 arg_num)
    ::Il2CppObject* GetArg(int arg_num);
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x117C68C
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Runtime.Remoting.Messaging.LogicalCallContext IMethodMessage::get_LogicalCallContext()
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
  }; // System.Runtime.Remoting.Messaging.ErrorMessage
  static check_size<sizeof(ErrorMessage), 16 + sizeof(::Il2CppString*)> __System_Runtime_Remoting_Messaging_ErrorMessageSizeCheck;
  static_assert(sizeof(ErrorMessage) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ErrorMessage*, "System.Runtime.Remoting.Messaging", "ErrorMessage");
