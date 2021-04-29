// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserPlatform
  struct UserPlatform;
}
// Completed forward declares
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserPlatformExtension
  // [ExtensionAttribute] Offset: FFFFFFFF
  class UserPlatformExtension : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UserPlatformExtension
    UserPlatformExtension() noexcept {}
    // static field const value: static public System.String kTest
    static constexpr const char* kTest = "Test";
    // Get static field: static public System.String kTest
    static ::Il2CppString* _get_kTest();
    // Set static field: static public System.String kTest
    static void _set_kTest(::Il2CppString* value);
    // static field const value: static public System.String kSteam
    static constexpr const char* kSteam = "Steam";
    // Get static field: static public System.String kSteam
    static ::Il2CppString* _get_kSteam();
    // Set static field: static public System.String kSteam
    static void _set_kSteam(::Il2CppString* value);
    // static field const value: static public System.String kPlayStation
    static constexpr const char* kPlayStation = "PlayStation";
    // Get static field: static public System.String kPlayStation
    static ::Il2CppString* _get_kPlayStation();
    // Set static field: static public System.String kPlayStation
    static void _set_kPlayStation(::Il2CppString* value);
    // static field const value: static public System.String kOculusPC
    static constexpr const char* kOculusPC = "OculusPC";
    // Get static field: static public System.String kOculusPC
    static ::Il2CppString* _get_kOculusPC();
    // Set static field: static public System.String kOculusPC
    static void _set_kOculusPC(::Il2CppString* value);
    // static field const value: static public System.String kOculusQuest
    static constexpr const char* kOculusQuest = "OculusQuest";
    // Get static field: static public System.String kOculusQuest
    static ::Il2CppString* _get_kOculusQuest();
    // Set static field: static public System.String kOculusQuest
    static void _set_kOculusQuest(::Il2CppString* value);
    // static public BeatSaberAPI.DataTransferObjects.UserPlatform GetUserPlatformFromSerializedName(System.String name)
    // Offset: 0x10A74DC
    static BeatSaberAPI::DataTransferObjects::UserPlatform GetUserPlatformFromSerializedName(::Il2CppString* name);
    // static public System.String GetUserPlatformSerializedName(BeatSaberAPI.DataTransferObjects.UserPlatform userPlatform)
    // Offset: 0x10A75D0
    static ::Il2CppString* GetUserPlatformSerializedName(BeatSaberAPI::DataTransferObjects::UserPlatform userPlatform);
  }; // BeatSaberAPI.DataTransferObjects.UserPlatformExtension
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserPlatformExtension*, "BeatSaberAPI.DataTransferObjects", "UserPlatformExtension");
