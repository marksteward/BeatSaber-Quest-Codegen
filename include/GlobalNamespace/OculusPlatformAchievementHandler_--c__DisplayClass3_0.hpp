// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
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
  // Forward declaring type: AchievementProgressList
  class AchievementProgressList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: OculusPlatformAchievementHandler/<>c__DisplayClass3_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF3C4
  class OculusPlatformAchievementHandler::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*) == 0x8);
    // public OculusPlatformAchievementHandler <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusPlatformAchievementHandler* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformAchievementHandler*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler_ = {}, GlobalNamespace::OculusPlatformAchievementHandler* $$4__this_ = {}) noexcept : completionHandler{completionHandler_}, $$4__this{$$4__this_} {}
    // System.Void <GetUnlockedAchievements>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementProgressList> message)
    // Offset: 0x100EB08
    void $GetUnlockedAchievements$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementProgressList*>* message);
    // public System.Void .ctor()
    // Offset: 0x100EAAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAchievementHandler::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAchievementHandler::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // OculusPlatformAchievementHandler/<>c__DisplayClass3_0
  static check_size<sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass3_0), 24 + sizeof(GlobalNamespace::OculusPlatformAchievementHandler*)> __GlobalNamespace_OculusPlatformAchievementHandler_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass3_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_0");
#pragma pack(pop)
