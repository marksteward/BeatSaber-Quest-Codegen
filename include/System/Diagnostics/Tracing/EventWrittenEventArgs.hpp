// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x50
  // Autogenerated type: System.Diagnostics.Tracing.EventWrittenEventArgs
  // [] Offset: FFFFFFFF
  class EventWrittenEventArgs : public System::EventArgs {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD3F1C8
    // private System.Int32 <EventId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int EventId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD3F1D8
    // private System.Guid <RelatedActivityId>k__BackingField
    // Size: 0x10
    // Offset: 0x14
    System::Guid RelatedActivityId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Padding between fields: RelatedActivityId and: Payload
    char __padding1[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD3F1E8
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object> <Payload>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>* Payload;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>*) == 0x8);
    // private System.String m_message
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_eventName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_eventName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Diagnostics.Tracing.EventSource m_eventSource
    // Size: 0x8
    // Offset: 0x40
    System::Diagnostics::Tracing::EventSource* m_eventSource;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventSource*) == 0x8);
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> m_payloadNames
    // Size: 0x8
    // Offset: 0x48
    System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppString*>* m_payloadNames;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: EventWrittenEventArgs
    EventWrittenEventArgs(int EventId_ = {}, System::Guid RelatedActivityId_ = {}, System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>* Payload_ = {}, ::Il2CppString* m_message_ = {}, ::Il2CppString* m_eventName_ = {}, System::Diagnostics::Tracing::EventSource* m_eventSource_ = {}, System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppString*>* m_payloadNames_ = {}) noexcept : EventId{EventId_}, RelatedActivityId{RelatedActivityId_}, Payload{Payload_}, m_message{m_message_}, m_eventName{m_eventName_}, m_eventSource{m_eventSource_}, m_payloadNames{m_payloadNames_} {}
    // System.Void set_EventName(System.String value)
    // Offset: 0x12D8970
    void set_EventName(::Il2CppString* value);
    // System.Void set_EventId(System.Int32 value)
    // Offset: 0x12D8978
    void set_EventId(int value);
    // System.Void set_RelatedActivityId(System.Guid value)
    // Offset: 0x12D8980
    void set_RelatedActivityId(System::Guid value);
    // System.Void set_Payload(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object> value)
    // Offset: 0x12D898C
    void set_Payload(System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>* value);
    // System.Void set_PayloadNames(System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> value)
    // Offset: 0x12D8994
    void set_PayloadNames(System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppString*>* value);
    // System.Void set_Message(System.String value)
    // Offset: 0x12D899C
    void set_Message(::Il2CppString* value);
    // System.Void .ctor(System.Diagnostics.Tracing.EventSource eventSource)
    // Offset: 0x12D17D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventWrittenEventArgs* New_ctor(System::Diagnostics::Tracing::EventSource* eventSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::EventWrittenEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventWrittenEventArgs*, creationType>(eventSource)));
    }
  }; // System.Diagnostics.Tracing.EventWrittenEventArgs
  static check_size<sizeof(EventWrittenEventArgs), 72 + sizeof(System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppString*>*)> __System_Diagnostics_Tracing_EventWrittenEventArgsSizeCheck;
  static_assert(sizeof(EventWrittenEventArgs) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventWrittenEventArgs*, "System.Diagnostics.Tracing", "EventWrittenEventArgs");
#pragma pack(pop)
