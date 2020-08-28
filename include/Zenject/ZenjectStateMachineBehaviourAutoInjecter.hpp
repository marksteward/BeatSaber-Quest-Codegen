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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenjectStateMachineBehaviourAutoInjecter
  class ZenjectStateMachineBehaviourAutoInjecter : public UnityEngine::MonoBehaviour {
    public:
    // private Zenject.DiContainer _container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // private UnityEngine.Animator _animator
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void Construct(Zenject.DiContainer container)
    // Offset: 0x1944740
    void Construct(Zenject::DiContainer* container);
    // public System.Void Start()
    // Offset: 0x19447C8
    void Start();
    // public System.Void .ctor()
    // Offset: 0x19448BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ZenjectStateMachineBehaviourAutoInjecter* New_ctor();
  }; // Zenject.ZenjectStateMachineBehaviourAutoInjecter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectStateMachineBehaviourAutoInjecter*, "Zenject", "ZenjectStateMachineBehaviourAutoInjecter");
#pragma pack(pop)
