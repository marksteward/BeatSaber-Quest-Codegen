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
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Get instance field: private System.Single _time
    float _get__time();
    // Set instance field: private System.Single _time
    void _set__time(float value);
    // Get instance field: private System.Int32 _lineIndex
    int _get__lineIndex();
    // Set instance field: private System.Int32 _lineIndex
    void _set__lineIndex(int value);
    // Get instance field: private NoteLineLayer _lineLayer
    GlobalNamespace::NoteLineLayer _get__lineLayer();
    // Set instance field: private NoteLineLayer _lineLayer
    void _set__lineLayer(GlobalNamespace::NoteLineLayer value);
    // Get instance field: private BeatmapSaveData/NoteType _type
    GlobalNamespace::BeatmapSaveData::NoteType _get__type();
    // Set instance field: private BeatmapSaveData/NoteType _type
    void _set__type(GlobalNamespace::BeatmapSaveData::NoteType value);
    // Get instance field: private NoteCutDirection _cutDirection
    GlobalNamespace::NoteCutDirection _get__cutDirection();
    // Set instance field: private NoteCutDirection _cutDirection
    void _set__cutDirection(GlobalNamespace::NoteCutDirection value);
    // public System.Single get_time()
    // Offset: 0x109A780
    float get_time();
    // public System.Int32 get_lineIndex()
    // Offset: 0x109A788
    int get_lineIndex();
    // public NoteLineLayer get_lineLayer()
    // Offset: 0x109A790
    GlobalNamespace::NoteLineLayer get_lineLayer();
    // public BeatmapSaveData/NoteType get_type()
    // Offset: 0x109A798
    GlobalNamespace::BeatmapSaveData::NoteType get_type();
    // public NoteCutDirection get_cutDirection()
    // Offset: 0x109A7A0
    GlobalNamespace::NoteCutDirection get_cutDirection();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, BeatmapSaveData/NoteType type, NoteCutDirection cutDirection)
    // Offset: 0x109A7A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::NoteData* New_ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::BeatmapSaveData::NoteType type, GlobalNamespace::NoteCutDirection cutDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::NoteData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::NoteData*, creationType>(time, lineIndex, lineLayer, type, cutDirection)));
    }
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0x109A804
    void MoveTime(float offset);
  }; // BeatmapSaveData/NoteData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::NoteData), 32 + sizeof(GlobalNamespace::NoteCutDirection)> __GlobalNamespace_BeatmapSaveData_NoteDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::NoteData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::NoteData*, "", "BeatmapSaveData/NoteData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::NoteData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapSaveData::NoteData::*)()>(&GlobalNamespace::BeatmapSaveData::NoteData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::NoteData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::NoteData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapSaveData::NoteData::*)()>(&GlobalNamespace::BeatmapSaveData::NoteData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::NoteData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::NoteData::get_lineLayer
// Il2CppName: get_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (GlobalNamespace::BeatmapSaveData::NoteData::*)()>(&GlobalNamespace::BeatmapSaveData::NoteData::get_lineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::NoteData*), "get_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::NoteData::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData::NoteType (GlobalNamespace::BeatmapSaveData::NoteData::*)()>(&GlobalNamespace::BeatmapSaveData::NoteData::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::NoteData*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::NoteData::get_cutDirection
// Il2CppName: get_cutDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutDirection (GlobalNamespace::BeatmapSaveData::NoteData::*)()>(&GlobalNamespace::BeatmapSaveData::NoteData::get_cutDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::NoteData*), "get_cutDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::NoteData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::NoteData::MoveTime
// Il2CppName: MoveTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapSaveData::NoteData::*)(float)>(&GlobalNamespace::BeatmapSaveData::NoteData::MoveTime)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::NoteData*), "MoveTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
