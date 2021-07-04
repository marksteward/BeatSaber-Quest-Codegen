// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawNearTouch
#include "GlobalNamespace/OVRInput_RawNearTouch.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualNearTouchMap
  class OVRInput::OVRControllerBase::VirtualNearTouchMap : public ::Il2CppObject {
    public:
    // public OVRInput/RawNearTouch None
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::OVRInput::RawNearTouch None;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawNearTouch) == 0x4);
    // public OVRInput/RawNearTouch PrimaryIndexTrigger
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::OVRInput::RawNearTouch PrimaryIndexTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawNearTouch) == 0x4);
    // public OVRInput/RawNearTouch PrimaryThumbButtons
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawNearTouch PrimaryThumbButtons;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawNearTouch) == 0x4);
    // public OVRInput/RawNearTouch SecondaryIndexTrigger
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::OVRInput::RawNearTouch SecondaryIndexTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawNearTouch) == 0x4);
    // public OVRInput/RawNearTouch SecondaryThumbButtons
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::OVRInput::RawNearTouch SecondaryThumbButtons;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawNearTouch) == 0x4);
    // Creating value type constructor for type: VirtualNearTouchMap
    VirtualNearTouchMap(GlobalNamespace::OVRInput::RawNearTouch None_ = {}, GlobalNamespace::OVRInput::RawNearTouch PrimaryIndexTrigger_ = {}, GlobalNamespace::OVRInput::RawNearTouch PrimaryThumbButtons_ = {}, GlobalNamespace::OVRInput::RawNearTouch SecondaryIndexTrigger_ = {}, GlobalNamespace::OVRInput::RawNearTouch SecondaryThumbButtons_ = {}) noexcept : None{None_}, PrimaryIndexTrigger{PrimaryIndexTrigger_}, PrimaryThumbButtons{PrimaryThumbButtons_}, SecondaryIndexTrigger{SecondaryIndexTrigger_}, SecondaryThumbButtons{SecondaryThumbButtons_} {}
    // public OVRInput/RawNearTouch ToRawMask(OVRInput/NearTouch virtualMask)
    // Offset: 0x151A440
    GlobalNamespace::OVRInput::RawNearTouch ToRawMask(GlobalNamespace::OVRInput::NearTouch virtualMask);
    // public System.Void .ctor()
    // Offset: 0x15196A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerBase::VirtualNearTouchMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerBase::VirtualNearTouchMap*, creationType>()));
    }
  }; // OVRInput/OVRControllerBase/VirtualNearTouchMap
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerBase::VirtualNearTouchMap), 32 + sizeof(GlobalNamespace::OVRInput::RawNearTouch)> __GlobalNamespace_OVRInput_OVRControllerBase_VirtualNearTouchMapSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerBase::VirtualNearTouchMap) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap*, "", "OVRInput/OVRControllerBase/VirtualNearTouchMap");
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap::ToRawMask
// Il2CppName: ToRawMask
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
