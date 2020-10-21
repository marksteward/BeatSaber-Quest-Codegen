// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.DistributionPointName
#include "Org/BouncyCastle/Asn1/X509/DistributionPointName.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1TaggedObject
#include "Org/BouncyCastle/Asn1/Asn1TaggedObject.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DistributionPointName.GetInstance
Org::BouncyCastle::Asn1::X509::DistributionPointName* Org::BouncyCastle::Asn1::X509::DistributionPointName::GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::DistributionPointName*>("Org.BouncyCastle.Asn1.X509", "DistributionPointName", "GetInstance", obj, explicitly));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DistributionPointName.GetInstance
Org::BouncyCastle::Asn1::X509::DistributionPointName* Org::BouncyCastle::Asn1::X509::DistributionPointName::GetInstance(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::DistributionPointName*>("Org.BouncyCastle.Asn1.X509", "DistributionPointName", "GetInstance", obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DistributionPointName..ctor
Org::BouncyCastle::Asn1::X509::DistributionPointName* Org::BouncyCastle::Asn1::X509::DistributionPointName::New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj) {
  return THROW_UNLESS(il2cpp_utils::New<DistributionPointName*>(obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DistributionPointName.appendObject
void Org::BouncyCastle::Asn1::X509::DistributionPointName::appendObject(System::Text::StringBuilder* buf, ::Il2CppString* sep, ::Il2CppString* name, ::Il2CppString* val) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "appendObject", buf, sep, name, val));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DistributionPointName.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::DistributionPointName::ToAsn1Object() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Object*>(this, "ToAsn1Object"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DistributionPointName.ToString
::Il2CppString* Org::BouncyCastle::Asn1::X509::DistributionPointName::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}