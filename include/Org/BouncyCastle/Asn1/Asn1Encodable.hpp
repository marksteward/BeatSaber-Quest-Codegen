// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.IAsn1Convertible
#include "Org/BouncyCastle/Asn1/IAsn1Convertible.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Encodable
  class Asn1Encodable : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Convertible
    operator Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // public System.Byte[] GetEncoded()
    // Offset: 0x1311908
    ::Array<uint8_t>* GetEncoded();
    // public System.Byte[] GetEncoded(System.String encoding)
    // Offset: 0x13119C8
    ::Array<uint8_t>* GetEncoded(::Il2CppString* encoding);
    // public System.Byte[] GetDerEncoded()
    // Offset: 0x1311AC0
    ::Array<uint8_t>* GetDerEncoded();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1311B88
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1311BC0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0xFFFFFFFF
    // Implemented from: Org.BouncyCastle.Asn1.IAsn1Convertible
    // Base method: Org.BouncyCastle.Asn1.Asn1Object IAsn1Convertible::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // protected System.Void .ctor()
    // Offset: 0x1311CF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Asn1Encodable* New_ctor();
  }; // Org.BouncyCastle.Asn1.Asn1Encodable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Encodable*, "Org.BouncyCastle.Asn1", "Asn1Encodable");
#pragma pack(pop)
