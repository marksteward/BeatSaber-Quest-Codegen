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
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.CADSerializer
  class CADSerializer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CADSerializer
    CADSerializer() noexcept {}
    // static System.Runtime.Remoting.Messaging.IMessage DeserializeMessage(System.IO.MemoryStream mem, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x1423448
    static System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(System::IO::MemoryStream* mem, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
    // static System.IO.MemoryStream SerializeMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x14234A8
    static System::IO::MemoryStream* SerializeMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // static System.Object DeserializeObjectSafe(System.Byte[] mem)
    // Offset: 0x1423580
    static ::Il2CppObject* DeserializeObjectSafe(::Array<uint8_t>* mem);
    // static System.IO.MemoryStream SerializeObject(System.Object obj)
    // Offset: 0x14236A4
    static System::IO::MemoryStream* SerializeObject(::Il2CppObject* obj);
    // static System.Object DeserializeObject(System.IO.MemoryStream mem)
    // Offset: 0x1423618
    static ::Il2CppObject* DeserializeObject(System::IO::MemoryStream* mem);
  }; // System.Runtime.Remoting.Channels.CADSerializer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CADSerializer*, "System.Runtime.Remoting.Channels", "CADSerializer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage
// Il2CppName: DeserializeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage* (*)(System::IO::MemoryStream*, System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage)> {
  static const MethodInfo* get() {
    static auto* mem = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMethodCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "DeserializeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mem, msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage
// Il2CppName: SerializeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::MemoryStream* (*)(System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "SerializeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe
// Il2CppName: DeserializeObjectSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Array<uint8_t>*)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe)> {
  static const MethodInfo* get() {
    static auto* mem = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "DeserializeObjectSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mem});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::SerializeObject
// Il2CppName: SerializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::MemoryStream* (*)(::Il2CppObject*)>(&System::Runtime::Remoting::Channels::CADSerializer::SerializeObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "SerializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject
// Il2CppName: DeserializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::IO::MemoryStream*)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject)> {
  static const MethodInfo* get() {
    static auto* mem = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CADSerializer*), "DeserializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mem});
  }
};
