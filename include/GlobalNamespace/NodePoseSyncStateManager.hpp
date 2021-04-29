// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerSyncStateManager`5
#include "GlobalNamespace/MultiplayerSyncStateManager_5.hpp"
// Including type: NodePoseSyncState
#include "GlobalNamespace/NodePoseSyncState.hpp"
// Including type: INodePoseSyncStateManager
#include "GlobalNamespace/INodePoseSyncStateManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NodePoseSyncStateNetSerializable
  class NodePoseSyncStateNetSerializable;
  // Forward declaring type: NodePoseSyncStateDeltaNetSerializable
  class NodePoseSyncStateDeltaNetSerializable;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
  // Skipping declaration: MessageType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NodePoseSyncStateManager
  class NodePoseSyncStateManager : public GlobalNamespace::MultiplayerSyncStateManager_5<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable, GlobalNamespace::NodePoseSyncStateNetSerializable*, GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>/*, public GlobalNamespace::INodePoseSyncStateManager*/ {
    public:
    // Creating value type constructor for type: NodePoseSyncStateManager
    NodePoseSyncStateManager() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::INodePoseSyncStateManager
    operator GlobalNamespace::INodePoseSyncStateManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::INodePoseSyncStateManager*>(this);
    }
    // protected IPacketPool`1<NodePoseSyncStateNetSerializable> get_serializablePool()
    // Offset: 0xFF2010
    GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable*>* get_serializablePool();
    // protected IPacketPool`1<NodePoseSyncStateDeltaNetSerializable> get_deltaSerializablePool()
    // Offset: 0xFF2078
    GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* get_deltaSerializablePool();
    // protected PoseSerializable Interpolate(PoseSerializable prev, System.Single prevTime, PoseSerializable curr, System.Single currTime, System.Single time)
    // Offset: 0xFF20F0
    GlobalNamespace::PoseSerializable Interpolate(GlobalNamespace::PoseSerializable prev, float prevTime, GlobalNamespace::PoseSerializable curr, float currTime, float time);
    // protected PoseSerializable Smooth(PoseSerializable a, PoseSerializable b, System.Single smooth)
    // Offset: 0xFF2138
    GlobalNamespace::PoseSerializable Smooth(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float smooth);
    // protected override System.Single get_deltaUpdateFrequency()
    // Offset: 0xFF1FE8
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Single MultiplayerSyncStateManager_5::get_deltaUpdateFrequency()
    float get_deltaUpdateFrequency();
    // protected override System.Single get_fullStateUpdateFrequency()
    // Offset: 0xFF1FF4
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Single MultiplayerSyncStateManager_5::get_fullStateUpdateFrequency()
    float get_fullStateUpdateFrequency();
    // protected override System.Int32 get_localBufferSize()
    // Offset: 0xFF2000
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Int32 MultiplayerSyncStateManager_5::get_localBufferSize()
    int get_localBufferSize();
    // protected override System.Int32 get_remoteBufferSize()
    // Offset: 0xFF2008
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Int32 MultiplayerSyncStateManager_5::get_remoteBufferSize()
    int get_remoteBufferSize();
    // protected override MultiplayerSessionManager/MessageType get_messageType()
    // Offset: 0xFF20E0
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: MultiplayerSessionManager/MessageType MultiplayerSyncStateManager_5::get_messageType()
    GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType();
    // protected override MultiplayerSessionManager/MessageType get_deltaMessageType()
    // Offset: 0xFF20E8
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: MultiplayerSessionManager/MessageType MultiplayerSyncStateManager_5::get_deltaMessageType()
    GlobalNamespace::MultiplayerSessionManager_MessageType get_deltaMessageType();
    // public System.Void .ctor()
    // Offset: 0xFF2180
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Void MultiplayerSyncStateManager_5::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NodePoseSyncStateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NodePoseSyncStateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NodePoseSyncStateManager*, creationType>()));
    }
  }; // NodePoseSyncStateManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncStateManager*, "", "NodePoseSyncStateManager");
