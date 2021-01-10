// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x28
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
  // [] Offset: FFFFFFFF
  class PlayerEditorConnectionEvents::MessageTypeSubscribers : public ::Il2CppObject {
    public:
    // private System.String m_messageTypeId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_messageTypeId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 subscriberCount
    // Size: 0x4
    // Offset: 0x18
    int subscriberCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: subscriberCount and: messageCallback
    char __padding1[0x4] = {};
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent messageCallback
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent* messageCallback;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent*) == 0x8);
    // Creating value type constructor for type: MessageTypeSubscribers
    MessageTypeSubscribers(::Il2CppString* m_messageTypeId_ = {}, int subscriberCount_ = {}, UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent* messageCallback_ = {}) noexcept : m_messageTypeId{m_messageTypeId_}, subscriberCount{subscriberCount_}, messageCallback{messageCallback_} {}
    // public System.Guid get_MessageTypeId()
    // Offset: 0x172EF30
    System::Guid get_MessageTypeId();
    // public System.Void set_MessageTypeId(System.Guid value)
    // Offset: 0x172F0A4
    void set_MessageTypeId(System::Guid value);
    // public System.Void .ctor()
    // Offset: 0x172F030
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerEditorConnectionEvents::MessageTypeSubscribers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerEditorConnectionEvents::MessageTypeSubscribers*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
  static check_size<sizeof(PlayerEditorConnectionEvents::MessageTypeSubscribers), 32 + sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent*)> __UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribersSizeCheck;
  static_assert(sizeof(PlayerEditorConnectionEvents::MessageTypeSubscribers) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageTypeSubscribers");
#pragma pack(pop)
