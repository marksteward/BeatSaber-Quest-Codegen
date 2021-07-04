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
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: User
  class User;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.UserAndRoom
  class UserAndRoom : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.Room RoomOptional
    // Size: 0x8
    // Offset: 0x10
    Oculus::Platform::Models::Room* RoomOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::Room*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xE0161C
    // public readonly Oculus.Platform.Models.Room Room
    // Size: 0x8
    // Offset: 0x18
    Oculus::Platform::Models::Room* Room;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::Room*) == 0x8);
    // public readonly Oculus.Platform.Models.User User
    // Size: 0x8
    // Offset: 0x20
    Oculus::Platform::Models::User* User;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::User*) == 0x8);
    // Creating value type constructor for type: UserAndRoom
    UserAndRoom(Oculus::Platform::Models::Room* RoomOptional_ = {}, Oculus::Platform::Models::Room* Room_ = {}, Oculus::Platform::Models::User* User_ = {}) noexcept : RoomOptional{RoomOptional_}, Room{Room_}, User{User_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14D75F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserAndRoom* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::UserAndRoom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserAndRoom*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.UserAndRoom
  #pragma pack(pop)
  static check_size<sizeof(UserAndRoom), 32 + sizeof(Oculus::Platform::Models::User*)> __Oculus_Platform_Models_UserAndRoomSizeCheck;
  static_assert(sizeof(UserAndRoom) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserAndRoom*, "Oculus.Platform.Models", "UserAndRoom");
// Writing MetadataGetter for method: Oculus::Platform::Models::UserAndRoom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
