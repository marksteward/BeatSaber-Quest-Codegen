// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Zenject.IInstaller
#include "Zenject/IInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScriptableObjectInstallerBase
  class ScriptableObjectInstallerBase : public UnityEngine::ScriptableObject, public Zenject::IInstaller {
    public:
    // private Zenject.DiContainer _container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xFCE69C
    Zenject::DiContainer* get_Container();
    // private System.Boolean Zenject.IInstaller.get_IsEnabled()
    // Offset: 0xFCE6A4
    // Implemented from: Zenject.IInstaller
    // Base method: System.Boolean IInstaller::get_IsEnabled()
    bool Zenject_IInstaller_get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0xFCE6AC
    // Implemented from: Zenject.IInstaller
    // Base method: System.Void IInstaller::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xFCE694
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScriptableObjectInstallerBase* New_ctor();
  }; // Zenject.ScriptableObjectInstallerBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstallerBase*, "Zenject", "ScriptableObjectInstallerBase");
#pragma pack(pop)
