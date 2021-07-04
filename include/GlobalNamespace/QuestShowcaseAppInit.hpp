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
  // Forward declaring type: OculusInit
  class OculusInit;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: QuestShowcaseAppInit
  class QuestShowcaseAppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private OculusInit _oculusInit
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::OculusInit* oculusInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusInit*) == 0x8);
    // private MenuScenesTransitionSetupDataSO _menuTransitionSetupData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14B78
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE14BB0
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE14BC0
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // Creating value type constructor for type: QuestShowcaseAppInit
    QuestShowcaseAppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::OculusInit* oculusInit_ = {}, GlobalNamespace::MenuScenesTransitionSetupDataSO* menuTransitionSetupData_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}) noexcept : mainSystemInit{mainSystemInit_}, oculusInit{oculusInit_}, menuTransitionSetupData{menuTransitionSetupData_}, mainSettingsModel{mainSettingsModel_}, gameScenesManager{gameScenesManager_}, playerDataModel{playerDataModel_} {}
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0x10A8B38
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0x10A8B54
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0x10A8CE4
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0x10A8D30
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x10A8DD4
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
    static QuestShowcaseAppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuestShowcaseAppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuestShowcaseAppInit*, creationType>()));
    }
  }; // QuestShowcaseAppInit
  #pragma pack(pop)
  static check_size<sizeof(QuestShowcaseAppInit), 104 + sizeof(GlobalNamespace::PlayerDataModel*)> __GlobalNamespace_QuestShowcaseAppInitSizeCheck;
  static_assert(sizeof(QuestShowcaseAppInit) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuestShowcaseAppInit*, "", "QuestShowcaseAppInit");
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::AppStartAndMultiSceneEditorSetup
// Il2CppName: AppStartAndMultiSceneEditorSetup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::RepeatableSetup
// Il2CppName: RepeatableSetup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::TransitionToNextScene
// Il2CppName: TransitionToNextScene
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::InstallBindings
// Il2CppName: InstallBindings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
