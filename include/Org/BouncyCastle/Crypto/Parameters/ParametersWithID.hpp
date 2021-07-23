// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithID
  // [TokenAttribute] Offset: FFFFFFFF
  class ParametersWithID : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly System.Byte[] id
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* id;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: ParametersWithID
    ParametersWithID(Org::BouncyCastle::Crypto::ICipherParameters* parameters_ = {}, ::Array<uint8_t>* id_ = {}) noexcept : parameters{parameters_}, id{id_} {}
    // Get instance field: private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    Org::BouncyCastle::Crypto::ICipherParameters* _get_parameters();
    // Set instance field: private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    void _set_parameters(Org::BouncyCastle::Crypto::ICipherParameters* value);
    // Get instance field: private readonly System.Byte[] id
    ::Array<uint8_t>* _get_id();
    // Set instance field: private readonly System.Byte[] id
    void _set_id(::Array<uint8_t>* value);
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x122C91C
    Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
    // public System.Byte[] GetID()
    // Offset: 0x122C914
    ::Array<uint8_t>* GetID();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithID
  #pragma pack(pop)
  static check_size<sizeof(ParametersWithID), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithIDSizeCheck;
  static_assert(sizeof(ParametersWithID) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithID*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithID");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithID::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithID::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithID*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithID::GetID
// Il2CppName: GetID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithID::GetID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithID*), "GetID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
