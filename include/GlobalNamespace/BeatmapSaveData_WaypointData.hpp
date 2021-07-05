// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/ITime
#include "GlobalNamespace/BeatmapSaveData_ITime.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: OffsetDirection
#include "GlobalNamespace/OffsetDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/WaypointData
  class BeatmapSaveData::WaypointData : public ::Il2CppObject/*, public GlobalNamespace::BeatmapSaveData::ITime*/ {
    public:
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lineIndex
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private NoteLineLayer _lineLayer
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::NoteLineLayer lineLayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineLayer) == 0x4);
    // private OffsetDirection _offsetDirection
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::OffsetDirection offsetDirection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OffsetDirection) == 0x4);
    // Creating value type constructor for type: WaypointData
    WaypointData(float time_ = {}, int lineIndex_ = {}, GlobalNamespace::NoteLineLayer lineLayer_ = {}, GlobalNamespace::OffsetDirection offsetDirection_ = {}) noexcept : time{time_}, lineIndex{lineIndex_}, lineLayer{lineLayer_}, offsetDirection{offsetDirection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::BeatmapSaveData::ITime
    operator GlobalNamespace::BeatmapSaveData::ITime() noexcept {
      return *reinterpret_cast<GlobalNamespace::BeatmapSaveData::ITime*>(this);
    }
    // public System.Single get_time()
    // Offset: 0x110DFBC
    float get_time();
    // public System.Int32 get_lineIndex()
    // Offset: 0x110DFC4
    int get_lineIndex();
    // public NoteLineLayer get_lineLayer()
    // Offset: 0x110DFCC
    GlobalNamespace::NoteLineLayer get_lineLayer();
    // public OffsetDirection get_offsetDirection()
    // Offset: 0x110DFD4
    GlobalNamespace::OffsetDirection get_offsetDirection();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, OffsetDirection offsetDirection)
    // Offset: 0x110DFDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::WaypointData* New_ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::OffsetDirection offsetDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::WaypointData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::WaypointData*, creationType>(time, lineIndex, lineLayer, offsetDirection)));
    }
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0x110E02C
    void MoveTime(float offset);
  }; // BeatmapSaveData/WaypointData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::WaypointData), 28 + sizeof(GlobalNamespace::OffsetDirection)> __GlobalNamespace_BeatmapSaveData_WaypointDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::WaypointData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::WaypointData*, "", "BeatmapSaveData/WaypointData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::WaypointData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapSaveData::WaypointData::*)()>(&GlobalNamespace::BeatmapSaveData::WaypointData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::WaypointData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::WaypointData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapSaveData::WaypointData::*)()>(&GlobalNamespace::BeatmapSaveData::WaypointData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::WaypointData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::WaypointData::get_lineLayer
// Il2CppName: get_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (GlobalNamespace::BeatmapSaveData::WaypointData::*)()>(&GlobalNamespace::BeatmapSaveData::WaypointData::get_lineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::WaypointData*), "get_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::WaypointData::get_offsetDirection
// Il2CppName: get_offsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OffsetDirection (GlobalNamespace::BeatmapSaveData::WaypointData::*)()>(&GlobalNamespace::BeatmapSaveData::WaypointData::get_offsetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::WaypointData*), "get_offsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::WaypointData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::WaypointData::MoveTime
// Il2CppName: MoveTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapSaveData::WaypointData::*)(float)>(&GlobalNamespace::BeatmapSaveData::WaypointData::MoveTime)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::WaypointData*), "MoveTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
