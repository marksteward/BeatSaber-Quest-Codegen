// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Installer`2
#include "Zenject/Installer_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ExecutionOrderInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class ExecutionOrderInstaller : public Zenject::Installer_2<System::Collections::Generic::List_1<System::Type*>*, Zenject::ExecutionOrderInstaller*> {
    public:
    // private System.Collections.Generic.List`1<System.Type> _typeOrder
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Type*>* typeOrder;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Type*>*) == 0x8);
    // Creating value type constructor for type: ExecutionOrderInstaller
    ExecutionOrderInstaller(System::Collections::Generic::List_1<System::Type*>* typeOrder_ = {}) noexcept : typeOrder{typeOrder_} {}
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Type> typeOrder)
    // Offset: 0x161B218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecutionOrderInstaller* New_ctor(System::Collections::Generic::List_1<System::Type*>* typeOrder) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ExecutionOrderInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecutionOrderInstaller*, creationType>(typeOrder)));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x161B27C
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.ExecutionOrderInstaller
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ExecutionOrderInstaller*, "Zenject", "ExecutionOrderInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ExecutionOrderInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ExecutionOrderInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ExecutionOrderInstaller::*)()>(&Zenject::ExecutionOrderInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ExecutionOrderInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
