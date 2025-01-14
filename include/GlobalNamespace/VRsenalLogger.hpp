// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
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
    // [InjectAttribute] Offset: 0xEAB2C0
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
    // Get instance field: private ScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    GlobalNamespace::ScenesTransitionSetupDataSO* _get__standardLevelScenesTransitionSetupData();
    // Set instance field: private ScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    void _set__standardLevelScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* value);
    // Get instance field: private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    GlobalNamespace::ScenesTransitionSetupDataSO* _get__tutorialScenesTransitionSetupData();
    // Set instance field: private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    void _set__tutorialScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* value);
    // Get instance field: private StringSignal _playerNameWasEnteredSignal
    GlobalNamespace::StringSignal* _get__playerNameWasEnteredSignal();
    // Set instance field: private StringSignal _playerNameWasEnteredSignal
    void _set__playerNameWasEnteredSignal(GlobalNamespace::StringSignal* value);
    // Get instance field: private VRsenalScoreLogger _vRsenalScoreLoggerPrefab
    GlobalNamespace::VRsenalScoreLogger* _get__vRsenalScoreLoggerPrefab();
    // Set instance field: private VRsenalScoreLogger _vRsenalScoreLoggerPrefab
    void _set__vRsenalScoreLoggerPrefab(GlobalNamespace::VRsenalScoreLogger* value);
    // Get instance field: private GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager* _get__gameScenesManager();
    // Set instance field: private GameScenesManager _gameScenesManager
    void _set__gameScenesManager(GlobalNamespace::GameScenesManager* value);
    // protected System.Void Awake()
    // Offset: 0x206FFD8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x20700C0
    void OnDestroy();
    // private System.Void HandleGameScenesManagerInstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0x20701A8
    void HandleGameScenesManagerInstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void HandlePlayerNameWasEntered(System.String playerName)
    // Offset: 0x2070300
    void HandlePlayerNameWasEntered(::Il2CppString* playerName);
    // public System.Void .ctor()
    // Offset: 0x2070388
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
  #pragma pack(pop)
  static check_size<sizeof(VRsenalLogger), 56 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_VRsenalLoggerSizeCheck;
  static_assert(sizeof(VRsenalLogger) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRsenalLogger*, "", "VRsenalLogger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRsenalLogger::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalLogger::*)()>(&GlobalNamespace::VRsenalLogger::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalLogger*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalLogger::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalLogger::*)()>(&GlobalNamespace::VRsenalLogger::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalLogger*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalLogger::HandleGameScenesManagerInstallEarlyBindings
// Il2CppName: HandleGameScenesManagerInstallEarlyBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalLogger::*)(GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*)>(&GlobalNamespace::VRsenalLogger::HandleGameScenesManagerInstallEarlyBindings)> {
  static const MethodInfo* get() {
    static auto* scenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalLogger*), "HandleGameScenesManagerInstallEarlyBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenesTransitionSetupData, container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalLogger::HandlePlayerNameWasEntered
// Il2CppName: HandlePlayerNameWasEntered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalLogger::*)(::Il2CppString*)>(&GlobalNamespace::VRsenalLogger::HandlePlayerNameWasEntered)> {
  static const MethodInfo* get() {
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalLogger*), "HandlePlayerNameWasEntered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
