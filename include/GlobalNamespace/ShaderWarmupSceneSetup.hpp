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
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ShaderWarmupSceneSetup
  class ShaderWarmupSceneSetup : public Zenject::MonoInstaller {
    public:
    // private ColorSchemeSO _sharedWarmupColorScheme
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSchemeSO* sharedWarmupColorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // Creating value type constructor for type: ShaderWarmupSceneSetup
    ShaderWarmupSceneSetup(GlobalNamespace::ColorSchemeSO* sharedWarmupColorScheme_ = {}) noexcept : sharedWarmupColorScheme{sharedWarmupColorScheme_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x105C8C0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x105C968
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderWarmupSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShaderWarmupSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderWarmupSceneSetup*, creationType>()));
    }
  }; // ShaderWarmupSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(ShaderWarmupSceneSetup), 32 + sizeof(GlobalNamespace::ColorSchemeSO*)> __GlobalNamespace_ShaderWarmupSceneSetupSizeCheck;
  static_assert(sizeof(ShaderWarmupSceneSetup) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupSceneSetup*, "", "ShaderWarmupSceneSetup");
