// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerBitString
#include "Org/BouncyCastle/Asn1/DerBitString.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.ReasonFlags
  class ReasonFlags : public Org::BouncyCastle::Asn1::DerBitString {
    public:
    // Creating value type constructor for type: ReasonFlags
    ReasonFlags() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerBitString reasons)
    // Offset: 0x18566F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReasonFlags* New_ctor(Org::BouncyCastle::Asn1::DerBitString* reasons) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::ReasonFlags::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReasonFlags*, creationType>(reasons)));
    }
  }; // Org.BouncyCastle.Asn1.X509.ReasonFlags
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::ReasonFlags*, "Org.BouncyCastle.Asn1.X509", "ReasonFlags");
