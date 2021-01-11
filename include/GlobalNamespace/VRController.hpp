// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRControllerTransformOffset
  class VRControllerTransformOffset;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VRController
  // [] Offset: FFFFFFFF
  class VRController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.XR.XRNode _node
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::XR::XRNode node;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::XRNode) == 0x4);
    // private System.Int32 _nodeIdx
    // Size: 0x4
    // Offset: 0x1C
    int nodeIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NullAllowed] Offset: 0xD99618
    // private VRControllerTransformOffset _transformOffset
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VRControllerTransformOffset* transformOffset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllerTransformOffset*) == 0x8);
    // [InjectAttribute] Offset: 0xD99650
    // private IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xD99660
    // private VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllersInputManager*) == 0x8);
    // private UnityEngine.Vector3 _lastTrackedPosition
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 lastTrackedPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: VRController
    VRController(UnityEngine::XR::XRNode node_ = {}, int nodeIdx_ = {}, GlobalNamespace::VRControllerTransformOffset* transformOffset_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, GlobalNamespace::VRControllersInputManager* vrControllersInputManager_ = {}, UnityEngine::Vector3 lastTrackedPosition_ = {}) noexcept : node{node_}, nodeIdx{nodeIdx_}, transformOffset{transformOffset_}, vrPlatformHelper{vrPlatformHelper_}, vrControllersInputManager{vrControllersInputManager_}, lastTrackedPosition{lastTrackedPosition_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.XR.XRNode get_node()
    // Offset: 0x19D0488
    UnityEngine::XR::XRNode get_node();
    // public System.Void set_node(UnityEngine.XR.XRNode value)
    // Offset: 0x19D0490
    void set_node(UnityEngine::XR::XRNode value);
    // public System.Int32 get_nodeIdx()
    // Offset: 0x19D0498
    int get_nodeIdx();
    // public System.Void set_nodeIdx(System.Int32 value)
    // Offset: 0x19D04A0
    void set_nodeIdx(int value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x19D04A8
    UnityEngine::Vector3 get_position();
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x19D04CC
    UnityEngine::Quaternion get_rotation();
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x19D04F0
    UnityEngine::Vector3 get_forward();
    // public System.Single get_triggerValue()
    // Offset: 0x19D0514
    float get_triggerValue();
    // public System.Single get_verticalAxisValue()
    // Offset: 0x19D06B8
    float get_verticalAxisValue();
    // public System.Single get_horizontalAxisValue()
    // Offset: 0x19D0750
    float get_horizontalAxisValue();
    // public System.Boolean get_active()
    // Offset: 0x19D07E8
    bool get_active();
    // protected System.Void Update()
    // Offset: 0x19D080C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x19D0BB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRController*, creationType>()));
    }
  }; // VRController
  static check_size<sizeof(VRController), 56 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_VRControllerSizeCheck;
  static_assert(sizeof(VRController) == 0x44);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRController*, "", "VRController");
