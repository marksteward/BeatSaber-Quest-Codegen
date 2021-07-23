// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpHeaders
  class HttpHeaders;
  // Forward declaring type: HeaderInfo
  class HeaderInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpHeaderValueCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class HttpHeaderValueCollection_1 : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<T>*/ {
    public:
    // private readonly System.Collections.Generic.List`1<T> list
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* list;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<T>*) == 0x8);
    // private readonly System.Net.Http.Headers.HttpHeaders headers
    // Size: 0x8
    // Offset: 0x0
    System::Net::Http::Headers::HttpHeaders* headers;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::HttpHeaders*) == 0x8);
    // private readonly System.Net.Http.Headers.HeaderInfo headerInfo
    // Size: 0x8
    // Offset: 0x0
    System::Net::Http::Headers::HeaderInfo* headerInfo;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::HeaderInfo*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> invalidValues
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<::Il2CppString*>* invalidValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: HttpHeaderValueCollection_1
    HttpHeaderValueCollection_1(System::Collections::Generic::List_1<T>* list_ = {}, System::Net::Http::Headers::HttpHeaders* headers_ = {}, System::Net::Http::Headers::HeaderInfo* headerInfo_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* invalidValues_ = {}) noexcept : list{list_}, headers{headers_}, headerInfo{headerInfo_}, invalidValues{invalidValues_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<T>
    operator System::Collections::Generic::ICollection_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<T> list
    System::Collections::Generic::List_1<T>* _get_list() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_get_list");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<T>*>(___internal__instance, "list"));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Collections.Generic.List`1<T> list
    void _set_list(System::Collections::Generic::List_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_set_list");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "list", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Net.Http.Headers.HttpHeaders headers
    System::Net::Http::Headers::HttpHeaders* _get_headers() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_get_headers");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Net::Http::Headers::HttpHeaders*>(___internal__instance, "headers"));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Net.Http.Headers.HttpHeaders headers
    void _set_headers(System::Net::Http::Headers::HttpHeaders* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_set_headers");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "headers", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Net.Http.Headers.HeaderInfo headerInfo
    System::Net::Http::Headers::HeaderInfo* _get_headerInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_get_headerInfo");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Net::Http::Headers::HeaderInfo*>(___internal__instance, "headerInfo"));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Net.Http.Headers.HeaderInfo headerInfo
    void _set_headerInfo(System::Net::Http::Headers::HeaderInfo* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_set_headerInfo");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "headerInfo", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<System.String> invalidValues
    System::Collections::Generic::List_1<::Il2CppString*>* _get_invalidValues() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_get_invalidValues");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<::Il2CppString*>*>(___internal__instance, "invalidValues"));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Collections.Generic.List`1<System.String> invalidValues
    void _set_invalidValues(System::Collections::Generic::List_1<::Il2CppString*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::_set_invalidValues");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "invalidValues", value));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // System.Collections.Generic.List`1<System.String> get_InvalidValues()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<::Il2CppString*>* get_InvalidValues() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::get_InvalidValues");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_InvalidValues", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<::Il2CppString*>*, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    bool get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // System.Void .ctor(System.Net.Http.Headers.HttpHeaders headers, System.Net.Http.Headers.HeaderInfo headerInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpHeaderValueCollection_1<T>* New_ctor(System::Net::Http::Headers::HttpHeaders* headers, System::Net::Http::Headers::HeaderInfo* headerInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpHeaderValueCollection_1<T>*, creationType>(headers, headerInfo)));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // System.Void AddRange(System.Collections.Generic.List`1<T> values)
    // Offset: 0xFFFFFFFF
    void AddRange(System::Collections::Generic::List_1<T>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::AddRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddRange", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(values)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, values);
    }
    // System.Void AddInvalidValue(System.String invalidValue)
    // Offset: 0xFFFFFFFF
    void AddInvalidValue(::Il2CppString* invalidValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::AddInvalidValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddInvalidValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(invalidValue)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, invalidValue);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    void CopyTo(::Array<T>* array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayIndex)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, arrayIndex);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // T Find(System.Predicate`1<T> predicate)
    // Offset: 0xFFFFFFFF
    T Find(System::Predicate_1<T>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::Find");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(predicate)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, predicate);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaderValueCollection_1::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
  }; // System.Net.Http.Headers.HttpHeaderValueCollection`1
  // Could not write size check! Type: System.Net.Http.Headers.HttpHeaderValueCollection`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::HttpHeaderValueCollection_1, "System.Net.Http.Headers", "HttpHeaderValueCollection`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
