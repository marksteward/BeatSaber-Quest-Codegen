// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
  class SimpleBigDecimal : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger bigInt
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* bigInt;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly System.Int32 scale
    // Size: 0x4
    // Offset: 0x18
    int scale;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SimpleBigDecimal
    SimpleBigDecimal(Org::BouncyCastle::Math::BigInteger* bigInt_ = {}, int scale_ = {}) noexcept : bigInt{bigInt_}, scale{scale_} {}
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger bigInt, System.Int32 scale)
    // Offset: 0x1D0C5BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleBigDecimal* New_ctor(Org::BouncyCastle::Math::BigInteger* bigInt, int scale) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleBigDecimal*, creationType>(bigInt, scale)));
    }
    // private System.Void CheckScale(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal b)
    // Offset: 0x1D0C660
    void CheckScale(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal AdjustScale(System.Int32 newScale)
    // Offset: 0x1D0C700
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* AdjustScale(int newScale);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Add(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal b)
    // Offset: 0x1D0C7DC
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Negate()
    // Offset: 0x1D0C880
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Negate();
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Subtract(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal b)
    // Offset: 0x1D0C90C
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
    // public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Subtract(Org.BouncyCastle.Math.BigInteger b)
    // Offset: 0x1D0C940
    Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(Org::BouncyCastle::Math::BigInteger* b);
    // public System.Int32 CompareTo(Org.BouncyCastle.Math.BigInteger val)
    // Offset: 0x1D0C9EC
    int CompareTo(Org::BouncyCastle::Math::BigInteger* val);
    // public Org.BouncyCastle.Math.BigInteger Floor()
    // Offset: 0x1D0CA34
    Org::BouncyCastle::Math::BigInteger* Floor();
    // public Org.BouncyCastle.Math.BigInteger Round()
    // Offset: 0x1D0CA58
    Org::BouncyCastle::Math::BigInteger* Round();
    // public System.Int32 get_Scale()
    // Offset: 0x1D0CB10
    int get_Scale();
    // public override System.String ToString()
    // Offset: 0x1D0CB18
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D0CE20
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D0CEF4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
  #pragma pack(pop)
  static check_size<sizeof(SimpleBigDecimal), 24 + sizeof(int)> __Org_BouncyCastle_Math_EC_Abc_SimpleBigDecimalSizeCheck;
  static_assert(sizeof(SimpleBigDecimal) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, "Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::CheckScale
// Il2CppName: CheckScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*)>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::CheckScale)> {
  const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "CheckScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::AdjustScale
// Il2CppName: AdjustScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)(int)>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::AdjustScale)> {
  const MethodInfo* get() {
    static auto* newScale = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "AdjustScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newScale});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*)>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Add)> {
  const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)()>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Negate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*)>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Subtract)> {
  const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Subtract)> {
  const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::CompareTo)> {
  const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Floor
// Il2CppName: Floor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)()>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Floor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "Floor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Round
// Il2CppName: Round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)()>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Round)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "Round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::get_Scale
// Il2CppName: get_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)()>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::get_Scale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "get_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)()>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::*)()>(&Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
