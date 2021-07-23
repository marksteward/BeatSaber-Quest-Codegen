// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NameValueCollection
  class NameValueCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x83
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerRequest : public ::Il2CppObject {
    public:
    // private System.String[] accept_types
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* accept_types;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int64 content_length
    // Size: 0x8
    // Offset: 0x18
    int64_t content_length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean cl_set
    // Size: 0x1
    // Offset: 0x20
    bool cl_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cl_set and: cookies
    char __padding2[0x7] = {};
    // private System.Net.CookieCollection cookies
    // Size: 0x8
    // Offset: 0x28
    System::Net::CookieCollection* cookies;
    // Field size check
    static_assert(sizeof(System::Net::CookieCollection*) == 0x8);
    // private System.Net.WebHeaderCollection headers
    // Size: 0x8
    // Offset: 0x30
    System::Net::WebHeaderCollection* headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* method;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.IO.Stream input_stream
    // Size: 0x8
    // Offset: 0x40
    System::IO::Stream* input_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x48
    System::Version* version;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // private System.Collections.Specialized.NameValueCollection query_string
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Specialized::NameValueCollection* query_string;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameValueCollection*) == 0x8);
    // private System.String raw_url
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* raw_url;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Uri url
    // Size: 0x8
    // Offset: 0x60
    System::Uri* url;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Uri referrer
    // Size: 0x8
    // Offset: 0x68
    System::Uri* referrer;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.String[] user_languages
    // Size: 0x8
    // Offset: 0x70
    ::Array<::Il2CppString*>* user_languages;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x78
    System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerContext*) == 0x8);
    // private System.Boolean is_chunked
    // Size: 0x1
    // Offset: 0x80
    bool is_chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean ka_set
    // Size: 0x1
    // Offset: 0x81
    bool ka_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean keep_alive
    // Size: 0x1
    // Offset: 0x82
    bool keep_alive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HttpListenerRequest
    HttpListenerRequest(::Array<::Il2CppString*>* accept_types_ = {}, int64_t content_length_ = {}, bool cl_set_ = {}, System::Net::CookieCollection* cookies_ = {}, System::Net::WebHeaderCollection* headers_ = {}, ::Il2CppString* method_ = {}, System::IO::Stream* input_stream_ = {}, System::Version* version_ = {}, System::Collections::Specialized::NameValueCollection* query_string_ = {}, ::Il2CppString* raw_url_ = {}, System::Uri* url_ = {}, System::Uri* referrer_ = {}, ::Array<::Il2CppString*>* user_languages_ = {}, System::Net::HttpListenerContext* context_ = {}, bool is_chunked_ = {}, bool ka_set_ = {}, bool keep_alive_ = {}) noexcept : accept_types{accept_types_}, content_length{content_length_}, cl_set{cl_set_}, cookies{cookies_}, headers{headers_}, method{method_}, input_stream{input_stream_}, version{version_}, query_string{query_string_}, raw_url{raw_url_}, url{url_}, referrer{referrer_}, user_languages{user_languages_}, context{context_}, is_chunked{is_chunked_}, ka_set{ka_set_}, keep_alive{keep_alive_} {}
    // Get static field: static private System.Byte[] _100continue
    static ::Array<uint8_t>* _get__100continue();
    // Set static field: static private System.Byte[] _100continue
    static void _set__100continue(::Array<uint8_t>* value);
    // Get static field: static private System.Char[] separators
    static ::Array<::Il2CppChar>* _get_separators();
    // Set static field: static private System.Char[] separators
    static void _set_separators(::Array<::Il2CppChar>* value);
    // Get instance field: private System.String[] accept_types
    ::Array<::Il2CppString*>* _get_accept_types();
    // Set instance field: private System.String[] accept_types
    void _set_accept_types(::Array<::Il2CppString*>* value);
    // Get instance field: private System.Int64 content_length
    int64_t _get_content_length();
    // Set instance field: private System.Int64 content_length
    void _set_content_length(int64_t value);
    // Get instance field: private System.Boolean cl_set
    bool _get_cl_set();
    // Set instance field: private System.Boolean cl_set
    void _set_cl_set(bool value);
    // Get instance field: private System.Net.CookieCollection cookies
    System::Net::CookieCollection* _get_cookies();
    // Set instance field: private System.Net.CookieCollection cookies
    void _set_cookies(System::Net::CookieCollection* value);
    // Get instance field: private System.Net.WebHeaderCollection headers
    System::Net::WebHeaderCollection* _get_headers();
    // Set instance field: private System.Net.WebHeaderCollection headers
    void _set_headers(System::Net::WebHeaderCollection* value);
    // Get instance field: private System.String method
    ::Il2CppString* _get_method();
    // Set instance field: private System.String method
    void _set_method(::Il2CppString* value);
    // Get instance field: private System.IO.Stream input_stream
    System::IO::Stream* _get_input_stream();
    // Set instance field: private System.IO.Stream input_stream
    void _set_input_stream(System::IO::Stream* value);
    // Get instance field: private System.Version version
    System::Version* _get_version();
    // Set instance field: private System.Version version
    void _set_version(System::Version* value);
    // Get instance field: private System.Collections.Specialized.NameValueCollection query_string
    System::Collections::Specialized::NameValueCollection* _get_query_string();
    // Set instance field: private System.Collections.Specialized.NameValueCollection query_string
    void _set_query_string(System::Collections::Specialized::NameValueCollection* value);
    // Get instance field: private System.String raw_url
    ::Il2CppString* _get_raw_url();
    // Set instance field: private System.String raw_url
    void _set_raw_url(::Il2CppString* value);
    // Get instance field: private System.Uri url
    System::Uri* _get_url();
    // Set instance field: private System.Uri url
    void _set_url(System::Uri* value);
    // Get instance field: private System.Uri referrer
    System::Uri* _get_referrer();
    // Set instance field: private System.Uri referrer
    void _set_referrer(System::Uri* value);
    // Get instance field: private System.String[] user_languages
    ::Array<::Il2CppString*>* _get_user_languages();
    // Set instance field: private System.String[] user_languages
    void _set_user_languages(::Array<::Il2CppString*>* value);
    // Get instance field: private System.Net.HttpListenerContext context
    System::Net::HttpListenerContext* _get_context();
    // Set instance field: private System.Net.HttpListenerContext context
    void _set_context(System::Net::HttpListenerContext* value);
    // Get instance field: private System.Boolean is_chunked
    bool _get_is_chunked();
    // Set instance field: private System.Boolean is_chunked
    void _set_is_chunked(bool value);
    // Get instance field: private System.Boolean ka_set
    bool _get_ka_set();
    // Set instance field: private System.Boolean ka_set
    void _set_ka_set(bool value);
    // Get instance field: private System.Boolean keep_alive
    bool _get_keep_alive();
    // Set instance field: private System.Boolean keep_alive
    void _set_keep_alive(bool value);
    // public System.Boolean get_HasEntityBody()
    // Offset: 0x1635DD8
    bool get_HasEntityBody();
    // public System.Collections.Specialized.NameValueCollection get_Headers()
    // Offset: 0x1635EB0
    System::Collections::Specialized::NameValueCollection* get_Headers();
    // public System.IO.Stream get_InputStream()
    // Offset: 0x1635DFC
    System::IO::Stream* get_InputStream();
    // public System.Boolean get_IsSecureConnection()
    // Offset: 0x1635C84
    bool get_IsSecureConnection();
    // public System.Boolean get_KeepAlive()
    // Offset: 0x1631BB4
    bool get_KeepAlive();
    // public System.Net.IPEndPoint get_LocalEndPoint()
    // Offset: 0x1635CAC
    System::Net::IPEndPoint* get_LocalEndPoint();
    // public System.Version get_ProtocolVersion()
    // Offset: 0x1635EB8
    System::Version* get_ProtocolVersion();
    // public System.Uri get_Url()
    // Offset: 0x1635EC0
    System::Uri* get_Url();
    // public System.String get_UserHostAddress()
    // Offset: 0x1635C60
    ::Il2CppString* get_UserHostAddress();
    // public System.String get_UserHostName()
    // Offset: 0x1635C04
    ::Il2CppString* get_UserHostName();
    // System.Void .ctor(System.Net.HttpListenerContext context)
    // Offset: 0x1634A24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerRequest* New_ctor(System::Net::HttpListenerContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerRequest*, creationType>(context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1635EC8
    static void _cctor();
    // System.Void SetRequestLine(System.String req)
    // Offset: 0x16309B4
    void SetRequestLine(::Il2CppString* req);
    // private System.Void CreateQueryString(System.String query)
    // Offset: 0x163576C
    void CreateQueryString(::Il2CppString* query);
    // static private System.Boolean MaybeUri(System.String s)
    // Offset: 0x16359C4
    static bool MaybeUri(::Il2CppString* s);
    // static private System.Boolean IsPredefinedScheme(System.String scheme)
    // Offset: 0x1635A7C
    static bool IsPredefinedScheme(::Il2CppString* scheme);
    // System.Void FinishInitialization()
    // Offset: 0x162FE90
    void FinishInitialization();
    // static System.String Unquote(System.String str)
    // Offset: 0x1635D68
    static ::Il2CppString* Unquote(::Il2CppString* str);
    // System.Void AddHeader(System.String header)
    // Offset: 0x1630CB8
    void AddHeader(::Il2CppString* header);
    // System.Boolean FlushInput()
    // Offset: 0x1631D2C
    bool FlushInput();
  }; // System.Net.HttpListenerRequest
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerRequest), 130 + sizeof(bool)> __System_Net_HttpListenerRequestSizeCheck;
  static_assert(sizeof(HttpListenerRequest) == 0x83);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerRequest*, "System.Net", "HttpListenerRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_HasEntityBody
