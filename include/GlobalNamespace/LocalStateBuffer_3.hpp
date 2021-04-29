// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StateBuffer`3
#include "GlobalNamespace/StateBuffer_3.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
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
  // Autogenerated type: LocalStateBuffer`3
  template<typename TStateTable, typename TType, typename TState>
  class LocalStateBuffer_3 : public GlobalNamespace::StateBuffer_3<TStateTable, TType, TState> {
    public:
    // private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> _current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable current;
    // private readonly System.Single _fullStateUpdateFrequency
    // Size: 0x4
    // Offset: 0x0
    float fullStateUpdateFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _deltaUpdateFrequency
    // Size: 0x4
    // Offset: 0x0
    float deltaUpdateFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _sentStateIndex
    // Size: 0x4
    // Offset: 0x0
    int sentStateIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _sentDeltaIndex
    // Size: 0x4
    // Offset: 0x0
    int sentDeltaIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _sentStates
    // Size: 0x8
    // Offset: 0x0
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* sentStates;
    // Field size check
    static_assert(sizeof(::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*) == 0x8);
    // private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _sentDeltas
    // Size: 0x8
    // Offset: 0x0
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* sentDeltas;
    // Field size check
    static_assert(sizeof(::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*) == 0x8);
    // private SyncStateId _lastSentSyncStateId
    // Size: 0x1
    // Offset: 0x0
    GlobalNamespace::SyncStateId lastSentSyncStateId;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SyncStateId) == 0x1);
    // Creating value type constructor for type: LocalStateBuffer_3
    LocalStateBuffer_3(typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable current_ = {}, float fullStateUpdateFrequency_ = {}, float deltaUpdateFrequency_ = {}, int sentStateIndex_ = {}, int sentDeltaIndex_ = {}, ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* sentStates_ = {}, ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* sentDeltas_ = {}, GlobalNamespace::SyncStateId lastSentSyncStateId_ = {}) noexcept : current{current_}, fullStateUpdateFrequency{fullStateUpdateFrequency_}, deltaUpdateFrequency{deltaUpdateFrequency_}, sentStateIndex{sentStateIndex_}, sentDeltaIndex{sentDeltaIndex_}, sentStates{sentStates_}, sentDeltas{sentDeltas_}, lastSentSyncStateId{lastSentSyncStateId_} {}
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxSentStates
    static int _get_kMaxSentStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_get_kMaxSentStates");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentStates")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxSentStates
    static void _set_kMaxSentStates(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_set_kMaxSentStates");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentStates", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxSentDeltas
    static int _get_kMaxSentDeltas() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_get_kMaxSentDeltas");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentDeltas")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxSentDeltas
    static void _set_kMaxSentDeltas(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_set_kMaxSentDeltas");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentDeltas", value)));
    }
    // public System.Void .ctor(System.Single fullStateUpdateFrequency, System.Single deltaUpdateFrequency, System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalStateBuffer_3<TStateTable, TType, TState>* New_ctor(float fullStateUpdateFrequency, float deltaUpdateFrequency, int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalStateBuffer_3<TStateTable, TType, TState>*, creationType>(fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother)));
    }
    // public System.Void MarkDirty()
    // Offset: 0xFFFFFFFF
    void MarkDirty() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::MarkDirty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MarkDirty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean TryGetSerializedState(out TStateTable state, out System.Single time, out SyncStateId id)
    // Offset: 0xFFFFFFFF
    bool TryGetSerializedState(TStateTable& state, float& time, GlobalNamespace::SyncStateId& id) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::TryGetSerializedState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetSerializedState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TStateTable>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SyncStateId>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, state, time, id);
    }
    // public System.Boolean TryGetSerializedStateDelta(out TStateTable delta, out System.Single timeOffset, out SyncStateId baseId)
    // Offset: 0xFFFFFFFF
    bool TryGetSerializedStateDelta(TStateTable& delta, float& timeOffset, GlobalNamespace::SyncStateId& baseId) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::TryGetSerializedStateDelta");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetSerializedStateDelta", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TStateTable>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SyncStateId>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, delta, timeOffset, baseId);
    }
    // public System.Void SetTime(System.Single time)
    // Offset: 0xFFFFFFFF
    void SetTime(float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::SetTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(time)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, time);
    }
    // public System.Void SetState(TType type, TState state)
    // Offset: 0xFFFFFFFF
    void SetState(TType type, TState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::SetState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(state)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, type, state);
    }
    // public TState GetState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::GetState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, type);
    }
  }; // LocalStateBuffer`3
  // Could not write size check! Type: LocalStateBuffer`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LocalStateBuffer_3, "", "LocalStateBuffer`3");
