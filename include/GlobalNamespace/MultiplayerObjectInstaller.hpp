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
  // Forward declaring type: MultiplayerScoreRingItem
  class MultiplayerScoreRingItem;
  // Forward declaring type: FireworkItemController
  class FireworkItemController;
  // Forward declaring type: MultiplayerResultsPyramidViewAvatar
  class MultiplayerResultsPyramidViewAvatar;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerObjectInstaller
  class MultiplayerObjectInstaller : public Zenject::MonoInstaller {
    public:
    // private MultiplayerScoreRingItem _inEnvironmentTextsPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreRingItem* inEnvironmentTextsPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingItem*) == 0x8);
    // private FireworkItemController _fireworkItemControllerPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::FireworkItemController* fireworkItemControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworkItemController*) == 0x8);
    // private MultiplayerResultsPyramidViewAvatar _multiplayerResultsPyramidViewAvatarPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerResultsPyramidViewAvatar* multiplayerResultsPyramidViewAvatarPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*) == 0x8);
    // Creating value type constructor for type: MultiplayerObjectInstaller
    MultiplayerObjectInstaller(GlobalNamespace::MultiplayerScoreRingItem* inEnvironmentTextsPrefab_ = {}, GlobalNamespace::FireworkItemController* fireworkItemControllerPrefab_ = {}, GlobalNamespace::MultiplayerResultsPyramidViewAvatar* multiplayerResultsPyramidViewAvatarPrefab_ = {}) noexcept : inEnvironmentTextsPrefab{inEnvironmentTextsPrefab_}, fireworkItemControllerPrefab{fireworkItemControllerPrefab_}, multiplayerResultsPyramidViewAvatarPrefab{multiplayerResultsPyramidViewAvatarPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1005DC4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1005EC8
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerObjectInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerObjectInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerObjectInstaller*, creationType>()));
    }
  }; // MultiplayerObjectInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerObjectInstaller), 48 + sizeof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*)> __GlobalNamespace_MultiplayerObjectInstallerSizeCheck;
  static_assert(sizeof(MultiplayerObjectInstaller) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerObjectInstaller*, "", "MultiplayerObjectInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerObjectInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerObjectInstaller::*)()>(&GlobalNamespace::MultiplayerObjectInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerObjectInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerObjectInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
