// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Asn1.Sec.SecNamedCurves/Sect283r1Holder
#include "Org/BouncyCastle/Asn1/Sec/SecNamedCurves_Sect283r1Holder.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.X9ECParameters
#include "Org/BouncyCastle/Asn1/X9/X9ECParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect283r1Holder::_get_Instance() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Sec").WithContext("Sect283r1Holder").WithContext("_get_Instance");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>("Org.BouncyCastle.Asn1.Sec", "SecNamedCurves/Sect283r1Holder", "Instance"));
}
// Autogenerated static field setter
// Set static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
void Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect283r1Holder::_set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Sec").WithContext("Sect283r1Holder").WithContext("_set_Instance");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Asn1.Sec", "SecNamedCurves/Sect283r1Holder", "Instance", value));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Sec.SecNamedCurves/Sect283r1Holder..cctor
void Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect283r1Holder::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Sec").WithContext("Sect283r1Holder").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.Sec", "SecNamedCurves/Sect283r1Holder", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Sec.SecNamedCurves/Sect283r1Holder.CreateParameters
Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect283r1Holder::CreateParameters() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::Sec").WithContext("Sect283r1Holder").WithContext("CreateParameters");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateParameters", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal__method);
}
