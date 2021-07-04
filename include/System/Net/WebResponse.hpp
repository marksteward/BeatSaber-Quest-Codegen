// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebResponse
  class WebResponse : public System::MarshalByRefObject/*, public System::Runtime::Serialization::ISerializable, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: WebResponse
    WebResponse() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x15CC9C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebResponse*, creationType>(serializationInfo, streamingContext)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x15CC9C8
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x15CC9D4
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public System.Void Close()
    // Offset: 0x15CC9D8
    void Close();
    // public System.Void Dispose()
    // Offset: 0x15CC9DC
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x15CCA58
    void Dispose(bool disposing);
    // public System.IO.Stream GetResponseStream()
    // Offset: 0x15CCB30
    System::IO::Stream* GetResponseStream();
    // public System.Uri get_ResponseUri()
    // Offset: 0x15CCB78
    System::Uri* get_ResponseUri();
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x15CCBC0
    System::Net::WebHeaderCollection* get_Headers();
    // protected System.Void .ctor()
    // Offset: 0x15CC9B8
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebResponse*, creationType>()));
    }
  }; // System.Net.WebResponse
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebResponse*, "System.Net", "WebResponse");
// Writing MetadataGetter for method: System::Net::WebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebResponse::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponse::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponse::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebResponse::GetObjectData)> {
  const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponse::*)()>(&System::Net::WebResponse::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponse::*)()>(&System::Net::WebResponse::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponse::*)(bool)>(&System::Net::WebResponse::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::GetResponseStream
// Il2CppName: GetResponseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::WebResponse::*)()>(&System::Net::WebResponse::GetResponseStream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "GetResponseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::get_ResponseUri
// Il2CppName: get_ResponseUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::WebResponse::*)()>(&System::Net::WebResponse::get_ResponseUri)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "get_ResponseUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection* (System::Net::WebResponse::*)()>(&System::Net::WebResponse::get_Headers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
