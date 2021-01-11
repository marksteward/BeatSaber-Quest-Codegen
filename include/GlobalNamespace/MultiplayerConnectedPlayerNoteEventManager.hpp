// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IConnectedPlayerNoteEventManager
#include "GlobalNamespace/IConnectedPlayerNoteEventManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerNoteEventManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IConnectedPlayerNoteEventManager*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent
    struct NoteCutEvent;
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent
    struct NoteMissEvent;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent
    // [] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct NoteCutEvent/*, public System::ValueType*/ {
      public:
      // public readonly System.Single time
      // Size: 0x4
      // Offset: 0x0
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: time and: noteCutInfo
      char __padding0[0x4] = {};
      // public readonly NoteCutInfoNetSerializable noteCutInfo
      // Size: 0x8
      // Offset: 0x8
      GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo;
      // Field size check
      static_assert(sizeof(GlobalNamespace::NoteCutInfoNetSerializable*) == 0x8);
      // Creating value type constructor for type: NoteCutEvent
      constexpr NoteCutEvent(float time_ = {}, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo_ = {}) noexcept : time{time_}, noteCutInfo{noteCutInfo_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.Single time, NoteCutInfoNetSerializable noteCutInfo)
      // Offset: 0xC92ED0
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  NoteCutEvent(float time, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo)
    }; // MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent
    static check_size<sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent), 8 + sizeof(GlobalNamespace::NoteCutInfoNetSerializable*)> __GlobalNamespace_MultiplayerConnectedPlayerNoteEventManager_NoteCutEventSizeCheck;
    static_assert(sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent) == 0x10);
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent
    // [] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct NoteMissEvent/*, public System::ValueType*/ {
      public:
      // public readonly System.Single time
      // Size: 0x4
      // Offset: 0x0
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: time and: noteMissInfo
      char __padding0[0x4] = {};
      // public readonly NoteMissInfoNetSerializable noteMissInfo
      // Size: 0x8
      // Offset: 0x8
      GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo;
      // Field size check
      static_assert(sizeof(GlobalNamespace::NoteMissInfoNetSerializable*) == 0x8);
      // Creating value type constructor for type: NoteMissEvent
      constexpr NoteMissEvent(float time_ = {}, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo_ = {}) noexcept : time{time_}, noteMissInfo{noteMissInfo_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.Single time, NoteMissInfoNetSerializable noteMissInfo)
      // Offset: 0xC92F18
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  NoteMissEvent(float time, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo)
    }; // MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent
    static check_size<sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent), 8 + sizeof(GlobalNamespace::NoteMissInfoNetSerializable*)> __GlobalNamespace_MultiplayerConnectedPlayerNoteEventManager_NoteMissEventSizeCheck;
    static_assert(sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent) == 0x10);
    // [InjectAttribute] Offset: 0xDC8D40
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8D50
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8D60
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8D70
    // private System.Action`1<NoteCutInfoNetSerializable> connectedPlayerNoteWasCutEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8D80
    // private System.Action`1<NoteMissInfoNetSerializable> connectedPlayerNoteWasMissedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent> _noteCutQueue
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>* noteCutQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent> _noteMissQueue
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>* noteMissQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerNoteEventManager
    MultiplayerConnectedPlayerNoteEventManager(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeController_ = {}, System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent_ = {}, System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>* noteCutQueue_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>* noteMissQueue_ = {}) noexcept : connectedPlayer{connectedPlayer_}, gameplayRpcManager{gameplayRpcManager_}, songTimeController{songTimeController_}, connectedPlayerNoteWasCutEvent{connectedPlayerNoteWasCutEvent_}, connectedPlayerNoteWasMissedEvent{connectedPlayerNoteWasMissedEvent_}, noteCutQueue{noteCutQueue_}, noteMissQueue{noteMissQueue_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectedPlayerNoteEventManager
    operator GlobalNamespace::IConnectedPlayerNoteEventManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectedPlayerNoteEventManager*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFAC53C
    void Start();
    // protected System.Void Update()
    // Offset: 0xFAC6D4
    void Update();
    // private System.Void HandleNoteWasCut(System.String userId, System.Single syncTime, System.Single songTime, NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0xFAC8DC
    void HandleNoteWasCut(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // private System.Void HandleNoteWasMissed(System.String userId, System.Single syncTime, System.Single songTime, NoteMissInfoNetSerializable noteMissInfo)
    // Offset: 0xFACA88
    void HandleNoteWasMissed(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);
    // public System.Void add_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0xFAC2AC
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    void add_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0xFAC350
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    void remove_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0xFAC3F4
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    void add_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0xFAC498
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    void remove_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void .ctor()
    // Offset: 0xFACC20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerNoteEventManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerNoteEventManager*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerNoteEventManager
  static check_size<sizeof(MultiplayerConnectedPlayerNoteEventManager), 72 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>*)> __GlobalNamespace_MultiplayerConnectedPlayerNoteEventManagerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerNoteEventManager) == 0x50);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*, "", "MultiplayerConnectedPlayerNoteEventManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent, "", "MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent, "", "MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent");
