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
// Including type: BeatmapSaveData/NoteType
#include "GlobalNamespace/BeatmapSaveData_NoteType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/NoteData
  class BeatmapSaveData::NoteData : public ::Il2CppObject/*, public GlobalNamespace::BeatmapSaveData::ITime*/ {
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
    // private BeatmapSaveData/NoteType _type
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::BeatmapSaveData::NoteType type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapSaveData::NoteType) == 0x4);
    // private NoteCutDirection _cutDirection
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::NoteCutDirection cutDirection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutDirection) == 0x4);
    // Creating value type constructor for type: NoteData
    NoteData(float time_ = {}, int lineIndex_ = {}, GlobalNamespace::NoteLineLayer lineLayer_ = {}, GlobalNamespace::BeatmapSaveData::NoteType type_ = {}, GlobalNamespace::NoteCutDirection cutDirection_ = {}) noexcept : time{time_}, lineIndex{lineIndex_}, lineLayer{lineLayer_}, type{type_}, cutDirection{cutDirection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::BeatmapSaveData::ITime
    operator GlobalNamespace::BeatmapSaveData::ITime() noexcept {
      return *reinterpret_cast<GlobalNamespace::BeatmapSaveData::ITime*>(this);
    }
    // public System.Single get_time()
    // Offset: 0xF2D5C0
    float get_time();
    // public System.Int32 get_lineIndex()
    // Offset: 0xF2D5C8
    int get_lineIndex();
    // public NoteLineLayer get_lineLayer()
    // Offset: 0xF2D5D0
    GlobalNamespace::NoteLineLayer get_lineLayer();
    // public BeatmapSaveData/NoteType get_type()
    // Offset: 0xF2D5D8
    GlobalNamespace::BeatmapSaveData::NoteType get_type();
    // public NoteCutDirection get_cutDirection()
    // Offset: 0xF2D5E0
    GlobalNamespace::NoteCutDirection get_cutDirection();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, BeatmapSaveData/NoteType type, NoteCutDirection cutDirection)
    // Offset: 0xF2D5E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::NoteData* New_ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::BeatmapSaveData::NoteType type, GlobalNamespace::NoteCutDirection cutDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::NoteData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::NoteData*, creationType>(time, lineIndex, lineLayer, type, cutDirection)));
    }
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0xF2D644
    void MoveTime(float offset);
  }; // BeatmapSaveData/NoteData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::NoteData), 32 + sizeof(GlobalNamespace::NoteCutDirection)> __GlobalNamespace_BeatmapSaveData_NoteDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::NoteData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::NoteData*, "", "BeatmapSaveData/NoteData");
