// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Choice
#include "Org/BouncyCastle/Asn1/IAsn1Choice.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: GeneralNames
  class GeneralNames;
  // Forward declaring type: V2Form
  class V2Form;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.AttCertIssuer
  // [TokenAttribute] Offset: FFFFFFFF
  class AttCertIssuer : public Org::BouncyCastle::Asn1::Asn1Encodable/*, public Org::BouncyCastle::Asn1::IAsn1Choice*/ {
    public:
    // readonly Org.BouncyCastle.Asn1.Asn1Encodable obj
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Encodable* obj;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Encodable*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.Asn1Object choiceObj
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Object* choiceObj;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    // Creating value type constructor for type: AttCertIssuer
    AttCertIssuer(Org::BouncyCastle::Asn1::Asn1Encodable* obj_ = {}, Org::BouncyCastle::Asn1::Asn1Object* choiceObj_ = {}) noexcept : obj{obj_}, choiceObj{choiceObj_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Choice
    operator Org::BouncyCastle::Asn1::IAsn1Choice() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Choice*>(this);
    }
    // Get instance field: readonly Org.BouncyCastle.Asn1.Asn1Encodable obj
    Org::BouncyCastle::Asn1::Asn1Encodable* _get_obj();
    // Set instance field: readonly Org.BouncyCastle.Asn1.Asn1Encodable obj
    void _set_obj(Org::BouncyCastle::Asn1::Asn1Encodable* value);
    // Get instance field: readonly Org.BouncyCastle.Asn1.Asn1Object choiceObj
    Org::BouncyCastle::Asn1::Asn1Object* _get_choiceObj();
    // Set instance field: readonly Org.BouncyCastle.Asn1.Asn1Object choiceObj
    void _set_choiceObj(Org::BouncyCastle::Asn1::Asn1Object* value);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.GeneralNames names)
    // Offset: 0x19D6280
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttCertIssuer* New_ctor(Org::BouncyCastle::Asn1::X509::GeneralNames* names) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::AttCertIssuer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttCertIssuer*, creationType>(names)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.V2Form v2Form)
    // Offset: 0x19D61F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttCertIssuer* New_ctor(Org::BouncyCastle::Asn1::X509::V2Form* v2Form) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::AttCertIssuer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttCertIssuer*, creationType>(v2Form)));
    }
    // static public Org.BouncyCastle.Asn1.X509.AttCertIssuer GetInstance(System.Object obj)
    // Offset: 0x19D5EE4
    static Org::BouncyCastle::Asn1::X509::AttCertIssuer* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19D6388
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.AttCertIssuer
  #pragma pack(pop)
  static check_size<sizeof(AttCertIssuer), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1Object*)> __Org_BouncyCastle_Asn1_X509_AttCertIssuerSizeCheck;
  static_assert(sizeof(AttCertIssuer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttCertIssuer*, "Org.BouncyCastle.Asn1.X509", "AttCertIssuer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttCertIssuer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttCertIssuer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttCertIssuer::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AttCertIssuer* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::AttCertIssuer::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttCertIssuer*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttCertIssuer::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::AttCertIssuer::*)()>(&Org::BouncyCastle::Asn1::X509::AttCertIssuer::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttCertIssuer*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
