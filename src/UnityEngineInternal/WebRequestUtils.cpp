// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngineInternal.WebRequestUtils
#include "UnityEngineInternal/WebRequestUtils.hpp"
// Including type: System.Text.RegularExpressions.Regex
#include "System/Text/RegularExpressions/Regex.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Text.RegularExpressions.Regex domainRegex
System::Text::RegularExpressions::Regex* UnityEngineInternal::WebRequestUtils::_get_domainRegex() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngineInternal").WithContext("WebRequestUtils").WithContext("_get_domainRegex");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Text::RegularExpressions::Regex*>("UnityEngineInternal", "WebRequestUtils", "domainRegex"));
}
// Autogenerated static field setter
// Set static field: static private System.Text.RegularExpressions.Regex domainRegex
void UnityEngineInternal::WebRequestUtils::_set_domainRegex(System::Text::RegularExpressions::Regex* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngineInternal").WithContext("WebRequestUtils").WithContext("_set_domainRegex");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngineInternal", "WebRequestUtils", "domainRegex", value));
}
// Autogenerated method: UnityEngineInternal.WebRequestUtils.RedirectTo
::Il2CppString* UnityEngineInternal::WebRequestUtils::RedirectTo(::Il2CppString* baseUri, ::Il2CppString* redirectUri) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngineInternal").WithContext("WebRequestUtils").WithContext("RedirectTo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngineInternal", "WebRequestUtils", "RedirectTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(baseUri, redirectUri)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, baseUri, redirectUri);
}
// Autogenerated method: UnityEngineInternal.WebRequestUtils.MakeInitialUrl
::Il2CppString* UnityEngineInternal::WebRequestUtils::MakeInitialUrl(::Il2CppString* targetUrl, ::Il2CppString* localUrl) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngineInternal").WithContext("WebRequestUtils").WithContext("MakeInitialUrl");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngineInternal", "WebRequestUtils", "MakeInitialUrl", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(targetUrl, localUrl)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, targetUrl, localUrl);
}
// Autogenerated method: UnityEngineInternal.WebRequestUtils.MakeUriString
::Il2CppString* UnityEngineInternal::WebRequestUtils::MakeUriString(System::Uri* targetUri, ::Il2CppString* targetUrl, bool prependProtocol) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngineInternal").WithContext("WebRequestUtils").WithContext("MakeUriString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngineInternal", "WebRequestUtils", "MakeUriString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(targetUri, targetUrl, prependProtocol)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, targetUri, targetUrl, prependProtocol);
}
// Autogenerated method: UnityEngineInternal.WebRequestUtils.URLDecode
::Il2CppString* UnityEngineInternal::WebRequestUtils::URLDecode(::Il2CppString* encoded) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngineInternal").WithContext("WebRequestUtils").WithContext("URLDecode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngineInternal", "WebRequestUtils", "URLDecode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(encoded)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, encoded);
}
// Autogenerated method: UnityEngineInternal.WebRequestUtils..cctor
void UnityEngineInternal::WebRequestUtils::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngineInternal").WithContext("WebRequestUtils").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngineInternal", "WebRequestUtils", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
