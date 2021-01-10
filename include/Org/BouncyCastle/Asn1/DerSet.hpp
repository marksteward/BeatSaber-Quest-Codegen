// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Set
#include "Org/BouncyCastle/Asn1/Asn1Set.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Asn1.DerSet
  // [] Offset: FFFFFFFF
  class DerSet : public Org::BouncyCastle::Asn1::Asn1Set {
    public:
    // Creating value type constructor for type: DerSet
    DerSet() noexcept {}
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerSet Empty
    static Org::BouncyCastle::Asn1::DerSet* _get_Empty();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerSet Empty
    static void _set_Empty(Org::BouncyCastle::Asn1::DerSet* value);
    // static Org.BouncyCastle.Asn1.DerSet FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    // Offset: 0x1372A08
    static Org::BouncyCastle::Asn1::DerSet* FromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    // Offset: 0x1376870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>(elementVector, needsSorting)));
    }
    // static private System.Void .cctor()
    // Offset: 0x13852C8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x137A094
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Void Asn1Set::.ctor()
    // Base method: System.Void Asn1Object::.ctor()
    // Base method: System.Void Asn1Encodable::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>()));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x137686C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Void Asn1Set::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor(Org::BouncyCastle::Asn1::Asn1Encodable* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>(element)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Offset: 0x13852A4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Set
    // Base method: System.Void Asn1Set::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSet* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSet*, creationType>(elementVector)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x137A470
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.DerSet
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerSet*, "Org.BouncyCastle.Asn1", "DerSet");
#pragma pack(pop)
