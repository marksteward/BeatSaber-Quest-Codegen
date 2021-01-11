// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PS4OnGoingToBackgroundSaveHandler
  // [] Offset: FFFFFFFF
  class PS4OnGoingToBackgroundSaveHandler : public UnityEngine::MonoBehaviour {
    public:
    // private LocalLeaderboardsModel _localLeaderboardModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xDC49DC
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // Creating value type constructor for type: PS4OnGoingToBackgroundSaveHandler
    PS4OnGoingToBackgroundSaveHandler(GlobalNamespace::LocalLeaderboardsModel* localLeaderboardModel_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}) noexcept : localLeaderboardModel{localLeaderboardModel_}, mainSettingsModel{mainSettingsModel_}, playerDataModel{playerDataModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0xF030A8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xF03190
    void OnDisable();
    // private System.Void HandlePS4HelperDidGoToBackgroundExecution()
    // Offset: 0xF03288
    void HandlePS4HelperDidGoToBackgroundExecution();
    // public System.Void .ctor()
    // Offset: 0xF032D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4OnGoingToBackgroundSaveHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4OnGoingToBackgroundSaveHandler*, creationType>()));
    }
  }; // PS4OnGoingToBackgroundSaveHandler
  static check_size<sizeof(PS4OnGoingToBackgroundSaveHandler), 40 + sizeof(GlobalNamespace::PlayerDataModel*)> __GlobalNamespace_PS4OnGoingToBackgroundSaveHandlerSizeCheck;
  static_assert(sizeof(PS4OnGoingToBackgroundSaveHandler) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*, "", "PS4OnGoingToBackgroundSaveHandler");
