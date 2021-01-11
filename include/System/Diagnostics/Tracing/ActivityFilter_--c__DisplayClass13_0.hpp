// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass13_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D3DB48
  class ActivityFilter::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public System.Int32 tickNow
    // Size: 0x4
    // Offset: 0x10
    int tickNow;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(int tickNow_ = {}) noexcept : tickNow{tickNow_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return tickNow;
    }
    // System.Int32 <TrimActiveActivityStore>b__0(System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32> x, System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32> y)
    // Offset: 0x12C33A4
    int $TrimActiveActivityStore$b__0(System::Collections::Generic::KeyValuePair_2<System::Guid, int> x, System::Collections::Generic::KeyValuePair_2<System::Guid, int> y);
    // public System.Void .ctor()
    // Offset: 0x12C32E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivityFilter::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::ActivityFilter::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivityFilter::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass13_0
  static check_size<sizeof(ActivityFilter::$$c__DisplayClass13_0), 16 + sizeof(int)> __System_Diagnostics_Tracing_ActivityFilter_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(ActivityFilter::$$c__DisplayClass13_0) == 0x14);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ActivityFilter::$$c__DisplayClass13_0*, "System.Diagnostics.Tracing", "ActivityFilter/<>c__DisplayClass13_0");
