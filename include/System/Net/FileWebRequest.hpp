// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: IWebProxy
  class IWebProxy;
  // Forward declaring type: WebResponse
  class WebResponse;
  // Forward declaring type: LazyAsyncResult
  class LazyAsyncResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitCallback
  class WaitCallback;
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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FileWebRequest
  class FileWebRequest : public System::Net::WebRequest {
    public:
    // private System.String m_connectionGroupName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_connectionGroupName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int64 m_contentLength
    // Size: 0x8
    // Offset: 0x28
    int64_t m_contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Net.ICredentials m_credentials
    // Size: 0x8
    // Offset: 0x30
    System::Net::ICredentials* m_credentials;
    // Field size check
    static_assert(sizeof(System::Net::ICredentials*) == 0x8);
    // private System.IO.FileAccess m_fileAccess
    // Size: 0x4
    // Offset: 0x38
    System::IO::FileAccess m_fileAccess;
    // Field size check
    static_assert(sizeof(System::IO::FileAccess) == 0x4);
    // Padding between fields: m_fileAccess and: m_headers
    char __padding3[0x4] = {};
    // private System.Net.WebHeaderCollection m_headers
    // Size: 0x8
    // Offset: 0x40
    System::Net::WebHeaderCollection* m_headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // private System.String m_method
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* m_method;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_preauthenticate
    // Size: 0x1
    // Offset: 0x50
    bool m_preauthenticate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_preauthenticate and: m_proxy
    char __padding6[0x7] = {};
    // private System.Net.IWebProxy m_proxy
    // Size: 0x8
    // Offset: 0x58
    System::Net::IWebProxy* m_proxy;
    // Field size check
    static_assert(sizeof(System::Net::IWebProxy*) == 0x8);
    // private System.Threading.ManualResetEvent m_readerEvent
    // Size: 0x8
    // Offset: 0x60
    System::Threading::ManualResetEvent* m_readerEvent;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean m_readPending
    // Size: 0x1
    // Offset: 0x68
    bool m_readPending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_readPending and: m_response
    char __padding9[0x7] = {};
    // private System.Net.WebResponse m_response
    // Size: 0x8
    // Offset: 0x70
    System::Net::WebResponse* m_response;
    // Field size check
    static_assert(sizeof(System::Net::WebResponse*) == 0x8);
    // private System.IO.Stream m_stream
    // Size: 0x8
    // Offset: 0x78
    System::IO::Stream* m_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Boolean m_syncHint
    // Size: 0x1
    // Offset: 0x80
    bool m_syncHint;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_syncHint and: m_timeout
    char __padding12[0x3] = {};
    // private System.Int32 m_timeout
    // Size: 0x4
    // Offset: 0x84
    int m_timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Uri m_uri
    // Size: 0x8
    // Offset: 0x88
    System::Uri* m_uri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Boolean m_writePending
    // Size: 0x1
    // Offset: 0x90
    bool m_writePending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_writing
    // Size: 0x1
    // Offset: 0x91
    bool m_writing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_writing and: m_WriteAResult
    char __padding16[0x6] = {};
    // private System.Net.LazyAsyncResult m_WriteAResult
    // Size: 0x8
    // Offset: 0x98
    System::Net::LazyAsyncResult* m_WriteAResult;
    // Field size check
    static_assert(sizeof(System::Net::LazyAsyncResult*) == 0x8);
    // private System.Net.LazyAsyncResult m_ReadAResult
    // Size: 0x8
    // Offset: 0xA0
    System::Net::LazyAsyncResult* m_ReadAResult;
    // Field size check
    static_assert(sizeof(System::Net::LazyAsyncResult*) == 0x8);
    // private System.Int32 m_Aborted
    // Size: 0x4
    // Offset: 0xA8
    int m_Aborted;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FileWebRequest
    FileWebRequest(::Il2CppString* m_connectionGroupName_ = {}, int64_t m_contentLength_ = {}, System::Net::ICredentials* m_credentials_ = {}, System::IO::FileAccess m_fileAccess_ = {}, System::Net::WebHeaderCollection* m_headers_ = {}, ::Il2CppString* m_method_ = {}, bool m_preauthenticate_ = {}, System::Net::IWebProxy* m_proxy_ = {}, System::Threading::ManualResetEvent* m_readerEvent_ = {}, bool m_readPending_ = {}, System::Net::WebResponse* m_response_ = {}, System::IO::Stream* m_stream_ = {}, bool m_syncHint_ = {}, int m_timeout_ = {}, System::Uri* m_uri_ = {}, bool m_writePending_ = {}, bool m_writing_ = {}, System::Net::LazyAsyncResult* m_WriteAResult_ = {}, System::Net::LazyAsyncResult* m_ReadAResult_ = {}, int m_Aborted_ = {}) noexcept : m_connectionGroupName{m_connectionGroupName_}, m_contentLength{m_contentLength_}, m_credentials{m_credentials_}, m_fileAccess{m_fileAccess_}, m_headers{m_headers_}, m_method{m_method_}, m_preauthenticate{m_preauthenticate_}, m_proxy{m_proxy_}, m_readerEvent{m_readerEvent_}, m_readPending{m_readPending_}, m_response{m_response_}, m_stream{m_stream_}, m_syncHint{m_syncHint_}, m_timeout{m_timeout_}, m_uri{m_uri_}, m_writePending{m_writePending_}, m_writing{m_writing_}, m_WriteAResult{m_WriteAResult_}, m_ReadAResult{m_ReadAResult_}, m_Aborted{m_Aborted_} {}
    // Get static field: static private System.Threading.WaitCallback s_GetRequestStreamCallback
    static System::Threading::WaitCallback* _get_s_GetRequestStreamCallback();
    // Set static field: static private System.Threading.WaitCallback s_GetRequestStreamCallback
    static void _set_s_GetRequestStreamCallback(System::Threading::WaitCallback* value);
    // Get static field: static private System.Threading.WaitCallback s_GetResponseCallback
    static System::Threading::WaitCallback* _get_s_GetResponseCallback();
    // Set static field: static private System.Threading.WaitCallback s_GetResponseCallback
    static void _set_s_GetResponseCallback(System::Threading::WaitCallback* value);
    // System.Void .ctor(System.Uri uri)
    // Offset: 0x16BA4B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebRequest* New_ctor(System::Uri* uri) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FileWebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebRequest*, creationType>(uri)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16BA8AC
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // System.Boolean get_Aborted()
    // Offset: 0x16BAACC
    bool get_Aborted();
    // private System.Boolean CanGetRequestStream()
    // Offset: 0x16BB060
    bool CanGetRequestStream();
    // static private System.Void GetRequestStreamCallback(System.Object state)
    // Offset: 0x16BBC14
    static void GetRequestStreamCallback(::Il2CppObject* state);
    // static private System.Void GetResponseCallback(System.Object state)
    // Offset: 0x16BBECC
    static void GetResponseCallback(::Il2CppObject* state);
    // System.Void UnblockReader()
    // Offset: 0x16BC41C
    void UnblockReader();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16BA608
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebRequest* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FileWebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebRequest*, creationType>(serializationInfo, streamingContext)));
    }
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16BA8B8
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void set_ConnectionGroupName(System.String value)
    // Offset: 0x16BAADC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_ConnectionGroupName(System.String value)
    void set_ConnectionGroupName(::Il2CppString* value);
    // public override System.Int64 get_ContentLength()
    // Offset: 0x16BAAE4
    // Implemented from: System.Net.WebRequest
    // Base method: System.Int64 WebRequest::get_ContentLength()
    int64_t get_ContentLength();
    // public override System.Void set_ContentLength(System.Int64 value)
    // Offset: 0x16BAAEC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_ContentLength(System.Int64 value)
    void set_ContentLength(int64_t value);
    // public override System.Net.ICredentials get_Credentials()
    // Offset: 0x16BAB9C
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.ICredentials WebRequest::get_Credentials()
    System::Net::ICredentials* get_Credentials();
    // public override System.Void set_Credentials(System.Net.ICredentials value)
    // Offset: 0x16BABA4
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Credentials(System.Net.ICredentials value)
    void set_Credentials(System::Net::ICredentials* value);
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x16BABAC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebHeaderCollection WebRequest::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.String get_Method()
    // Offset: 0x16BABB4
    // Implemented from: System.Net.WebRequest
    // Base method: System.String WebRequest::get_Method()
    ::Il2CppString* get_Method();
    // public override System.Void set_Method(System.String value)
    // Offset: 0x16BABBC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Method(System.String value)
    void set_Method(::Il2CppString* value);
    // public override System.Void set_PreAuthenticate(System.Boolean value)
    // Offset: 0x16BAC98
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_PreAuthenticate(System.Boolean value)
    void set_PreAuthenticate(bool value);
    // public override System.Net.IWebProxy get_Proxy()
    // Offset: 0x16BACA4
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.IWebProxy WebRequest::get_Proxy()
    System::Net::IWebProxy* get_Proxy();
    // public override System.Void set_Proxy(System.Net.IWebProxy value)
    // Offset: 0x16BACAC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Proxy(System.Net.IWebProxy value)
    void set_Proxy(System::Net::IWebProxy* value);
    // public override System.Int32 get_Timeout()
    // Offset: 0x16BACB4
    // Implemented from: System.Net.WebRequest
    // Base method: System.Int32 WebRequest::get_Timeout()
    int get_Timeout();
    // public override System.Uri get_RequestUri()
    // Offset: 0x16BACBC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Uri WebRequest::get_RequestUri()
    System::Uri* get_RequestUri();
    // public override System.IAsyncResult BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    // Offset: 0x16BACC4
    // Implemented from: System.Net.WebRequest
    // Base method: System.IAsyncResult WebRequest::BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginGetRequestStream(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.IAsyncResult BeginGetResponse(System.AsyncCallback callback, System.Object state)
    // Offset: 0x16BB0E4
    // Implemented from: System.Net.WebRequest
    // Base method: System.IAsyncResult WebRequest::BeginGetResponse(System.AsyncCallback callback, System.Object state)
    System::IAsyncResult* BeginGetResponse(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.IO.Stream EndGetRequestStream(System.IAsyncResult asyncResult)
    // Offset: 0x16BB3C0
    // Implemented from: System.Net.WebRequest
    // Base method: System.IO.Stream WebRequest::EndGetRequestStream(System.IAsyncResult asyncResult)
    System::IO::Stream* EndGetRequestStream(System::IAsyncResult* asyncResult);
    // public override System.Net.WebResponse EndGetResponse(System.IAsyncResult asyncResult)
    // Offset: 0x16BB634
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebResponse WebRequest::EndGetResponse(System.IAsyncResult asyncResult)
    System::Net::WebResponse* EndGetResponse(System::IAsyncResult* asyncResult);
    // public override System.Net.WebResponse GetResponse()
    // Offset: 0x16BB8A8
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebResponse WebRequest::GetResponse()
    System::Net::WebResponse* GetResponse();
    // public override System.Boolean get_UseDefaultCredentials()
    // Offset: 0x16BC4B4
    // Implemented from: System.Net.WebRequest
    // Base method: System.Boolean WebRequest::get_UseDefaultCredentials()
    bool get_UseDefaultCredentials();
    // public override System.Void set_UseDefaultCredentials(System.Boolean value)
    // Offset: 0x16BC4F8
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_UseDefaultCredentials(System.Boolean value)
    void set_UseDefaultCredentials(bool value);
    // public override System.Void Abort()
    // Offset: 0x16BC53C
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::Abort()
    void Abort();
    // static private System.Void .cctor()
    // Offset: 0x16BC8B0
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::.cctor()
    static void _cctor();
  }; // System.Net.FileWebRequest
  #pragma pack(pop)
  static check_size<sizeof(FileWebRequest), 168 + sizeof(int)> __System_Net_FileWebRequestSizeCheck;
  static_assert(sizeof(FileWebRequest) == 0xAC);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FileWebRequest*, "System.Net", "FileWebRequest");
