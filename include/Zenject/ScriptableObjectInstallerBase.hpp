// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScriptableObjectInstallerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptableObjectInstallerBase : public UnityEngine::ScriptableObject/*, public Zenject::IInstaller*/ {
    public:
    // [InjectAttribute] Offset: 0xDCB48C
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: ScriptableObjectInstallerBase
    ScriptableObjectInstallerBase(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x16CF0A4
    Zenject::DiContainer* get_Container();
    // private System.Boolean Zenject.IInstaller.get_IsEnabled()
    // Offset: 0x16CF0AC
    bool Zenject_IInstaller_get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0x16CF0B4
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x16CF09C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObjectInstallerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScriptableObjectInstallerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObjectInstallerBase*, creationType>()));
    }
  }; // Zenject.ScriptableObjectInstallerBase
  #pragma pack(pop)
  static check_size<sizeof(ScriptableObjectInstallerBase), 24 + sizeof(Zenject::DiContainer*)> __Zenject_ScriptableObjectInstallerBaseSizeCheck;
  static_assert(sizeof(ScriptableObjectInstallerBase) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstallerBase*, "Zenject", "ScriptableObjectInstallerBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstallerBase::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::ScriptableObjectInstallerBase::*)()>(&Zenject::ScriptableObjectInstallerBase::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstallerBase*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstallerBase::Zenject_IInstaller_get_IsEnabled
// Il2CppName: Zenject.IInstaller.get_IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ScriptableObjectInstallerBase::*)()>(&Zenject::ScriptableObjectInstallerBase::Zenject_IInstaller_get_IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstallerBase*), "Zenject.IInstaller.get_IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstallerBase::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScriptableObjectInstallerBase::*)()>(&Zenject::ScriptableObjectInstallerBase::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectInstallerBase*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstallerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
