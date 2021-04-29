// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: PlayerEditorConnectionEvents
  class PlayerEditorConnectionEvents;
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IPlayerEditorConnectionNative
  class IPlayerEditorConnectionNative;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerConnection
  class PlayerConnection : public UnityEngine::ScriptableObject {
    public:
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // private UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents m_PlayerEditorConnectionEvents
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> m_connectedPlayers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<int>* m_connectedPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Boolean m_IsInitilized
    // Size: 0x1
    // Offset: 0x28
    bool m_IsInitilized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerConnection
    PlayerConnection(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents_ = {}, System::Collections::Generic::List_1<int>* m_connectedPlayers_ = {}, bool m_IsInitilized_ = {}) noexcept : m_PlayerEditorConnectionEvents{m_PlayerEditorConnectionEvents_}, m_connectedPlayers{m_connectedPlayers_}, m_IsInitilized{m_IsInitilized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static UnityEngine.IPlayerEditorConnectionNative connectionNative
    static UnityEngine::IPlayerEditorConnectionNative* _get_connectionNative();
    // Set static field: static UnityEngine.IPlayerEditorConnectionNative connectionNative
    static void _set_connectionNative(UnityEngine::IPlayerEditorConnectionNative* value);
    // Get static field: static private UnityEngine.Networking.PlayerConnection.PlayerConnection s_Instance
    static UnityEngine::Networking::PlayerConnection::PlayerConnection* _get_s_Instance();
    // Set static field: static private UnityEngine.Networking.PlayerConnection.PlayerConnection s_Instance
    static void _set_s_Instance(UnityEngine::Networking::PlayerConnection::PlayerConnection* value);
    // static public UnityEngine.Networking.PlayerConnection.PlayerConnection get_instance()
    // Offset: 0x1AB4704
    static UnityEngine::Networking::PlayerConnection::PlayerConnection* get_instance();
    // public System.Boolean get_isConnected()
    // Offset: 0x1AB48C0
    bool get_isConnected();
    // static private UnityEngine.Networking.PlayerConnection.PlayerConnection CreateInstance()
    // Offset: 0x1AB4810
    static UnityEngine::Networking::PlayerConnection::PlayerConnection* CreateInstance();
    // public System.Void OnEnable()
    // Offset: 0x1AB4A38
    void OnEnable();
    // private UnityEngine.IPlayerEditorConnectionNative GetConnectionNativeApi()
    // Offset: 0x1AB4974
    UnityEngine::IPlayerEditorConnectionNative* GetConnectionNativeApi();
    // public System.Void Register(System.Guid messageId, UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> callback)
    // Offset: 0x1AB4B10
    void Register(System::Guid messageId, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);
    // public System.Void Unregister(System.Guid messageId, UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> callback)
    // Offset: 0x1AB4E80
    void Unregister(System::Guid messageId, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);
    // public System.Void RegisterConnection(UnityEngine.Events.UnityAction`1<System.Int32> callback)
    // Offset: 0x1AB5150
    void RegisterConnection(UnityEngine::Events::UnityAction_1<int>* callback);
    // public System.Void RegisterDisconnection(UnityEngine.Events.UnityAction`1<System.Int32> callback)
    // Offset: 0x1AB5294
    void RegisterDisconnection(UnityEngine::Events::UnityAction_1<int>* callback);
    // public System.Void UnregisterConnection(UnityEngine.Events.UnityAction`1<System.Int32> callback)
    // Offset: 0x1AB5304
    void UnregisterConnection(UnityEngine::Events::UnityAction_1<int>* callback);
    // public System.Void UnregisterDisconnection(UnityEngine.Events.UnityAction`1<System.Int32> callback)
    // Offset: 0x1AB5374
    void UnregisterDisconnection(UnityEngine::Events::UnityAction_1<int>* callback);
    // public System.Void Send(System.Guid messageId, System.Byte[] data)
    // Offset: 0x1AB53E4
    void Send(System::Guid messageId, ::Array<uint8_t>* data);
    // public System.Boolean TrySend(System.Guid messageId, System.Byte[] data)
    // Offset: 0x1AB5544
    bool TrySend(System::Guid messageId, ::Array<uint8_t>* data);
    // public System.Boolean BlockUntilRecvMsg(System.Guid messageId, System.Int32 timeout)
    // Offset: 0x1AB56A4
    bool BlockUntilRecvMsg(System::Guid messageId, int timeout);
    // public System.Void DisconnectAll()
    // Offset: 0x1AB58B0
    void DisconnectAll();
    // static private System.Void MessageCallbackInternal(System.IntPtr data, System.UInt64 size, System.UInt64 guid, System.String messageId)
    // Offset: 0x1AB5964
    static void MessageCallbackInternal(System::IntPtr data, uint64_t size, uint64_t guid, ::Il2CppString* messageId);
    // static private System.Void ConnectedCallbackInternal(System.Int32 playerId)
    // Offset: 0x1AB5E38
    static void ConnectedCallbackInternal(int playerId);
    // static private System.Void DisconnectedCallback(System.Int32 playerId)
    // Offset: 0x1AB5EC8
    static void DisconnectedCallback(int playerId);
    // public System.Void .ctor()
    // Offset: 0x1AB5F58
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerConnection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::PlayerConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerConnection*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerConnection
  #pragma pack(pop)
  static check_size<sizeof(PlayerConnection), 40 + sizeof(bool)> __UnityEngine_Networking_PlayerConnection_PlayerConnectionSizeCheck;
  static_assert(sizeof(PlayerConnection) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerConnection*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection");
