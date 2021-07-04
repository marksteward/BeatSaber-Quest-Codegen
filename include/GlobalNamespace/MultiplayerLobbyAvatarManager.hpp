// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerLobbyAvatarController
#include "GlobalNamespace/MultiplayerLobbyAvatarController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyAvatarManager
  class MultiplayerLobbyAvatarManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13
    class $RemovePlayerAndDestroy$d__13;
    // [InjectAttribute] Offset: 0xE15B40
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE15B50
    // private readonly MultiplayerLobbyAvatarController/Factory _avatarControllerFactory
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLobbyAvatarController::Factory* avatarControllerFactory;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarController::Factory*) == 0x8);
    // private System.Single _innerCircleRadius
    // Size: 0x4
    // Offset: 0x28
    float innerCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOuterCircleRadius
    // Size: 0x4
    // Offset: 0x2C
    float minOuterCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerLobbyAvatarController> _playerIdToAvatarMap
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLobbyAvatarController*>* playerIdToAvatarMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLobbyAvatarController*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<MultiplayerLobbyAvatarController> _inProgressDespawnAnimations
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::HashSet_1<GlobalNamespace::MultiplayerLobbyAvatarController*>* inProgressDespawnAnimations;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::MultiplayerLobbyAvatarController*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLobbyAvatarManager
    MultiplayerLobbyAvatarManager(GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel_ = {}, GlobalNamespace::MultiplayerLobbyAvatarController::Factory* avatarControllerFactory_ = {}, float innerCircleRadius_ = {}, float minOuterCircleRadius_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLobbyAvatarController*>* playerIdToAvatarMap_ = {}, System::Collections::Generic::HashSet_1<GlobalNamespace::MultiplayerLobbyAvatarController*>* inProgressDespawnAnimations_ = {}) noexcept : lobbyStateDataModel{lobbyStateDataModel_}, avatarControllerFactory{avatarControllerFactory_}, innerCircleRadius{innerCircleRadius_}, minOuterCircleRadius{minOuterCircleRadius_}, playerIdToAvatarMap{playerIdToAvatarMap_}, inProgressDespawnAnimations{inProgressDespawnAnimations_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init(System.Single innerCircleRadius, System.Single minOuterCircleRadius)
    // Offset: 0x10249C0
    void Init(float innerCircleRadius, float minOuterCircleRadius);
    // public System.Void ActivateMultiplayerLobbyAvatarManager()
    // Offset: 0x10249C8
    void ActivateMultiplayerLobbyAvatarManager();
    // public System.Void DeactivateMultiplayerLobbyAvatarManager()
    // Offset: 0x10250F4
    void DeactivateMultiplayerLobbyAvatarManager();
    // private System.Void HandleLobbyStateDataModelPlayerConnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x1025424
    void HandleLobbyStateDataModelPlayerConnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandleLobbyStateDataModelPlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x1025428
    void HandleLobbyStateDataModelPlayerDisconnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void AddPlayer(IConnectedPlayer connectedPlayer)
    // Offset: 0x1024C68
    void AddPlayer(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void RemovePlayer(IConnectedPlayer connectedPlayer)
    // Offset: 0x102542C
    void RemovePlayer(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Collections.IEnumerator RemovePlayerAndDestroy(System.String userId, MultiplayerLobbyAvatarController multiplayerAvatar)
    // Offset: 0x10255A4
    System::Collections::IEnumerator* RemovePlayerAndDestroy(::Il2CppString* userId, GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar);
    // public System.Void .ctor()
    // Offset: 0x1025654
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyAvatarManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyAvatarManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyAvatarManager*, creationType>()));
    }
  }; // MultiplayerLobbyAvatarManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyAvatarManager), 56 + sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::MultiplayerLobbyAvatarController*>*)> __GlobalNamespace_MultiplayerLobbyAvatarManagerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyAvatarManager) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarManager*, "", "MultiplayerLobbyAvatarManager");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::ActivateMultiplayerLobbyAvatarManager
// Il2CppName: ActivateMultiplayerLobbyAvatarManager
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::DeactivateMultiplayerLobbyAvatarManager
// Il2CppName: DeactivateMultiplayerLobbyAvatarManager
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::HandleLobbyStateDataModelPlayerConnected
// Il2CppName: HandleLobbyStateDataModelPlayerConnected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::HandleLobbyStateDataModelPlayerDisconnected
// Il2CppName: HandleLobbyStateDataModelPlayerDisconnected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::AddPlayer
// Il2CppName: AddPlayer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::RemovePlayer
// Il2CppName: RemovePlayer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::RemovePlayerAndDestroy
// Il2CppName: RemovePlayerAndDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
