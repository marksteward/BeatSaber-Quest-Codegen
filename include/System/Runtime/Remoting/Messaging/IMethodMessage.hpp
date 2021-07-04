// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.IMethodMessage
  // [ComVisibleAttribute] Offset: D7E6D4
  class IMethodMessage/*, public System::Runtime::Remoting::Messaging::IMessage*/ {
    public:
    // Creating value type constructor for type: IMethodMessage
    IMethodMessage() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessage
    operator System::Runtime::Remoting::Messaging::IMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessage*>(this);
    }
    // public System.Int32 get_ArgCount()
    // Offset: 0xFFFFFFFF
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_MethodSignature();
    // public System.String get_TypeName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Uri();
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* GetArg(int argNum);
  }; // System.Runtime.Remoting.Messaging.IMethodMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IMethodMessage*, "System.Runtime.Remoting.Messaging", "IMethodMessage");
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_ArgCount
// Il2CppName: get_ArgCount
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_Args
// Il2CppName: get_Args
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodBase
// Il2CppName: get_MethodBase
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodName
// Il2CppName: get_MethodName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodSignature
// Il2CppName: get_MethodSignature
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_TypeName
// Il2CppName: get_TypeName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_Uri
// Il2CppName: get_Uri
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::GetArg
// Il2CppName: GetArg
// Cannot perform method pointer template specialization from operators!
