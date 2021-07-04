// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Mod
  class Mod : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Mod
    Mod() noexcept {}
    // Get static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
    static Org::BouncyCastle::Security::SecureRandom* _get_RandomSource();
    // Set static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
    static void _set_RandomSource(Org::BouncyCastle::Security::SecureRandom* value);
    // static public System.Void Invert(System.UInt32[] p, System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1D33AC4
    static void Invert(::Array<uint>* p, ::Array<uint>* x, ::Array<uint>* z);
    // static public System.UInt32[] Random(System.UInt32[] p)
    // Offset: 0x1D3406C
    static ::Array<uint>* Random(::Array<uint>* p);
    // static private System.Void InversionResult(System.UInt32[] p, System.Int32 ac, System.UInt32[] a, System.UInt32[] z)
    // Offset: 0x1D34024
    static void InversionResult(::Array<uint>* p, int ac, ::Array<uint>* a, ::Array<uint>* z);
    // static private System.Void InversionStep(System.UInt32[] p, System.UInt32[] u, System.Int32 uLen, System.UInt32[] x, ref System.Int32 xc)
    // Offset: 0x1D33EF0
    static void InversionStep(::Array<uint>* p, ::Array<uint>* u, int uLen, ::Array<uint>* x, int& xc);
    // static private System.Void .cctor()
    // Offset: 0x1D341D8
    static void _cctor();
  }; // Org.BouncyCastle.Math.Raw.Mod
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Mod*, "Org.BouncyCastle.Math.Raw", "Mod");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Mod::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Mod::Invert)> {
  const MethodInfo* get() {
    static auto* p = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Mod*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Mod::Random
// Il2CppName: Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Mod::Random)> {
  const MethodInfo* get() {
    static auto* p = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Mod*), "Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Mod::InversionResult
// Il2CppName: InversionResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, int, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Mod::InversionResult)> {
  const MethodInfo* get() {
    static auto* p = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* ac = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* a = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* z = &classof(::Array<::Array<uint>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Mod*), "InversionResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ac, a, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Mod::InversionStep
// Il2CppName: InversionStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, int, ::Array<uint>*, int&)>(&Org::BouncyCastle::Math::Raw::Mod::InversionStep)> {
  const MethodInfo* get() {
    static auto* p = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* u = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* uLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &classof(::Array<::Array<uint>*>*)->byval_arg;
    static auto* xc = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Mod*), "InversionStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, u, uLen, x, xc});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Mod::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::Raw::Mod::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Mod*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
