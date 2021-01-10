// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  // Autogenerated type: Org.BouncyCastle.Asn1.DerObjectIdentifier
  // [] Offset: FFFFFFFF
  class DerObjectIdentifier : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.String identifier
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* identifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] body
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* body;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: DerObjectIdentifier
    DerObjectIdentifier(::Il2CppString* identifier_ = {}, ::Array<uint8_t>* body_ = {}) noexcept : identifier{identifier_}, body{body_} {}
    // Get static field: static private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier[] cache
    static ::Array<Org::BouncyCastle::Asn1::DerObjectIdentifier*>* _get_cache();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier[] cache
    static void _set_cache(::Array<Org::BouncyCastle::Asn1::DerObjectIdentifier*>* value);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetInstance(System.Object obj)
    // Offset: 0x1383A74
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x1383C54
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // public System.Void .ctor(System.String identifier)
    // Offset: 0x136FFB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerObjectIdentifier* New_ctor(::Il2CppString* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerObjectIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerObjectIdentifier*, creationType>(identifier)));
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier oid, System.String branchID)
    // Offset: 0x1383E3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerObjectIdentifier* New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Il2CppString* branchID) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerObjectIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerObjectIdentifier*, creationType>(oid, branchID)));
    }
    // public System.String get_Id()
    // Offset: 0x1384070
    ::Il2CppString* get_Id();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier Branch(System.String branchID)
    // Offset: 0x1384078
    Org::BouncyCastle::Asn1::DerObjectIdentifier* Branch(::Il2CppString* branchID);
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x13840E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerObjectIdentifier* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerObjectIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerObjectIdentifier*, creationType>(bytes)));
    }
    // private System.Void WriteField(System.IO.Stream outputStream, System.Int64 fieldValue)
    // Offset: 0x138445C
    void WriteField(System::IO::Stream* outputStream, int64_t fieldValue);
    // private System.Void WriteField(System.IO.Stream outputStream, Org.BouncyCastle.Math.BigInteger fieldValue)
    // Offset: 0x138454C
    void WriteField(System::IO::Stream* outputStream, Org::BouncyCastle::Math::BigInteger* fieldValue);
    // private System.Void DoOutput(System.IO.MemoryStream bOut)
    // Offset: 0x13846D8
    void DoOutput(System::IO::MemoryStream* bOut);
    // System.Byte[] GetBody()
    // Offset: 0x13848A0
    ::Array<uint8_t>* GetBody();
    // static private System.Boolean IsValidBranchID(System.String branchID, System.Int32 start)
    // Offset: 0x1383F74
    static bool IsValidBranchID(::Il2CppString* branchID, int start);
    // static private System.Boolean IsValidIdentifier(System.String identifier)
    // Offset: 0x1383D74
    static bool IsValidIdentifier(::Il2CppString* identifier);
    // static private System.String MakeOidStringFromBytes(System.Byte[] bytes)
    // Offset: 0x13841C4
    static ::Il2CppString* MakeOidStringFromBytes(::Array<uint8_t>* bytes);
    // static Org.BouncyCastle.Asn1.DerObjectIdentifier FromOctetString(System.Byte[] enc)
    // Offset: 0x1374028
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* FromOctetString(::Array<uint8_t>* enc);
    // static private System.Void .cctor()
    // Offset: 0x1384AB0
    static void _cctor();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x13849A4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x13849D8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x13849F4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String ToString()
    // Offset: 0x1384AA8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.DerObjectIdentifier
  static check_size<sizeof(DerObjectIdentifier), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Asn1_DerObjectIdentifierSizeCheck;
  static_assert(sizeof(DerObjectIdentifier) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Org.BouncyCastle.Asn1", "DerObjectIdentifier");
#pragma pack(pop)
