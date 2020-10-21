// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams
#include "Org/BouncyCastle/Asn1/Pkcs/Pkcs12PbeParams.hpp"
// Including type: Org.BouncyCastle.Asn1.DerInteger
#include "Org/BouncyCastle/Asn1/DerInteger.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1OctetString
#include "Org/BouncyCastle/Asn1/Asn1OctetString.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams..ctor
Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(il2cpp_utils::New<Pkcs12PbeParams*>(seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams.GetInstance
Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::GetInstance(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*>("Org.BouncyCastle.Asn1.Pkcs", "Pkcs12PbeParams", "GetInstance", obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams.get_Iterations
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::get_Iterations() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::BigInteger*>(this, "get_Iterations"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams.GetIV
::Array<uint8_t>* Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::GetIV() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetIV"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::ToAsn1Object() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Object*>(this, "ToAsn1Object"));
}