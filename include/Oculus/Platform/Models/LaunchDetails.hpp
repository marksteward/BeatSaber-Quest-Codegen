// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.LaunchType
#include "Oculus/Platform/LaunchType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LaunchDetails
  // [TokenAttribute] Offset: FFFFFFFF
  class LaunchDetails : public ::Il2CppObject {
    public:
    // public readonly System.String DeeplinkMessage
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* DeeplinkMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String DestinationApiName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* DestinationApiName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String LaunchSource
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* LaunchSource;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Oculus.Platform.LaunchType LaunchType
    // Size: 0x4
    // Offset: 0x28
    Oculus::Platform::LaunchType LaunchType;
    // Field size check
    static_assert(sizeof(Oculus::Platform::LaunchType) == 0x4);
    // Padding between fields: LaunchType and: RoomID
    char __padding3[0x4] = {};
    // public readonly System.UInt64 RoomID
    // Size: 0x8
    // Offset: 0x30
    uint64_t RoomID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String TrackingID
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* TrackingID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Oculus.Platform.Models.UserList UsersOptional
    // Size: 0x8
    // Offset: 0x40
    Oculus::Platform::Models::UserList* UsersOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xDEAD9C
    // public readonly Oculus.Platform.Models.UserList Users
    // Size: 0x8
    // Offset: 0x48
    Oculus::Platform::Models::UserList* Users;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // Creating value type constructor for type: LaunchDetails
    LaunchDetails(::Il2CppString* DeeplinkMessage_ = {}, ::Il2CppString* DestinationApiName_ = {}, ::Il2CppString* LaunchSource_ = {}, Oculus::Platform::LaunchType LaunchType_ = {}, uint64_t RoomID_ = {}, ::Il2CppString* TrackingID_ = {}, Oculus::Platform::Models::UserList* UsersOptional_ = {}, Oculus::Platform::Models::UserList* Users_ = {}) noexcept : DeeplinkMessage{DeeplinkMessage_}, DestinationApiName{DestinationApiName_}, LaunchSource{LaunchSource_}, LaunchType{LaunchType_}, RoomID{RoomID_}, TrackingID{TrackingID_}, UsersOptional{UsersOptional_}, Users{Users_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14A97F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchDetails* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LaunchDetails::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchDetails*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LaunchDetails
  #pragma pack(pop)
  static check_size<sizeof(LaunchDetails), 72 + sizeof(Oculus::Platform::Models::UserList*)> __Oculus_Platform_Models_LaunchDetailsSizeCheck;
  static_assert(sizeof(LaunchDetails) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchDetails*, "Oculus.Platform.Models", "LaunchDetails");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LaunchDetails::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
