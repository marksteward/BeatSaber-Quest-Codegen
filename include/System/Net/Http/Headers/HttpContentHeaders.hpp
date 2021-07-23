// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpContent
  class HttpContent;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Nullable`1 because it is already included!
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: MediaTypeHeaderValue
  class MediaTypeHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpContentHeaders
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpContentHeaders : public System::Net::Http::Headers::HttpHeaders {
    public:
    // private readonly System.Net.Http.HttpContent content
    // Size: 0x8
    // Offset: 0x20
    System::Net::Http::HttpContent* content;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpContent*) == 0x8);
    // Creating value type constructor for type: HttpContentHeaders
    HttpContentHeaders(System::Net::Http::HttpContent* content_ = {}) noexcept : content{content_} {}
    // Creating conversion operator: operator System::Net::Http::HttpContent*
    constexpr operator System::Net::Http::HttpContent*() const noexcept {
      return content;
    }
    // Get instance field: private readonly System.Net.Http.HttpContent content
    System::Net::Http::HttpContent* _get_content();
    // Set instance field: private readonly System.Net.Http.HttpContent content
    void _set_content(System::Net::Http::HttpContent* value);
    // public System.Nullable`1<System.Int64> get_ContentLength()
    // Offset: 0x1564524
    System::Nullable_1<int64_t> get_ContentLength();
    // public System.Net.Http.Headers.MediaTypeHeaderValue get_ContentType()
    // Offset: 0x15646A0
    System::Net::Http::Headers::MediaTypeHeaderValue* get_ContentType();
    // System.Void .ctor(System.Net.Http.HttpContent content)
    // Offset: 0x156447C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpContentHeaders* New_ctor(System::Net::Http::HttpContent* content) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpContentHeaders::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpContentHeaders*, creationType>(content)));
    }
  }; // System.Net.Http.Headers.HttpContentHeaders
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpContentHeaders*, "System.Net.Http.Headers", "HttpContentHeaders");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpContentHeaders::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int64_t> (System::Net::Http::Headers::HttpContentHeaders::*)()>(&System::Net::Http::Headers::HttpContentHeaders::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpContentHeaders*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpContentHeaders::get_ContentType
// Il2CppName: get_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::MediaTypeHeaderValue* (System::Net::Http::Headers::HttpContentHeaders::*)()>(&System::Net::Http::Headers::HttpContentHeaders::get_ContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpContentHeaders*), "get_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpContentHeaders::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
