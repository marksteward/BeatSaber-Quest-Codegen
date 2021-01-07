// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT409K1Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve/SecT409K1LookupTable
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT409K1Curve_SecT409K1LookupTable.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Point
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT409K1Point.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/ECMultiplier.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECLookupTable
#include "Org/BouncyCastle/Math/EC/ECLookupTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT409K1_AFFINE_ZS
::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::_get_SECT409K1_AFFINE_ZS() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("_get_SECT409K1_AFFINE_ZS");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409K1Curve", "SECT409K1_AFFINE_ZS"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT409K1_AFFINE_ZS
void Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::_set_SECT409K1_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("_set_SECT409K1_AFFINE_ZS");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409K1Curve", "SECT409K1_AFFINE_ZS", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve..cctor
void Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409K1Curve", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.CloneCurve
Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::CloneCurve() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("CloneCurve");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CloneCurve", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECCurve*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.SupportsCoordinateSystem
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::SupportsCoordinateSystem(int coord) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("SupportsCoordinateSystem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SupportsCoordinateSystem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(coord)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, coord);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.CreateDefaultMultiplier
Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::CreateDefaultMultiplier() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("CreateDefaultMultiplier");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateDefaultMultiplier", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.get_Infinity
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::get_Infinity() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("get_Infinity");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Infinity", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.get_FieldSize
int Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::get_FieldSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("get_FieldSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_FieldSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.FromBigInteger
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::FromBigInteger(Org::BouncyCastle::Math::BigInteger* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("FromBigInteger");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FromBigInteger", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("CreateRawPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateRawPoint", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, withCompression)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method, x, y, withCompression);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("CreateRawPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateRawPoint", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, zs, withCompression)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method, x, y, zs, withCompression);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.get_IsKoblitz
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::get_IsKoblitz() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("get_IsKoblitz");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsKoblitz", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve.CreateCacheSafeLookupTable
Org::BouncyCastle::Math::EC::ECLookupTable* Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecT409K1Curve").WithContext("CreateCacheSafeLookupTable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateCacheSafeLookupTable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(points, off, len)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECLookupTable*, false>(this, ___internal__method, points, off, len);
}
