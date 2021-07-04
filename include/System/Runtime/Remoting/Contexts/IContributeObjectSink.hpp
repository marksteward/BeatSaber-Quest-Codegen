// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContributeObjectSink
  // [ComVisibleAttribute] Offset: D7E2D8
  class IContributeObjectSink {
    public:
    // Creating value type constructor for type: IContributeObjectSink
    IContributeObjectSink() noexcept {}
    // public System.Runtime.Remoting.Messaging.IMessageSink GetObjectSink(System.MarshalByRefObject obj, System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageSink* GetObjectSink(System::MarshalByRefObject* obj, System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
  }; // System.Runtime.Remoting.Contexts.IContributeObjectSink
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeObjectSink*, "System.Runtime.Remoting.Contexts", "IContributeObjectSink");
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContributeObjectSink::GetObjectSink
// Il2CppName: GetObjectSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::Contexts::IContributeObjectSink::*)(System::MarshalByRefObject*, System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Contexts::IContributeObjectSink::GetObjectSink)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "MarshalByRefObject")->byval_arg;
    static auto* nextSink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContributeObjectSink*), "GetObjectSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, nextSink});
  }
};
