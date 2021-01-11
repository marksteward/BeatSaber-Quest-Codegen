// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformLeaderboardsHandler
#include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformLeaderboardsHandler/<>c__DisplayClass5_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEE14
  class OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public OculusPlatformLeaderboardsHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusPlatformLeaderboardsHandler* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformLeaderboardsHandler*) == 0x8);
    // public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*) == 0x8);
    // public System.String referencePlayerId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* referencePlayerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(GlobalNamespace::OculusPlatformLeaderboardsHandler* $$4__this_ = {}, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler_ = {}, ::Il2CppString* referencePlayerId_ = {}) noexcept : $$4__this{$$4__this_}, completionHandler{completionHandler_}, referencePlayerId{referencePlayerId_} {}
    // System.Void <GetScores>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.LeaderboardEntryList> message)
    // Offset: 0x1012320
    void $GetScores$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList*>* message);
    // public System.Void .ctor()
    // Offset: 0x10120E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // OculusPlatformLeaderboardsHandler/<>c__DisplayClass5_0
  static check_size<sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_OculusPlatformLeaderboardsHandler_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass5_0");
