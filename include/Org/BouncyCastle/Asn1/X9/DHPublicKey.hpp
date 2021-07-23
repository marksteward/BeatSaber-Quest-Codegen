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
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.DHPublicKey
  // [TokenAttribute] Offset: FFFFFFFF
  class DHPublicKey : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger y
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* y;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Creating value type constructor for type: DHPublicKey
    DHPublicKey(Org::BouncyCastle::Asn1::DerInteger* y_ = {}) noexcept : y{y_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::DerInteger*
    constexpr operator Org::BouncyCastle::Asn1::DerInteger*() const noexcept {
      return y;
    }
    // Get instance field: private readonly Org.BouncyCastle.Asn1.DerInteger y
    Org::BouncyCastle::Asn1::DerInteger* _get_y();
    // Set instance field: private readonly Org.BouncyCastle.Asn1.DerInteger y
    void _set_y(Org::BouncyCastle::Asn1::DerInteger* value);
    // public Org.BouncyCastle.Asn1.DerInteger get_Y()
    // Offset: 0x19E3384
    Org::BouncyCastle::Asn1::DerInteger* get_Y();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerInteger y)
    // Offset: 0x19E32E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHPublicKey* New_ctor(Org::BouncyCastle::Asn1::DerInteger* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::DHPublicKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHPublicKey*, creationType>(y)));
    }
    // static public Org.BouncyCastle.Asn1.X9.DHPublicKey GetInstance(System.Object obj)
    // Offset: 0x19E3168
    static Org::BouncyCastle::Asn1::X9::DHPublicKey* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19E338C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.DHPublicKey
  #pragma pack(pop)
  static check_size<sizeof(DHPublicKey), 16 + sizeof(Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_X9_DHPublicKeySizeCheck;
  static_assert(sizeof(DHPublicKey) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::DHPublicKey*, "Org.BouncyCastle.Asn1.X9", "DHPublicKey");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHPublicKey::get_Y
// Il2CppName: get_Y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X9::DHPublicKey::*)()>(&Org::BouncyCastle::Asn1::X9::DHPublicKey::get_Y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHPublicKey*), "get_Y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHPublicKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHPublicKey::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::DHPublicKey* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X9::DHPublicKey::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHPublicKey*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::DHPublicKey::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::DHPublicKey::*)()>(&Org::BouncyCastle::Asn1::X9::DHPublicKey::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::DHPublicKey*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
