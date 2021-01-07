// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP192K1Field.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.UInt32[] P
::Array<uint>* Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::_get_P() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("_get_P");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "P"));
}
// Autogenerated static field setter
// Set static field: static readonly System.UInt32[] P
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::_set_P(::Array<uint>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("_set_P");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "P", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.UInt32[] PExt
::Array<uint>* Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::_get_PExt() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("_get_PExt");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "PExt"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.UInt32[] PExt
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::_set_PExt(::Array<uint>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("_set_PExt");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "PExt", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.UInt32[] PExtInv
::Array<uint>* Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::_get_PExtInv() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("_get_PExtInv");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "PExtInv"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.UInt32[] PExtInv
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::_set_PExtInv(::Array<uint>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("_set_PExtInv");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "PExtInv", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Add
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Add");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.AddOne
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::AddOne(::Array<uint>* x, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("AddOne");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "AddOne", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.FromBigInteger
::Array<uint>* Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::FromBigInteger(Org::BouncyCastle::Math::BigInteger* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("FromBigInteger");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "FromBigInteger", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Inv
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Inv(::Array<uint>* x, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Inv");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Inv", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.IsZero
int Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::IsZero(::Array<uint>* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("IsZero");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "IsZero", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Multiply
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Multiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Multiply");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Multiply", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.MultiplyAddToExt
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::MultiplyAddToExt(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("MultiplyAddToExt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "MultiplyAddToExt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, zz)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, zz);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Negate
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Negate(::Array<uint>* x, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Negate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Negate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Random
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Random(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Random");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Random", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(r, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, r, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.RandomMult
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::RandomMult(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("RandomMult");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "RandomMult", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(r, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, r, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Reduce
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Reduce(::Array<uint>* xx, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Reduce");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Reduce", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(xx, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, xx, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Reduce32
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Reduce32(uint x, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Reduce32");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Reduce32", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Square
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Square(::Array<uint>* x, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Square");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Square", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.SquareN
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::SquareN(::Array<uint>* x, int n, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("SquareN");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "SquareN", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, n, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, n, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Subtract
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Subtract(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Subtract");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Subtract", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field.Twice
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::Twice(::Array<uint>* x, ::Array<uint>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext("Twice");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", "Twice", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field..cctor
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP192K1Field").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
