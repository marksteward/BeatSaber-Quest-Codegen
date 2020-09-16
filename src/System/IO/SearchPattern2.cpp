// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.SearchPattern2
#include "System/IO/SearchPattern2.hpp"
// Including type: System.IO.SearchPattern2/Op
#include "System/IO/SearchPattern2_Op.hpp"
// Including type: System.IO.SearchPattern2/OpCode
#include "System/IO/SearchPattern2_OpCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Char[] WildcardChars
::Array<::Il2CppChar>* System::IO::SearchPattern2::_get_WildcardChars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.IO", "SearchPattern2", "WildcardChars"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Char[] WildcardChars
void System::IO::SearchPattern2::_set_WildcardChars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "SearchPattern2", "WildcardChars", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Char[] InvalidChars
::Array<::Il2CppChar>* System::IO::SearchPattern2::_get_InvalidChars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.IO", "SearchPattern2", "InvalidChars"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Char[] InvalidChars
void System::IO::SearchPattern2::_set_InvalidChars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "SearchPattern2", "InvalidChars", value));
}
// Autogenerated method: System.IO.SearchPattern2..ctor
System::IO::SearchPattern2* System::IO::SearchPattern2::New_ctor(::Il2CppString* pattern) {
  return THROW_UNLESS(il2cpp_utils::New<SearchPattern2*>(pattern));
}
// Autogenerated method: System.IO.SearchPattern2..ctor
System::IO::SearchPattern2* System::IO::SearchPattern2::New_ctor(::Il2CppString* pattern, bool ignore) {
  return THROW_UNLESS(il2cpp_utils::New<SearchPattern2*>(pattern, ignore));
}
// Autogenerated method: System.IO.SearchPattern2.get_HasWildcard
bool System::IO::SearchPattern2::get_HasWildcard() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasWildcard"));
}
// Autogenerated method: System.IO.SearchPattern2.Compile
void System::IO::SearchPattern2::Compile(::Il2CppString* pattern) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Compile", pattern));
}
// Autogenerated method: System.IO.SearchPattern2..cctor
void System::IO::SearchPattern2::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "SearchPattern2", ".cctor"));
}