// Il2CppName: get_HasEntityBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_HasEntityBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_HasEntityBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Specialized::NameValueCollection* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_InputStream
// Il2CppName: get_InputStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_InputStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_InputStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_IsSecureConnection
// Il2CppName: get_IsSecureConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_IsSecureConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_IsSecureConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_KeepAlive
// Il2CppName: get_KeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_KeepAlive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_KeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_LocalEndPoint
// Il2CppName: get_LocalEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_LocalEndPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_LocalEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Version* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_ProtocolVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_Url
// Il2CppName: get_Url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_Url)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_Url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_UserHostAddress
// Il2CppName: get_UserHostAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_UserHostAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_UserHostAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_UserHostName
// Il2CppName: get_UserHostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_UserHostName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_UserHostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpListenerRequest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::SetRequestLine
// Il2CppName: SetRequestLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)(::Il2CppString*)>(&System::Net::HttpListenerRequest::SetRequestLine)> {
  static const MethodInfo* get() {
    static auto* req = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "SetRequestLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{req});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::CreateQueryString
// Il2CppName: CreateQueryString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)(::Il2CppString*)>(&System::Net::HttpListenerRequest::CreateQueryString)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "CreateQueryString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::MaybeUri
// Il2CppName: MaybeUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::HttpListenerRequest::MaybeUri)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "MaybeUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::IsPredefinedScheme
// Il2CppName: IsPredefinedScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::HttpListenerRequest::IsPredefinedScheme)> {
  static const MethodInfo* get() {
    static auto* scheme = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "IsPredefinedScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scheme});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::FinishInitialization
// Il2CppName: FinishInitialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::FinishInitialization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "FinishInitialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::Unquote
// Il2CppName: Unquote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::HttpListenerRequest::Unquote)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "Unquote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::AddHeader
// Il2CppName: AddHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)(::Il2CppString*)>(&System::Net::HttpListenerRequest::AddHeader)> {
  static const MethodInfo* get() {
    static auto* header = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "AddHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{header});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::FlushInput
// Il2CppName: FlushInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::FlushInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "FlushInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
