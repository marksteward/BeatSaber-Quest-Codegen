// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: OVR.OpenVR.CVRSystem/OVR.OpenVR.PollNextEventUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRSystem::PollNextEventUnion/*, public System::ValueType*/ {
    public:
    // public OVR.OpenVR.IVRSystem/OVR.OpenVR._PollNextEvent pPollNextEvent
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRSystem::_PollNextEvent* pPollNextEvent;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_PollNextEvent*) == 0x8);
    // public OVR.OpenVR.CVRSystem/OVR.OpenVR._PollNextEventPacked pPollNextEventPacked
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::CVRSystem::_PollNextEventPacked* pPollNextEventPacked;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRSystem::_PollNextEventPacked*) == 0x8);
    // Creating value type constructor for type: PollNextEventUnion
    constexpr PollNextEventUnion(OVR::OpenVR::IVRSystem::_PollNextEvent* pPollNextEvent_ = {}, OVR::OpenVR::CVRSystem::_PollNextEventPacked* pPollNextEventPacked_ = {}) noexcept : pPollNextEvent{pPollNextEvent_}, pPollNextEventPacked{pPollNextEventPacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.CVRSystem/OVR.OpenVR.PollNextEventUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem::PollNextEventUnion, "OVR.OpenVR", "CVRSystem/PollNextEventUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
