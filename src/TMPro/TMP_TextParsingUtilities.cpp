// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_TextParsingUtilities
#include "TMPro/TMP_TextParsingUtilities.hpp"
// Including type: System.String
#include "System/String.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
TMPro::TMP_TextParsingUtilities* TMPro::TMP_TextParsingUtilities::_get_s_Instance() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("_get_s_Instance");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<TMPro::TMP_TextParsingUtilities*>("TMPro", "TMP_TextParsingUtilities", "s_Instance"));
}
// Autogenerated static field setter
// Set static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
void TMPro::TMP_TextParsingUtilities::_set_s_Instance(TMPro::TMP_TextParsingUtilities* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("_set_s_Instance");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_TextParsingUtilities", "s_Instance", value));
}
// Autogenerated static field getter
// Get static field: static private System.String k_LookupStringL
::Il2CppString* TMPro::TMP_TextParsingUtilities::_get_k_LookupStringL() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("_get_k_LookupStringL");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("TMPro", "TMP_TextParsingUtilities", "k_LookupStringL"));
}
// Autogenerated static field setter
// Set static field: static private System.String k_LookupStringL
void TMPro::TMP_TextParsingUtilities::_set_k_LookupStringL(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("_set_k_LookupStringL");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_TextParsingUtilities", "k_LookupStringL", value));
}
// Autogenerated static field getter
// Get static field: static private System.String k_LookupStringU
::Il2CppString* TMPro::TMP_TextParsingUtilities::_get_k_LookupStringU() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("_get_k_LookupStringU");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("TMPro", "TMP_TextParsingUtilities", "k_LookupStringU"));
}
// Autogenerated static field setter
// Set static field: static private System.String k_LookupStringU
void TMPro::TMP_TextParsingUtilities::_set_k_LookupStringU(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("_set_k_LookupStringU");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_TextParsingUtilities", "k_LookupStringU", value));
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities..cctor
void TMPro::TMP_TextParsingUtilities::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.get_instance
TMPro::TMP_TextParsingUtilities* TMPro::TMP_TextParsingUtilities::get_instance() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("get_instance");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "get_instance", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<TMPro::TMP_TextParsingUtilities*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.GetHashCode
uint TMPro::TMP_TextParsingUtilities::GetHashCode(::Il2CppString* s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.GetHashCodeCaseSensitive
int TMPro::TMP_TextParsingUtilities::GetHashCodeCaseSensitive(::Il2CppString* s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("GetHashCodeCaseSensitive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "GetHashCodeCaseSensitive", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.ToLowerASCIIFast
::Il2CppChar TMPro::TMP_TextParsingUtilities::ToLowerASCIIFast(::Il2CppChar c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("ToLowerASCIIFast");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "ToLowerASCIIFast", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppChar, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.ToUpperASCIIFast
::Il2CppChar TMPro::TMP_TextParsingUtilities::ToUpperASCIIFast(::Il2CppChar c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("ToUpperASCIIFast");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "ToUpperASCIIFast", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppChar, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.ToUpperASCIIFast
uint TMPro::TMP_TextParsingUtilities::ToUpperASCIIFast(uint c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("ToUpperASCIIFast");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "ToUpperASCIIFast", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.ToLowerASCIIFast
uint TMPro::TMP_TextParsingUtilities::ToLowerASCIIFast(uint c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("ToLowerASCIIFast");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "ToLowerASCIIFast", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.IsHighSurrogate
bool TMPro::TMP_TextParsingUtilities::IsHighSurrogate(uint c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("IsHighSurrogate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "IsHighSurrogate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
// Autogenerated method: TMPro.TMP_TextParsingUtilities.IsLowSurrogate
bool TMPro::TMP_TextParsingUtilities::IsLowSurrogate(uint c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextParsingUtilities").WithContext("IsLowSurrogate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_TextParsingUtilities", "IsLowSurrogate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
