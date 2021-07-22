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
  // Forward declaring type: MockNodePoseSyncStateSender
  class MockNodePoseSyncStateSender;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerLobbyPoseGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class MockPlayerLobbyPoseGenerator : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // protected readonly IMultiplayerSessionManager multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // protected readonly MockNodePoseSyncStateSender mockNodePoseSyncStateSender
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockNodePoseSyncStateSender*) == 0x8);
    // Creating value type constructor for type: MockPlayerLobbyPoseGenerator
    MockPlayerLobbyPoseGenerator(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, mockNodePoseSyncStateSender{mockNodePoseSyncStateSender_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // protected System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager)
    // Offset: 0x238FF4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerLobbyPoseGenerator* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayerLobbyPoseGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerLobbyPoseGenerator*, creationType>(multiplayerSessionManager)));
    }
    // public System.Void Dispose()
    // Offset: 0x238FFC8
    void Dispose();
    // public System.Void SendPoses(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    void SendPoses(System::Threading::CancellationToken cancellationToken);
  }; // MockPlayerLobbyPoseGenerator
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerLobbyPoseGenerator), 24 + sizeof(GlobalNamespace::MockNodePoseSyncStateSender*)> __GlobalNamespace_MockPlayerLobbyPoseGeneratorSizeCheck;
  static_assert(sizeof(MockPlayerLobbyPoseGenerator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGenerator*, "", "MockPlayerLobbyPoseGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGenerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGenerator::*)()>(&GlobalNamespace::MockPlayerLobbyPoseGenerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerLobbyPoseGenerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGenerator::SendPoses
// Il2CppName: SendPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGenerator::*)(System::Threading::CancellationToken)>(&GlobalNamespace::MockPlayerLobbyPoseGenerator::SendPoses)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerLobbyPoseGenerator*), "SendPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
