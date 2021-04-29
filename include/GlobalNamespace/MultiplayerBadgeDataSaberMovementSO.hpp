// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerBadgeDataMinMaxFloatSO
#include "GlobalNamespace/MultiplayerBadgeDataMinMaxFloatSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeDataSaberMovementSO
  class MultiplayerBadgeDataSaberMovementSO : public GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
    public:
    // Creating value type constructor for type: MultiplayerBadgeDataSaberMovementSO
    MultiplayerBadgeDataSaberMovementSO() noexcept {}
    // protected override System.Single GetValue(MultiplayerPlayerResultsData result)
    // Offset: 0xFC0F14
    // Implemented from: MultiplayerBadgeDataMinMaxFloatSO
    // Base method: System.Single MultiplayerBadgeDataMinMaxFloatSO::GetValue(MultiplayerPlayerResultsData result)
    float GetValue(GlobalNamespace::MultiplayerPlayerResultsData* result);
    // public System.Void .ctor()
    // Offset: 0xFC0F3C
    // Implemented from: MultiplayerBadgeDataMinMaxFloatSO
    // Base method: System.Void MultiplayerBadgeDataMinMaxFloatSO::.ctor()
    // Base method: System.Void MultiplayerBadgeDataSO::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataSaberMovementSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataSaberMovementSO*, creationType>()));
    }
  }; // MultiplayerBadgeDataSaberMovementSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*, "", "MultiplayerBadgeDataSaberMovementSO");
