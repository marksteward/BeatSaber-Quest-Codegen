// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass65_2
  class FromBinder::$$c__DisplayClass65_2 : public ::Il2CppObject {
    public:
    // public Zenject.InjectContext ctx
    // Offset: 0x10
    Zenject::InjectContext* ctx;
    // Creating conversion operator: operator Zenject::InjectContext*
    constexpr operator Zenject::InjectContext*() const {
      return ctx;
    }
    // System.Boolean <FromComponentInHierarchy>b__3(UnityEngine.Component x)
    // Offset: 0xF38EF4
    bool $FromComponentInHierarchy$b__3(UnityEngine::Component* x);
    // public System.Void .ctor()
    // Offset: 0xF38EB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass65_2* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass65_2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass65_2*, "Zenject", "FromBinder/<>c__DisplayClass65_2");
#pragma pack(pop)
