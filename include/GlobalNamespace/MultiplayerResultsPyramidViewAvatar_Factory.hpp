// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsPyramidViewAvatar
#include "GlobalNamespace/MultiplayerResultsPyramidViewAvatar.hpp"
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerResultsPyramidViewAvatar/Factory
  class MultiplayerResultsPyramidViewAvatar::Factory : public Zenject::PlaceholderFactory_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> {
    public:
    // Creating value type constructor for type: Factory
    Factory() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x100D9B8
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Void PlaceholderFactory_2::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsPyramidViewAvatar::Factory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsPyramidViewAvatar::Factory*, creationType>()));
    }
  }; // MultiplayerResultsPyramidViewAvatar/Factory
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory*, "", "MultiplayerResultsPyramidViewAvatar/Factory");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
