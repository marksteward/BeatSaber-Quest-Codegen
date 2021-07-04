// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: PoseSerializable
  struct PoseSerializable;
  // Forward declaring type: NodePoseSyncStateNetSerializable
  class NodePoseSyncStateNetSerializable;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockNodePoseSyncStateSender
  class MockNodePoseSyncStateSender : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // Creating value type constructor for type: MockNodePoseSyncStateSender
    MockNodePoseSyncStateSender(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IMultiplayerSessionManager*
    constexpr operator GlobalNamespace::IMultiplayerSessionManager*() const noexcept {
      return multiplayerSessionManager;
    }
    // public System.Void .ctor(IMultiplayerSessionManager msm)
    // Offset: 0x23B4DA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockNodePoseSyncStateSender* New_ctor(GlobalNamespace::IMultiplayerSessionManager* msm) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockNodePoseSyncStateSender::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockNodePoseSyncStateSender*, creationType>(msm)));
    }
    // public System.Void Dispose()
    // Offset: 0x23B4F0C
    void Dispose();
    // public System.Void SendPose(PoseSerializable headPose, PoseSerializable leftHandPose, PoseSerializable rightHandPose)
    // Offset: 0x23B4FD8
    void SendPose(GlobalNamespace::PoseSerializable headPose, GlobalNamespace::PoseSerializable leftHandPose, GlobalNamespace::PoseSerializable rightHandPose);
    // private System.Void HandleNodePoseSyncStateUpdate(NodePoseSyncStateNetSerializable nodePose, IConnectedPlayer connectedPlayer)
    // Offset: 0x23B5204
    void HandleNodePoseSyncStateUpdate(GlobalNamespace::NodePoseSyncStateNetSerializable* nodePose, GlobalNamespace::IConnectedPlayer* connectedPlayer);
  }; // MockNodePoseSyncStateSender
  #pragma pack(pop)
  static check_size<sizeof(MockNodePoseSyncStateSender), 16 + sizeof(GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_MockNodePoseSyncStateSenderSizeCheck;
  static_assert(sizeof(MockNodePoseSyncStateSender) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockNodePoseSyncStateSender*, "", "MockNodePoseSyncStateSender");
// Writing MetadataGetter for method: GlobalNamespace::MockNodePoseSyncStateSender::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockNodePoseSyncStateSender::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNodePoseSyncStateSender::*)()>(&GlobalNamespace::MockNodePoseSyncStateSender::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNodePoseSyncStateSender*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNodePoseSyncStateSender::SendPose
// Il2CppName: SendPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNodePoseSyncStateSender::*)(GlobalNamespace::PoseSerializable, GlobalNamespace::PoseSerializable, GlobalNamespace::PoseSerializable)>(&GlobalNamespace::MockNodePoseSyncStateSender::SendPose)> {
  const MethodInfo* get() {
    static auto* headPose = &::il2cpp_utils::GetClassFromName("", "PoseSerializable")->byval_arg;
    static auto* leftHandPose = &::il2cpp_utils::GetClassFromName("", "PoseSerializable")->byval_arg;
    static auto* rightHandPose = &::il2cpp_utils::GetClassFromName("", "PoseSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNodePoseSyncStateSender*), "SendPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headPose, leftHandPose, rightHandPose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockNodePoseSyncStateSender::HandleNodePoseSyncStateUpdate
// Il2CppName: HandleNodePoseSyncStateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockNodePoseSyncStateSender::*)(GlobalNamespace::NodePoseSyncStateNetSerializable*, GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MockNodePoseSyncStateSender::HandleNodePoseSyncStateUpdate)> {
  const MethodInfo* get() {
    static auto* nodePose = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncStateNetSerializable")->byval_arg;
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockNodePoseSyncStateSender*), "HandleNodePoseSyncStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodePose, connectedPlayer});
  }
};
