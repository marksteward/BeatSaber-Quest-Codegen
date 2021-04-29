// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerBadgeDataMinMaxIntSO
#include "GlobalNamespace/MultiplayerBadgeDataMinMaxIntSO.hpp"
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
  // Autogenerated type: MultiplayerBadgeDataGoodCutsSO
  class MultiplayerBadgeDataGoodCutsSO : public GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO {
    public:
    // Creating value type constructor for type: MultiplayerBadgeDataGoodCutsSO
    MultiplayerBadgeDataGoodCutsSO() noexcept {}
    // protected override System.Int32 GetValue(MultiplayerPlayerResultsData result)
    // Offset: 0xFBF71C
    // Implemented from: MultiplayerBadgeDataMinMaxIntSO
    // Base method: System.Int32 MultiplayerBadgeDataMinMaxIntSO::GetValue(MultiplayerPlayerResultsData result)
    int GetValue(GlobalNamespace::MultiplayerPlayerResultsData* result);
    // public System.Void .ctor()
    // Offset: 0xFBF740
    // Implemented from: MultiplayerBadgeDataMinMaxIntSO
    // Base method: System.Void MultiplayerBadgeDataMinMaxIntSO::.ctor()
    // Base method: System.Void MultiplayerBadgeDataSO::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataGoodCutsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataGoodCutsSO*, creationType>()));
    }
  }; // MultiplayerBadgeDataGoodCutsSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*, "", "MultiplayerBadgeDataGoodCutsSO");
