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
  // Skipping declaration: Asn1Encodable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1TaggedObject
  class Asn1TaggedObject : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // System.Int32 tagNo
    // Size: 0x4
    // Offset: 0x10
    int tagNo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean explicitly
    // Size: 0x1
    // Offset: 0x14
    bool explicitly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: explicitly and: obj
    char __padding1[0x3] = {};
    // Org.BouncyCastle.Asn1.Asn1Encodable obj
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Encodable* obj;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Encodable*) == 0x8);
    // Creating value type constructor for type: Asn1TaggedObject
    Asn1TaggedObject(int tagNo_ = {}, bool explicitly_ = {}, Org::BouncyCastle::Asn1::Asn1Encodable* obj_ = {}) noexcept : tagNo{tagNo_}, explicitly{explicitly_}, obj{obj_} {}
    // static public Org.BouncyCastle.Asn1.Asn1TaggedObject GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x1567378
    static Org::BouncyCastle::Asn1::Asn1TaggedObject* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // static public Org.BouncyCastle.Asn1.Asn1TaggedObject GetInstance(System.Object obj)
    // Offset: 0x1567420
    static Org::BouncyCastle::Asn1::Asn1TaggedObject* GetInstance(::Il2CppObject* obj);
    // protected System.Void .ctor(System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x156752C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1TaggedObject* New_ctor(int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1TaggedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1TaggedObject*, creationType>(tagNo, obj)));
    }
    // protected System.Void .ctor(System.Boolean explicitly, System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x1567574
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1TaggedObject* New_ctor(bool explicitly, int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1TaggedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1TaggedObject*, creationType>(explicitly, tagNo, obj)));
    }
    // public System.Int32 get_TagNo()
    // Offset: 0x1567770
    int get_TagNo();
    // public System.Boolean IsExplicit()
    // Offset: 0x1567778
    bool IsExplicit();
    // public System.Boolean IsEmpty()
    // Offset: 0x1567780
    bool IsEmpty();
    // public Org.BouncyCastle.Asn1.Asn1Object GetObject()
    // Offset: 0x15646E4
    Org::BouncyCastle::Asn1::Asn1Object* GetObject();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1567610
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x156772C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1567788
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.Asn1TaggedObject
  #pragma pack(pop)
  static check_size<sizeof(Asn1TaggedObject), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1Encodable*)> __Org_BouncyCastle_Asn1_Asn1TaggedObjectSizeCheck;
  static_assert(sizeof(Asn1TaggedObject) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1TaggedObject*, "Org.BouncyCastle.Asn1", "Asn1TaggedObject");
