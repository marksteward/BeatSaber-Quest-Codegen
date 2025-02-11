// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.CVRSystem
#include "OVR/OpenVR/CVRSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.CVRSystem/OVR.OpenVR.GetControllerStateUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRSystem::GetControllerStateUnion/*, public System::ValueType*/ {
    public:
    // public OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerState pGetControllerState
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRSystem::_GetControllerState* pGetControllerState;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetControllerState*) == 0x8);
    // public OVR.OpenVR.CVRSystem/OVR.OpenVR._GetControllerStatePacked pGetControllerStatePacked
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRSystem::_GetControllerStatePacked*) == 0x8);
    // Creating value type constructor for type: GetControllerStateUnion
    constexpr GetControllerStateUnion(OVR::OpenVR::IVRSystem::_GetControllerState* pGetControllerState_ = {}, OVR::OpenVR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked_ = {}) noexcept : pGetControllerState{pGetControllerState_}, pGetControllerStatePacked{pGetControllerStatePacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerState pGetControllerState
    OVR::OpenVR::IVRSystem::_GetControllerState* _get_pGetControllerState();
    // Set instance field: public OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerState pGetControllerState
    void _set_pGetControllerState(OVR::OpenVR::IVRSystem::_GetControllerState* value);
    // Get instance field: public OVR.OpenVR.CVRSystem/OVR.OpenVR._GetControllerStatePacked pGetControllerStatePacked
    OVR::OpenVR::CVRSystem::_GetControllerStatePacked* _get_pGetControllerStatePacked();
    // Set instance field: public OVR.OpenVR.CVRSystem/OVR.OpenVR._GetControllerStatePacked pGetControllerStatePacked
    void _set_pGetControllerStatePacked(OVR::OpenVR::CVRSystem::_GetControllerStatePacked* value);
  }; // OVR.OpenVR.CVRSystem/OVR.OpenVR.GetControllerStateUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem::GetControllerStateUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
