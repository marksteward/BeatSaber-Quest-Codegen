// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerBadgeDataSO
#include "GlobalNamespace/MultiplayerBadgeDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBadgeAwardData
  class MultiplayerBadgeAwardData;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeDataFullComboSO
  class MultiplayerBadgeDataFullComboSO : public GlobalNamespace::MultiplayerBadgeDataSO {
    public:
    // private System.Single _weight
    // Size: 0x4
    // Offset: 0x30
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerBadgeDataFullComboSO
    MultiplayerBadgeDataFullComboSO(float weight_ = {}) noexcept : weight{weight_} {}
    // public override MultiplayerBadgeAwardData CalculateBadgeData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, PlayerDataModel playerDataModel, IDifficultyBeatmap difficultyBeatmap, System.Single randomMultiplier)
    // Offset: 0x1145EB0
    // Implemented from: MultiplayerBadgeDataSO
    // Base method: MultiplayerBadgeAwardData MultiplayerBadgeDataSO::CalculateBadgeData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, PlayerDataModel playerDataModel, IDifficultyBeatmap difficultyBeatmap, System.Single randomMultiplier)
    GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, GlobalNamespace::PlayerDataModel* playerDataModel, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, float randomMultiplier);
    // public System.Void .ctor()
    // Offset: 0x11462CC
    // Implemented from: MultiplayerBadgeDataSO
    // Base method: System.Void MultiplayerBadgeDataSO::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataFullComboSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgeDataFullComboSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataFullComboSO*, creationType>()));
    }
  }; // MultiplayerBadgeDataFullComboSO
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBadgeDataFullComboSO), 48 + sizeof(float)> __GlobalNamespace_MultiplayerBadgeDataFullComboSOSizeCheck;
  static_assert(sizeof(MultiplayerBadgeDataFullComboSO) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataFullComboSO*, "", "MultiplayerBadgeDataFullComboSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData
// Il2CppName: CalculateBadgeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerBadgeAwardData* (GlobalNamespace::MultiplayerBadgeDataFullComboSO::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData*>*, GlobalNamespace::PlayerDataModel*, GlobalNamespace::IDifficultyBeatmap*, float)>(&GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData)> {
  static const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    static auto* playerDataModel = &::il2cpp_utils::GetClassFromName("", "PlayerDataModel")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* randomMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataFullComboSO*), "CalculateBadgeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData, playerDataModel, difficultyBeatmap, randomMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataFullComboSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
