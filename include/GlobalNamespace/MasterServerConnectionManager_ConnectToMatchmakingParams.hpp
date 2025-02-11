// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
#include "GlobalNamespace/MasterServerConnectionManager_MasterServerConnectionManagerParamsBase.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerConnectionManager/ConnectToMatchmakingParams
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerConnectionManager::ConnectToMatchmakingParams : public GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase {
    public:
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ConnectToMatchmakingParams
    ConnectToMatchmakingParams(GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, ::Il2CppString* secret_ = {}, ::Il2CppString* code_ = {}) noexcept : selectionMask{selectionMask_}, configuration{configuration_}, secret{secret_}, code{code_} {}
    // Get instance field: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask _get_selectionMask();
    // Set instance field: public BeatmapLevelSelectionMask selectionMask
    void _set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value);
    // Get instance field: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration _get_configuration();
    // Set instance field: public GameplayServerConfiguration configuration
    void _set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // Get instance field: public System.String secret
    ::Il2CppString* _get_secret();
    // Set instance field: public System.String secret
    void _set_secret(::Il2CppString* value);
    // Get instance field: public System.String code
    ::Il2CppString* _get_code();
    // Set instance field: public System.String code
    void _set_code(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x213AEE0
    // Implemented from: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
    // Base method: System.Void MasterServerConnectionManagerParamsBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::ConnectToMatchmakingParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerConnectionManager::ConnectToMatchmakingParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::ConnectToMatchmakingParams*, creationType>()));
    }
  }; // MasterServerConnectionManager/ConnectToMatchmakingParams
  #pragma pack(pop)
  static check_size<sizeof(MasterServerConnectionManager::ConnectToMatchmakingParams), 104 + sizeof(::Il2CppString*)> __GlobalNamespace_MasterServerConnectionManager_ConnectToMatchmakingParamsSizeCheck;
  static_assert(sizeof(MasterServerConnectionManager::ConnectToMatchmakingParams) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::ConnectToMatchmakingParams*, "", "MasterServerConnectionManager/ConnectToMatchmakingParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerConnectionManager::ConnectToMatchmakingParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
