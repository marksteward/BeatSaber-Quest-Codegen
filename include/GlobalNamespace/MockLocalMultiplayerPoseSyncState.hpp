// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalMultiplayerSyncState`3
#include "GlobalNamespace/LocalMultiplayerSyncState_3.hpp"
// Including type: NodePoseSyncState
#include "GlobalNamespace/NodePoseSyncState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalStateBuffer`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalStateBuffer_3;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MockLocalMultiplayerPoseSyncState
  // [] Offset: FFFFFFFF
  class MockLocalMultiplayerPoseSyncState : public GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable> {
    public:
    // private readonly System.Single _unreliableUpdateFrequency
    // Size: 0x4
    // Offset: 0x20
    float unreliableUpdateFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly LocalStateBuffer`3<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> _stateBuffer
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* stateBuffer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*) == 0x8);
    // Creating value type constructor for type: MockLocalMultiplayerPoseSyncState
    MockLocalMultiplayerPoseSyncState(float unreliableUpdateFrequency_ = {}, GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* stateBuffer_ = {}) noexcept : unreliableUpdateFrequency{unreliableUpdateFrequency_}, stateBuffer{stateBuffer_} {}
    // protected StateBuffer`3<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> get_stateBuffer()
    // Offset: 0x10221E8
    GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>* get_stateBuffer();
    // public PoseSerializable GetState(NodePoseSyncState/NodePose type, System.Single time)
    // Offset: 0x10221F0
    GlobalNamespace::PoseSerializable GetState(GlobalNamespace::NodePoseSyncState_NodePose type, float time);
    // public System.Void SetState(NodePoseSyncState/NodePose type, PoseSerializable state)
    // Offset: 0x1022270
    void SetState(GlobalNamespace::NodePoseSyncState_NodePose type, GlobalNamespace::PoseSerializable state);
    // public System.Void .ctor(IConnectedPlayer player, System.Single reliableUpdateFrequency, System.Single unreliableUpdateFrequency, System.Int32 size, StateBuffer`3/InterpolationDelegate<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> interpolator, StateBuffer`3/SmoothingDelegate<NodePoseSyncState,NodePoseSyncState/NodePose,PoseSerializable> smoother)
    // Offset: 0x1022574
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockLocalMultiplayerPoseSyncState* New_ctor(GlobalNamespace::IConnectedPlayer* player, float reliableUpdateFrequency, float unreliableUpdateFrequency, int size, typename GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockLocalMultiplayerPoseSyncState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockLocalMultiplayerPoseSyncState*, creationType>(player, reliableUpdateFrequency, unreliableUpdateFrequency, size, interpolator, smoother)));
    }
  }; // MockLocalMultiplayerPoseSyncState
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockLocalMultiplayerPoseSyncState*, "", "MockLocalMultiplayerPoseSyncState");
