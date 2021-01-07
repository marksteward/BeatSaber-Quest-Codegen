// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2Collection
#include "System/Security/Cryptography/X509Certificates/X509Certificate2Collection.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2
#include "System/Security/Cryptography/X509Certificates/X509Certificate2.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509FindType
#include "System/Security/Cryptography/X509Certificates/X509FindType.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
#include "System/Security/Cryptography/X509Certificates/X509Certificate2Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String[] newline_split
::Array<::Il2CppString*>* System::Security::Cryptography::X509Certificates::X509Certificate2Collection::_get_newline_split() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("_get_newline_split");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppString*>*>("System.Security.Cryptography.X509Certificates", "X509Certificate2Collection", "newline_split"));
}
// Autogenerated static field setter
// Set static field: static private System.String[] newline_split
void System::Security::Cryptography::X509Certificates::X509Certificate2Collection::_set_newline_split(::Array<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("_set_newline_split");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "X509Certificate2Collection", "newline_split", value));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2Collection.get_Item
System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2Collection::get_Item(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("get_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(this, ___internal__method, index);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2Collection.Add
int System::Security::Cryptography::X509Certificates::X509Certificate2Collection::Add(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("Add");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(certificate)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, certificate);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2Collection.AddRange
void System::Security::Cryptography::X509Certificates::X509Certificate2Collection::AddRange(System::Security::Cryptography::X509Certificates::X509Certificate2Collection* certificates) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("AddRange");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddRange", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(certificates)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, certificates);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2Collection.Contains
bool System::Security::Cryptography::X509Certificates::X509Certificate2Collection::Contains(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("Contains");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(certificate)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, certificate);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2Collection.Find
System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509Certificate2Collection::Find(System::Security::Cryptography::X509Certificates::X509FindType findType, ::Il2CppObject* findValue, bool validOnly) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("Find");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(findType, findValue, validOnly)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, false>(this, ___internal__method, findType, findValue, validOnly);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2Collection.GetEnumerator
System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator* System::Security::Cryptography::X509Certificates::X509Certificate2Collection::GetEnumerator() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext("GetEnumerator");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2Collection..cctor
void System::Security::Cryptography::X509Certificates::X509Certificate2Collection::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X509Certificate2Collection").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "X509Certificate2Collection", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
