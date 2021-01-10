// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: IStateTable`2<TType, TState>
  template<typename TType, typename TState>
  class IStateTable_2;
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
  // Autogenerated type: RemoteStateBuffer`3
  // [] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState>
  class RemoteStateBuffer_3 : public GlobalNamespace::StateBuffer_3<TStateTable, TType, TState> {
    public:
    // Creating value type constructor for type: RemoteStateBuffer_3
    RemoteStateBuffer_3() noexcept {}
    // public System.Void PushState(TStateTable state, System.Single time)
    // Offset: 0xFFFFFFFF
    // Implemented from: StateBuffer`3
    // Base method: System.Void StateBuffer_3::PushState(TStateTable state, System.Single time)
    void PushState(TStateTable state, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::PushState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PushState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(state, time)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, state, time);
    }
    // public System.Void .ctor(System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    // Implemented from: StateBuffer`3
    // Base method: System.Void StateBuffer_3::.ctor(System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteStateBuffer_3<TStateTable, TType, TState>* New_ctor(int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteStateBuffer_3<TStateTable, TType, TState>*, creationType>(size, interpolator, smoother)));
    }
  }; // RemoteStateBuffer`3
  // Could not write size check! Type: RemoteStateBuffer`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteStateBuffer_3, "", "RemoteStateBuffer`3");
