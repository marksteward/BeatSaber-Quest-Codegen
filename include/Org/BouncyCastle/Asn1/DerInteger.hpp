// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerInteger
  // [] Offset: FFFFFFFF
  class DerInteger : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.Byte[] bytes
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* bytes;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Int32 start
    // Size: 0x4
    // Offset: 0x18
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DerInteger
    DerInteger(::Array<uint8_t>* bytes_ = {}, int start_ = {}) noexcept : bytes{bytes_}, start{start_} {}
    // static System.Boolean AllowUnsafe()
    // Offset: 0x13830BC
    static bool AllowUnsafe();
    // static public Org.BouncyCastle.Asn1.DerInteger GetInstance(System.Object obj)
    // Offset: 0x138316C
    static Org::BouncyCastle::Asn1::DerInteger* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerInteger GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x138326C
    static Org::BouncyCastle::Asn1::DerInteger* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0x137EF9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerInteger* New_ctor(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerInteger*, creationType>(value)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x137EC94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerInteger* New_ctor(Org::BouncyCastle::Math::BigInteger* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerInteger*, creationType>(value)));
    }
    // public System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x1383394
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerInteger* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerInteger*, creationType>(bytes)));
    }
    // System.Void .ctor(System.Byte[] bytes, System.Boolean clone)
    // Offset: 0x13744F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerInteger* New_ctor(::Array<uint8_t>* bytes, bool clone) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerInteger*, creationType>(bytes, clone)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_PositiveValue()
    // Offset: 0x137ED64
    Org::BouncyCastle::Math::BigInteger* get_PositiveValue();
    // public Org.BouncyCastle.Math.BigInteger get_Value()
    // Offset: 0x138339C
    Org::BouncyCastle::Math::BigInteger* get_Value();
    // public System.Int32 get_IntValueExact()
    // Offset: 0x1383404
    int get_IntValueExact();
    // static System.Int32 IntValue(System.Byte[] bytes, System.Int32 start, System.Int32 signExt)
    // Offset: 0x1381300
    static int IntValue(::Array<uint8_t>* bytes, int start, int signExt);
    // static System.Boolean IsMalformed(System.Byte[] bytes)
    // Offset: 0x1381104
    static bool IsMalformed(::Array<uint8_t>* bytes);
    // static System.Int32 SignBytesToSkip(System.Byte[] bytes)
    // Offset: 0x138118C
    static int SignBytesToSkip(::Array<uint8_t>* bytes);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x13834A4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x13834C8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1383534
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String ToString()
    // Offset: 0x138360C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.DerInteger
  static check_size<sizeof(DerInteger), 24 + sizeof(int)> __Org_BouncyCastle_Asn1_DerIntegerSizeCheck;
  static_assert(sizeof(DerInteger) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerInteger*, "Org.BouncyCastle.Asn1", "DerInteger");
