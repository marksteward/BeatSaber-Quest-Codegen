// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x13
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.ValidityPreCompInfo
  // [] Offset: FFFFFFFF
  class ValidityPreCompInfo : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*/ {
    public:
    // private System.Boolean failed
    // Size: 0x1
    // Offset: 0x10
    bool failed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean curveEquationPassed
    // Size: 0x1
    // Offset: 0x11
    bool curveEquationPassed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean orderPassed
    // Size: 0x1
    // Offset: 0x12
    bool orderPassed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ValidityPreCompInfo
    ValidityPreCompInfo(bool failed_ = {}, bool curveEquationPassed_ = {}, bool orderPassed_ = {}) noexcept : failed{failed_}, curveEquationPassed{curveEquationPassed_}, orderPassed{orderPassed_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
    operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this);
    }
    // Get static field: static readonly System.String PRECOMP_NAME
    static ::Il2CppString* _get_PRECOMP_NAME();
    // Set static field: static readonly System.String PRECOMP_NAME
    static void _set_PRECOMP_NAME(::Il2CppString* value);
    // System.Boolean HasFailed()
    // Offset: 0x1784728
    bool HasFailed();
    // System.Void ReportFailed()
    // Offset: 0x1784730
    void ReportFailed();
    // System.Boolean HasCurveEquationPassed()
    // Offset: 0x178473C
    bool HasCurveEquationPassed();
    // System.Void ReportCurveEquationPassed()
    // Offset: 0x1784744
    void ReportCurveEquationPassed();
    // System.Boolean HasOrderPassed()
    // Offset: 0x1784750
    bool HasOrderPassed();
    // System.Void ReportOrderPassed()
    // Offset: 0x1784758
    void ReportOrderPassed();
    // static private System.Void .cctor()
    // Offset: 0x1784764
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17847C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidityPreCompInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidityPreCompInfo*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.ValidityPreCompInfo
  static check_size<sizeof(ValidityPreCompInfo), 18 + sizeof(bool)> __Org_BouncyCastle_Math_EC_Multiplier_ValidityPreCompInfoSizeCheck;
  static_assert(sizeof(ValidityPreCompInfo) == 0x13);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "ValidityPreCompInfo");
#pragma pack(pop)
