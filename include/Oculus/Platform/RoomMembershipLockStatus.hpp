// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.RoomMembershipLockStatus
  struct RoomMembershipLockStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: RoomMembershipLockStatus
    constexpr RoomMembershipLockStatus(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Oculus.Platform.RoomMembershipLockStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RoomMembershipLockStatus Unknown
    static Oculus::Platform::RoomMembershipLockStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.RoomMembershipLockStatus Unknown
    static void _set_Unknown(Oculus::Platform::RoomMembershipLockStatus value);
    // static field const value: static public Oculus.Platform.RoomMembershipLockStatus Lock
    static constexpr const int Lock = 1;
    // Get static field: static public Oculus.Platform.RoomMembershipLockStatus Lock
    static Oculus::Platform::RoomMembershipLockStatus _get_Lock();
    // Set static field: static public Oculus.Platform.RoomMembershipLockStatus Lock
    static void _set_Lock(Oculus::Platform::RoomMembershipLockStatus value);
    // static field const value: static public Oculus.Platform.RoomMembershipLockStatus Unlock
    static constexpr const int Unlock = 2;
    // Get static field: static public Oculus.Platform.RoomMembershipLockStatus Unlock
    static Oculus::Platform::RoomMembershipLockStatus _get_Unlock();
    // Set static field: static public Oculus.Platform.RoomMembershipLockStatus Unlock
    static void _set_Unlock(Oculus::Platform::RoomMembershipLockStatus value);
  }; // Oculus.Platform.RoomMembershipLockStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RoomMembershipLockStatus, "Oculus.Platform", "RoomMembershipLockStatus");
#pragma pack(pop)
