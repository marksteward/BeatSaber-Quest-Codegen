// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.HttpListenerRequestUriBuilder
#include "System/Net/HttpListenerRequestUriBuilder.hpp"
// Including type: System.Net.HttpListenerRequestUriBuilder/ParsingResult
#include "System/Net/HttpListenerRequestUriBuilder_ParsingResult.hpp"
// Including type: System.Net.HttpListenerRequestUriBuilder/EncodingType
#include "System/Net/HttpListenerRequestUriBuilder_EncodingType.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Boolean useCookedRequestUrl
bool System::Net::HttpListenerRequestUriBuilder::_get_useCookedRequestUrl() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("_get_useCookedRequestUrl");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System.Net", "HttpListenerRequestUriBuilder", "useCookedRequestUrl"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Boolean useCookedRequestUrl
void System::Net::HttpListenerRequestUriBuilder::_set_useCookedRequestUrl(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("_set_useCookedRequestUrl");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpListenerRequestUriBuilder", "useCookedRequestUrl", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Text.Encoding utf8Encoding
System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::_get_utf8Encoding() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("_get_utf8Encoding");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Text::Encoding*>("System.Net", "HttpListenerRequestUriBuilder", "utf8Encoding"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Text.Encoding utf8Encoding
void System::Net::HttpListenerRequestUriBuilder::_set_utf8Encoding(System::Text::Encoding* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("_set_utf8Encoding");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpListenerRequestUriBuilder", "utf8Encoding", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Text.Encoding ansiEncoding
System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::_get_ansiEncoding() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("_get_ansiEncoding");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Text::Encoding*>("System.Net", "HttpListenerRequestUriBuilder", "ansiEncoding"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Text.Encoding ansiEncoding
void System::Net::HttpListenerRequestUriBuilder::_set_ansiEncoding(System::Text::Encoding* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("_set_ansiEncoding");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpListenerRequestUriBuilder", "ansiEncoding", value));
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder..cctor
void System::Net::HttpListenerRequestUriBuilder::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequestUriBuilder", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.GetRequestUri
System::Uri* System::Net::HttpListenerRequestUriBuilder::GetRequestUri(::Il2CppString* rawUri, ::Il2CppString* cookedUriScheme, ::Il2CppString* cookedUriHost, ::Il2CppString* cookedUriPath, ::Il2CppString* cookedUriQuery) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("GetRequestUri");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequestUriBuilder", "GetRequestUri", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery)));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.Build
System::Uri* System::Net::HttpListenerRequestUriBuilder::Build() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("Build");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Build", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Uri*, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.BuildRequestUriUsingCookedPath
void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("BuildRequestUriUsingCookedPath");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BuildRequestUriUsingCookedPath", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("BuildRequestUriUsingRawPath");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BuildRequestUriUsingRawPath", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.GetEncoding
System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::GetEncoding(System::Net::HttpListenerRequestUriBuilder::EncodingType type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("GetEncoding");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequestUriBuilder", "GetEncoding", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::Encoding*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
System::Net::HttpListenerRequestUriBuilder::ParsingResult System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath(System::Text::Encoding* encoding) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("BuildRequestUriUsingRawPath");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BuildRequestUriUsingRawPath", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(encoding)));
  return ::il2cpp_utils::RunMethodThrow<System::Net::HttpListenerRequestUriBuilder::ParsingResult, false>(this, ___internal__method, encoding);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.ParseRawPath
System::Net::HttpListenerRequestUriBuilder::ParsingResult System::Net::HttpListenerRequestUriBuilder::ParseRawPath(System::Text::Encoding* encoding) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("ParseRawPath");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ParseRawPath", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(encoding)));
  return ::il2cpp_utils::RunMethodThrow<System::Net::HttpListenerRequestUriBuilder::ParsingResult, false>(this, ___internal__method, encoding);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.AppendUnicodeCodePointValuePercentEncoded
bool System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded(::Il2CppString* codePoint) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("AppendUnicodeCodePointValuePercentEncoded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AppendUnicodeCodePointValuePercentEncoded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(codePoint)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, codePoint);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.AddPercentEncodedOctetToRawOctetsList
bool System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList(System::Text::Encoding* encoding, ::Il2CppString* escapedCharacter) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("AddPercentEncodedOctetToRawOctetsList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddPercentEncodedOctetToRawOctetsList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(encoding, escapedCharacter)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, encoding, escapedCharacter);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.EmptyDecodeAndAppendRawOctetsList
bool System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList(System::Text::Encoding* encoding) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("EmptyDecodeAndAppendRawOctetsList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EmptyDecodeAndAppendRawOctetsList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(encoding)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, encoding);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.AppendOctetsPercentEncoded
void System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded(System::Text::StringBuilder* target, System::Collections::Generic::IEnumerable_1<uint8_t>* octets) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("AppendOctetsPercentEncoded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequestUriBuilder", "AppendOctetsPercentEncoded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(target, octets)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, target, octets);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.GetOctetsAsString
::Il2CppString* System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString(System::Collections::Generic::IEnumerable_1<uint8_t>* octets) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("GetOctetsAsString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequestUriBuilder", "GetOctetsAsString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(octets)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, octets);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.GetPath
::Il2CppString* System::Net::HttpListenerRequestUriBuilder::GetPath(::Il2CppString* uriString) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("GetPath");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequestUriBuilder", "GetPath", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(uriString)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, uriString);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.AddSlashToAsteriskOnlyPath
::Il2CppString* System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath(::Il2CppString* path) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("AddSlashToAsteriskOnlyPath");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpListenerRequestUriBuilder", "AddSlashToAsteriskOnlyPath", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(path)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, path);
}
// Autogenerated method: System.Net.HttpListenerRequestUriBuilder.LogWarning
void System::Net::HttpListenerRequestUriBuilder::LogWarning(::Il2CppString* methodName, ::Il2CppString* message, ::Array<::Il2CppObject*>* args) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpListenerRequestUriBuilder").WithContext("LogWarning");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LogWarning", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(methodName, message, args)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, methodName, message, args);
}
// Creating initializer_list -> params proxy for: System.Void LogWarning(System.String methodName, System.String message, params System.Object[] args)
void System::Net::HttpListenerRequestUriBuilder::LogWarning(::Il2CppString* methodName, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args) {
  System::Net::HttpListenerRequestUriBuilder::LogWarning(methodName, message, ::Array<::Il2CppObject*>::New(args));
}
