// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.ASN1
#include "Mono/Security/ASN1.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.ASN1..ctor
Mono::Security::ASN1* Mono::Security::ASN1::New_ctor(uint8_t tag) {
  return THROW_UNLESS(il2cpp_utils::New<ASN1*>(tag));
}
// Autogenerated method: Mono.Security.ASN1..ctor
Mono::Security::ASN1* Mono::Security::ASN1::New_ctor(uint8_t tag, ::Array<uint8_t>* data) {
  return THROW_UNLESS(il2cpp_utils::New<ASN1*>(tag, data));
}
// Autogenerated method: Mono.Security.ASN1..ctor
Mono::Security::ASN1* Mono::Security::ASN1::New_ctor(::Array<uint8_t>* data) {
  return THROW_UNLESS(il2cpp_utils::New<ASN1*>(data));
}
// Autogenerated method: Mono.Security.ASN1.get_Count
int Mono::Security::ASN1::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
// Autogenerated method: Mono.Security.ASN1.get_Tag
uint8_t Mono::Security::ASN1::get_Tag() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "get_Tag"));
}
// Autogenerated method: Mono.Security.ASN1.get_Value
::Array<uint8_t>* Mono::Security::ASN1::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Value"));
}
// Autogenerated method: Mono.Security.ASN1.set_Value
void Mono::Security::ASN1::set_Value(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Value", value));
}
// Autogenerated method: Mono.Security.ASN1.Add
Mono::Security::ASN1* Mono::Security::ASN1::Add(Mono::Security::ASN1* asn1) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::ASN1*>(this, "Add", asn1));
}
// Autogenerated method: Mono.Security.ASN1.GetBytes
::Array<uint8_t>* Mono::Security::ASN1::GetBytes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetBytes"));
}
// Autogenerated method: Mono.Security.ASN1.Decode
void Mono::Security::ASN1::Decode(::Array<uint8_t>* asn1, int& anPos, int anLength) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Decode", asn1, anPos, anLength));
}
// Autogenerated method: Mono.Security.ASN1.DecodeTLV
void Mono::Security::ASN1::DecodeTLV(::Array<uint8_t>* asn1, int& pos, uint8_t& tag, int& length, ::Array<uint8_t>*& content) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DecodeTLV", asn1, pos, tag, length, content));
}
// Autogenerated method: Mono.Security.ASN1.get_Item
Mono::Security::ASN1* Mono::Security::ASN1::get_Item(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::ASN1*>(this, "get_Item", index));
}
// Autogenerated method: Mono.Security.ASN1.ToString
::Il2CppString* Mono::Security::ASN1::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
