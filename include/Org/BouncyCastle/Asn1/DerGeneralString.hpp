// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerStringBase
#include "Org/BouncyCastle/Asn1/DerStringBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  // Autogenerated type: Org.BouncyCastle.Asn1.DerGeneralString
  // [] Offset: FFFFFFFF
  class DerGeneralString : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DerGeneralString
    DerGeneralString(::Il2CppString* str_ = {}) noexcept : str{str_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return str;
    }
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x1374404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerGeneralString* New_ctor(::Array<uint8_t>* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerGeneralString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerGeneralString*, creationType>(str)));
    }
    // public System.Void .ctor(System.String str)
    // Offset: 0x1381AC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerGeneralString* New_ctor(::Il2CppString* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerGeneralString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerGeneralString*, creationType>(str)));
    }
    // public System.Byte[] GetOctets()
    // Offset: 0x1381B6C
    ::Array<uint8_t>* GetOctets();
    // public override System.String GetString()
    // Offset: 0x1381B64
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::Il2CppString* GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1381B78
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1381BB4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerGeneralString
  static check_size<sizeof(DerGeneralString), 16 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Asn1_DerGeneralStringSizeCheck;
  static_assert(sizeof(DerGeneralString) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerGeneralString*, "Org.BouncyCastle.Asn1", "DerGeneralString");
#pragma pack(pop)
