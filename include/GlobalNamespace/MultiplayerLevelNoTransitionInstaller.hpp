// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelNoTransitionInstaller
  class MultiplayerLevelNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private BeatmapLevelSO _beatmapLevel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: colorScheme
    char __padding2[0x4] = {};
    // private ColorSchemeSO _colorScheme
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSchemeSO* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // private PlayerSpecificSettings _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // private PracticeSettings _practiceSettings
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeSettings*) == 0x8);
    // private System.Boolean _useTestNoteCutSoundEffects
    // Size: 0x1
    // Offset: 0x50
    bool useTestNoteCutSoundEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestNoteCutSoundEffects and: multiplayerLevelScenesTransitionSetupData
    char __padding7[0x7] = {};
    // [SpaceAttribute] Offset: 0xE2917C
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // private IMenuRpcManager _menuRpcManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuRpcManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerLevelNoTransitionInstaller
    MultiplayerLevelNoTransitionInstaller(GlobalNamespace::BeatmapLevelSO* beatmapLevel_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::ColorSchemeSO* colorScheme_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, GlobalNamespace::PracticeSettings* practiceSettings_ = {}, bool useTestNoteCutSoundEffects_ = {}, GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData_ = {}, GlobalNamespace::IMenuRpcManager* menuRpcManager_ = {}) noexcept : beatmapLevel{beatmapLevel_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_}, colorScheme{colorScheme_}, gameplayModifiers{gameplayModifiers_}, playerSpecificSettings{playerSpecificSettings_}, practiceSettings{practiceSettings_}, useTestNoteCutSoundEffects{useTestNoteCutSoundEffects_}, multiplayerLevelScenesTransitionSetupData{multiplayerLevelScenesTransitionSetupData_}, menuRpcManager{menuRpcManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0x1023618
    void OnDestroy();
    // private System.Void GetStartedLevel(System.String userId)
    // Offset: 0x1023718
    void GetStartedLevel(::Il2CppString* userId);
    // private System.Void StartLevelImmediately()
    // Offset: 0x10234B0
    void StartLevelImmediately();
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x1022A44
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public override System.Void PostInstall(Zenject.DiContainer container)
    // Offset: 0x1022E18
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::PostInstall(Zenject.DiContainer container)
    void PostInstall(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x102371C
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelNoTransitionInstaller*, creationType>()));
    }
  }; // MultiplayerLevelNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelNoTransitionInstaller), 96 + sizeof(GlobalNamespace::IMenuRpcManager*)> __GlobalNamespace_MultiplayerLevelNoTransitionInstallerSizeCheck;
  static_assert(sizeof(MultiplayerLevelNoTransitionInstaller) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelNoTransitionInstaller*, "", "MultiplayerLevelNoTransitionInstaller");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelNoTransitionInstaller::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelNoTransitionInstaller::*)()>(&GlobalNamespace::MultiplayerLevelNoTransitionInstaller::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelNoTransitionInstaller*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelNoTransitionInstaller::GetStartedLevel
// Il2CppName: GetStartedLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelNoTransitionInstaller::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerLevelNoTransitionInstaller::GetStartedLevel)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelNoTransitionInstaller*), "GetStartedLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelNoTransitionInstaller::StartLevelImmediately
// Il2CppName: StartLevelImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelNoTransitionInstaller::*)()>(&GlobalNamespace::MultiplayerLevelNoTransitionInstaller::StartLevelImmediately)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelNoTransitionInstaller*), "StartLevelImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelNoTransitionInstaller::*)(Zenject::DiContainer*)>(&GlobalNamespace::MultiplayerLevelNoTransitionInstaller::InstallBindings)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelNoTransitionInstaller::PostInstall
// Il2CppName: PostInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelNoTransitionInstaller::*)(Zenject::DiContainer*)>(&GlobalNamespace::MultiplayerLevelNoTransitionInstaller::PostInstall)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelNoTransitionInstaller*), "PostInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