// Writing MetadataGetter for method: System::Net::FileWebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Aborted
// Il2CppName: get_Aborted
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::CanGetRequestStream
// Il2CppName: CanGetRequestStream
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetRequestStreamCallback
// Il2CppName: GetRequestStreamCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetResponseCallback
// Il2CppName: GetResponseCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::UnblockReader
// Il2CppName: UnblockReader
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetObjectData
// Il2CppName: GetObjectData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_ConnectionGroupName
// Il2CppName: set_ConnectionGroupName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_ContentLength
// Il2CppName: get_ContentLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_ContentLength
// Il2CppName: set_ContentLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Credentials
// Il2CppName: get_Credentials
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_Credentials
// Il2CppName: set_Credentials
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Headers
// Il2CppName: get_Headers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Method
// Il2CppName: get_Method
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_Method
// Il2CppName: set_Method
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_PreAuthenticate
// Il2CppName: set_PreAuthenticate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Proxy
// Il2CppName: get_Proxy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_Proxy
// Il2CppName: set_Proxy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Timeout
// Il2CppName: get_Timeout
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_RequestUri
// Il2CppName: get_RequestUri
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::BeginGetRequestStream
// Il2CppName: BeginGetRequestStream
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::BeginGetResponse
// Il2CppName: BeginGetResponse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::EndGetRequestStream
// Il2CppName: EndGetRequestStream
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::EndGetResponse
// Il2CppName: EndGetResponse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetResponse
// Il2CppName: GetResponse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_UseDefaultCredentials
// Il2CppName: get_UseDefaultCredentials
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_UseDefaultCredentials
// Il2CppName: set_UseDefaultCredentials
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::Abort
// Il2CppName: Abort
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::FileWebRequest::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
