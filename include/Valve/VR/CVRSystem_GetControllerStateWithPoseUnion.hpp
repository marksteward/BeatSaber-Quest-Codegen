// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.CVRSystem/Valve.VR.GetControllerStateWithPoseUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRSystem::GetControllerStateWithPoseUnion/*, public System::ValueType*/ {
    public:
    // public Valve.VR.IVRSystem/Valve.VR._GetControllerStateWithPose pGetControllerStateWithPose
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRSystem::_GetControllerStateWithPose* pGetControllerStateWithPose;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetControllerStateWithPose*) == 0x8);
    // public Valve.VR.CVRSystem/Valve.VR._GetControllerStateWithPosePacked pGetControllerStateWithPosePacked
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::CVRSystem::_GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*) == 0x8);
    // Creating value type constructor for type: GetControllerStateWithPoseUnion
    constexpr GetControllerStateWithPoseUnion(Valve::VR::IVRSystem::_GetControllerStateWithPose* pGetControllerStateWithPose_ = {}, Valve::VR::CVRSystem::_GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked_ = {}) noexcept : pGetControllerStateWithPose{pGetControllerStateWithPose_}, pGetControllerStateWithPosePacked{pGetControllerStateWithPosePacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public Valve.VR.IVRSystem/Valve.VR._GetControllerStateWithPose pGetControllerStateWithPose
    Valve::VR::IVRSystem::_GetControllerStateWithPose* _get_pGetControllerStateWithPose();
    // Set instance field: public Valve.VR.IVRSystem/Valve.VR._GetControllerStateWithPose pGetControllerStateWithPose
    void _set_pGetControllerStateWithPose(Valve::VR::IVRSystem::_GetControllerStateWithPose* value);
    // Get instance field: public Valve.VR.CVRSystem/Valve.VR._GetControllerStateWithPosePacked pGetControllerStateWithPosePacked
    Valve::VR::CVRSystem::_GetControllerStateWithPosePacked* _get_pGetControllerStateWithPosePacked();
    // Set instance field: public Valve.VR.CVRSystem/Valve.VR._GetControllerStateWithPosePacked pGetControllerStateWithPosePacked
    void _set_pGetControllerStateWithPosePacked(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked* value);
  }; // Valve.VR.CVRSystem/Valve.VR.GetControllerStateWithPoseUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::GetControllerStateWithPoseUnion, "Valve.VR", "CVRSystem/GetControllerStateWithPoseUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
