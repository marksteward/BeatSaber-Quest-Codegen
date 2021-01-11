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
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseMirror
  // [] Offset: FFFFFFFF
  class AvatarPoseMirror : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xDC1E00
    // private readonly AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController*) == 0x8);
    // Creating value type constructor for type: AvatarPoseMirror
    AvatarPoseMirror(GlobalNamespace::AvatarPoseController* avatarPoseController_ = {}) noexcept : avatarPoseController{avatarPoseController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A46118
    void Start();
    // static private System.Void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0x1A46200
    static void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition);
    // static private System.Void HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation)
    // Offset: 0x1A462CC
    static void HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, UnityEngine::Quaternion& newHeadRotation, UnityEngine::Quaternion& newLeftHandRotation, UnityEngine::Quaternion& newRightHandRotation);
    // static private UnityEngine.Quaternion MirrorRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1A46374
    static UnityEngine::Quaternion MirrorRotation(UnityEngine::Quaternion rotation);
    // static private UnityEngine.Vector3 MirrorPosition(UnityEngine.Vector3 position)
    // Offset: 0x1A46294
    static UnityEngine::Vector3 MirrorPosition(UnityEngine::Vector3 position);
    // public System.Void .ctor()
    // Offset: 0x1A463AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseMirror* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPoseMirror::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseMirror*, creationType>()));
    }
  }; // AvatarPoseMirror
  static check_size<sizeof(AvatarPoseMirror), 24 + sizeof(GlobalNamespace::AvatarPoseController*)> __GlobalNamespace_AvatarPoseMirrorSizeCheck;
  static_assert(sizeof(AvatarPoseMirror) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseMirror*, "", "AvatarPoseMirror");
