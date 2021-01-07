// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.Regex
#include "System/Text/RegularExpressions/Regex.hpp"
// Including type: System.Text.RegularExpressions.RegexRunnerFactory
#include "System/Text/RegularExpressions/RegexRunnerFactory.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Text.RegularExpressions.ExclusiveReference
#include "System/Text/RegularExpressions/ExclusiveReference.hpp"
// Including type: System.Text.RegularExpressions.SharedReference
#include "System/Text/RegularExpressions/SharedReference.hpp"
// Including type: System.Text.RegularExpressions.RegexCode
#include "System/Text/RegularExpressions/RegexCode.hpp"
// Including type: System.Collections.Generic.LinkedList`1
#include "System/Collections/Generic/LinkedList_1.hpp"
// Including type: System.Text.RegularExpressions.CachedCodeEntry
#include "System/Text/RegularExpressions/CachedCodeEntry.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Text.RegularExpressions.Match
#include "System/Text/RegularExpressions/Match.hpp"
// Including type: System.Text.RegularExpressions.MatchEvaluator
#include "System/Text/RegularExpressions/MatchEvaluator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.TimeSpan MaximumMatchTimeout
System::TimeSpan System::Text::RegularExpressions::Regex::_get_MaximumMatchTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_get_MaximumMatchTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeSpan>("System.Text.RegularExpressions", "Regex", "MaximumMatchTimeout"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.TimeSpan MaximumMatchTimeout
void System::Text::RegularExpressions::Regex::_set_MaximumMatchTimeout(System::TimeSpan value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_set_MaximumMatchTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text.RegularExpressions", "Regex", "MaximumMatchTimeout", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.TimeSpan InfiniteMatchTimeout
System::TimeSpan System::Text::RegularExpressions::Regex::_get_InfiniteMatchTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_get_InfiniteMatchTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeSpan>("System.Text.RegularExpressions", "Regex", "InfiniteMatchTimeout"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.TimeSpan InfiniteMatchTimeout
void System::Text::RegularExpressions::Regex::_set_InfiniteMatchTimeout(System::TimeSpan value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_set_InfiniteMatchTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text.RegularExpressions", "Regex", "InfiniteMatchTimeout", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
System::TimeSpan System::Text::RegularExpressions::Regex::_get_FallbackDefaultMatchTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_get_FallbackDefaultMatchTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeSpan>("System.Text.RegularExpressions", "Regex", "FallbackDefaultMatchTimeout"));
}
// Autogenerated static field setter
// Set static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
void System::Text::RegularExpressions::Regex::_set_FallbackDefaultMatchTimeout(System::TimeSpan value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_set_FallbackDefaultMatchTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text.RegularExpressions", "Regex", "FallbackDefaultMatchTimeout", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.TimeSpan DefaultMatchTimeout
System::TimeSpan System::Text::RegularExpressions::Regex::_get_DefaultMatchTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_get_DefaultMatchTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeSpan>("System.Text.RegularExpressions", "Regex", "DefaultMatchTimeout"));
}
// Autogenerated static field setter
// Set static field: static readonly System.TimeSpan DefaultMatchTimeout
void System::Text::RegularExpressions::Regex::_set_DefaultMatchTimeout(System::TimeSpan value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_set_DefaultMatchTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text.RegularExpressions", "Regex", "DefaultMatchTimeout", value));
}
// Autogenerated static field getter
// Get static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry*>* System::Text::RegularExpressions::Regex::_get_livecode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_get_livecode");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry*>*>("System.Text.RegularExpressions", "Regex", "livecode"));
}
// Autogenerated static field setter
// Set static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
void System::Text::RegularExpressions::Regex::_set_livecode(System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_set_livecode");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text.RegularExpressions", "Regex", "livecode", value));
}
// Autogenerated static field getter
// Get static field: static System.Int32 cacheSize
int System::Text::RegularExpressions::Regex::_get_cacheSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_get_cacheSize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Text.RegularExpressions", "Regex", "cacheSize"));
}
// Autogenerated static field setter
// Set static field: static System.Int32 cacheSize
void System::Text::RegularExpressions::Regex::_set_cacheSize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("_set_cacheSize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text.RegularExpressions", "Regex", "cacheSize", value));
}
// Autogenerated method: System.Text.RegularExpressions.Regex.ValidateMatchTimeout
void System::Text::RegularExpressions::Regex::ValidateMatchTimeout(System::TimeSpan matchTimeout) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("ValidateMatchTimeout");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", "ValidateMatchTimeout", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(matchTimeout)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, matchTimeout);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.InitDefaultMatchTimeout
System::TimeSpan System::Text::RegularExpressions::Regex::InitDefaultMatchTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("InitDefaultMatchTimeout");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", "InitDefaultMatchTimeout", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::TimeSpan, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.get_Options
System::Text::RegularExpressions::RegexOptions System::Text::RegularExpressions::Regex::get_Options() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("get_Options");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Options", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::RegexOptions, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.get_MatchTimeout
System::TimeSpan System::Text::RegularExpressions::Regex::get_MatchTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("get_MatchTimeout");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_MatchTimeout", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::TimeSpan, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.get_RightToLeft
bool System::Text::RegularExpressions::Regex::get_RightToLeft() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("get_RightToLeft");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_RightToLeft", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.GroupNameFromNumber
::Il2CppString* System::Text::RegularExpressions::Regex::GroupNameFromNumber(int i) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("GroupNameFromNumber");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GroupNameFromNumber", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(i)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, i);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.IsMatch
bool System::Text::RegularExpressions::Regex::IsMatch(::Il2CppString* input, ::Il2CppString* pattern) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("IsMatch");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", "IsMatch", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, pattern)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, input, pattern);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.IsMatch
bool System::Text::RegularExpressions::Regex::IsMatch(::Il2CppString* input, ::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("IsMatch");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", "IsMatch", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, pattern, options, matchTimeout)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, input, pattern, options, matchTimeout);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.IsMatch
bool System::Text::RegularExpressions::Regex::IsMatch(::Il2CppString* input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("IsMatch");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsMatch", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, input);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.IsMatch
bool System::Text::RegularExpressions::Regex::IsMatch(::Il2CppString* input, int startat) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("IsMatch");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsMatch", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, startat)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, input, startat);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.Match
System::Text::RegularExpressions::Match* System::Text::RegularExpressions::Regex::Match(::Il2CppString* input, ::Il2CppString* pattern) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("Match");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", "Match", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, pattern)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::Match*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, input, pattern);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.Match
System::Text::RegularExpressions::Match* System::Text::RegularExpressions::Regex::Match(::Il2CppString* input, ::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("Match");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", "Match", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, pattern, options, matchTimeout)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::Match*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, input, pattern, options, matchTimeout);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.Match
System::Text::RegularExpressions::Match* System::Text::RegularExpressions::Regex::Match(::Il2CppString* input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("Match");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Match", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::Match*, false>(this, ___internal__method, input);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.Match
System::Text::RegularExpressions::Match* System::Text::RegularExpressions::Regex::Match(::Il2CppString* input, int startat) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("Match");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Match", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, startat)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::Match*, false>(this, ___internal__method, input, startat);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.Replace
::Il2CppString* System::Text::RegularExpressions::Regex::Replace(::Il2CppString* input, System::Text::RegularExpressions::MatchEvaluator* evaluator) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("Replace");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Replace", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, evaluator)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, input, evaluator);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.Replace
::Il2CppString* System::Text::RegularExpressions::Regex::Replace(::Il2CppString* input, System::Text::RegularExpressions::MatchEvaluator* evaluator, int count, int startat) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("Replace");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Replace", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input, evaluator, count, startat)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, input, evaluator, count, startat);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.InitializeReferences
void System::Text::RegularExpressions::Regex::InitializeReferences() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("InitializeReferences");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InitializeReferences", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.Run
System::Text::RegularExpressions::Match* System::Text::RegularExpressions::Regex::Run(bool quick, int prevlen, ::Il2CppString* input, int beginning, int length, int startat) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("Run");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Run", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(quick, prevlen, input, beginning, length, startat)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::Match*, false>(this, ___internal__method, quick, prevlen, input, beginning, length, startat);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.LookupCachedAndUpdate
System::Text::RegularExpressions::CachedCodeEntry* System::Text::RegularExpressions::Regex::LookupCachedAndUpdate(::Il2CppString* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("LookupCachedAndUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", "LookupCachedAndUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::CachedCodeEntry*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, key);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.CacheCode
System::Text::RegularExpressions::CachedCodeEntry* System::Text::RegularExpressions::Regex::CacheCode(::Il2CppString* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("CacheCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CacheCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
  return ::il2cpp_utils::RunMethodThrow<System::Text::RegularExpressions::CachedCodeEntry*, false>(this, ___internal__method, key);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.UseOptionR
bool System::Text::RegularExpressions::Regex::UseOptionR() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("UseOptionR");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UseOptionR", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.UseOptionInvariant
bool System::Text::RegularExpressions::Regex::UseOptionInvariant() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("UseOptionInvariant");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UseOptionInvariant", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex..cctor
void System::Text::RegularExpressions::Regex::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Text.RegularExpressions", "Regex", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.System.Runtime.Serialization.ISerializable.GetObjectData
void System::Text::RegularExpressions::Regex::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext context) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("System.Runtime.Serialization.ISerializable.GetObjectData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(si, context)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, si, context);
}
// Autogenerated method: System.Text.RegularExpressions.Regex.ToString
::Il2CppString* System::Text::RegularExpressions::Regex::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("Regex").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
