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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerEnumerated
  class DerEnumerated : public Org::BouncyCastle::Asn1::Asn1Object {
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
    // Creating value type constructor for type: DerEnumerated
    DerEnumerated(::Array<uint8_t>* bytes_ = {}, int start_ = {}) noexcept : bytes{bytes_}, start{start_} {}
    // Get static field: static private readonly Org.BouncyCastle.Asn1.DerEnumerated[] cache
    static ::Array<Org::BouncyCastle::Asn1::DerEnumerated*>* _get_cache();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.DerEnumerated[] cache
    static void _set_cache(::Array<Org::BouncyCastle::Asn1::DerEnumerated*>* value);
    // static public Org.BouncyCastle.Asn1.DerEnumerated GetInstance(System.Object obj)
    // Offset: 0x16FF85C
    static Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(System.Int32 val)
    // Offset: 0x16FF95C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerEnumerated* New_ctor(int val) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerEnumerated::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerEnumerated*, creationType>(val)));
    }
    // public System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x16FFA44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerEnumerated* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerEnumerated::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerEnumerated*, creationType>(bytes)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_Value()
    // Offset: 0x16FFC60
    Org::BouncyCastle::Math::BigInteger* get_Value();
    // public System.Int32 get_IntValueExact()
    // Offset: 0x16FFCC8
    int get_IntValueExact();
    // static Org.BouncyCastle.Asn1.DerEnumerated FromOctetString(System.Byte[] enc)
    // Offset: 0x16F319C
    static Org::BouncyCastle::Asn1::DerEnumerated* FromOctetString(::Array<uint8_t>* enc);
    // static private System.Void .cctor()
    // Offset: 0x16FFFBC
    static void _cctor();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x16FFE54
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x16FFE78
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x16FFF50
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
  }; // Org.BouncyCastle.Asn1.DerEnumerated
  #pragma pack(pop)
  static check_size<sizeof(DerEnumerated), 24 + sizeof(int)> __Org_BouncyCastle_Asn1_DerEnumeratedSizeCheck;
  static_assert(sizeof(DerEnumerated) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerEnumerated*, "Org.BouncyCastle.Asn1", "DerEnumerated");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerEnumerated* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::DerEnumerated::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::DerEnumerated::*)()>(&Org::BouncyCastle::Asn1::DerEnumerated::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::get_IntValueExact
// Il2CppName: get_IntValueExact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerEnumerated::*)()>(&Org::BouncyCastle::Asn1::DerEnumerated::get_IntValueExact)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), "get_IntValueExact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::FromOctetString
// Il2CppName: FromOctetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerEnumerated* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Asn1::DerEnumerated::FromOctetString)> {
  static const MethodInfo* get() {
    static auto* enc = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), "FromOctetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enc});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::DerEnumerated::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerEnumerated::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerEnumerated::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::DerEnumerated::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::DerEnumerated::Asn1Equals)> {
  static const MethodInfo* get() {
    static auto* asn1Object = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1Object});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerEnumerated::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::DerEnumerated::*)()>(&Org::BouncyCastle::Asn1::DerEnumerated::Asn1GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerEnumerated*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
