// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
#include "Org/BouncyCastle/Math/EC/Rfc7748/X25519Field.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32[] RootNegOne
::Array<int>* Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::_get_RootNegOne() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("_get_RootNegOne");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int>*>("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "RootNegOne"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32[] RootNegOne
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::_set_RootNegOne(::Array<int>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("_set_RootNegOne");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "RootNegOne", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Add
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Add(::Array<int>* x, ::Array<int>* y, ::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Add");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.AddOne
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::AddOne(::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("AddOne");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "AddOne", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Apm
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Apm(::Array<int>* x, ::Array<int>* y, ::Array<int>* zp, ::Array<int>* zm) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Apm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Apm", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, zp, zm)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, zp, zm);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Carry
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Carry(::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Carry");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Carry", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.CMov
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CMov(int cond, ::Array<int>* x, int xOff, ::Array<int>* z, int zOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("CMov");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "CMov", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(cond, x, xOff, z, zOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, cond, x, xOff, z, zOff);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.CNegate
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CNegate(int negate, ::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("CNegate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "CNegate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(negate, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, negate, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Copy
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Copy(::Array<int>* x, int xOff, ::Array<int>* z, int zOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Copy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Copy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, xOff, z, zOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, xOff, z, zOff);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Create
::Array<int>* Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Create() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Create");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<int>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.CSwap
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CSwap(int swap, ::Array<int>* a, ::Array<int>* b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("CSwap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "CSwap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(swap, a, b)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, swap, a, b);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Encode
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode(::Array<int>* x, ::Array<uint8_t>* z, int zOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Encode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Encode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z, zOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z, zOff);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Encode128
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode128(::Array<int>* x, int xOff, ::Array<uint8_t>* bs, int off) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Encode128");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Encode128", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, xOff, bs, off)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, xOff, bs, off);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Encode32
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode32(uint n, ::Array<uint8_t>* bs, int off) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Encode32");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Encode32", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(n, bs, off)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, n, bs, off);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Inv
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Inv(::Array<int>* x, ::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Inv");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Inv", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.IsZero
int Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::IsZero(::Array<int>* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("IsZero");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "IsZero", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Mul
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Mul(::Array<int>* x, ::Array<int>* y, ::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Mul");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Mul", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Normalize
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Normalize(::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Normalize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Normalize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.One
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::One(::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("One");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "One", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.PowPm5d8
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::PowPm5d8(::Array<int>* x, ::Array<int>* rx2, ::Array<int>* rz) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("PowPm5d8");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "PowPm5d8", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, rx2, rz)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, rx2, rz);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Reduce
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Reduce(::Array<int>* z, int x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Reduce");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Reduce", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(z, x)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, z, x);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Sqr
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr(::Array<int>* x, ::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Sqr");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Sqr", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Sqr
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr(::Array<int>* x, int n, ::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Sqr");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Sqr", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, n, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, n, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Sub
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sub(::Array<int>* x, ::Array<int>* y, ::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Sub");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Sub", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, y, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field.Zero
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Zero(::Array<int>* z) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext("Zero");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", "Zero", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(z)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, z);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field..cctor
void Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Rfc7748").WithContext("X25519Field").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
