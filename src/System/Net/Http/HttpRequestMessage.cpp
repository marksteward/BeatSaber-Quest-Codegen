// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpRequestMessage
#include "System/Net/Http/HttpRequestMessage.hpp"
// Including type: System.Net.Http.Headers.HttpRequestHeaders
#include "System/Net/Http/Headers/HttpRequestHeaders.hpp"
// Including type: System.Net.Http.HttpMethod
#include "System/Net/Http/HttpMethod.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Http.HttpRequestMessage..ctor
System::Net::Http::HttpRequestMessage* System::Net::Http::HttpRequestMessage::New_ctor(System::Net::Http::HttpMethod* method, ::Il2CppString* requestUri) {
  return THROW_UNLESS(il2cpp_utils::New<HttpRequestMessage*>(method, requestUri));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage..ctor
System::Net::Http::HttpRequestMessage* System::Net::Http::HttpRequestMessage::New_ctor(System::Net::Http::HttpMethod* method, System::Uri* requestUri) {
  return THROW_UNLESS(il2cpp_utils::New<HttpRequestMessage*>(method, requestUri));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.get_Content
System::Net::Http::HttpContent* System::Net::Http::HttpRequestMessage::get_Content() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Http::HttpContent*>(this, "get_Content"));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.get_Headers
System::Net::Http::Headers::HttpRequestHeaders* System::Net::Http::HttpRequestMessage::get_Headers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Http::Headers::HttpRequestHeaders*>(this, "get_Headers"));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.get_Method
System::Net::Http::HttpMethod* System::Net::Http::HttpRequestMessage::get_Method() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Http::HttpMethod*>(this, "get_Method"));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.set_Method
void System::Net::Http::HttpRequestMessage::set_Method(System::Net::Http::HttpMethod* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Method", value));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.get_RequestUri
System::Uri* System::Net::Http::HttpRequestMessage::get_RequestUri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Uri*>(this, "get_RequestUri"));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.set_RequestUri
void System::Net::Http::HttpRequestMessage::set_RequestUri(System::Uri* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_RequestUri", value));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.IsAllowedAbsoluteUri
bool System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri(System::Uri* uri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Net.Http", "HttpRequestMessage", "IsAllowedAbsoluteUri", uri));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.get_Version
System::Version* System::Net::Http::HttpRequestMessage::get_Version() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Version*>(this, "get_Version"));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.Dispose
void System::Net::Http::HttpRequestMessage::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.SetIsUsed
bool System::Net::Http::HttpRequestMessage::SetIsUsed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SetIsUsed"));
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.Dispose
void System::Net::Http::HttpRequestMessage::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Net::Http::HttpRequestMessage::System_IDisposable_Dispose() {
  System::Net::Http::HttpRequestMessage::Dispose();
}
// Autogenerated method: System.Net.Http.HttpRequestMessage.ToString
::Il2CppString* System::Net::Http::HttpRequestMessage::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}