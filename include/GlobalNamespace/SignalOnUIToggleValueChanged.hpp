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
  // Forward declaring type: BoolSignal
  class BoolSignal;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SignalOnUIToggleValueChanged
  class SignalOnUIToggleValueChanged : public UnityEngine::MonoBehaviour {
    public:
    // private BoolSignal _toggleValueChangedSignal
    // Offset: 0x18
    GlobalNamespace::BoolSignal* toggleValueChangedSignal;
    // private UnityEngine.UI.Toggle _toggle
    // Offset: 0x20
    UnityEngine::UI::Toggle* toggle;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // private System.Void OnReset()
    // Offset: 0xCBCF70
    void OnReset();
    // protected System.Void Start()
    // Offset: 0xCBCFD0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xCBD078
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xCBD164
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SignalOnUIToggleValueChanged* New_ctor();
  }; // SignalOnUIToggleValueChanged
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SignalOnUIToggleValueChanged*, "", "SignalOnUIToggleValueChanged");
#pragma pack(pop)
