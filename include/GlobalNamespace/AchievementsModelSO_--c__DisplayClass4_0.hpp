// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AchievementsModelSO
#include "GlobalNamespace/AchievementsModelSO.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AchievementsModelSO/<>c__DisplayClass4_0
  // [CompilerGeneratedAttribute] Offset: D3154C
  class AchievementsModelSO::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public AchievementsModelSO <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::AchievementsModelSO* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementsModelSO*) == 0x8);
    // public System.String achievementId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* achievementId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(GlobalNamespace::AchievementsModelSO* $$4__this_ = {}, ::Il2CppString* achievementId_ = {}) noexcept : $$4__this{$$4__this_}, achievementId{achievementId_} {}
    // System.Void <UnlockAchievement>b__0(PlatformAchievementsModelSO/UnlockAchievementResult result)
    // Offset: 0x1014B10
    void $UnlockAchievement$b__0(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result);
    // public System.Void .ctor()
    // Offset: 0x10149DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementsModelSO::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementsModelSO::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // AchievementsModelSO/<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(AchievementsModelSO::$$c__DisplayClass4_0), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_AchievementsModelSO_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(AchievementsModelSO::$$c__DisplayClass4_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0*, "", "AchievementsModelSO/<>c__DisplayClass4_0");
