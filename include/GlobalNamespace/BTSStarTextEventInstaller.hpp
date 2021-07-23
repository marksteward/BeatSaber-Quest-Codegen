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
  // Forward declaring type: BTSStarTextEffectController
  class BTSStarTextEffectController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEventInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSStarTextEventInstaller : public Zenject::MonoInstaller {
    public:
    // private BTSStarTextEffectController _btsStarTextEffectController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BTSStarTextEffectController* btsStarTextEffectController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSStarTextEffectController*) == 0x8);
    // Creating value type constructor for type: BTSStarTextEventInstaller
    BTSStarTextEventInstaller(GlobalNamespace::BTSStarTextEffectController* btsStarTextEffectController_ = {}) noexcept : btsStarTextEffectController{btsStarTextEffectController_} {}
    // Get instance field: private BTSStarTextEffectController _btsStarTextEffectController
    GlobalNamespace::BTSStarTextEffectController* _get__btsStarTextEffectController();
    // Set instance field: private BTSStarTextEffectController _btsStarTextEffectController
    void _set__btsStarTextEffectController(GlobalNamespace::BTSStarTextEffectController* value);
    // public System.Void .ctor()
    // Offset: 0x10E7A54
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEventInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEventInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEventInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x10E79D4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // BTSStarTextEventInstaller
  #pragma pack(pop)
  static check_size<sizeof(BTSStarTextEventInstaller), 32 + sizeof(GlobalNamespace::BTSStarTextEffectController*)> __GlobalNamespace_BTSStarTextEventInstallerSizeCheck;
  static_assert(sizeof(BTSStarTextEventInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventInstaller*, "", "BTSStarTextEventInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventInstaller::*)()>(&GlobalNamespace::BTSStarTextEventInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
