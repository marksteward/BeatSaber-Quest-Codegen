// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams
  // [TokenAttribute] Offset: FFFFFFFF
  class Pkcs12PbeParams : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger iterations
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* iterations;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString iv
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1OctetString* iv;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // Creating value type constructor for type: Pkcs12PbeParams
    Pkcs12PbeParams(Org::BouncyCastle::Asn1::DerInteger* iterations_ = {}, Org::BouncyCastle::Asn1::Asn1OctetString* iv_ = {}) noexcept : iterations{iterations_}, iv{iv_} {}
    // Get instance field: private readonly Org.BouncyCastle.Asn1.DerInteger iterations
    Org::BouncyCastle::Asn1::DerInteger* _get_iterations();
    // Set instance field: private readonly Org.BouncyCastle.Asn1.DerInteger iterations
    void _set_iterations(Org::BouncyCastle::Asn1::DerInteger* value);
    // Get instance field: private readonly Org.BouncyCastle.Asn1.Asn1OctetString iv
    Org::BouncyCastle::Asn1::Asn1OctetString* _get_iv();
    // Set instance field: private readonly Org.BouncyCastle.Asn1.Asn1OctetString iv
    void _set_iv(Org::BouncyCastle::Asn1::Asn1OctetString* value);
    // public Org.BouncyCastle.Math.BigInteger get_Iterations()
    // Offset: 0x17635BC
    Org::BouncyCastle::Math::BigInteger* get_Iterations();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x176333C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs12PbeParams* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs12PbeParams*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams GetInstance(System.Object obj)
    // Offset: 0x176343C
    static Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* GetInstance(::Il2CppObject* obj);
    // public System.Byte[] GetIV()
    // Offset: 0x17635D8
    ::Array<uint8_t>* GetIV();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x17635F8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams
  #pragma pack(pop)
  static check_size<sizeof(Pkcs12PbeParams), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*)> __Org_BouncyCastle_Asn1_Pkcs_Pkcs12PbeParamsSizeCheck;
  static_assert(sizeof(Pkcs12PbeParams) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*, "Org.BouncyCastle.Asn1.Pkcs", "Pkcs12PbeParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::get_Iterations
// Il2CppName: get_Iterations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::get_Iterations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*), "get_Iterations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::GetIV
// Il2CppName: GetIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::GetIV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*), "GetIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::*)()>(&Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
