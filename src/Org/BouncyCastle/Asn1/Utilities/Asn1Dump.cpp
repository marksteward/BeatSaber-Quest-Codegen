// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Utilities.Asn1Dump
#include "Org/BouncyCastle/Asn1/Utilities/Asn1Dump.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: Org.BouncyCastle.Asn1.DerApplicationSpecific
#include "Org/BouncyCastle/Asn1/DerApplicationSpecific.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.String NewLine
::Il2CppString* Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_get_NewLine() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("_get_NewLine");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "NewLine"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.String NewLine
void Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_set_NewLine(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("_set_NewLine");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "NewLine", value));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Utilities.Asn1Dump.AsString
void Org::BouncyCastle::Asn1::Utilities::Asn1Dump::AsString(::Il2CppString* indent, bool verbose, Org::BouncyCastle::Asn1::Asn1Object* obj, System::Text::StringBuilder* buf) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("AsString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "AsString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(indent, verbose, obj, buf)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, indent, verbose, obj, buf);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Utilities.Asn1Dump.outputApplicationSpecific
::Il2CppString* Org::BouncyCastle::Asn1::Utilities::Asn1Dump::outputApplicationSpecific(::Il2CppString* type, ::Il2CppString* indent, bool verbose, Org::BouncyCastle::Asn1::DerApplicationSpecific* app) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("outputApplicationSpecific");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "outputApplicationSpecific", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type, indent, verbose, app)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type, indent, verbose, app);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Utilities.Asn1Dump.DumpAsString
::Il2CppString* Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("DumpAsString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "DumpAsString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Utilities.Asn1Dump.DumpAsString
::Il2CppString* Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable* obj, bool verbose) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("DumpAsString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "DumpAsString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj, verbose)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj, verbose);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Utilities.Asn1Dump.dumpBinaryDataAsString
::Il2CppString* Org::BouncyCastle::Asn1::Utilities::Asn1Dump::dumpBinaryDataAsString(::Il2CppString* indent, ::Array<uint8_t>* bytes) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("dumpBinaryDataAsString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "dumpBinaryDataAsString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(indent, bytes)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, indent, bytes);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Utilities.Asn1Dump.calculateAscString
::Il2CppString* Org::BouncyCastle::Asn1::Utilities::Asn1Dump::calculateAscString(::Array<uint8_t>* bytes, int off, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext("calculateAscString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", "calculateAscString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(bytes, off, len)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, bytes, off, len);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Utilities.Asn1Dump..cctor
void Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Utilities").WithContext("Asn1Dump").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Utilities", "Asn1Dump", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
