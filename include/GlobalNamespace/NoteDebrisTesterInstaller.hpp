// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteDebris
  class NoteDebris;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisTesterInstaller
  class NoteDebrisTesterInstaller : public Zenject::MonoInstaller {
    public:
    // private System.Boolean _useHDVersion
    // Size: 0x1
    // Offset: 0x20
    bool useHDVersion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useHDVersion and: noteDebrisHDPrefab
    char __padding0[0x7] = {};
    // private NoteDebris _noteDebrisHDPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteDebris* noteDebrisHDPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebris*) == 0x8);
    // private NoteDebris _noteDebrisLWPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::NoteDebris* noteDebrisLWPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebris*) == 0x8);
    // Creating value type constructor for type: NoteDebrisTesterInstaller
    NoteDebrisTesterInstaller(bool useHDVersion_ = {}, GlobalNamespace::NoteDebris* noteDebrisHDPrefab_ = {}, GlobalNamespace::NoteDebris* noteDebrisLWPrefab_ = {}) noexcept : useHDVersion{useHDVersion_}, noteDebrisHDPrefab{noteDebrisHDPrefab_}, noteDebrisLWPrefab{noteDebrisLWPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x11D806C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x11D8100
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisTesterInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebrisTesterInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisTesterInstaller*, creationType>()));
    }
  }; // NoteDebrisTesterInstaller
  #pragma pack(pop)
  static check_size<sizeof(NoteDebrisTesterInstaller), 48 + sizeof(GlobalNamespace::NoteDebris*)> __GlobalNamespace_NoteDebrisTesterInstallerSizeCheck;
  static_assert(sizeof(NoteDebrisTesterInstaller) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisTesterInstaller*, "", "NoteDebrisTesterInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisTesterInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisTesterInstaller::*)()>(&GlobalNamespace::NoteDebrisTesterInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisTesterInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisTesterInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
