// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
  // Forward declaring type: EventKeywords
  struct EventKeywords;
}
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConcurrentDictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ActivityFilter
  class ActivityFilter : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7
    class $GetFilterAsTuple$d__7;
    // Nested type: System::Diagnostics::Tracing::ActivityFilter::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: System::Diagnostics::Tracing::ActivityFilter::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // private System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32> m_activeActivities
    // Offset: 0x10
    System::Collections::Concurrent::ConcurrentDictionary_2<System::Guid, int>* m_activeActivities;
    // private System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>> m_rootActiveActivities
    // Offset: 0x18
    System::Collections::Concurrent::ConcurrentDictionary_2<System::Guid, System::Tuple_2<System::Guid, int>*>* m_rootActiveActivities;
    // private System.Guid m_providerGuid
    // Offset: 0x20
    System::Guid m_providerGuid;
    // private System.Int32 m_eventId
    // Offset: 0x30
    int m_eventId;
    // private System.Int32 m_samplingFreq
    // Offset: 0x34
    int m_samplingFreq;
    // private System.Int32 m_curSampleCount
    // Offset: 0x38
    int m_curSampleCount;
    // private System.Int32 m_perEventSourceSessionId
    // Offset: 0x3C
    int m_perEventSourceSessionId;
    // private System.Diagnostics.Tracing.ActivityFilter m_next
    // Offset: 0x40
    System::Diagnostics::Tracing::ActivityFilter* m_next;
    // private System.Action`1<System.Guid> m_myActivityDelegate
    // Offset: 0x48
    System::Action_1<System::Guid>* m_myActivityDelegate;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static public System.Void DisableFilter(ref System.Diagnostics.Tracing.ActivityFilter filterList, System.Diagnostics.Tracing.EventSource source)
    // Offset: 0x124CC44
    static void DisableFilter(System::Diagnostics::Tracing::ActivityFilter*& filterList, System::Diagnostics::Tracing::EventSource* source);
    // static public System.Void UpdateFilter(ref System.Diagnostics.Tracing.ActivityFilter filterList, System.Diagnostics.Tracing.EventSource source, System.Int32 perEventSourceSessionId, System.String startEvents)
    // Offset: 0x124D054
    static void UpdateFilter(System::Diagnostics::Tracing::ActivityFilter*& filterList, System::Diagnostics::Tracing::EventSource* source, int perEventSourceSessionId, ::Il2CppString* startEvents);
    // static public System.Boolean PassesActivityFilter(System.Diagnostics.Tracing.ActivityFilter filterList, System.Guid* childActivityID, System.Boolean triggeringEvent, System.Diagnostics.Tracing.EventSource source, System.Int32 eventId)
    // Offset: 0x124D5B4
    static bool PassesActivityFilter(System::Diagnostics::Tracing::ActivityFilter* filterList, System::Guid* childActivityID, bool triggeringEvent, System::Diagnostics::Tracing::EventSource* source, int eventId);
    // static public System.Void FlowActivityIfNeeded(System.Diagnostics.Tracing.ActivityFilter filterList, System.Guid* currentActivityId, System.Guid* childActivityID)
    // Offset: 0x124DA70
    static void FlowActivityIfNeeded(System::Diagnostics::Tracing::ActivityFilter* filterList, System::Guid* currentActivityId, System::Guid* childActivityID);
    // static public System.Void UpdateKwdTriggers(System.Diagnostics.Tracing.ActivityFilter activityFilter, System.Guid sourceGuid, System.Diagnostics.Tracing.EventSource source, System.Diagnostics.Tracing.EventKeywords sessKeywords)
    // Offset: 0x124DD3C
    static void UpdateKwdTriggers(System::Diagnostics::Tracing::ActivityFilter* activityFilter, System::Guid sourceGuid, System::Diagnostics::Tracing::EventSource* source, System::Diagnostics::Tracing::EventKeywords sessKeywords);
    // public System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Int32,System.Int32>> GetFilterAsTuple(System.Guid sourceGuid)
    // Offset: 0x124DE8C
    System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>* GetFilterAsTuple(System::Guid sourceGuid);
    // private System.Void .ctor(System.Diagnostics.Tracing.EventSource source, System.Int32 perEventSourceSessionId, System.Int32 eventId, System.Int32 samplingFreq, System.Diagnostics.Tracing.ActivityFilter existingFilter)
    // Offset: 0x124DF64
    static ActivityFilter* New_ctor(System::Diagnostics::Tracing::EventSource* source, int perEventSourceSessionId, int eventId, int samplingFreq, System::Diagnostics::Tracing::ActivityFilter* existingFilter);
    // static private System.Void EnsureActivityCleanupDelegate(System.Diagnostics.Tracing.ActivityFilter filterList)
    // Offset: 0x124CF60
    static void EnsureActivityCleanupDelegate(System::Diagnostics::Tracing::ActivityFilter* filterList);
    // static private System.Action`1<System.Guid> GetActivityDyingDelegate(System.Diagnostics.Tracing.ActivityFilter filterList)
    // Offset: 0x124E130
    static System::Action_1<System::Guid>* GetActivityDyingDelegate(System::Diagnostics::Tracing::ActivityFilter* filterList);
    // static private System.Boolean EnableFilter(ref System.Diagnostics.Tracing.ActivityFilter filterList, System.Diagnostics.Tracing.EventSource source, System.Int32 perEventSourceSessionId, System.Int32 eventId, System.Int32 samplingFreq)
    // Offset: 0x124D4AC
    static bool EnableFilter(System::Diagnostics::Tracing::ActivityFilter*& filterList, System::Diagnostics::Tracing::EventSource* source, int perEventSourceSessionId, int eventId, int samplingFreq);
    // static private System.Void TrimActiveActivityStore(System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32> activities)
    // Offset: 0x124DBBC
    static void TrimActiveActivityStore(System::Collections::Concurrent::ConcurrentDictionary_2<System::Guid, int>* activities);
    // static private System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32> GetActiveActivities(System.Diagnostics.Tracing.ActivityFilter filterList)
    // Offset: 0x124DA50
    static System::Collections::Concurrent::ConcurrentDictionary_2<System::Guid, int>* GetActiveActivities(System::Diagnostics::Tracing::ActivityFilter* filterList);
    // public System.Void Dispose()
    // Offset: 0x124CE88
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Diagnostics.Tracing.ActivityFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ActivityFilter*, "System.Diagnostics.Tracing", "ActivityFilter");
#pragma pack(pop)
