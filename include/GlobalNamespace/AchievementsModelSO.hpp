// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: AchievementsModelSO
  class AchievementsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::AchievementsModelSO::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // private PlatformAchievementsModelSO _platformAchievementsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlatformAchievementsModelSO* platformAchievementsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformAchievementsModelSO*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _unlockedAchievementIds
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::HashSet_1<::Il2CppString*>* unlockedAchievementIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x28
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AchievementsModelSO
    AchievementsModelSO(GlobalNamespace::PlatformAchievementsModelSO* platformAchievementsModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* unlockedAchievementIds_ = {}, bool initialized_ = {}) noexcept : platformAchievementsModel{platformAchievementsModel_}, unlockedAchievementIds{unlockedAchievementIds_}, initialized{initialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Initialize()
    // Offset: 0x112A9C4
    void Initialize();
    // public System.Void UnlockAchievement(AchievementSO achievement)
    // Offset: 0x112B93C
    void UnlockAchievement(GlobalNamespace::AchievementSO* achievement);
    // private System.Void <Initialize>b__3_0(PlatformAchievementsModelSO/GetUnlockedAchievementsResult result, System.String[] achievementIds)
    // Offset: 0x112BAC0
    void $Initialize$b__3_0(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult result, ::Array<::Il2CppString*>* achievementIds);
    // public System.Void .ctor()
    // Offset: 0x112BA50
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AchievementsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementsModelSO*, creationType>()));
    }
  }; // AchievementsModelSO
  #pragma pack(pop)
  static check_size<sizeof(AchievementsModelSO), 40 + sizeof(bool)> __GlobalNamespace_AchievementsModelSOSizeCheck;
  static_assert(sizeof(AchievementsModelSO) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementsModelSO*, "", "AchievementsModelSO");
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::Initialize
// Il2CppName: Initialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::UnlockAchievement
// Il2CppName: UnlockAchievement
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::$Initialize$b__3_0
// Il2CppName: <Initialize>b__3_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AchievementsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
