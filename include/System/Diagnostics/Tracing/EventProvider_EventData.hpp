// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventProvider
#include "System/Diagnostics/Tracing/EventProvider.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventProvider/EventData
  struct EventProvider::EventData : public System::ValueType {
    public:
    // System.UInt64 Ptr
    // Offset: 0x0
    uint64_t Ptr;
    // System.UInt32 Size
    // Offset: 0x8
    uint Size;
    // System.UInt32 Reserved
    // Offset: 0xC
    uint Reserved;
    // Creating value type constructor for type: EventData
    constexpr EventData(uint64_t Ptr_ = {}, uint Size_ = {}, uint Reserved_ = {}) : Ptr{Ptr_}, Size{Size_}, Reserved{Reserved_} {}
  }; // System.Diagnostics.Tracing.EventProvider/EventData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventProvider::EventData, "System.Diagnostics.Tracing", "EventProvider/EventData");
#pragma pack(pop)
