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
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: StringSignal
  class StringSignal;
  // Forward declaring type: VRsenalScoreLogger
  class VRsenalScoreLogger;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VRsenalLogger
  // [] Offset: FFFFFFFF
  class VRsenalLogger : public UnityEngine::MonoBehaviour {
    public:
    // private ScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // private StringSignal _playerNameWasEnteredSignal
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StringSignal* playerNameWasEnteredSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StringSignal*) == 0x8);
    // private VRsenalScoreLogger _vRsenalScoreLoggerPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::VRsenalScoreLogger* vRsenalScoreLoggerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRsenalScoreLogger*) == 0x8);
    // [InjectAttribute] Offset: 0xDC0BA0
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // Creating value type constructor for type: VRsenalLogger
    VRsenalLogger(GlobalNamespace::ScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData_ = {}, GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData_ = {}, GlobalNamespace::StringSignal* playerNameWasEnteredSignal_ = {}, GlobalNamespace::VRsenalScoreLogger* vRsenalScoreLoggerPrefab_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}) noexcept : standardLevelScenesTransitionSetupData{standardLevelScenesTransitionSetupData_}, tutorialScenesTransitionSetupData{tutorialScenesTransitionSetupData_}, playerNameWasEnteredSignal{playerNameWasEnteredSignal_}, vRsenalScoreLoggerPrefab{vRsenalScoreLoggerPrefab_}, gameScenesManager{gameScenesManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1976A00
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1976AE8
    void OnDestroy();
    // private System.Void HandleGameScenesManagerInstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0x1976BD0
    void HandleGameScenesManagerInstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void HandlePlayerNameWasEntered(System.String playerName)
    // Offset: 0x1976D28
    void HandlePlayerNameWasEntered(::Il2CppString* playerName);
    // public System.Void .ctor()
    // Offset: 0x1976DB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRsenalLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRsenalLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRsenalLogger*, creationType>()));
    }
  }; // VRsenalLogger
  static check_size<sizeof(VRsenalLogger), 56 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_VRsenalLoggerSizeCheck;
  static_assert(sizeof(VRsenalLogger) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRsenalLogger*, "", "VRsenalLogger");
