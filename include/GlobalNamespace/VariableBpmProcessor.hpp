// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VariableBpmProcessor
  // [] Offset: FFFFFFFF
  class VariableBpmProcessor : public ::Il2CppObject {
    public:
    // private System.Single _currentBpm
    // Size: 0x4
    // Offset: 0x10
    float currentBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: VariableBpmProcessor
    VariableBpmProcessor(float currentBpm_ = {}) noexcept : currentBpm{currentBpm_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return currentBpm;
    }
    // public System.Single get_currentBpm()
    // Offset: 0x19777A0
    float get_currentBpm();
    // public System.Void SetBpm(System.Single newBpm)
    // Offset: 0x19777A8
    void SetBpm(float newBpm);
    // public System.Boolean ProcessBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x19777B0
    bool ProcessBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x1977800
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VariableBpmProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VariableBpmProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VariableBpmProcessor*, creationType>()));
    }
  }; // VariableBpmProcessor
  static check_size<sizeof(VariableBpmProcessor), 16 + sizeof(float)> __GlobalNamespace_VariableBpmProcessorSizeCheck;
  static_assert(sizeof(VariableBpmProcessor) == 0x14);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VariableBpmProcessor*, "", "VariableBpmProcessor");
