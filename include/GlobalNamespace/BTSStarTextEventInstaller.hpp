// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: BTSStarTextEventInstaller
  // [] Offset: FFFFFFFF
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
    // public override System.Void InstallBindings()
    // Offset: 0x1A4CAB8
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1A4CB38
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
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSStarTextEventInstaller").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEventInstaller*, creationType>()));
    }
  }; // BTSStarTextEventInstaller
  static check_size<sizeof(BTSStarTextEventInstaller), 32 + sizeof(GlobalNamespace::BTSStarTextEffectController*)> __GlobalNamespace_BTSStarTextEventInstallerSizeCheck;
  static_assert(sizeof(BTSStarTextEventInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventInstaller*, "", "BTSStarTextEventInstaller");
#pragma pack(pop)