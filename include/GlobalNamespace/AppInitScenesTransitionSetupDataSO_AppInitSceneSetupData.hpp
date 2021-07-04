// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInitScenesTransitionSetupDataSO
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Including type: AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayersModel
  class MockPlayersModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData
  class AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE2A6FC
    // private AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType <appInitOverrideStartType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType) == 0x4);
    // Padding between fields: appInitOverrideStartType and: overrideMockPlayersModel
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE2A70C
    // private MockPlayersModel <overrideMockPlayersModel>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockPlayersModel* overrideMockPlayersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayersModel*) == 0x8);
    // Creating value type constructor for type: AppInitSceneSetupData
    AppInitSceneSetupData(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType_ = {}, GlobalNamespace::MockPlayersModel* overrideMockPlayersModel_ = {}) noexcept : appInitOverrideStartType{appInitOverrideStartType_}, overrideMockPlayersModel{overrideMockPlayersModel_} {}
    // public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType get_appInitOverrideStartType()
    // Offset: 0x1130310
    GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType get_appInitOverrideStartType();
    // private System.Void set_appInitOverrideStartType(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType value)
    // Offset: 0x1130318
    void set_appInitOverrideStartType(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // public MockPlayersModel get_overrideMockPlayersModel()
    // Offset: 0x1130320
    GlobalNamespace::MockPlayersModel* get_overrideMockPlayersModel();
    // private System.Void set_overrideMockPlayersModel(MockPlayersModel value)
    // Offset: 0x1130328
    void set_overrideMockPlayersModel(GlobalNamespace::MockPlayersModel* value);
    // public System.Void .ctor(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType appInitOverrideStartType, MockPlayersModel overrideMockPlayersModel)
    // Offset: 0x112FE84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData* New_ctor(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType, GlobalNamespace::MockPlayersModel* overrideMockPlayersModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*, creationType>(appInitOverrideStartType, overrideMockPlayersModel)));
    }
  }; // AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData), 24 + sizeof(GlobalNamespace::MockPlayersModel*)> __GlobalNamespace_AppInitScenesTransitionSetupDataSO_AppInitSceneSetupDataSizeCheck;
  static_assert(sizeof(AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*, "", "AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData");
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::get_appInitOverrideStartType
// Il2CppName: get_appInitOverrideStartType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::set_appInitOverrideStartType
// Il2CppName: set_appInitOverrideStartType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::get_overrideMockPlayersModel
// Il2CppName: get_overrideMockPlayersModel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::set_overrideMockPlayersModel
// Il2CppName: set_overrideMockPlayersModel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
