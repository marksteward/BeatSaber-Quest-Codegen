// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Crypto.Signers.IsoTrailers
#include "Org/BouncyCastle/Crypto/Signers/IsoTrailers.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Collections.IDictionary trailerMap
System::Collections::IDictionary* Org::BouncyCastle::Crypto::Signers::IsoTrailers::_get_trailerMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IsoTrailers").WithContext("_get_trailerMap");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Crypto.Signers", "IsoTrailers", "trailerMap"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Collections.IDictionary trailerMap
void Org::BouncyCastle::Crypto::Signers::IsoTrailers::_set_trailerMap(System::Collections::IDictionary* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IsoTrailers").WithContext("_set_trailerMap");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Signers", "IsoTrailers", "trailerMap", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IsoTrailers.CreateTrailerMap
System::Collections::IDictionary* Org::BouncyCastle::Crypto::Signers::IsoTrailers::CreateTrailerMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IsoTrailers").WithContext("CreateTrailerMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Signers", "IsoTrailers", "CreateTrailerMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IDictionary*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IsoTrailers.GetTrailer
int Org::BouncyCastle::Crypto::Signers::IsoTrailers::GetTrailer(Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IsoTrailers").WithContext("GetTrailer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Signers", "IsoTrailers", "GetTrailer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(digest)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, digest);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IsoTrailers.NoTrailerAvailable
bool Org::BouncyCastle::Crypto::Signers::IsoTrailers::NoTrailerAvailable(Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IsoTrailers").WithContext("NoTrailerAvailable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Signers", "IsoTrailers", "NoTrailerAvailable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(digest)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, digest);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IsoTrailers..cctor
void Org::BouncyCastle::Crypto::Signers::IsoTrailers::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IsoTrailers").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Signers", "IsoTrailers", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
