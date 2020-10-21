// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator
#include "Org/BouncyCastle/Asn1/BerOctetString_ChunkEnumerator.hpp"
// Including type: Org.BouncyCastle.Asn1.DerOctetString
#include "Org/BouncyCastle/Asn1/DerOctetString.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator..ctor
Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator* Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::New_ctor(::Array<uint8_t>* octets, int chunkSize) {
  return THROW_UNLESS(il2cpp_utils::New<BerOctetString::ChunkEnumerator*>(octets, chunkSize));
}
// Autogenerated method: Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator.get_Current
::Il2CppObject* Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Current"));
}
::Il2CppObject* Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::System_Collections_IEnumerator_get_Current() {
  return Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::get_Current();
}
// Autogenerated method: Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator.MoveNext
bool Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
bool Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::System_Collections_IEnumerator_MoveNext() {
  return Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::MoveNext();
}
// Autogenerated method: Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator.Reset
void Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::System_Collections_IEnumerator_Reset() {
  Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::Reset();
}