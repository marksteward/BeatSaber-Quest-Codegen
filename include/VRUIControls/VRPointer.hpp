// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Autogenerated type: VRUIControls.VRPointer
  class VRPointer : public UnityEngine::MonoBehaviour {
    public:
    // private VRController _leftVRController
    // Offset: 0x18
    GlobalNamespace::VRController* leftVRController;
    // private VRController _rightVRController
    // Offset: 0x20
    GlobalNamespace::VRController* rightVRController;
    // private UnityEngine.Transform _laserPointerPrefab
    // Offset: 0x28
    UnityEngine::Transform* laserPointerPrefab;
    // private UnityEngine.Transform _cursorPrefab
    // Offset: 0x30
    UnityEngine::Transform* cursorPrefab;
    // private System.Single _defaultLaserPointerLength
    // Offset: 0x38
    float defaultLaserPointerLength;
    // private System.Single _laserPointerWidth
    // Offset: 0x3C
    float laserPointerWidth;
    // private UnityEngine.Transform _laserPointerTransform
    // Offset: 0x40
    UnityEngine::Transform* laserPointerTransform;
    // private UnityEngine.Transform _cursorTransform
    // Offset: 0x48
    UnityEngine::Transform* cursorTransform;
    // private UnityEngine.EventSystems.EventSystem _eventSystem
    // Offset: 0x50
    UnityEngine::EventSystems::EventSystem* eventSystem;
    // private VRController _vrController
    // Offset: 0x58
    GlobalNamespace::VRController* vrController;
    // private UnityEngine.EventSystems.PointerEventData _pointerData
    // Offset: 0x60
    UnityEngine::EventSystems::PointerEventData* pointerData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // static field const value: static public System.Single kScrollMultiplier
    static constexpr const float kScrollMultiplier = 1;
    // Get static field: static public System.Single kScrollMultiplier
    static float _get_kScrollMultiplier();
    // Set static field: static public System.Single kScrollMultiplier
    static void _set_kScrollMultiplier(float value);
    // Get static field: static private System.Boolean _lastControllerUsedWasRight
    static bool _get__lastControllerUsedWasRight();
    // Set static field: static private System.Boolean _lastControllerUsedWasRight
    static void _set__lastControllerUsedWasRight(bool value);
    // Get static field: static private System.Boolean _rightControllerWasReleased
    static bool _get__rightControllerWasReleased();
    // Set static field: static private System.Boolean _rightControllerWasReleased
    static void _set__rightControllerWasReleased(bool value);
    // Get static field: static private System.Boolean _leftControllerWasReleased
    static bool _get__leftControllerWasReleased();
    // Set static field: static private System.Boolean _leftControllerWasReleased
    static void _set__leftControllerWasReleased(bool value);
    // public VRController get_vrController()
    // Offset: 0x193C234
    GlobalNamespace::VRController* get_vrController();
    // public UnityEngine.Vector3 get_cursorPosition()
    // Offset: 0x193C23C
    UnityEngine::Vector3 get_cursorPosition();
    // private UnityEngine.EventSystems.EventSystem get_eventSystem()
    // Offset: 0x193C258
    UnityEngine::EventSystems::EventSystem* get_eventSystem();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x193C2D8
    static void NoDomainReloadInit();
    // protected System.Void Awake()
    // Offset: 0x193C35C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x193C3F8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x193C68C
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0x193C82C
    void LateUpdate();
    // private System.Void CreateLaserPointerAndLaserHit()
    // Offset: 0x193C3FC
    void CreateLaserPointerAndLaserHit();
    // private System.Void RefreshLaserPointerAndLaserHit(UnityEngine.EventSystems.PointerEventData pointerData)
    // Offset: 0x193CC2C
    void RefreshLaserPointerAndLaserHit(UnityEngine::EventSystems::PointerEventData* pointerData);
    // private System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x193CEE8
    void OnApplicationFocus(bool hasFocus);
    // private System.Void DestroyLaserAndHit()
    // Offset: 0x193C690
    void DestroyLaserAndHit();
    // public System.String get_state()
    // Offset: 0x193CFA0
    ::Il2CppString* get_state();
    // public System.Void Process(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x193BF7C
    void Process(UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // public System.Void .ctor()
    // Offset: 0x193D288
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRPointer* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x193D29C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VRUIControls.VRPointer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRPointer*, "VRUIControls", "VRPointer");
#pragma pack(pop)
