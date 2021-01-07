// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.ParameterUtilities
#include "Org/BouncyCastle/Security/ParameterUtilities.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
#include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Collections.IDictionary algorithms
System::Collections::IDictionary* Org::BouncyCastle::Security::ParameterUtilities::_get_algorithms() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("_get_algorithms");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Security", "ParameterUtilities", "algorithms"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Collections.IDictionary algorithms
void Org::BouncyCastle::Security::ParameterUtilities::_set_algorithms(System::Collections::IDictionary* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("_set_algorithms");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Security", "ParameterUtilities", "algorithms", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Collections.IDictionary basicIVSizes
System::Collections::IDictionary* Org::BouncyCastle::Security::ParameterUtilities::_get_basicIVSizes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("_get_basicIVSizes");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Security", "ParameterUtilities", "basicIVSizes"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Collections.IDictionary basicIVSizes
void Org::BouncyCastle::Security::ParameterUtilities::_set_basicIVSizes(System::Collections::IDictionary* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("_set_basicIVSizes");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Security", "ParameterUtilities", "basicIVSizes", value));
}
// Autogenerated method: Org.BouncyCastle.Security.ParameterUtilities..cctor
void Org::BouncyCastle::Security::ParameterUtilities::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Security", "ParameterUtilities", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Security.ParameterUtilities.AddAlgorithm
void Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm(::Il2CppString* canonicalName, ::Array<::Il2CppObject*>* aliases) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("AddAlgorithm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Security", "ParameterUtilities", "AddAlgorithm", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(canonicalName, aliases)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, canonicalName, aliases);
}
// Creating initializer_list -> params proxy for: System.Void AddAlgorithm(System.String canonicalName, params System.Object[] aliases)
void Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm(::Il2CppString* canonicalName, std::initializer_list<::Il2CppObject*> aliases) {
  Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm(canonicalName, ::Array<::Il2CppObject*>::New(aliases));
}
// Autogenerated method: Org.BouncyCastle.Security.ParameterUtilities.AddBasicIVSizeEntries
void Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries(int size, ::Array<::Il2CppString*>* algorithms) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("AddBasicIVSizeEntries");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Security", "ParameterUtilities", "AddBasicIVSizeEntries", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(size, algorithms)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, size, algorithms);
}
// Creating initializer_list -> params proxy for: System.Void AddBasicIVSizeEntries(System.Int32 size, params System.String[] algorithms)
void Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries(int size, std::initializer_list<::Il2CppString*> algorithms) {
  Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries(size, ::Array<::Il2CppString*>::New(algorithms));
}
// Autogenerated method: Org.BouncyCastle.Security.ParameterUtilities.GetCanonicalAlgorithmName
::Il2CppString* Org::BouncyCastle::Security::ParameterUtilities::GetCanonicalAlgorithmName(::Il2CppString* algorithm) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("GetCanonicalAlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Security", "ParameterUtilities", "GetCanonicalAlgorithmName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(algorithm)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, algorithm);
}
// Autogenerated method: Org.BouncyCastle.Security.ParameterUtilities.CreateKeyParameter
Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::Il2CppString* algorithm, ::Array<uint8_t>* keyBytes, int offset, int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Security").WithContext("ParameterUtilities").WithContext("CreateKeyParameter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Security", "ParameterUtilities", "CreateKeyParameter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(algorithm, keyBytes, offset, length)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, algorithm, keyBytes, offset, length);
}
