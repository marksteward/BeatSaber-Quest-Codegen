// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRCenterAdjust
  class VRCenterAdjust;
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: MouseLook
  class MouseLook;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRInputModule
  class VRInputModule;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: FirstPersonFlyingController
  // [TokenAttribute] Offset: FFFFFFFF
  class FirstPersonFlyingController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _moveSensitivity
    // Size: 0x4
    // Offset: 0x18
    float moveSensitivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveSensitivity and: camera
    char __padding0[0x4] = {};
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private System.Single _cameraFov
    // Size: 0x4
    // Offset: 0x28
    float cameraFov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cameraFov and: centerAdjust
    char __padding2[0x4] = {};
    // private VRCenterAdjust _centerAdjust
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::VRCenterAdjust* centerAdjust;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRCenterAdjust*) == 0x8);
    // private VRController _controller0
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::VRController* controller0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private VRController _controller1
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::VRController* controller1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private VRUIControls.VRInputModule _vrInputModule
    // Size: 0x8
    // Offset: 0x48
    VRUIControls::VRInputModule* vrInputModule;
    // Field size check
    static_assert(sizeof(VRUIControls::VRInputModule*) == 0x8);
    // private UnityEngine.GameObject[] _controllerModels
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::GameObject*>* controllerModels;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // private MouseLook _mouseLook
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MouseLook* mouseLook;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MouseLook*) == 0x8);
    // private UnityEngine.Transform _cameraTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* cameraTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: FirstPersonFlyingController
    FirstPersonFlyingController(float moveSensitivity_ = {}, UnityEngine::Camera* camera_ = {}, float cameraFov_ = {}, GlobalNamespace::VRCenterAdjust* centerAdjust_ = {}, GlobalNamespace::VRController* controller0_ = {}, GlobalNamespace::VRController* controller1_ = {}, VRUIControls::VRInputModule* vrInputModule_ = {}, ::Array<UnityEngine::GameObject*>* controllerModels_ = {}, GlobalNamespace::MouseLook* mouseLook_ = {}, UnityEngine::Transform* cameraTransform_ = {}) noexcept : moveSensitivity{moveSensitivity_}, camera{camera_}, cameraFov{cameraFov_}, centerAdjust{centerAdjust_}, controller0{controller0_}, controller1{controller1_}, vrInputModule{vrInputModule_}, controllerModels{controllerModels_}, mouseLook{mouseLook_}, cameraTransform{cameraTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Single _moveSensitivity
    float _get__moveSensitivity();
    // Set instance field: private System.Single _moveSensitivity
    void _set__moveSensitivity(float value);
    // Get instance field: private UnityEngine.Camera _camera
    UnityEngine::Camera* _get__camera();
    // Set instance field: private UnityEngine.Camera _camera
    void _set__camera(UnityEngine::Camera* value);
    // Get instance field: private System.Single _cameraFov
    float _get__cameraFov();
    // Set instance field: private System.Single _cameraFov
    void _set__cameraFov(float value);
    // Get instance field: private VRCenterAdjust _centerAdjust
    GlobalNamespace::VRCenterAdjust* _get__centerAdjust();
    // Set instance field: private VRCenterAdjust _centerAdjust
    void _set__centerAdjust(GlobalNamespace::VRCenterAdjust* value);
    // Get instance field: private VRController _controller0
    GlobalNamespace::VRController* _get__controller0();
    // Set instance field: private VRController _controller0
    void _set__controller0(GlobalNamespace::VRController* value);
    // Get instance field: private VRController _controller1
    GlobalNamespace::VRController* _get__controller1();
    // Set instance field: private VRController _controller1
    void _set__controller1(GlobalNamespace::VRController* value);
    // Get instance field: private VRUIControls.VRInputModule _vrInputModule
    VRUIControls::VRInputModule* _get__vrInputModule();
    // Set instance field: private VRUIControls.VRInputModule _vrInputModule
    void _set__vrInputModule(VRUIControls::VRInputModule* value);
    // Get instance field: private UnityEngine.GameObject[] _controllerModels
    ::Array<UnityEngine::GameObject*>* _get__controllerModels();
    // Set instance field: private UnityEngine.GameObject[] _controllerModels
    void _set__controllerModels(::Array<UnityEngine::GameObject*>* value);
    // Get instance field: private MouseLook _mouseLook
    GlobalNamespace::MouseLook* _get__mouseLook();
    // Set instance field: private MouseLook _mouseLook
    void _set__mouseLook(GlobalNamespace::MouseLook* value);
    // Get instance field: private UnityEngine.Transform _cameraTransform
    UnityEngine::Transform* _get__cameraTransform();
    // Set instance field: private UnityEngine.Transform _cameraTransform
    void _set__cameraTransform(UnityEngine::Transform* value);
    // protected System.Void Awake()
    // Offset: 0x1E937FC
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1E93808
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1E93A24
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1E93A58
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x1E93A88
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1E93E80
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirstPersonFlyingController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FirstPersonFlyingController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirstPersonFlyingController*, creationType>()));
    }
  }; // FirstPersonFlyingController
  #pragma pack(pop)
  static check_size<sizeof(FirstPersonFlyingController), 96 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_FirstPersonFlyingControllerSizeCheck;
  static_assert(sizeof(FirstPersonFlyingController) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FirstPersonFlyingController*, "", "FirstPersonFlyingController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
