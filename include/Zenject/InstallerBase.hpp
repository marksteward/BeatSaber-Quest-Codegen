// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IInstaller
#include "Zenject/IInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x18
  // Autogenerated type: Zenject.InstallerBase
  // [] Offset: FFFFFFFF
  class InstallerBase : public ::Il2CppObject/*, public Zenject::IInstaller*/ {
    public:
    // [InjectAttribute] Offset: 0xD94898
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: InstallerBase
    InstallerBase(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x12A22D4
    Zenject::DiContainer* get_Container();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x12A22DC
    // Implemented from: Zenject.IInstaller
    // Base method: System.Boolean IInstaller::get_IsEnabled()
    bool get_IsEnabled();
    // Creating proxy method: Zenject_IInstaller_get_IsEnabled
    // Maps to method: get_IsEnabled
    bool Zenject_IInstaller_get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IInstaller
    // Base method: System.Void IInstaller::InstallBindings()
    void InstallBindings();
    // protected System.Void .ctor()
    // Offset: 0x12A22CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstallerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InstallerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstallerBase*, creationType>()));
    }
  }; // Zenject.InstallerBase
  static check_size<sizeof(InstallerBase), 16 + sizeof(Zenject::DiContainer*)> __Zenject_InstallerBaseSizeCheck;
  static_assert(sizeof(InstallerBase) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstallerBase*, "Zenject", "InstallerBase");
#pragma pack(pop)
