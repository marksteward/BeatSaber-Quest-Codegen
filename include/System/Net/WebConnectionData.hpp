// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.ReadState
#include "System/Net/ReadState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionData
  class WebConnectionData : public ::Il2CppObject {
    public:
    // private System.Net.HttpWebRequest _request
    // Size: 0x8
    // Offset: 0x10
    System::Net::HttpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // public System.Int32 StatusCode
    // Size: 0x4
    // Offset: 0x18
    int StatusCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: StatusCode and: StatusDescription
    char __padding1[0x4] = {};
    // public System.String StatusDescription
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* StatusDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Net.WebHeaderCollection Headers
    // Size: 0x8
    // Offset: 0x28
    System::Net::WebHeaderCollection* Headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // public System.Version Version
    // Size: 0x8
    // Offset: 0x30
    System::Version* Version;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // public System.Version ProxyVersion
    // Size: 0x8
    // Offset: 0x38
    System::Version* ProxyVersion;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // public System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x40
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // public System.String[] Challenge
    // Size: 0x8
    // Offset: 0x48
    ::Array<::Il2CppString*>* Challenge;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Net.ReadState _readState
    // Size: 0x4
    // Offset: 0x50
    System::Net::ReadState readState;
    // Field size check
    static_assert(sizeof(System::Net::ReadState) == 0x4);
    // Creating value type constructor for type: WebConnectionData
    WebConnectionData(System::Net::HttpWebRequest* request_ = {}, int StatusCode_ = {}, ::Il2CppString* StatusDescription_ = {}, System::Net::WebHeaderCollection* Headers_ = {}, System::Version* Version_ = {}, System::Version* ProxyVersion_ = {}, System::IO::Stream* stream_ = {}, ::Array<::Il2CppString*>* Challenge_ = {}, System::Net::ReadState readState_ = {}) noexcept : request{request_}, StatusCode{StatusCode_}, StatusDescription{StatusDescription_}, Headers{Headers_}, Version{Version_}, ProxyVersion{ProxyVersion_}, stream{stream_}, Challenge{Challenge_}, readState{readState_} {}
    // public System.Void .ctor(System.Net.HttpWebRequest request)
    // Offset: 0x15C0248
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionData* New_ctor(System::Net::HttpWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionData*, creationType>(request)));
    }
    // public System.Net.HttpWebRequest get_request()
    // Offset: 0x15C2A10
    System::Net::HttpWebRequest* get_request();
    // public System.Void set_request(System.Net.HttpWebRequest value)
    // Offset: 0x15C2A18
    void set_request(System::Net::HttpWebRequest* value);
    // public System.Net.ReadState get_ReadState()
    // Offset: 0x15C2A20
    System::Net::ReadState get_ReadState();
    // public System.Void set_ReadState(System.Net.ReadState value)
    // Offset: 0x15BF62C
    void set_ReadState(System::Net::ReadState value);
    // public System.Void .ctor()
    // Offset: 0x15BC5A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionData*, creationType>()));
    }
  }; // System.Net.WebConnectionData
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionData), 80 + sizeof(System::Net::ReadState)> __System_Net_WebConnectionDataSizeCheck;
  static_assert(sizeof(WebConnectionData) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionData*, "System.Net", "WebConnectionData");
// Writing MetadataGetter for method: System::Net::WebConnectionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebConnectionData::get_request
// Il2CppName: get_request
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::WebConnectionData::set_request
// Il2CppName: set_request
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::WebConnectionData::get_ReadState
// Il2CppName: get_ReadState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::WebConnectionData::set_ReadState
// Il2CppName: set_ReadState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::WebConnectionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
