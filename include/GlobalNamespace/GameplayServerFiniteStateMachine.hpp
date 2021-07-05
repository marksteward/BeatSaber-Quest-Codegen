// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GameplayServerFiniteStateMachine
  class GameplayServerFiniteStateMachine : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType
    struct GameStateType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GameplayServerFiniteStateMachine/GameStateType
    struct GameStateType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GameStateType
      constexpr GameStateType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public GameplayServerFiniteStateMachine/GameStateType EmptyServer
      static constexpr const int EmptyServer = 0;
      // Get static field: static public GameplayServerFiniteStateMachine/GameStateType EmptyServer
      static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_EmptyServer();
      // Set static field: static public GameplayServerFiniteStateMachine/GameStateType EmptyServer
      static void _set_EmptyServer(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
      // static field const value: static public GameplayServerFiniteStateMachine/GameStateType SelectingLevel
      static constexpr const int SelectingLevel = 1;
      // Get static field: static public GameplayServerFiniteStateMachine/GameStateType SelectingLevel
      static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_SelectingLevel();
      // Set static field: static public GameplayServerFiniteStateMachine/GameStateType SelectingLevel
      static void _set_SelectingLevel(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
      // static field const value: static public GameplayServerFiniteStateMachine/GameStateType StartingLevel
      static constexpr const int StartingLevel = 2;
      // Get static field: static public GameplayServerFiniteStateMachine/GameStateType StartingLevel
      static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_StartingLevel();
      // Set static field: static public GameplayServerFiniteStateMachine/GameStateType StartingLevel
      static void _set_StartingLevel(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
      // static field const value: static public GameplayServerFiniteStateMachine/GameStateType RunningLevel
      static constexpr const int RunningLevel = 3;
      // Get static field: static public GameplayServerFiniteStateMachine/GameStateType RunningLevel
      static GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType _get_RunningLevel();
      // Set static field: static public GameplayServerFiniteStateMachine/GameStateType RunningLevel
      static void _set_RunningLevel(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType value);
    }; // GameplayServerFiniteStateMachine/GameStateType
    #pragma pack(pop)
    static check_size<sizeof(GameplayServerFiniteStateMachine::GameStateType), 0 + sizeof(int)> __GlobalNamespace_GameplayServerFiniteStateMachine_GameStateTypeSizeCheck;
    static_assert(sizeof(GameplayServerFiniteStateMachine::GameStateType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDF0B50
    // private System.Action`1<GameplayServerFiniteStateMachine/GameStateType> onGameStateChanged
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>* onGameStateChanged;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>*) == 0x8);
    // Creating value type constructor for type: GameplayServerFiniteStateMachine
    GameplayServerFiniteStateMachine(System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>* onGameStateChanged_ = {}) noexcept : onGameStateChanged{onGameStateChanged_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>*
    constexpr operator System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>*() const noexcept {
      return onGameStateChanged;
    }
    // public System.Void .ctor(MasterServer.ITimeProvider timeProvider, IMultiplayerSessionManager multiplayerSessionManager, GameplayServerConfiguration configuration, System.Boolean privateServer, IServerBeatmapProvider beatmapProvider)
    // Offset: 0x132EF58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayServerFiniteStateMachine* New_ctor(MasterServer::ITimeProvider* timeProvider, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::GameplayServerConfiguration configuration, bool privateServer, GlobalNamespace::IServerBeatmapProvider* beatmapProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayServerFiniteStateMachine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayServerFiniteStateMachine*, creationType>(timeProvider, multiplayerSessionManager, configuration, privateServer, beatmapProvider)));
    }
    // public System.Void add_onGameStateChanged(System.Action`1<GameplayServerFiniteStateMachine/GameStateType> value)
    // Offset: 0x132EF60
    void add_onGameStateChanged(System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>* value);
    // public System.Void remove_onGameStateChanged(System.Action`1<GameplayServerFiniteStateMachine/GameStateType> value)
    // Offset: 0x132F004
    void remove_onGameStateChanged(System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>* value);
    // public System.Void Dispose()
    // Offset: 0x132F0A8
    void Dispose();
  }; // GameplayServerFiniteStateMachine
  #pragma pack(pop)
  static check_size<sizeof(GameplayServerFiniteStateMachine), 16 + sizeof(System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>*)> __GlobalNamespace_GameplayServerFiniteStateMachineSizeCheck;
  static_assert(sizeof(GameplayServerFiniteStateMachine) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFiniteStateMachine*, "", "GameplayServerFiniteStateMachine");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType, "", "GameplayServerFiniteStateMachine/GameStateType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::add_onGameStateChanged
// Il2CppName: add_onGameStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>*)>(&GlobalNamespace::GameplayServerFiniteStateMachine::add_onGameStateChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayServerFiniteStateMachine/GameStateType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "add_onGameStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::remove_onGameStateChanged
// Il2CppName: remove_onGameStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(System::Action_1<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>*)>(&GlobalNamespace::GameplayServerFiniteStateMachine::remove_onGameStateChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayServerFiniteStateMachine/GameStateType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "remove_onGameStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
