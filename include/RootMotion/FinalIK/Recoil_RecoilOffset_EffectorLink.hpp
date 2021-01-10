// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Recoil/RecoilOffset
#include "RootMotion/FinalIK/Recoil_RecoilOffset.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x18
  // Autogenerated type: RootMotion.FinalIK.Recoil/RecoilOffset/EffectorLink
  // [] Offset: FFFFFFFF
  class Recoil::RecoilOffset::EffectorLink : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xDBBE18
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0xDBBE50
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: EffectorLink
    EffectorLink(RootMotion::FinalIK::FullBodyBipedEffector effector_ = {}, float weight_ = {}) noexcept : effector{effector_}, weight{weight_} {}
    // public System.Void .ctor()
    // Offset: 0x15E5CBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Recoil::RecoilOffset::EffectorLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Recoil::RecoilOffset::EffectorLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.Recoil/RecoilOffset/EffectorLink
  static check_size<sizeof(Recoil::RecoilOffset::EffectorLink), 20 + sizeof(float)> __RootMotion_FinalIK_Recoil_RecoilOffset_EffectorLinkSizeCheck;
  static_assert(sizeof(Recoil::RecoilOffset::EffectorLink) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink*, "RootMotion.FinalIK", "Recoil/RecoilOffset/EffectorLink");
#pragma pack(pop)
