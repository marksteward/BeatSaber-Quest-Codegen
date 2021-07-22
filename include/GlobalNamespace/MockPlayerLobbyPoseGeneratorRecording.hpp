// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayerLobbyPoseGenerator
#include "GlobalNamespace/MockPlayerLobbyPoseGenerator.hpp"
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
  // Autogenerated type: MockPlayerLobbyPoseGeneratorRecording
  // [TokenAttribute] Offset: FFFFFFFF
  class MockPlayerLobbyPoseGeneratorRecording : public GlobalNamespace::MockPlayerLobbyPoseGenerator {
    public:
    // Creating value type constructor for type: MockPlayerLobbyPoseGeneratorRecording
    MockPlayerLobbyPoseGeneratorRecording() noexcept {}
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager)
    // Offset: 0x113DAE4
    // Implemented from: MockPlayerLobbyPoseGenerator
    // Base method: System.Void MockPlayerLobbyPoseGenerator::.ctor(IMultiplayerSessionManager multiplayerSessionManager)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerLobbyPoseGeneratorRecording* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerLobbyPoseGeneratorRecording*, creationType>(multiplayerSessionManager)));
    }
    // public override System.Void SendPoses(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x113F7A8
    // Implemented from: MockPlayerLobbyPoseGenerator
    // Base method: System.Void MockPlayerLobbyPoseGenerator::SendPoses(System.Threading.CancellationToken cancellationToken)
    void SendPoses(System::Threading::CancellationToken cancellationToken);
  }; // MockPlayerLobbyPoseGeneratorRecording
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording*, "", "MockPlayerLobbyPoseGeneratorRecording");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::SendPoses
// Il2CppName: SendPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::*)(System::Threading::CancellationToken)>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording::SendPoses)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording*), "SendPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
