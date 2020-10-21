// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
// Including type: System.Net.Http.Headers.HttpHeaders/HeaderBucket
#include "System/Net/Http/Headers/HttpHeaders_HeaderBucket.hpp"
// Including type: System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19
#include "System/Net/Http/Headers/HttpHeaders_-GetEnumerator-d__19.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Net.Http.Headers.HeaderInfo
#include "System/Net/Http/Headers/HeaderInfo.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Net.Http.Headers.HttpHeaderValueCollection`1
#include "System/Net/Http/Headers/HttpHeaderValueCollection_1.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> known_headers
System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HeaderInfo*>* System::Net::Http::Headers::HttpHeaders::_get_known_headers() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HeaderInfo*>*>("System.Net.Http.Headers", "HttpHeaders", "known_headers")));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> known_headers
void System::Net::Http::Headers::HttpHeaders::_set_known_headers(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Net::Http::Headers::HeaderInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net.Http.Headers", "HttpHeaders", "known_headers", value));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders..cctor
void System::Net::Http::Headers::HttpHeaders::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net.Http.Headers", "HttpHeaders", ".cctor"));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders..ctor
System::Net::Http::Headers::HttpHeaders* System::Net::Http::Headers::HttpHeaders::New_ctor(System::Net::Http::Headers::HttpHeaderKind headerKind) {
  return THROW_UNLESS(il2cpp_utils::New<HttpHeaders*>(headerKind));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.AddInternal
bool System::Net::Http::Headers::HttpHeaders::AddInternal(::Il2CppString* name, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values, System::Net::Http::Headers::HeaderInfo* headerInfo, bool ignoreInvalid) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddInternal", name, values, headerInfo, ignoreInvalid));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.TryAddWithoutValidation
bool System::Net::Http::Headers::HttpHeaders::TryAddWithoutValidation(::Il2CppString* name, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryAddWithoutValidation", name, values));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.TryCheckName
bool System::Net::Http::Headers::HttpHeaders::TryCheckName(::Il2CppString* name, System::Net::Http::Headers::HeaderInfo*& headerInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryCheckName", name, headerInfo));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.GetEnumerator
System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>* System::Net::Http::Headers::HttpHeaders::GetEnumerator() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Collections::Generic::IEnumerable_1<::Il2CppString*>*>>*>(this, "GetEnumerator")));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.GetSingleHeaderString
::Il2CppString* System::Net::Http::Headers::HttpHeaders::GetSingleHeaderString(::Il2CppString* key, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Net.Http.Headers", "HttpHeaders", "GetSingleHeaderString", key, values));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.GetAllHeaderValues
System::Collections::Generic::List_1<::Il2CppString*>* System::Net::Http::Headers::HttpHeaders::GetAllHeaderValues(System::Net::Http::Headers::HttpHeaders::HeaderBucket* bucket, System::Net::Http::Headers::HeaderInfo* headerInfo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppString*>*>(this, "GetAllHeaderValues", bucket, headerInfo));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.GetKnownHeaderKind
System::Net::Http::Headers::HttpHeaderKind System::Net::Http::Headers::HttpHeaders::GetKnownHeaderKind(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Http::Headers::HttpHeaderKind>("System.Net.Http.Headers", "HttpHeaders", "GetKnownHeaderKind", name));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders..ctor
System::Net::Http::Headers::HttpHeaders* System::Net::Http::Headers::HttpHeaders::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<HttpHeaders*>());
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Net::Http::Headers::HttpHeaders::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}
// Autogenerated method: System.Net.Http.Headers.HttpHeaders.ToString
::Il2CppString* System::Net::Http::Headers::HttpHeaders::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}