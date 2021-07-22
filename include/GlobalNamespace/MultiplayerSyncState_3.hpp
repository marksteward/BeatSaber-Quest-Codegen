// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: IEquatableByReference`1<T>
  template<typename T>
  class IEquatableByReference_1;
  // Forward declaring type: StateBuffer`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class StateBuffer_3;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
  // Forward declaring type: IConvertible
  class IConvertible;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerSyncState`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MultiplayerSyncState_3
    MultiplayerSyncState_3() noexcept {}
    // protected StateBuffer`3<TStateTable,TType,TState> get_stateBuffer()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncState_3::get_stateBuffer");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_stateBuffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*, false>(this, ___internal__method);
    }
    // public IConnectedPlayer get_player()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnectedPlayer* get_player() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncState_3::get_player");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_player", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IConnectedPlayer*, false>(this, ___internal__method);
    }
    // public System.Single GetLatestTime()
    // Offset: 0xFFFFFFFF
    float GetLatestTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncState_3::GetLatestTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetLatestTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // public TState GetLatestState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetLatestState(TType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncState_3::GetLatestState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetLatestState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, type);
    }
    // public TState GetState(TType type, System.Single time)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncState_3::GetState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(time)})));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, type, time);
    }
    // public System.Void ClearBufferedStates()
    // Offset: 0xFFFFFFFF
    void ClearBufferedStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncState_3::ClearBufferedStates");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearBufferedStates", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSyncState_3<TStateTable, TType, TState>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncState_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSyncState_3<TStateTable, TType, TState>*, creationType>()));
    }
  }; // MultiplayerSyncState`3
  // Could not write size check! Type: MultiplayerSyncState`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MultiplayerSyncState_3, "", "MultiplayerSyncState`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
