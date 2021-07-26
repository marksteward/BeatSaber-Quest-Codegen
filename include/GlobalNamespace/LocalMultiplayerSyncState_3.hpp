// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerSyncState`3
#include "GlobalNamespace/MultiplayerSyncState_3.hpp"
// Including type: StateBuffer`3
#include "GlobalNamespace/StateBuffer_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStateTable`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class IStateTable_3;
  // Skipping declaration: IEquatableByReference`1 because it is already included!
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: LocalStateBuffer`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalStateBuffer_3;
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: ISyncStateSerializable`1<T>
  template<typename T>
  class ISyncStateSerializable_1;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
  // Forward declaring type: ISyncStateDeltaSerializable`1<T>
  template<typename T>
  class ISyncStateDeltaSerializable_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Skipping declaration: IConvertible because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LocalMultiplayerSyncState`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: EA8468
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3 : public GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState> {
    public:
    // private readonly IConnectedPlayer _player
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::IConnectedPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private readonly LocalStateBuffer`3<TStateTable,TType,TState> _stateBuffer
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* stateBuffer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*) == 0x8);
    // Creating value type constructor for type: LocalMultiplayerSyncState_3
    LocalMultiplayerSyncState_3(GlobalNamespace::IConnectedPlayer* player_ = {}, GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* stateBuffer_ = {}) noexcept : player{player_}, stateBuffer{stateBuffer_} {}
    // Autogenerated instance field getter
    // Get instance field: private readonly IConnectedPlayer _player
    GlobalNamespace::IConnectedPlayer* _get__player() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::_get__player");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_player"))->offset;
      return *reinterpret_cast<GlobalNamespace::IConnectedPlayer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly IConnectedPlayer _player
    void _set__player(GlobalNamespace::IConnectedPlayer* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::_set__player");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_player"))->offset;
      *reinterpret_cast<GlobalNamespace::IConnectedPlayer**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly LocalStateBuffer`3<TStateTable,TType,TState> _stateBuffer
    GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* _get__stateBuffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::_get__stateBuffer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_stateBuffer"))->offset;
      return *reinterpret_cast<GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly LocalStateBuffer`3<TStateTable,TType,TState> _stateBuffer
    void _set__stateBuffer(GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::_set__stateBuffer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_stateBuffer"))->offset;
      *reinterpret_cast<GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // public TState get_Item(TType t)
    // Offset: 0xFFFFFFFF
    TState get_Item(TType t) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, t);
    }
    // public System.Void set_Item(TType t, TState value)
    // Offset: 0xFFFFFFFF
    void set_Item(TType t, TState value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, t, value);
    }
    // public System.Void .ctor(IConnectedPlayer player, System.Single fullStateUpdateFrequency, System.Single deltaUpdateFrequency, System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalMultiplayerSyncState_3<TStateTable, TType, TState>* New_ctor(GlobalNamespace::IConnectedPlayer* player, float fullStateUpdateFrequency, float deltaUpdateFrequency, int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalMultiplayerSyncState_3<TStateTable, TType, TState>*, creationType>(player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother)));
    }
    // public System.Boolean TryGetSerializedState(IPacketPool`1<T> pool, out T serializable)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool TryGetSerializedState(GlobalNamespace::IPacketPool_1<T>* pool, ByRef<T> serializable) {
      static_assert(std::is_base_of_v<GlobalNamespace::IPoolablePacket, std::remove_pointer_t<T>> && std::is_base_of_v<GlobalNamespace::ISyncStateSerializable_1<TStateTable>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::TryGetSerializedState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetSerializedState", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, pool, byref(serializable));
    }
    // public System.Boolean TryGetSerializedStateDelta(IPacketPool`1<T> pool, out T serializable)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool TryGetSerializedStateDelta(GlobalNamespace::IPacketPool_1<T>* pool, ByRef<T> serializable) {
      static_assert(std::is_base_of_v<GlobalNamespace::IPoolablePacket, std::remove_pointer_t<T>> && std::is_base_of_v<GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::TryGetSerializedStateDelta");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetSerializedStateDelta", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pool), ::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, pool, byref(serializable));
    }
    // public System.Void SetDirty()
    // Offset: 0xFFFFFFFF
    void SetDirty() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::SetDirty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetDirty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void SetCurrentTime(System.Single time)
    // Offset: 0xFFFFFFFF
    void SetCurrentTime(float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::SetCurrentTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetCurrentTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(time)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, time);
    }
    // public System.Void SetState(TType type, TState state)
    // Offset: 0xFFFFFFFF
    void SetState(TType type, TState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::SetState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(state)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, type, state);
    }
    // public TState GetState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::GetState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, type);
    }
    // protected override StateBuffer`3<TStateTable,TType,TState> get_stateBuffer()
    // Offset: 0xFFFFFFFF
    // Implemented from: MultiplayerSyncState`3
    // Base method: StateBuffer`3<TStateTable,TType,TState> MultiplayerSyncState_3::get_stateBuffer()
    GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::get_stateBuffer");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_stateBuffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*, false>(this, ___internal__method);
    }
    // public override IConnectedPlayer get_player()
    // Offset: 0xFFFFFFFF
    // Implemented from: MultiplayerSyncState`3
    // Base method: IConnectedPlayer MultiplayerSyncState_3::get_player()
    GlobalNamespace::IConnectedPlayer* get_player() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalMultiplayerSyncState_3::get_player");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_player", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IConnectedPlayer*, false>(this, ___internal__method);
    }
  }; // LocalMultiplayerSyncState`3
  // Could not write size check! Type: LocalMultiplayerSyncState`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LocalMultiplayerSyncState_3, "", "LocalMultiplayerSyncState`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
