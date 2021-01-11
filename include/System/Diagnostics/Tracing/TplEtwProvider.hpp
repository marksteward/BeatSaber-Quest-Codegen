// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Guid because it is already included!
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.TplEtwProvider
  // [] Offset: FFFFFFFF
  // [EventSourceAttribute] Offset: D3DA64
  class TplEtwProvider : public System::Diagnostics::Tracing::EventSource {
    public:
    // Nested type: System::Diagnostics::Tracing::TplEtwProvider::Keywords
    class Keywords;
    // Creating value type constructor for type: TplEtwProvider
    TplEtwProvider() noexcept {}
    // Get static field: static public System.Diagnostics.Tracing.TplEtwProvider Log
    static System::Diagnostics::Tracing::TplEtwProvider* _get_Log();
    // Set static field: static public System.Diagnostics.Tracing.TplEtwProvider Log
    static void _set_Log(System::Diagnostics::Tracing::TplEtwProvider* value);
    // public System.Boolean get_Debug()
    // Offset: 0x112070C
    bool get_Debug();
    // public System.Void DebugFacilityMessage(System.String Facility, System.String Message)
    // Offset: 0x112071C
    void DebugFacilityMessage(::Il2CppString* Facility, ::Il2CppString* Message);
    // public System.Void DebugFacilityMessage1(System.String Facility, System.String Message, System.String Arg)
    // Offset: 0x1120730
    void DebugFacilityMessage1(::Il2CppString* Facility, ::Il2CppString* Message, ::Il2CppString* Arg);
    // public System.Void SetActivityId(System.Guid Id)
    // Offset: 0x1120748
    void SetActivityId(System::Guid Id);
    // public System.Void .ctor()
    // Offset: 0x1120838
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TplEtwProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TplEtwProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TplEtwProvider*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x11208A0
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.cctor()
    static void _cctor();
  }; // System.Diagnostics.Tracing.TplEtwProvider
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TplEtwProvider*, "System.Diagnostics.Tracing", "TplEtwProvider");
