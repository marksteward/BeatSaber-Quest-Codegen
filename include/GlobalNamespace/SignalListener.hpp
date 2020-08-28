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
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SignalListener
  class SignalListener : public UnityEngine::MonoBehaviour {
    public:
    // private Signal _signal
    // Offset: 0x18
    GlobalNamespace::Signal* signal;
    // private UnityEngine.Events.UnityEvent _unityEvent
    // Offset: 0x20
    UnityEngine::Events::UnityEvent* unityEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void OnEnable()
    // Offset: 0xCBCC54
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xCBCCE8
    void OnDisable();
    // private System.Void HandleEvent()
    // Offset: 0xCBCD70
    void HandleEvent();
    // public System.Void .ctor()
    // Offset: 0xCBCD8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SignalListener* New_ctor();
  }; // SignalListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SignalListener*, "", "SignalListener");
#pragma pack(pop)
