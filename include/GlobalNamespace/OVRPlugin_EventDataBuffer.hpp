// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/EventType
#include "GlobalNamespace/OVRPlugin_EventType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/EventDataBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::EventDataBuffer/*, public System::ValueType*/ {
    public:
    // public OVRPlugin/EventType EventType
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::EventType EventType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::EventType) == 0x4);
    // Padding between fields: EventType and: EventData
    char __padding0[0x4] = {};
    // public System.Byte[] EventData
    // Size: 0x8
    // Offset: 0x8
    ::Array<uint8_t>* EventData;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: EventDataBuffer
    constexpr EventDataBuffer(GlobalNamespace::OVRPlugin::EventType EventType_ = {}, ::Array<uint8_t>* EventData_ = {}) noexcept : EventType{EventType_}, EventData{EventData_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public OVRPlugin/EventType EventType
    GlobalNamespace::OVRPlugin::EventType _get_EventType();
    // Set instance field: public OVRPlugin/EventType EventType
    void _set_EventType(GlobalNamespace::OVRPlugin::EventType value);
    // Get instance field: public System.Byte[] EventData
    ::Array<uint8_t>* _get_EventData();
    // Set instance field: public System.Byte[] EventData
    void _set_EventData(::Array<uint8_t>* value);
  }; // OVRPlugin/EventDataBuffer
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::EventDataBuffer), 8 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_OVRPlugin_EventDataBufferSizeCheck;
  static_assert(sizeof(OVRPlugin::EventDataBuffer) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::EventDataBuffer, "", "OVRPlugin/EventDataBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
