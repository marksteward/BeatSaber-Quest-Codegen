// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Autogenerated type: ColorManagerInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorManagerInstaller : public Zenject::MonoInstaller {
    public:
    // private ColorSchemeSO _menuColorScheme
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSchemeSO* menuColorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // Creating value type constructor for type: ColorManagerInstaller
    ColorManagerInstaller(GlobalNamespace::ColorSchemeSO* menuColorScheme_ = {}) noexcept : menuColorScheme{menuColorScheme_} {}
    // Get instance field: private ColorSchemeSO _menuColorScheme
    GlobalNamespace::ColorSchemeSO* _get__menuColorScheme();
    // Set instance field: private ColorSchemeSO _menuColorScheme
    void _set__menuColorScheme(GlobalNamespace::ColorSchemeSO* value);
    // public System.Void .ctor()
    // Offset: 0x1EFE064
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorManagerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorManagerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorManagerInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x1EFDFBC
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // ColorManagerInstaller
  #pragma pack(pop)
  static check_size<sizeof(ColorManagerInstaller), 32 + sizeof(GlobalNamespace::ColorSchemeSO*)> __GlobalNamespace_ColorManagerInstallerSizeCheck;
  static_assert(sizeof(ColorManagerInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorManagerInstaller*, "", "ColorManagerInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorManagerInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorManagerInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorManagerInstaller::*)()>(&GlobalNamespace::ColorManagerInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManagerInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
