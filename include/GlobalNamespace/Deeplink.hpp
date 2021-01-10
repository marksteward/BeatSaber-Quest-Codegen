// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: Deeplink
  // [] Offset: FFFFFFFF
  class Deeplink : public ::Il2CppObject {
    public:
    // public System.String Destination
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Destination;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String LevelID
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* LevelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String PackID
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* PackID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Difficulty
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* Difficulty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Characteristic
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* Characteristic;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Deeplink
    Deeplink(::Il2CppString* Destination_ = {}, ::Il2CppString* LevelID_ = {}, ::Il2CppString* PackID_ = {}, ::Il2CppString* Difficulty_ = {}, ::Il2CppString* Characteristic_ = {}) noexcept : Destination{Destination_}, LevelID{LevelID_}, PackID{PackID_}, Difficulty{Difficulty_}, Characteristic{Characteristic_} {}
    // public System.Void .ctor()
    // Offset: 0x1A5950C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Deeplink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Deeplink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Deeplink*, creationType>()));
    }
  }; // Deeplink
  static check_size<sizeof(Deeplink), 48 + sizeof(::Il2CppString*)> __GlobalNamespace_DeeplinkSizeCheck;
  static_assert(sizeof(Deeplink) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Deeplink*, "", "Deeplink");
#pragma pack(pop)
