// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
// Including type: INoTransitionColorSchemeProvider
#include "GlobalNamespace/INoTransitionColorSchemeProvider.hpp"
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
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelNoTransitionInstaller
  class StandardLevelNoTransitionInstaller : public Zenject::NoTransitionInstaller/*, public GlobalNamespace::INoTransitionColorSchemeProvider*/ {
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
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // private PlayerSpecificSettings _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // private PracticeSettings _practiceSettings
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeSettings*) == 0x8);
    // private System.String _backButtonText
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* backButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _useTestNoteCutSoundEffects
    // Size: 0x1
    // Offset: 0x60
    bool useTestNoteCutSoundEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestNoteCutSoundEffects and: scenesTransitionSetupData
    char __padding9[0x7] = {};
    // [SpaceAttribute] Offset: 0xE2929C
    // private StandardLevelScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: StandardLevelNoTransitionInstaller
    StandardLevelNoTransitionInstaller(GlobalNamespace::BeatmapLevelSO* beatmapLevel_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::ColorSchemeSO* colorScheme_ = {}, GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, GlobalNamespace::PracticeSettings* practiceSettings_ = {}, ::Il2CppString* backButtonText_ = {}, bool useTestNoteCutSoundEffects_ = {}, GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* scenesTransitionSetupData_ = {}) noexcept : beatmapLevel{beatmapLevel_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_}, colorScheme{colorScheme_}, environmentInfo{environmentInfo_}, gameplayModifiers{gameplayModifiers_}, playerSpecificSettings{playerSpecificSettings_}, practiceSettings{practiceSettings_}, backButtonText{backButtonText_}, useTestNoteCutSoundEffects{useTestNoteCutSoundEffects_}, scenesTransitionSetupData{scenesTransitionSetupData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INoTransitionColorSchemeProvider
    operator GlobalNamespace::INoTransitionColorSchemeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoTransitionColorSchemeProvider*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public ColorSchemeSO get_colorScheme()
    // Offset: 0x1161D70
    GlobalNamespace::ColorSchemeSO* get_colorScheme();
    // public System.Void set_colorScheme(ColorSchemeSO value)
    // Offset: 0x1161D78
    void set_colorScheme(GlobalNamespace::ColorSchemeSO* value);
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x1161D80
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x11623E4
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelNoTransitionInstaller*, creationType>()));
    }
  }; // StandardLevelNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelNoTransitionInstaller), 104 + sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*)> __GlobalNamespace_StandardLevelNoTransitionInstallerSizeCheck;
  static_assert(sizeof(StandardLevelNoTransitionInstaller) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelNoTransitionInstaller*, "", "StandardLevelNoTransitionInstaller");
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelNoTransitionInstaller::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSchemeSO* (GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(&GlobalNamespace::StandardLevelNoTransitionInstaller::get_colorScheme)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelNoTransitionInstaller*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelNoTransitionInstaller::set_colorScheme
// Il2CppName: set_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelNoTransitionInstaller::*)(GlobalNamespace::ColorSchemeSO*)>(&GlobalNamespace::StandardLevelNoTransitionInstaller::set_colorScheme)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ColorSchemeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelNoTransitionInstaller*), "set_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelNoTransitionInstaller::*)(Zenject::DiContainer*)>(&GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
