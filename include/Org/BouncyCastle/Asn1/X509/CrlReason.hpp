// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerEnumerated
#include "Org/BouncyCastle/Asn1/DerEnumerated.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.CrlReason
  class CrlReason : public Org::BouncyCastle::Asn1::DerEnumerated {
    public:
    // Creating value type constructor for type: CrlReason
    CrlReason() noexcept {}
    // Get static field: static private readonly System.String[] ReasonString
    static ::Array<::Il2CppString*>* _get_ReasonString();
    // Set static field: static private readonly System.String[] ReasonString
    static void _set_ReasonString(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerEnumerated reason)
    // Offset: 0x1856000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlReason* New_ctor(Org::BouncyCastle::Asn1::DerEnumerated* reason) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::CrlReason::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlReason*, creationType>(reason)));
    }
    // public override System.String ToString()
    // Offset: 0x185608C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // static private System.Void .cctor()
    // Offset: 0x1856158
    // Implemented from: Org.BouncyCastle.Asn1.DerEnumerated
    // Base method: System.Void DerEnumerated::.cctor()
    static void _cctor();
  }; // Org.BouncyCastle.Asn1.X509.CrlReason
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CrlReason*, "Org.BouncyCastle.Asn1.X509", "CrlReason");
