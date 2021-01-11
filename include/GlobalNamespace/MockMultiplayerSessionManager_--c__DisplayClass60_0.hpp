// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockMultiplayerSessionManager/<>c__DisplayClass60_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF594
  class MockMultiplayerSessionManager::$$c__DisplayClass60_0 : public ::Il2CppObject {
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass60_0
    $$c__DisplayClass60_0(::Il2CppString* userId_ = {}) noexcept : userId{userId_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return userId;
    }
    // System.Boolean <GetConnectedPlayerByUserId>b__0(MockPlayer player)
    // Offset: 0x1024AE8
    bool $GetConnectedPlayerByUserId$b__0(GlobalNamespace::MockPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x1023B8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockMultiplayerSessionManager::$$c__DisplayClass60_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::$$c__DisplayClass60_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockMultiplayerSessionManager::$$c__DisplayClass60_0*, creationType>()));
    }
  }; // MockMultiplayerSessionManager/<>c__DisplayClass60_0
  static check_size<sizeof(MockMultiplayerSessionManager::$$c__DisplayClass60_0), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_MockMultiplayerSessionManager_$$c__DisplayClass60_0SizeCheck;
  static_assert(sizeof(MockMultiplayerSessionManager::$$c__DisplayClass60_0) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager::$$c__DisplayClass60_0*, "", "MockMultiplayerSessionManager/<>c__DisplayClass60_0");
