// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.Field.IPolynomialExtensionField
#include "Org/BouncyCastle/Math/Field/IPolynomialExtensionField.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Skipping declaration: IFiniteField because it is already included!
  // Forward declaring type: IPolynomial
  class IPolynomial;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericPolynomialExtensionField : public ::Il2CppObject/*, public Org::BouncyCastle::Math::Field::IPolynomialExtensionField*/ {
    public:
    // protected readonly Org.BouncyCastle.Math.Field.IFiniteField subfield
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::Field::IFiniteField* subfield;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::Field::IFiniteField*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.Field.IPolynomial minimalPolynomial
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::Field::IPolynomial*) == 0x8);
    // Creating value type constructor for type: GenericPolynomialExtensionField
    GenericPolynomialExtensionField(Org::BouncyCastle::Math::Field::IFiniteField* subfield_ = {}, Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial_ = {}) noexcept : subfield{subfield_}, minimalPolynomial{minimalPolynomial_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::Field::IPolynomialExtensionField
    operator Org::BouncyCastle::Math::Field::IPolynomialExtensionField() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::Field::IPolynomialExtensionField*>(this);
    }
    // Get instance field: protected readonly Org.BouncyCastle.Math.Field.IFiniteField subfield
    Org::BouncyCastle::Math::Field::IFiniteField* _get_subfield();
    // Set instance field: protected readonly Org.BouncyCastle.Math.Field.IFiniteField subfield
    void _set_subfield(Org::BouncyCastle::Math::Field::IFiniteField* value);
    // Get instance field: protected readonly Org.BouncyCastle.Math.Field.IPolynomial minimalPolynomial
    Org::BouncyCastle::Math::Field::IPolynomial* _get_minimalPolynomial();
    // Set instance field: protected readonly Org.BouncyCastle.Math.Field.IPolynomial minimalPolynomial
    void _set_minimalPolynomial(Org::BouncyCastle::Math::Field::IPolynomial* value);
    // public Org.BouncyCastle.Math.BigInteger get_Characteristic()
    // Offset: 0x1D9F4D4
    Org::BouncyCastle::Math::BigInteger* get_Characteristic();
    // public System.Int32 get_Dimension()
    // Offset: 0x1D9F584
    int get_Dimension();
    // public Org.BouncyCastle.Math.Field.IPolynomial get_MinimalPolynomial()
    // Offset: 0x1D9F6B4
    Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();
    // System.Void .ctor(Org.BouncyCastle.Math.Field.IFiniteField subfield, Org.BouncyCastle.Math.Field.IPolynomial polynomial)
    // Offset: 0x1D9F014
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPolynomialExtensionField* New_ctor(Org::BouncyCastle::Math::Field::IFiniteField* subfield, Org::BouncyCastle::Math::Field::IPolynomial* polynomial) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPolynomialExtensionField*, creationType>(subfield, polynomial)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D9F6BC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D9F7A0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
  #pragma pack(pop)
  static check_size<sizeof(GenericPolynomialExtensionField), 24 + sizeof(Org::BouncyCastle::Math::Field::IPolynomial*)> __Org_BouncyCastle_Math_Field_GenericPolynomialExtensionFieldSizeCheck;
  static_assert(sizeof(GenericPolynomialExtensionField) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "GenericPolynomialExtensionField");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_Characteristic
// Il2CppName: get_Characteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::*)()>(&Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_Characteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*), "get_Characteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_Dimension
// Il2CppName: get_Dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::*)()>(&Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_Dimension)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*), "get_Dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_MinimalPolynomial
// Il2CppName: get_MinimalPolynomial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::Field::IPolynomial* (Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::*)()>(&Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_MinimalPolynomial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*), "get_MinimalPolynomial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::*)()>(&Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
