// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerOutputStream
#include "Org/BouncyCastle/Asn1/DerOutputStream.hpp"
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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x30
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1OutputStream
  // [] Offset: FFFFFFFF
  class Asn1OutputStream : public Org::BouncyCastle::Asn1::DerOutputStream {
    public:
    // Creating value type constructor for type: Asn1OutputStream
    Asn1OutputStream() noexcept {}
    // public System.Void .ctor(System.IO.Stream os)
    // Offset: 0x13701AC
    // Implemented from: Org.BouncyCastle.Asn1.DerOutputStream
    // Base method: System.Void DerOutputStream::.ctor(System.IO.Stream os)
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream os)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1OutputStream* New_ctor(System::IO::Stream* os) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1OutputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1OutputStream*, creationType>(os)));
    }
  }; // Org.BouncyCastle.Asn1.Asn1OutputStream
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1OutputStream*, "Org.BouncyCastle.Asn1", "Asn1OutputStream");
#pragma pack(pop)
