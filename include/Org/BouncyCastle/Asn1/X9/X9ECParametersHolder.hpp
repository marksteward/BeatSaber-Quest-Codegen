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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
  // [] Offset: FFFFFFFF
  class X9ECParametersHolder : public ::Il2CppObject {
    public:
    // private Org.BouncyCastle.Asn1.X9.X9ECParameters parameters
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X9::X9ECParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X9::X9ECParameters*) == 0x8);
    // Creating value type constructor for type: X9ECParametersHolder
    X9ECParametersHolder(Org::BouncyCastle::Asn1::X9::X9ECParameters* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::X9::X9ECParameters*
    constexpr operator Org::BouncyCastle::Asn1::X9::X9ECParameters*() const noexcept {
      return parameters;
    }
    // public Org.BouncyCastle.Asn1.X9.X9ECParameters get_Parameters()
    // Offset: 0x1586744
    Org::BouncyCastle::Asn1::X9::X9ECParameters* get_Parameters();
    // protected Org.BouncyCastle.Asn1.X9.X9ECParameters CreateParameters()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();
    // protected System.Void .ctor()
    // Offset: 0x15867F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9ECParametersHolder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9ECParametersHolder*, creationType>()));
    }
  }; // Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
  static check_size<sizeof(X9ECParametersHolder), 16 + sizeof(Org::BouncyCastle::Asn1::X9::X9ECParameters*)> __Org_BouncyCastle_Asn1_X9_X9ECParametersHolderSizeCheck;
  static_assert(sizeof(X9ECParametersHolder) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder");
