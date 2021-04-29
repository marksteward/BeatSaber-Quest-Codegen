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
  // Forward declaring type: IScoreSyncStateManager
  class IScoreSyncStateManager;
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
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreProvider
  class MultiplayerScoreProvider : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer
    class RankedPlayer;
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::$$c
    class $$c;
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // [InjectAttribute] Offset: 0xD3E6D4
    // private readonly IScoreSyncStateManager _scoreSyncStateManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreSyncStateManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3E6E4
    // private MultiplayerScoreProvider/RankedPlayer <firstPlayer>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3E6F4
    // private System.Action`1<MultiplayerScoreProvider/RankedPlayer> firstPlayerDidChangeEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* firstPlayerDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*) == 0x8);
    // private System.Single _sharedOffsetSyncTime
    // Size: 0x4
    // Offset: 0x30
    float sharedOffsetSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: sharedOffsetSyncTime and: rankedPlayers
    char __padding3[0x4] = {};
    // private readonly System.Collections.Generic.List`1<MultiplayerScoreProvider/RankedPlayer> _rankedPlayers
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* rankedPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreProvider/RankedPlayer> _players
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* players;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerScoreProvider
    MultiplayerScoreProvider(GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager_ = {}, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer_ = {}, System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* firstPlayerDidChangeEvent_ = {}, float sharedOffsetSyncTime_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* rankedPlayers_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* players_ = {}) noexcept : scoreSyncStateManager{scoreSyncStateManager_}, firstPlayer{firstPlayer_}, firstPlayerDidChangeEvent{firstPlayerDidChangeEvent_}, sharedOffsetSyncTime{sharedOffsetSyncTime_}, rankedPlayers{rankedPlayers_}, players{players_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_scoresAvailable()
    // Offset: 0x100B2D0
    bool get_scoresAvailable();
    // public MultiplayerScoreProvider/RankedPlayer get_firstPlayer()
    // Offset: 0x1010498
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* get_firstPlayer();
    // private System.Void set_firstPlayer(MultiplayerScoreProvider/RankedPlayer value)
    // Offset: 0x10104A0
    void set_firstPlayer(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* value);
    // public System.Void add_firstPlayerDidChangeEvent(System.Action`1<MultiplayerScoreProvider/RankedPlayer> value)
    // Offset: 0x100B2F4
    void add_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* value);
    // public System.Void remove_firstPlayerDidChangeEvent(System.Action`1<MultiplayerScoreProvider/RankedPlayer> value)
    // Offset: 0x100B480
    void remove_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* value);
    // public System.Collections.Generic.IReadOnlyList`1<MultiplayerScoreProvider/RankedPlayer> get_rankedPlayers()
    // Offset: 0x10104A8
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* get_rankedPlayers();
    // protected System.Void Update()
    // Offset: 0x10104B0
    void Update();
    // public System.Boolean TryGetScore(System.String userId, out MultiplayerScoreProvider/RankedPlayer data)
    // Offset: 0x1010CD8
    bool TryGetScore(::Il2CppString* userId, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*& data);
    // public System.Int32 GetPositionOfPlayer(System.String userId)
    // Offset: 0x100B838
    int GetPositionOfPlayer(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x1010D50
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerScoreProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreProvider*, creationType>()));
    }
  }; // MultiplayerScoreProvider
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreProvider), 64 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*)> __GlobalNamespace_MultiplayerScoreProviderSizeCheck;
  static_assert(sizeof(MultiplayerScoreProvider) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreProvider*, "", "MultiplayerScoreProvider");
