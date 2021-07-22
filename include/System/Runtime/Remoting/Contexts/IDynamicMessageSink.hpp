// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IDynamicMessageSink
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6BA74
  class IDynamicMessageSink : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IDynamicMessageSink
    IDynamicMessageSink() noexcept {}
    // public System.Void ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage replyMsg, System.Boolean bCliSide, System.Boolean bAsync)
    // Offset: 0xFFFFFFFF
    void ProcessMessageFinish(System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync);
    // public System.Void ProcessMessageStart(System.Runtime.Remoting.Messaging.IMessage reqMsg, System.Boolean bCliSide, System.Boolean bAsync)
    // Offset: 0xFFFFFFFF
    void ProcessMessageStart(System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync);
  }; // System.Runtime.Remoting.Contexts.IDynamicMessageSink
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IDynamicMessageSink*, "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish
// Il2CppName: ProcessMessageFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish)> {
  static const MethodInfo* get() {
    static auto* replyMsg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* bCliSide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bAsync = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IDynamicMessageSink*), "ProcessMessageFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{replyMsg, bCliSide, bAsync});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart
// Il2CppName: ProcessMessageStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart)> {
  static const MethodInfo* get() {
    static auto* reqMsg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* bCliSide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bAsync = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IDynamicMessageSink*), "ProcessMessageStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reqMsg, bCliSide, bAsync});
  }
};
