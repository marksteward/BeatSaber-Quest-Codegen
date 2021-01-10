// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawAxis2D
#include "GlobalNamespace/OVRInput_RawAxis2D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualAxis2DMap
  // [] Offset: FFFFFFFF
  class OVRInput::OVRControllerBase::VirtualAxis2DMap : public ::Il2CppObject {
    public:
    // public OVRInput/RawAxis2D None
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::OVRInput::RawAxis2D None;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D PrimaryThumbstick
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::OVRInput::RawAxis2D PrimaryThumbstick;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D PrimaryTouchpad
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawAxis2D PrimaryTouchpad;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D SecondaryThumbstick
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::OVRInput::RawAxis2D SecondaryThumbstick;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D SecondaryTouchpad
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::OVRInput::RawAxis2D SecondaryTouchpad;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // Creating value type constructor for type: VirtualAxis2DMap
    VirtualAxis2DMap(GlobalNamespace::OVRInput::RawAxis2D None_ = {}, GlobalNamespace::OVRInput::RawAxis2D PrimaryThumbstick_ = {}, GlobalNamespace::OVRInput::RawAxis2D PrimaryTouchpad_ = {}, GlobalNamespace::OVRInput::RawAxis2D SecondaryThumbstick_ = {}, GlobalNamespace::OVRInput::RawAxis2D SecondaryTouchpad_ = {}) noexcept : None{None_}, PrimaryThumbstick{PrimaryThumbstick_}, PrimaryTouchpad{PrimaryTouchpad_}, SecondaryThumbstick{SecondaryThumbstick_}, SecondaryTouchpad{SecondaryTouchpad_} {}
    // public OVRInput/RawAxis2D ToRawMask(OVRInput/Axis2D virtualMask)
    // Offset: 0x11C0C78
    GlobalNamespace::OVRInput::RawAxis2D ToRawMask(GlobalNamespace::OVRInput::Axis2D virtualMask);
    // public System.Void .ctor()
    // Offset: 0x11BFDD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerBase::VirtualAxis2DMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerBase::VirtualAxis2DMap*, creationType>()));
    }
  }; // OVRInput/OVRControllerBase/VirtualAxis2DMap
  static check_size<sizeof(OVRInput::OVRControllerBase::VirtualAxis2DMap), 32 + sizeof(GlobalNamespace::OVRInput::RawAxis2D)> __GlobalNamespace_OVRInput_OVRControllerBase_VirtualAxis2DMapSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerBase::VirtualAxis2DMap) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
#pragma pack(pop)
