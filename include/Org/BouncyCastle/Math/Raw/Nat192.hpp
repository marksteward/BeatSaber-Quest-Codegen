// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat192
  class Nat192 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nat192
    Nat192() noexcept {}
    // static public System.UInt32 Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1339BC0
    static uint Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddBothTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1339D30
    static uint AddBothTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddTo(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff, System.UInt32 cIn)
    // Offset: 0x1339ED0
    static uint AddTo(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff, uint cIn);
    // static public System.UInt32 AddToEachOther(System.UInt32[] u, System.Int32 uOff, System.UInt32[] v, System.Int32 vOff)
    // Offset: 0x133A074
    static uint AddToEachOther(::Array<uint>* u, int uOff, ::Array<uint>* v, int vOff);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x133A284
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x133A3C4
    static void Copy64(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x133A43C
    static void Copy64(::Array<uint64_t>* x, int xOff, ::Array<uint64_t>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x133A4EC
    static ::Array<uint>* Create();
    // static public System.UInt64[] Create64()
    // Offset: 0x133A538
    static ::Array<uint64_t>* Create64();
    // static public System.UInt32[] CreateExt()
    // Offset: 0x133A584
    static ::Array<uint>* CreateExt();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0x133A5D0
    static ::Array<uint64_t>* CreateExt64();
    // static public System.Boolean Diff(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x133A61C
    static bool Diff(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.Boolean Eq(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x133A944
    static bool Eq(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x133A9B4
    static bool Eq64(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x133AA24
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.UInt32 GetBit(System.UInt32[] x, System.Int32 bit)
    // Offset: 0x133AB28
    static uint GetBit(::Array<uint>* x, int bit);
    // static public System.Boolean Gte(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x133ABA0
    static bool Gte(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean Gte(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff)
    // Offset: 0x133A6A4
    static bool Gte(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff);
    // static public System.Boolean IsOne(System.UInt32[] x)
    // Offset: 0x133AC1C
    static bool IsOne(::Array<uint>* x);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0x133AC88
    static bool IsOne64(::Array<uint64_t>* x);
    // static public System.Boolean IsZero(System.UInt32[] x)
    // Offset: 0x133ACF4
    static bool IsZero(::Array<uint>* x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0x133AD54
    static bool IsZero64(::Array<uint64_t>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x133ADB4
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Mul(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] zz, System.Int32 zzOff)
    // Offset: 0x133AF90
    static void Mul(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* zz, int zzOff);
    // static public System.UInt32 MulAddTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x133B26C
    static uint MulAddTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt64 Mul33Add(System.UInt32 w, System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x133B3E0
    static uint64_t Mul33Add(uint w, ::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.UInt32 Mul33DWordAdd(System.UInt32 x, System.UInt64 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x133B60C
    static uint Mul33DWordAdd(uint x, uint64_t y, ::Array<uint>* z, int zOff);
    // static public System.UInt32 Mul33WordAdd(System.UInt32 x, System.UInt32 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x133B6EC
    static uint Mul33WordAdd(uint x, uint y, ::Array<uint>* z, int zOff);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x133B7A0
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
    // static public System.Void Square(System.UInt32[] x, System.Int32 xOff, System.UInt32[] zz, System.Int32 zzOff)
    // Offset: 0x133BA5C
    static void Square(::Array<uint>* x, int xOff, ::Array<uint>* zz, int zzOff);
    // static public System.Int32 Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x133BE78
    static int Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Int32 Sub(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x133A730
    static int Sub(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.Int32 SubFrom(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x133BFE8
    static int SubFrom(::Array<uint>* x, ::Array<uint>* z);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger(System.UInt32[] x)
    // Offset: 0x133C110
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger(::Array<uint>* x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0x133C1F4
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Array<uint64_t>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat192
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat192*, "Org.BouncyCastle.Math.Raw", "Nat192");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Add)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::AddBothTo
// Il2CppName: AddBothTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::AddBothTo)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "AddBothTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::AddTo
// Il2CppName: AddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, int, ::Array<uint>*, int, uint)>(&Org::BouncyCastle::Math::Raw::Nat192::AddTo)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cIn = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "AddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff, cIn});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::AddToEachOther
// Il2CppName: AddToEachOther
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::AddToEachOther)> {
  const MethodInfo* get() {
    static auto* u = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* uOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* v = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* vOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "AddToEachOther", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u, uOff, v, vOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Copy)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Copy64)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    static auto* z = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, int, ::Array<uint64_t>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Copy64)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat192::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Create64
// Il2CppName: Create64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat192::Create64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Create64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::CreateExt
// Il2CppName: CreateExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat192::CreateExt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "CreateExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::CreateExt64
// Il2CppName: CreateExt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat192::CreateExt64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "CreateExt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Diff
// Il2CppName: Diff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Diff)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Diff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Eq
// Il2CppName: Eq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Eq)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Eq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Eq64
// Il2CppName: Eq64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Eq64)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Eq64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::Raw::Nat192::FromBigInteger)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::GetBit
// Il2CppName: GetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::GetBit)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "GetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, bit});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Gte
// Il2CppName: Gte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Gte)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Gte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Gte
// Il2CppName: Gte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Gte)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Gte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::IsOne
// Il2CppName: IsOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::IsOne)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "IsOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::IsOne64
// Il2CppName: IsOne64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat192::IsOne64)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "IsOne64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::IsZero
// Il2CppName: IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::IsZero)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::IsZero64
// Il2CppName: IsZero64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat192::IsZero64)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "IsZero64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Mul)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zz = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Mul)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* zz = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zzOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff, zz, zzOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::MulAddTo
// Il2CppName: MulAddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::MulAddTo)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zz = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "MulAddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Mul33Add
// Il2CppName: Mul33Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint, ::Array<uint>*, int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Mul33Add)> {
  const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Mul33Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w, x, xOff, y, yOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Mul33DWordAdd
// Il2CppName: Mul33DWordAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint64_t, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Mul33DWordAdd)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Mul33DWordAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Mul33WordAdd
// Il2CppName: Mul33WordAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Mul33WordAdd)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Mul33WordAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Square)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zz = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Square)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* zz = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zzOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, zz, zzOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Sub
// Il2CppName: Sub
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::Sub)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Sub", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::Sub
// Il2CppName: Sub
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint>*, int, ::Array<uint>*, int, ::Array<uint>*, int)>(&Org::BouncyCastle::Math::Raw::Nat192::Sub)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "Sub", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::SubFrom
// Il2CppName: SubFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::SubFrom)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "SubFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::ToBigInteger
// Il2CppName: ToBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat192::ToBigInteger)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "ToBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat192::ToBigInteger64
// Il2CppName: ToBigInteger64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat192::ToBigInteger64)> {
  const MethodInfo* get() {
    static auto* x = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat192*), "ToBigInteger64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
