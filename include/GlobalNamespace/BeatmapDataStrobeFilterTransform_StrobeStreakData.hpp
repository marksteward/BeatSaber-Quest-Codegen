// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataStrobeFilterTransform
#include "GlobalNamespace/BeatmapDataStrobeFilterTransform.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
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
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataStrobeFilterTransform/StrobeStreakData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataStrobeFilterTransform::StrobeStreakData : public ::Il2CppObject {
    public:
    // public System.Boolean isActive
    // Size: 0x1
    // Offset: 0x10
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isActive and: strobeStartTime
    char __padding0[0x3] = {};
    // public System.Single strobeStartTime
    // Size: 0x4
    // Offset: 0x14
    float strobeStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public ColorType startColorType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::ColorType startColorType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorType) == 0x4);
    // public System.Single lastSwitchTime
    // Size: 0x4
    // Offset: 0x1C
    float lastSwitchTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public ColorType lastColorType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::ColorType lastColorType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorType) == 0x4);
    // public System.Boolean lastIsOn
    // Size: 0x1
    // Offset: 0x24
    bool lastIsOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lastIsOn and: lastSwitchBeatmapIndex
    char __padding5[0x3] = {};
    // public System.Int32 lastSwitchBeatmapIndex
    // Size: 0x4
    // Offset: 0x28
    int lastSwitchBeatmapIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastSwitchBeatmapIndex and: originalBeatmapEventData
    char __padding6[0x4] = {};
    // public BeatmapEventData originalBeatmapEventData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapEventData* originalBeatmapEventData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventData*) == 0x8);
    // public System.Int32 originalBeatmapDataIndex
    // Size: 0x4
    // Offset: 0x38
    int originalBeatmapDataIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StrobeStreakData
    StrobeStreakData(bool isActive_ = {}, float strobeStartTime_ = {}, GlobalNamespace::ColorType startColorType_ = {}, float lastSwitchTime_ = {}, GlobalNamespace::ColorType lastColorType_ = {}, bool lastIsOn_ = {}, int lastSwitchBeatmapIndex_ = {}, GlobalNamespace::BeatmapEventData* originalBeatmapEventData_ = {}, int originalBeatmapDataIndex_ = {}) noexcept : isActive{isActive_}, strobeStartTime{strobeStartTime_}, startColorType{startColorType_}, lastSwitchTime{lastSwitchTime_}, lastColorType{lastColorType_}, lastIsOn{lastIsOn_}, lastSwitchBeatmapIndex{lastSwitchBeatmapIndex_}, originalBeatmapEventData{originalBeatmapEventData_}, originalBeatmapDataIndex{originalBeatmapDataIndex_} {}
    // Get instance field: public System.Boolean isActive
    bool _get_isActive();
    // Set instance field: public System.Boolean isActive
    void _set_isActive(bool value);
    // Get instance field: public System.Single strobeStartTime
    float _get_strobeStartTime();
    // Set instance field: public System.Single strobeStartTime
    void _set_strobeStartTime(float value);
    // Get instance field: public ColorType startColorType
    GlobalNamespace::ColorType _get_startColorType();
    // Set instance field: public ColorType startColorType
    void _set_startColorType(GlobalNamespace::ColorType value);
    // Get instance field: public System.Single lastSwitchTime
    float _get_lastSwitchTime();
    // Set instance field: public System.Single lastSwitchTime
    void _set_lastSwitchTime(float value);
    // Get instance field: public ColorType lastColorType
    GlobalNamespace::ColorType _get_lastColorType();
    // Set instance field: public ColorType lastColorType
    void _set_lastColorType(GlobalNamespace::ColorType value);
    // Get instance field: public System.Boolean lastIsOn
    bool _get_lastIsOn();
    // Set instance field: public System.Boolean lastIsOn
    void _set_lastIsOn(bool value);
    // Get instance field: public System.Int32 lastSwitchBeatmapIndex
    int _get_lastSwitchBeatmapIndex();
    // Set instance field: public System.Int32 lastSwitchBeatmapIndex
    void _set_lastSwitchBeatmapIndex(int value);
    // Get instance field: public BeatmapEventData originalBeatmapEventData
    GlobalNamespace::BeatmapEventData* _get_originalBeatmapEventData();
    // Set instance field: public BeatmapEventData originalBeatmapEventData
    void _set_originalBeatmapEventData(GlobalNamespace::BeatmapEventData* value);
    // Get instance field: public System.Int32 originalBeatmapDataIndex
    int _get_originalBeatmapDataIndex();
    // Set instance field: public System.Int32 originalBeatmapDataIndex
    void _set_originalBeatmapDataIndex(int value);
    // public System.Void StartPotentialStrobe(BeatmapEventData startEventData, System.Int32 originalIndex)
    // Offset: 0x1FD8F1C
    void StartPotentialStrobe(GlobalNamespace::BeatmapEventData* startEventData, int originalIndex);
    // public System.Void AddStrobeData(BeatmapEventData startEventData, System.Int32 beatmapIndex)
    // Offset: 0x1FD8D80
    void AddStrobeData(GlobalNamespace::BeatmapEventData* startEventData, int beatmapIndex);
    // public System.Void .ctor()
    // Offset: 0x1FD8D78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataStrobeFilterTransform::StrobeStreakData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataStrobeFilterTransform::StrobeStreakData*, creationType>()));
    }
  }; // BeatmapDataStrobeFilterTransform/StrobeStreakData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataStrobeFilterTransform::StrobeStreakData), 56 + sizeof(int)> __GlobalNamespace_BeatmapDataStrobeFilterTransform_StrobeStreakDataSizeCheck;
  static_assert(sizeof(BeatmapDataStrobeFilterTransform::StrobeStreakData) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*, "", "BeatmapDataStrobeFilterTransform/StrobeStreakData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::StartPotentialStrobe
// Il2CppName: StartPotentialStrobe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::*)(GlobalNamespace::BeatmapEventData*, int)>(&GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::StartPotentialStrobe)> {
  static const MethodInfo* get() {
    static auto* startEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    static auto* originalIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*), "StartPotentialStrobe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startEventData, originalIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::AddStrobeData
// Il2CppName: AddStrobeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::*)(GlobalNamespace::BeatmapEventData*, int)>(&GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::AddStrobeData)> {
  static const MethodInfo* get() {
    static auto* startEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    static auto* beatmapIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*), "AddStrobeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startEventData, beatmapIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
