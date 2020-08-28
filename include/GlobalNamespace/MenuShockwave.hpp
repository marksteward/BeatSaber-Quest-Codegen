// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRPointer
  class VRPointer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuShockwave
  class MenuShockwave : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _shockwavePS
    // Offset: 0x18
    UnityEngine::ParticleSystem* shockwavePS;
    // private VRUIControls.VRPointer _vrPointer
    // Offset: 0x20
    VRUIControls::VRPointer* vrPointer;
    // private Signal[] _buttonClickEvents
    // Offset: 0x28
    ::Array<GlobalNamespace::Signal*>* buttonClickEvents;
    // private UnityEngine.ParticleSystem/EmitParams _shockwavePSEmitParams
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmitParams shockwavePSEmitParams;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void Awake()
    // Offset: 0xC02188
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0xC02198
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xC0226C
    void OnDisable();
    // private System.Void HandleButtonClickEvent()
    // Offset: 0xC02340
    void HandleButtonClickEvent();
    // public System.Void SpawnShockwave(UnityEngine.Vector3 pos)
    // Offset: 0xC02374
    void SpawnShockwave(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0xC02424
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuShockwave* New_ctor();
  }; // MenuShockwave
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuShockwave*, "", "MenuShockwave");
#pragma pack(pop)
