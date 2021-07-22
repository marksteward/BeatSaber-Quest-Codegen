// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BeatmapDataLoader/BpmChangeData
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapDataLoader::BpmChangeData/*, public System::ValueType*/ {
    public:
    // public readonly System.Single bpmChangeStartTime
    // Size: 0x4
    // Offset: 0x0
    float bpmChangeStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single bpmChangeStartBpmTime
    // Size: 0x4
    // Offset: 0x4
    float bpmChangeStartBpmTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single bpm
    // Size: 0x4
    // Offset: 0x8
    float bpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BpmChangeData
    constexpr BpmChangeData(float bpmChangeStartTime_ = {}, float bpmChangeStartBpmTime_ = {}, float bpm_ = {}) noexcept : bpmChangeStartTime{bpmChangeStartTime_}, bpmChangeStartBpmTime{bpmChangeStartBpmTime_}, bpm{bpm_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Single bpmChangeStartTime, System.Single bpmChangeStartBpmTime, System.Single bpm)
    // Offset: 0xED1610
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  BpmChangeData(float bpmChangeStartTime, float bpmChangeStartBpmTime, float bpm)
  }; // BeatmapDataLoader/BpmChangeData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataLoader::BpmChangeData), 8 + sizeof(float)> __GlobalNamespace_BeatmapDataLoader_BpmChangeDataSizeCheck;
  static_assert(sizeof(BeatmapDataLoader::BpmChangeData) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::BpmChangeData, "", "BeatmapDataLoader/BpmChangeData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::BpmChangeData::BpmChangeData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
