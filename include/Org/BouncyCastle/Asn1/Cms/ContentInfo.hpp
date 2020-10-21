// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Cms
namespace Org::BouncyCastle::Asn1::Cms {
  // Autogenerated type: Org.BouncyCastle.Asn1.Cms.ContentInfo
  class ContentInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier contentType
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;
    // private readonly Org.BouncyCastle.Asn1.Asn1Encodable content
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Encodable* content;
    // static public Org.BouncyCastle.Asn1.Cms.ContentInfo GetInstance(System.Object obj)
    // Offset: 0x131CD48
    static Org::BouncyCastle::Asn1::Cms::ContentInfo* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x131CEBC
    static ContentInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x131D144
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Cms.ContentInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::ContentInfo*, "Org.BouncyCastle.Asn1.Cms", "ContentInfo");
#pragma pack(pop)