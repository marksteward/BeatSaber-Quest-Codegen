// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
  class AsymmetricKeyParameter : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private readonly System.Boolean privateKey
    // Size: 0x1
    // Offset: 0x10
    bool privateKey;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AsymmetricKeyParameter
    AsymmetricKeyParameter(bool privateKey_ = {}) noexcept : privateKey{privateKey_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return privateKey;
    }
    // protected System.Void .ctor(System.Boolean privateKey)
    // Offset: 0x1A1849C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsymmetricKeyParameter* New_ctor(bool privateKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::AsymmetricKeyParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsymmetricKeyParameter*, creationType>(privateKey)));
    }
    // public System.Boolean get_IsPrivate()
    // Offset: 0x1A184CC
    bool get_IsPrivate();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.AsymmetricKeyParameter other)
    // Offset: 0x1A18588
    bool Equals(Org::BouncyCastle::Crypto::AsymmetricKeyParameter* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1A184D4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1A185B8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.AsymmetricKeyParameter
  #pragma pack(pop)
  static check_size<sizeof(AsymmetricKeyParameter), 16 + sizeof(bool)> __Org_BouncyCastle_Crypto_AsymmetricKeyParameterSizeCheck;
  static_assert(sizeof(AsymmetricKeyParameter) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, "Org.BouncyCastle.Crypto", "AsymmetricKeyParameter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricKeyParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricKeyParameter::get_IsPrivate
// Il2CppName: get_IsPrivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::AsymmetricKeyParameter::*)()>(&Org::BouncyCastle::Crypto::AsymmetricKeyParameter::get_IsPrivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*), "get_IsPrivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricKeyParameter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::AsymmetricKeyParameter::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&Org::BouncyCastle::Crypto::AsymmetricKeyParameter::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "AsymmetricKeyParameter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricKeyParameter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::AsymmetricKeyParameter::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::AsymmetricKeyParameter::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricKeyParameter::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::AsymmetricKeyParameter::*)()>(&Org::BouncyCastle::Crypto::AsymmetricKeyParameter::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
