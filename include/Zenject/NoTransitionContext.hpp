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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: NoTransitionInstaller
  class NoTransitionInstaller;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.NoTransitionContext
  // [] Offset: FFFFFFFF
  class NoTransitionContext : public UnityEngine::MonoBehaviour {
    public:
    // private Zenject.NoTransitionInstaller _noScenesTransitionInstaller
    // Size: 0x8
    // Offset: 0x18
    Zenject::NoTransitionInstaller* noScenesTransitionInstaller;
    // Field size check
    static_assert(sizeof(Zenject::NoTransitionInstaller*) == 0x8);
    // Creating value type constructor for type: NoTransitionContext
    NoTransitionContext(Zenject::NoTransitionInstaller* noScenesTransitionInstaller_ = {}) noexcept : noScenesTransitionInstaller{noScenesTransitionInstaller_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Action`1<Zenject.DiContainer> get_installMethod()
    // Offset: 0x13487B0
    System::Action_1<Zenject::DiContainer*>* get_installMethod();
    // protected System.Void Awake()
    // Offset: 0x1348830
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x13488B0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoTransitionContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::NoTransitionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoTransitionContext*, creationType>()));
    }
  }; // Zenject.NoTransitionContext
  static check_size<sizeof(NoTransitionContext), 24 + sizeof(Zenject::NoTransitionInstaller*)> __Zenject_NoTransitionContextSizeCheck;
  static_assert(sizeof(NoTransitionContext) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::NoTransitionContext*, "Zenject", "NoTransitionContext");
