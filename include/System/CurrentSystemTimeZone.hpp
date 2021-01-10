// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeZone
#include "System/TimeZone.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeZoneInfo
  class TimeZoneInfo;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  // Autogenerated type: System.CurrentSystemTimeZone
  // [] Offset: FFFFFFFF
  class CurrentSystemTimeZone : public System::TimeZone {
    public:
    // private readonly System.TimeZoneInfo LocalTimeZone
    // Size: 0x8
    // Offset: 0x10
    System::TimeZoneInfo* LocalTimeZone;
    // Field size check
    static_assert(sizeof(System::TimeZoneInfo*) == 0x8);
    // Creating value type constructor for type: CurrentSystemTimeZone
    CurrentSystemTimeZone(System::TimeZoneInfo* LocalTimeZone_ = {}) noexcept : LocalTimeZone{LocalTimeZone_} {}
    // Creating conversion operator: operator System::TimeZoneInfo*
    constexpr operator System::TimeZoneInfo*() const noexcept {
      return LocalTimeZone;
    }
    // static public System.Boolean GetTimeZoneData(System.Int32 year, out System.Int64[] data, out System.String[] names, out System.Boolean daylight_inverted)
    // Offset: 0x153CF90
    static bool GetTimeZoneData(int year, ::Array<int64_t>*& data, ::Array<::Il2CppString*>*& names, bool& daylight_inverted);
    // System.Void .ctor()
    // Offset: 0x153CE40
    // Implemented from: System.TimeZone
    // Base method: System.Void TimeZone::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurrentSystemTimeZone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::CurrentSystemTimeZone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurrentSystemTimeZone*, creationType>()));
    }
    // public override System.TimeSpan GetUtcOffset(System.DateTime dateTime)
    // Offset: 0x153CEC0
    // Implemented from: System.TimeZone
    // Base method: System.TimeSpan TimeZone::GetUtcOffset(System.DateTime dateTime)
    System::TimeSpan GetUtcOffset(System::DateTime dateTime);
  }; // System.CurrentSystemTimeZone
  static check_size<sizeof(CurrentSystemTimeZone), 16 + sizeof(System::TimeZoneInfo*)> __System_CurrentSystemTimeZoneSizeCheck;
  static_assert(sizeof(CurrentSystemTimeZone) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::CurrentSystemTimeZone*, "System", "CurrentSystemTimeZone");
#pragma pack(pop)
