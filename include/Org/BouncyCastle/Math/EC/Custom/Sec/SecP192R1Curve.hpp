// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpCurve
#include "Org/BouncyCastle/Math/EC/AbstractFpCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Custom::Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Forward declaring type: SecP192R1Point
  class SecP192R1Point;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
  // Skipping declaration: ECCurve because it is already included!
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Curve
  // [TokenAttribute] Offset: FFFFFFFF
  class SecP192R1Curve : public Org::BouncyCastle::Math::EC::AbstractFpCurve {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::SecP192R1LookupTable
    class SecP192R1LookupTable;
    // protected readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Point m_infinity
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point* m_infinity;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*) == 0x8);
    // Creating value type constructor for type: SecP192R1Curve
    SecP192R1Curve(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point* m_infinity_ = {}) noexcept : m_infinity{m_infinity_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*
    constexpr operator Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*() const noexcept {
      return m_infinity;
    }
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger q
    static Org::BouncyCastle::Math::BigInteger* _get_q();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger q
    static void _set_q(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECP192R1_AFFINE_ZS
    static ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* _get_SECP192R1_AFFINE_ZS();
    // Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECP192R1_AFFINE_ZS
    static void _set_SECP192R1_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1DC2318
    static void _cctor();
    // public override Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0x1DC1BF4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::get_Infinity()
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1DC1BFC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Int32 ECCurve::get_FieldSize()
    int get_FieldSize();
    // public System.Void .ctor()
    // Offset: 0x1DC19A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP192R1Curve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP192R1Curve*, creationType>()));
    }
    // protected override Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0x1DC1B90
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECCurve ECCurve::CloneCurve()
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // public override System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x1DC1BE8
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Boolean ECCurve::SupportsCoordinateSystem(System.Int32 coord)
    bool SupportsCoordinateSystem(int coord);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1DC1C70
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1DC1DE4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1DC1F3C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECLookupTable CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x1DC1FDC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECLookupTable ECCurve::CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0x1DC21C8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement AbstractFpCurve::RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Curve
  #pragma pack(pop)
  static check_size<sizeof(SecP192R1Curve), 80 + sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point*)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecP192R1CurveSizeCheck;
  static_assert(sizeof(SecP192R1Curve) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192R1Curve");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::get_Infinity
// Il2CppName: get_Infinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::get_Infinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "get_Infinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::get_FieldSize
// Il2CppName: get_FieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::get_FieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CloneCurve
// Il2CppName: CloneCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CloneCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "CloneCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::SupportsCoordinateSystem
// Il2CppName: SupportsCoordinateSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)(int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::SupportsCoordinateSystem)> {
  static const MethodInfo* get() {
    static auto* coord = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "SupportsCoordinateSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coord});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*, bool)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* zs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement"), 1)->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zs, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CreateCacheSafeLookupTable
// Il2CppName: CreateCacheSafeLookupTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECLookupTable* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int, int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::CreateCacheSafeLookupTable)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "CreateCacheSafeLookupTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::RandomFieldElementMult
// Il2CppName: RandomFieldElementMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::*)(Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve::RandomFieldElementMult)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Curve*), "RandomFieldElementMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
