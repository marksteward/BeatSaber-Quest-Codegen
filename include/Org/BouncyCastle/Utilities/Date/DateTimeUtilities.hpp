// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities.Date
namespace Org::BouncyCastle::Utilities::Date {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Date.DateTimeUtilities
  // [] Offset: FFFFFFFF
  class DateTimeUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DateTimeUtilities
    DateTimeUtilities() noexcept {}
    // Get static field: static public readonly System.DateTime UnixEpoch
    static System::DateTime _get_UnixEpoch();
    // Set static field: static public readonly System.DateTime UnixEpoch
    static void _set_UnixEpoch(System::DateTime value);
    // static public System.Int64 DateTimeToUnixMs(System.DateTime dateTime)
    // Offset: 0x18BD910
    static int64_t DateTimeToUnixMs(System::DateTime dateTime);
    // static public System.Int64 CurrentUnixMs()
    // Offset: 0x18BDA64
    static int64_t CurrentUnixMs();
    // static private System.Void .cctor()
    // Offset: 0x18BDAF4
    static void _cctor();
  }; // Org.BouncyCastle.Utilities.Date.DateTimeUtilities
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Date::DateTimeUtilities*, "Org.BouncyCastle.Utilities.Date", "DateTimeUtilities");
