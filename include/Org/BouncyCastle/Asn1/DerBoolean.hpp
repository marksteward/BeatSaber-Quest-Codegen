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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerBoolean
  // [] Offset: FFFFFFFF
  class DerBoolean : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.Byte value
    // Size: 0x1
    // Offset: 0x10
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: DerBoolean
    DerBoolean(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerBoolean False
    static Org::BouncyCastle::Asn1::DerBoolean* _get_False();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerBoolean False
    static void _set_False(Org::BouncyCastle::Asn1::DerBoolean* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerBoolean True
    static Org::BouncyCastle::Asn1::DerBoolean* _get_True();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerBoolean True
    static void _set_True(Org::BouncyCastle::Asn1::DerBoolean* value);
    // static public Org.BouncyCastle.Asn1.DerBoolean GetInstance(System.Object obj)
    // Offset: 0x13807E4
    static Org::BouncyCastle::Asn1::DerBoolean* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerBoolean GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x13808E4
    static Org::BouncyCastle::Asn1::DerBoolean* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // public System.Void .ctor(System.Byte[] val)
    // Offset: 0x1380A54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerBoolean* New_ctor(::Array<uint8_t>* val) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerBoolean::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerBoolean*, creationType>(val)));
    }
    // private System.Void .ctor(System.Boolean value)
    // Offset: 0x1380B10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerBoolean* New_ctor(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerBoolean::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerBoolean*, creationType>(value)));
    }
    // public System.Boolean get_IsTrue()
    // Offset: 0x1380B48
    bool get_IsTrue();
    // static Org.BouncyCastle.Asn1.DerBoolean FromOctetString(System.Byte[] value)
    // Offset: 0x1373D2C
    static Org::BouncyCastle::Asn1::DerBoolean* FromOctetString(::Array<uint8_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x1380D34
    static void _cctor();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1380B58
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1380BEC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1380CA0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1380CD4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.DerBoolean
  static check_size<sizeof(DerBoolean), 16 + sizeof(uint8_t)> __Org_BouncyCastle_Asn1_DerBooleanSizeCheck;
  static_assert(sizeof(DerBoolean) == 0x11);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerBoolean*, "Org.BouncyCastle.Asn1", "DerBoolean");
