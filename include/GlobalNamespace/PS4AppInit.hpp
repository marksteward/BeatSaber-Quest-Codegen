// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit;
  // Forward declaring type: AppInitScenesTransitionSetupDataContainerSO
  class AppInitScenesTransitionSetupDataContainerSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: PS4ActivePublisherSKUSettingsSO
  class PS4ActivePublisherSKUSettingsSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PS4AppInit
  class PS4AppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DefaultScenesTransitionsFromInit*) == 0x8);
    // private AppInitScenesTransitionSetupDataContainerSO _appInitScenesTransitionSetupDataContainer
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private PS4ActivePublisherSKUSettingsSO _activePublisherSKUSettingsSO
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::PS4ActivePublisherSKUSettingsSO* activePublisherSKUSettingsSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4ActivePublisherSKUSettingsSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE14AD0
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // Creating value type constructor for type: PS4AppInit
    PS4AppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit_ = {}, GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::PS4ActivePublisherSKUSettingsSO* activePublisherSKUSettingsSO_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}) noexcept : mainSystemInit{mainSystemInit_}, defaultScenesTransitionsFromInit{defaultScenesTransitionsFromInit_}, appInitScenesTransitionSetupDataContainer{appInitScenesTransitionSetupDataContainer_}, mainSettingsModel{mainSettingsModel_}, activePublisherSKUSettingsSO{activePublisherSKUSettingsSO_}, gameScenesManager{gameScenesManager_} {}
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0x1049520
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0x104958C
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0x10495D8
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0x1049614
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x10496FC
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4AppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4AppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4AppInit*, creationType>()));
    }
  }; // PS4AppInit
  #pragma pack(pop)
  static check_size<sizeof(PS4AppInit), 104 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_PS4AppInitSizeCheck;
  static_assert(sizeof(PS4AppInit) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4AppInit*, "", "PS4AppInit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4AppInit::AppStartAndMultiSceneEditorSetup
// Il2CppName: AppStartAndMultiSceneEditorSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4AppInit::*)()>(&GlobalNamespace::PS4AppInit::AppStartAndMultiSceneEditorSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AppInit*), "AppStartAndMultiSceneEditorSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4AppInit::RepeatableSetup
// Il2CppName: RepeatableSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4AppInit::*)()>(&GlobalNamespace::PS4AppInit::RepeatableSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AppInit*), "RepeatableSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4AppInit::TransitionToNextScene
// Il2CppName: TransitionToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4AppInit::*)()>(&GlobalNamespace::PS4AppInit::TransitionToNextScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AppInit*), "TransitionToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4AppInit::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4AppInit::*)()>(&GlobalNamespace::PS4AppInit::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4AppInit*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4AppInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
