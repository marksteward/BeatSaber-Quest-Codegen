// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.UIntPtrArrayTypeInfo
  // [] Offset: FFFFFFFF
  class UIntPtrArrayTypeInfo : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Array<System::UIntPtr>*> {
    public:
    // Creating value type constructor for type: UIntPtrArrayTypeInfo
    UIntPtrArrayTypeInfo() noexcept {}
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref System.UIntPtr[] value)
    // Offset: 0x11231FC
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Array<System::UIntPtr>*& value);
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0x1123164
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format);
    // public System.Void .ctor()
    // Offset: 0x1123214
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIntPtrArrayTypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::UIntPtrArrayTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIntPtrArrayTypeInfo*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.UIntPtrArrayTypeInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::UIntPtrArrayTypeInfo*, "System.Diagnostics.Tracing", "UIntPtrArrayTypeInfo");
