// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: User
  class User;
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x58
  // Autogenerated type: Oculus.Platform.Models.Party
  // [] Offset: FFFFFFFF
  class Party : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    // Size: 0x8
    // Offset: 0x18
    Oculus::Platform::Models::UserList* InvitedUsersOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xDB0184
    // public readonly Oculus.Platform.Models.UserList InvitedUsers
    // Size: 0x8
    // Offset: 0x20
    Oculus::Platform::Models::UserList* InvitedUsers;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly Oculus.Platform.Models.User LeaderOptional
    // Size: 0x8
    // Offset: 0x28
    Oculus::Platform::Models::User* LeaderOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::User*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xDB01BC
    // public readonly Oculus.Platform.Models.User Leader
    // Size: 0x8
    // Offset: 0x30
    Oculus::Platform::Models::User* Leader;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::User*) == 0x8);
    // public readonly Oculus.Platform.Models.Room RoomOptional
    // Size: 0x8
    // Offset: 0x38
    Oculus::Platform::Models::Room* RoomOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::Room*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xDB01F4
    // public readonly Oculus.Platform.Models.Room Room
    // Size: 0x8
    // Offset: 0x40
    Oculus::Platform::Models::Room* Room;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::Room*) == 0x8);
    // public readonly Oculus.Platform.Models.UserList UsersOptional
    // Size: 0x8
    // Offset: 0x48
    Oculus::Platform::Models::UserList* UsersOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xDB022C
    // public readonly Oculus.Platform.Models.UserList Users
    // Size: 0x8
    // Offset: 0x50
    Oculus::Platform::Models::UserList* Users;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // Creating value type constructor for type: Party
    Party(uint64_t ID_ = {}, Oculus::Platform::Models::UserList* InvitedUsersOptional_ = {}, Oculus::Platform::Models::UserList* InvitedUsers_ = {}, Oculus::Platform::Models::User* LeaderOptional_ = {}, Oculus::Platform::Models::User* Leader_ = {}, Oculus::Platform::Models::Room* RoomOptional_ = {}, Oculus::Platform::Models::Room* Room_ = {}, Oculus::Platform::Models::UserList* UsersOptional_ = {}, Oculus::Platform::Models::UserList* Users_ = {}) noexcept : ID{ID_}, InvitedUsersOptional{InvitedUsersOptional_}, InvitedUsers{InvitedUsers_}, LeaderOptional{LeaderOptional_}, Leader{Leader_}, RoomOptional{RoomOptional_}, Room{Room_}, UsersOptional{UsersOptional_}, Users{Users_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DD80C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Party* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::Party::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Party*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Party
  static check_size<sizeof(Party), 80 + sizeof(Oculus::Platform::Models::UserList*)> __Oculus_Platform_Models_PartySizeCheck;
  static_assert(sizeof(Party) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Party*, "Oculus.Platform.Models", "Party");
#pragma pack(pop)
