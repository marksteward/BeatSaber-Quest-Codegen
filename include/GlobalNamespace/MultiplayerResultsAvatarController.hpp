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
  // Forward declaring type: AvatarVisualController
  class AvatarVisualController;
  // Forward declaring type: MultiplayerAvatarPoseController
  class MultiplayerAvatarPoseController;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsAvatarController
  // [] Offset: FFFFFFFF
  class MultiplayerResultsAvatarController : public UnityEngine::MonoBehaviour {
    public:
    // private AvatarVisualController _avatarVisualController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarVisualController* avatarVisualController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarVisualController*) == 0x8);
    // private MultiplayerAvatarPoseController _multiplayerAvatarPoseController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerAvatarPoseController* multiplayerAvatarPoseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerAvatarPoseController*) == 0x8);
    // Creating value type constructor for type: MultiplayerResultsAvatarController
    MultiplayerResultsAvatarController(GlobalNamespace::AvatarVisualController* avatarVisualController_ = {}, GlobalNamespace::MultiplayerAvatarPoseController* multiplayerAvatarPoseController_ = {}) noexcept : avatarVisualController{avatarVisualController_}, multiplayerAvatarPoseController{multiplayerAvatarPoseController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetScale(System.Single scale)
    // Offset: 0xF7D87C
    void SetScale(float scale);
    // public System.Void Setup(IConnectedPlayer connectedPlayer)
    // Offset: 0xF7D8F0
    void Setup(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // public System.Void .ctor()
    // Offset: 0xF7DA40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsAvatarController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsAvatarController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsAvatarController*, creationType>()));
    }
  }; // MultiplayerResultsAvatarController
  static check_size<sizeof(MultiplayerResultsAvatarController), 32 + sizeof(GlobalNamespace::MultiplayerAvatarPoseController*)> __GlobalNamespace_MultiplayerResultsAvatarControllerSizeCheck;
  static_assert(sizeof(MultiplayerResultsAvatarController) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsAvatarController*, "", "MultiplayerResultsAvatarController");
