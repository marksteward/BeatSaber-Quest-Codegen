// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserPlatform/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: UserPlatform
    constexpr UserPlatform(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public BeatSaberAPI.DataTransferObjects.UserPlatform None
    static constexpr const uint8_t None = 0u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform None
    static BeatSaberAPI::DataTransferObjects::UserPlatform _get_None();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform None
    static void _set_None(BeatSaberAPI::DataTransferObjects::UserPlatform value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.UserPlatform Test
    static constexpr const uint8_t Test = 1u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform Test
    static BeatSaberAPI::DataTransferObjects::UserPlatform _get_Test();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform Test
    static void _set_Test(BeatSaberAPI::DataTransferObjects::UserPlatform value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.UserPlatform Steam
    static constexpr const uint8_t Steam = 2u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform Steam
    static BeatSaberAPI::DataTransferObjects::UserPlatform _get_Steam();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform Steam
    static void _set_Steam(BeatSaberAPI::DataTransferObjects::UserPlatform value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.UserPlatform PlayStation
    static constexpr const uint8_t PlayStation = 3u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform PlayStation
    static BeatSaberAPI::DataTransferObjects::UserPlatform _get_PlayStation();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform PlayStation
    static void _set_PlayStation(BeatSaberAPI::DataTransferObjects::UserPlatform value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.UserPlatform OculusPC
    static constexpr const uint8_t OculusPC = 4u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform OculusPC
    static BeatSaberAPI::DataTransferObjects::UserPlatform _get_OculusPC();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform OculusPC
    static void _set_OculusPC(BeatSaberAPI::DataTransferObjects::UserPlatform value);
    // static field const value: static public BeatSaberAPI.DataTransferObjects.UserPlatform OculusQuest
    static constexpr const uint8_t OculusQuest = 5u;
    // Get static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform OculusQuest
    static BeatSaberAPI::DataTransferObjects::UserPlatform _get_OculusQuest();
    // Set static field: static public BeatSaberAPI.DataTransferObjects.UserPlatform OculusQuest
    static void _set_OculusQuest(BeatSaberAPI::DataTransferObjects::UserPlatform value);
  }; // BeatSaberAPI.DataTransferObjects.UserPlatform
  #pragma pack(pop)
  static check_size<sizeof(UserPlatform), 0 + sizeof(uint8_t)> __BeatSaberAPI_DataTransferObjects_UserPlatformSizeCheck;
  static_assert(sizeof(UserPlatform) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserPlatform, "BeatSaberAPI.DataTransferObjects", "UserPlatform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
