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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X962Parameters
  class X962Parameters : public Org::BouncyCastle::Asn1::Asn1Encodable/*, public Org::BouncyCastle::Asn1::IAsn1Choice*/ {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1Object _params
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Object* params;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    // Creating value type constructor for type: X962Parameters
    X962Parameters(Org::BouncyCastle::Asn1::Asn1Object* params_ = {}) noexcept : params{params_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Choice
    operator Org::BouncyCastle::Asn1::IAsn1Choice() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Choice*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1Object*
    constexpr operator Org::BouncyCastle::Asn1::Asn1Object*() const noexcept {
      return params;
    }
    // static public Org.BouncyCastle.Asn1.X9.X962Parameters GetInstance(System.Object obj)
    // Offset: 0x1A14AF4
    static Org::BouncyCastle::Asn1::X9::X962Parameters* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Object obj)
    // Offset: 0x1A14D70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X962Parameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Object* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X962Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X962Parameters*, creationType>(obj)));
    }
    // public System.Boolean get_IsNamedCurve()
    // Offset: 0x1A14D9C
    bool get_IsNamedCurve();
    // public System.Boolean get_IsImplicitlyCA()
    // Offset: 0x1A14E20
    bool get_IsImplicitlyCA();
    // public Org.BouncyCastle.Asn1.Asn1Object get_Parameters()
    // Offset: 0x1A14EA4
    Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A14EAC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X962Parameters
  #pragma pack(pop)
  static check_size<sizeof(X962Parameters), 16 + sizeof(Org::BouncyCastle::Asn1::Asn1Object*)> __Org_BouncyCastle_Asn1_X9_X962ParametersSizeCheck;
  static_assert(sizeof(X962Parameters) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X962Parameters*, "Org.BouncyCastle.Asn1.X9", "X962Parameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X962Parameters::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X962Parameters* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X9::X962Parameters::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X962Parameters*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X962Parameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X962Parameters::get_IsNamedCurve
// Il2CppName: get_IsNamedCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::X9::X962Parameters::*)()>(&Org::BouncyCastle::Asn1::X9::X962Parameters::get_IsNamedCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X962Parameters*), "get_IsNamedCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X962Parameters::get_IsImplicitlyCA
// Il2CppName: get_IsImplicitlyCA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::X9::X962Parameters::*)()>(&Org::BouncyCastle::Asn1::X9::X962Parameters::get_IsImplicitlyCA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X962Parameters*), "get_IsImplicitlyCA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X962Parameters::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::X962Parameters::*)()>(&Org::BouncyCastle::Asn1::X9::X962Parameters::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X962Parameters*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X962Parameters::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::X962Parameters::*)()>(&Org::BouncyCastle::Asn1::X9::X962Parameters::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X962Parameters*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
