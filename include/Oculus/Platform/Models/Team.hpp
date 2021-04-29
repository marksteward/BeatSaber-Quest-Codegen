// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Team
  class Team : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.UserList AssignedUsers
    // Size: 0x8
    // Offset: 0x10
    Oculus::Platform::Models::UserList* AssignedUsers;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly System.Int32 MaxUsers
    // Size: 0x4
    // Offset: 0x18
    int MaxUsers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 MinUsers
    // Size: 0x4
    // Offset: 0x1C
    int MinUsers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Team
    Team(Oculus::Platform::Models::UserList* AssignedUsers_ = {}, int MaxUsers_ = {}, int MinUsers_ = {}, ::Il2CppString* Name_ = {}) noexcept : AssignedUsers{AssignedUsers_}, MaxUsers{MaxUsers_}, MinUsers{MinUsers_}, Name{Name_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13AFD44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Team* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::Team::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Team*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Team
  #pragma pack(pop)
  static check_size<sizeof(Team), 32 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_TeamSizeCheck;
  static_assert(sizeof(Team) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Team*, "Oculus.Platform.Models", "Team");
