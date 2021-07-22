// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body
#include "RootMotion/FinalIK/Amplifier_Body.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink
  // [TokenAttribute] Offset: FFFFFFFF
  class Amplifier::Body::EffectorLink : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xDF8D40
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0xDF8D78
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: EffectorLink
    EffectorLink(RootMotion::FinalIK::FullBodyBipedEffector effector_ = {}, float weight_ = {}) noexcept : effector{effector_}, weight{weight_} {}
    // public System.Void .ctor()
    // Offset: 0x1CDEFB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Amplifier::Body::EffectorLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Amplifier::Body::EffectorLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Amplifier::Body::EffectorLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink
  #pragma pack(pop)
  static check_size<sizeof(Amplifier::Body::EffectorLink), 20 + sizeof(float)> __RootMotion_FinalIK_Amplifier_Body_EffectorLinkSizeCheck;
  static_assert(sizeof(Amplifier::Body::EffectorLink) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier::Body::EffectorLink*, "RootMotion.FinalIK", "Amplifier/Body/EffectorLink");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::Body::EffectorLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
