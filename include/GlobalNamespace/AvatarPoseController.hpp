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
  // Forward declaring type: HeadBodyOffsetSO
  class HeadBodyOffsetSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseController
  class AvatarPoseController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate
    class PositionsWillBeSetDelegate;
    // Nested type: GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate
    class LatePositionsWillBeSetDelegate;
    // Nested type: GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate
    class RotationsWillBeSetDelegate;
    // protected UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Transform _leftHandTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Transform _rightHandTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Transform _bodyTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* bodyTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // protected HeadBodyOffsetSO _headBodyOffset
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::HeadBodyOffsetSO* headBodyOffset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HeadBodyOffsetSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD34B9C
    // private AvatarPoseController/PositionsWillBeSetDelegate <earlyPositionsWillBeSetCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* earlyPositionsWillBeSetCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD34BAC
    // private AvatarPoseController/LatePositionsWillBeSetDelegate <latePositionsWillBeSetCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* latePositionsWillBeSetCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD34BBC
    // private AvatarPoseController/RotationsWillBeSetDelegate <earlyRotationsWillBeSetCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* earlyRotationsWillBeSetCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD34BCC
    // private System.Action`1<UnityEngine.Vector3> didUpdatePoseEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<UnityEngine::Vector3>* didUpdatePoseEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: AvatarPoseController
    AvatarPoseController(UnityEngine::Transform* headTransform_ = {}, UnityEngine::Transform* leftHandTransform_ = {}, UnityEngine::Transform* rightHandTransform_ = {}, UnityEngine::Transform* bodyTransform_ = {}, GlobalNamespace::HeadBodyOffsetSO* headBodyOffset_ = {}, GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* earlyPositionsWillBeSetCallback_ = {}, GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* latePositionsWillBeSetCallback_ = {}, GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* earlyRotationsWillBeSetCallback_ = {}, System::Action_1<UnityEngine::Vector3>* didUpdatePoseEvent_ = {}) noexcept : headTransform{headTransform_}, leftHandTransform{leftHandTransform_}, rightHandTransform{rightHandTransform_}, bodyTransform{bodyTransform_}, headBodyOffset{headBodyOffset_}, earlyPositionsWillBeSetCallback{earlyPositionsWillBeSetCallback_}, latePositionsWillBeSetCallback{latePositionsWillBeSetCallback_}, earlyRotationsWillBeSetCallback{earlyRotationsWillBeSetCallback_}, didUpdatePoseEvent{didUpdatePoseEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public AvatarPoseController/PositionsWillBeSetDelegate get_earlyPositionsWillBeSetCallback()
    // Offset: 0x101DFCC
    GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* get_earlyPositionsWillBeSetCallback();
    // public System.Void set_earlyPositionsWillBeSetCallback(AvatarPoseController/PositionsWillBeSetDelegate value)
    // Offset: 0x101DFD4
    void set_earlyPositionsWillBeSetCallback(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate* value);
    // public AvatarPoseController/LatePositionsWillBeSetDelegate get_latePositionsWillBeSetCallback()
    // Offset: 0x101DFDC
    GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* get_latePositionsWillBeSetCallback();
    // public System.Void set_latePositionsWillBeSetCallback(AvatarPoseController/LatePositionsWillBeSetDelegate value)
    // Offset: 0x101DFE4
    void set_latePositionsWillBeSetCallback(GlobalNamespace::AvatarPoseController::LatePositionsWillBeSetDelegate* value);
    // public AvatarPoseController/RotationsWillBeSetDelegate get_earlyRotationsWillBeSetCallback()
    // Offset: 0x101DFEC
    GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* get_earlyRotationsWillBeSetCallback();
    // public System.Void set_earlyRotationsWillBeSetCallback(AvatarPoseController/RotationsWillBeSetDelegate value)
    // Offset: 0x101DFF4
    void set_earlyRotationsWillBeSetCallback(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate* value);
    // public System.Void add_didUpdatePoseEvent(System.Action`1<UnityEngine.Vector3> value)
    // Offset: 0x101D884
    void add_didUpdatePoseEvent(System::Action_1<UnityEngine::Vector3>* value);
    // public System.Void remove_didUpdatePoseEvent(System.Action`1<UnityEngine.Vector3> value)
    // Offset: 0x101DA00
    void remove_didUpdatePoseEvent(System::Action_1<UnityEngine::Vector3>* value);
    // public System.Void UpdateTransforms(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation)
    // Offset: 0x101DFFC
    void UpdateTransforms(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation);
    // public System.Void UpdateBodyPosition()
    // Offset: 0x1015E1C
    void UpdateBodyPosition();
    // public System.Void .ctor()
    // Offset: 0x101ED80
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPoseController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseController*, creationType>()));
    }
  }; // AvatarPoseController
  #pragma pack(pop)
  static check_size<sizeof(AvatarPoseController), 88 + sizeof(System::Action_1<UnityEngine::Vector3>*)> __GlobalNamespace_AvatarPoseControllerSizeCheck;
  static_assert(sizeof(AvatarPoseController) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseController*, "", "AvatarPoseController");
