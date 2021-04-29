// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed25519.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp
  class Ed25519::PointPrecomp : public ::Il2CppObject {
    public:
    // System.Int32[] ypx_h
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* ypx_h;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] ymx_h
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* ymx_h;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] xyd
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* xyd;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: PointPrecomp
    PointPrecomp(::Array<int>* ypx_h_ = {}, ::Array<int>* ymx_h_ = {}, ::Array<int>* xyd_ = {}) noexcept : ypx_h{ypx_h_}, ymx_h{ymx_h_}, xyd{xyd_} {}
    // public System.Void .ctor()
    // Offset: 0x1B5D6D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519::PointPrecomp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519::PointPrecomp*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp
  #pragma pack(pop)
  static check_size<sizeof(Ed25519::PointPrecomp), 32 + sizeof(::Array<int>*)> __Org_BouncyCastle_Math_EC_Rfc8032_Ed25519_PointPrecompSizeCheck;
  static_assert(sizeof(Ed25519::PointPrecomp) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecomp*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointPrecomp");
