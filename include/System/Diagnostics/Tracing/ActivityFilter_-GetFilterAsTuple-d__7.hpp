// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D3DB28
  class ActivityFilter::$GetFilterAsTuple$d__7 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>, public System::Collections::Generic::IEnumerator_1<System::Tuple_2<int, int>*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Tuple`2<System.Int32,System.Int32> <>2__current
    // Size: 0x8
    // Offset: 0x18
    System::Tuple_2<int, int>* $$2__current;
    // Field size check
    static_assert(sizeof(System::Tuple_2<int, int>*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public System.Diagnostics.Tracing.ActivityFilter <>4__this
    // Size: 0x8
    // Offset: 0x28
    System::Diagnostics::Tracing::ActivityFilter* $$4__this;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::ActivityFilter*) == 0x8);
    // private System.Guid sourceGuid
    // Size: 0x10
    // Offset: 0x30
    System::Guid sourceGuid;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // public System.Guid <>3__sourceGuid
    // Size: 0x10
    // Offset: 0x40
    System::Guid $$3__sourceGuid;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // private System.Diagnostics.Tracing.ActivityFilter <af>5__1
    // Size: 0x8
    // Offset: 0x50
    System::Diagnostics::Tracing::ActivityFilter* $af$5__1;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::ActivityFilter*) == 0x8);
    // Creating value type constructor for type: $GetFilterAsTuple$d__7
    $GetFilterAsTuple$d__7(int $$1__state_ = {}, System::Tuple_2<int, int>* $$2__current_ = {}, int $$l__initialThreadId_ = {}, System::Diagnostics::Tracing::ActivityFilter* $$4__this_ = {}, System::Guid sourceGuid_ = {}, System::Guid $$3__sourceGuid_ = {}, System::Diagnostics::Tracing::ActivityFilter* $af$5__1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, sourceGuid{sourceGuid_}, $$3__sourceGuid{$$3__sourceGuid_}, $af$5__1{$af$5__1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>
    operator System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Tuple_2<int, int>*>
    operator System::Collections::Generic::IEnumerator_1<System::Tuple_2<int, int>*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Tuple_2<int, int>*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12C3028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivityFilter::$GetFilterAsTuple$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivityFilter::$GetFilterAsTuple$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12C3414
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12C3418
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Tuple`2<System.Int32,System.Int32> System.Collections.Generic.IEnumerator<System.Tuple<System.Int32,System.Int32>>.get_Current()
    // Offset: 0x12C3554
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    System::Tuple_2<int, int>* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12C355C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12C35BC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Int32,System.Int32>> System.Collections.Generic.IEnumerable<System.Tuple<System.Int32,System.Int32>>.GetEnumerator()
    // Offset: 0x12C35C4
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<System::Tuple_2<int, int>*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12C3680
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
  static check_size<sizeof(ActivityFilter::$GetFilterAsTuple$d__7), 80 + sizeof(System::Diagnostics::Tracing::ActivityFilter*)> __System_Diagnostics_Tracing_ActivityFilter_$GetFilterAsTuple$d__7SizeCheck;
  static_assert(sizeof(ActivityFilter::$GetFilterAsTuple$d__7) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*, "System.Diagnostics.Tracing", "ActivityFilter/<GetFilterAsTuple>d__7");
