// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1InputStream
#include "Org/BouncyCastle/Asn1/Asn1InputStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerSequence
  class DerSequence;
  // Forward declaring type: DefiniteLengthInputStream
  class DefiniteLengthInputStream;
  // Forward declaring type: DerSet
  class DerSet;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.LazyAsn1InputStream
  // [] Offset: FFFFFFFF
  class LazyAsn1InputStream : public Org::BouncyCastle::Asn1::Asn1InputStream {
    public:
    // Creating value type constructor for type: LazyAsn1InputStream
    LazyAsn1InputStream() noexcept {}
    // public System.Void .ctor(System.Byte[] input)
    // Offset: 0x13F54E4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1InputStream
    // Base method: System.Void Asn1InputStream::.ctor(System.Byte[] input)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyAsn1InputStream* New_ctor(::Array<uint8_t>* input) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::LazyAsn1InputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyAsn1InputStream*, creationType>(input)));
    }
    // public System.Void .ctor(System.IO.Stream inputStream)
    // Offset: 0x13F54EC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1InputStream
    // Base method: System.Void Asn1InputStream::.ctor(System.IO.Stream inputStream)
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream inputStream)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyAsn1InputStream* New_ctor(System::IO::Stream* inputStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::LazyAsn1InputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyAsn1InputStream*, creationType>(inputStream)));
    }
    // override Org.BouncyCastle.Asn1.DerSequence CreateDerSequence(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x13F54F4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1InputStream
    // Base method: Org.BouncyCastle.Asn1.DerSequence Asn1InputStream::CreateDerSequence(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
    // override Org.BouncyCastle.Asn1.DerSet CreateDerSet(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x13F55F4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1InputStream
    // Base method: Org.BouncyCastle.Asn1.DerSet Asn1InputStream::CreateDerSet(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    Org::BouncyCastle::Asn1::DerSet* CreateDerSet(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
  }; // Org.BouncyCastle.Asn1.LazyAsn1InputStream
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::LazyAsn1InputStream*, "Org.BouncyCastle.Asn1", "LazyAsn1InputStream");
