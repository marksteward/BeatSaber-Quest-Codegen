// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Installer`2
#include "Zenject/Installer_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ExecutionOrderInstaller
  class ExecutionOrderInstaller : public Zenject::Installer_2<System::Collections::Generic::List_1<System::Type*>*, Zenject::ExecutionOrderInstaller*> {
    public:
    // private System.Collections.Generic.List`1<System.Type> _typeOrder
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Type*>* typeOrder;
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const = delete;
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Type> typeOrder)
    // Offset: 0xF311F0
    static ExecutionOrderInstaller* New_ctor(System::Collections::Generic::List_1<System::Type*>* typeOrder);
    // public override System.Void InstallBindings()
    // Offset: 0xF3125C
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.ExecutionOrderInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ExecutionOrderInstaller*, "Zenject", "ExecutionOrderInstaller");
#pragma pack(pop)
