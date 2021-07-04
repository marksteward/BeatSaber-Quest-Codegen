// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IAsyncResult because it is already included!
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebResponse
  class HttpWebResponse;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebAsyncResult
  class WebAsyncResult : public System::Net::SimpleAsyncResult {
    public:
    // private System.Int32 nbytes
    // Size: 0x4
    // Offset: 0x4C
    int nbytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IAsyncResult innerAsyncResult
    // Size: 0x8
    // Offset: 0x50
    System::IAsyncResult* innerAsyncResult;
    // Field size check
    static_assert(sizeof(System::IAsyncResult*) == 0x8);
    // private System.Net.HttpWebResponse response
    // Size: 0x8
    // Offset: 0x58
    System::Net::HttpWebResponse* response;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebResponse*) == 0x8);
    // private System.IO.Stream writeStream
    // Size: 0x8
    // Offset: 0x60
    System::IO::Stream* writeStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 offset
    // Size: 0x4
    // Offset: 0x70
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x74
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean EndCalled
    // Size: 0x1
    // Offset: 0x78
    bool EndCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AsyncWriteAll
    // Size: 0x1
    // Offset: 0x79
    bool AsyncWriteAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Net.HttpWebRequest AsyncObject
    // Size: 0x8
    // Offset: 0x80
    System::Net::HttpWebRequest* AsyncObject;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // Creating value type constructor for type: WebAsyncResult
    WebAsyncResult(int nbytes_ = {}, System::IAsyncResult* innerAsyncResult_ = {}, System::Net::HttpWebResponse* response_ = {}, System::IO::Stream* writeStream_ = {}, ::Array<uint8_t>* buffer_ = {}, int offset_ = {}, int size_ = {}, bool EndCalled_ = {}, bool AsyncWriteAll_ = {}, System::Net::HttpWebRequest* AsyncObject_ = {}) noexcept : nbytes{nbytes_}, innerAsyncResult{innerAsyncResult_}, response{response_}, writeStream{writeStream_}, buffer{buffer_}, offset{offset_}, size{size_}, EndCalled{EndCalled_}, AsyncWriteAll{AsyncWriteAll_}, AsyncObject{AsyncObject_} {}
    // public System.Void .ctor(System.Net.HttpWebRequest request, System.AsyncCallback cb, System.Object state)
    // Offset: 0x15BC300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebAsyncResult* New_ctor(System::Net::HttpWebRequest* request, System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebAsyncResult*, creationType>(request, cb, state)));
    }
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x15BC334
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state, ::Array<uint8_t>* buffer, int offset, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebAsyncResult*, creationType>(cb, state, buffer, offset, size)));
    }
    // System.Void Reset()
    // Offset: 0x15BC374
    void Reset();
    // System.Void SetCompleted(System.Boolean synch, System.Int32 nbytes)
    // Offset: 0x15BC388
    void SetCompleted(bool synch, int nbytes);
    // System.Void SetCompleted(System.Boolean synch, System.IO.Stream writeStream)
    // Offset: 0x15BC398
    void SetCompleted(bool synch, System::IO::Stream* writeStream);
    // System.Void SetCompleted(System.Boolean synch, System.Net.HttpWebResponse response)
    // Offset: 0x15BC3A8
    void SetCompleted(bool synch, System::Net::HttpWebResponse* response);
    // System.Void DoCallback()
    // Offset: 0x15BC3B8
    void DoCallback();
    // System.Int32 get_NBytes()
    // Offset: 0x15BC3C0
    int get_NBytes();
    // System.Void set_NBytes(System.Int32 value)
    // Offset: 0x15BC3C8
    void set_NBytes(int value);
    // System.IAsyncResult get_InnerAsyncResult()
    // Offset: 0x15BC3D0
    System::IAsyncResult* get_InnerAsyncResult();
    // System.Void set_InnerAsyncResult(System.IAsyncResult value)
    // Offset: 0x15BC3D8
    void set_InnerAsyncResult(System::IAsyncResult* value);
    // System.IO.Stream get_WriteStream()
    // Offset: 0x15BC3E0
    System::IO::Stream* get_WriteStream();
    // System.Net.HttpWebResponse get_Response()
    // Offset: 0x15BC3E8
    System::Net::HttpWebResponse* get_Response();
    // System.Byte[] get_Buffer()
    // Offset: 0x15BC3F0
    ::Array<uint8_t>* get_Buffer();
    // System.Int32 get_Offset()
    // Offset: 0x15BC3F8
    int get_Offset();
    // System.Int32 get_Size()
    // Offset: 0x15BC400
    int get_Size();
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x15BC2F8
    // Implemented from: System.Net.SimpleAsyncResult
    // Base method: System.Void SimpleAsyncResult::.ctor(System.AsyncCallback cb, System.Object state)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebAsyncResult*, creationType>(cb, state)));
    }
  }; // System.Net.WebAsyncResult
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebAsyncResult*, "System.Net", "WebAsyncResult");
// Writing MetadataGetter for method: System::Net::WebAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebAsyncResult::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebAsyncResult::*)(bool, int)>(&System::Net::WebAsyncResult::SetCompleted)> {
  const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* nbytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, nbytes});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebAsyncResult::*)(bool, System::IO::Stream*)>(&System::Net::WebAsyncResult::SetCompleted)> {
  const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* writeStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, writeStream});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebAsyncResult::*)(bool, System::Net::HttpWebResponse*)>(&System::Net::WebAsyncResult::SetCompleted)> {
  const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, response});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::DoCallback
// Il2CppName: DoCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::DoCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "DoCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::get_NBytes
// Il2CppName: get_NBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::get_NBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "get_NBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::set_NBytes
// Il2CppName: set_NBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebAsyncResult::*)(int)>(&System::Net::WebAsyncResult::set_NBytes)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "set_NBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::get_InnerAsyncResult
// Il2CppName: get_InnerAsyncResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::get_InnerAsyncResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "get_InnerAsyncResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::set_InnerAsyncResult
// Il2CppName: set_InnerAsyncResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebAsyncResult::*)(System::IAsyncResult*)>(&System::Net::WebAsyncResult::set_InnerAsyncResult)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "set_InnerAsyncResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::get_WriteStream
// Il2CppName: get_WriteStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::get_WriteStream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "get_WriteStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::get_Response
// Il2CppName: get_Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpWebResponse* (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::get_Response)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "get_Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::get_Buffer
// Il2CppName: get_Buffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::get_Buffer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "get_Buffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::get_Offset
// Il2CppName: get_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::get_Offset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "get_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebAsyncResult::*)()>(&System::Net::WebAsyncResult::get_Size)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebAsyncResult*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
