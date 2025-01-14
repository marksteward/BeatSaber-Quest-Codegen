// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: OffsetDirection
#include "GlobalNamespace/OffsetDirection.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectType
  struct BeatmapObjectType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: WaypointData
  // [TokenAttribute] Offset: FFFFFFFF
  class WaypointData : public GlobalNamespace::BeatmapObjectData {
    public:
    // private OffsetDirection <offsetDirection>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OffsetDirection offsetDirection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OffsetDirection) == 0x4);
    // private NoteLineLayer <noteLineLayer>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineLayer) == 0x4);
    // Creating value type constructor for type: WaypointData
    WaypointData(GlobalNamespace::OffsetDirection offsetDirection_ = {}, GlobalNamespace::NoteLineLayer noteLineLayer_ = {}) noexcept : offsetDirection{offsetDirection_}, noteLineLayer{noteLineLayer_} {}
    // Get instance field: private OffsetDirection <offsetDirection>k__BackingField
    GlobalNamespace::OffsetDirection _get_$offsetDirection$k__BackingField();
    // Set instance field: private OffsetDirection <offsetDirection>k__BackingField
    void _set_$offsetDirection$k__BackingField(GlobalNamespace::OffsetDirection value);
    // Get instance field: private NoteLineLayer <noteLineLayer>k__BackingField
    GlobalNamespace::NoteLineLayer _get_$noteLineLayer$k__BackingField();
    // Set instance field: private NoteLineLayer <noteLineLayer>k__BackingField
    void _set_$noteLineLayer$k__BackingField(GlobalNamespace::NoteLineLayer value);
    // public OffsetDirection get_offsetDirection()
    // Offset: 0x23EFD34
    GlobalNamespace::OffsetDirection get_offsetDirection();
    // private System.Void set_offsetDirection(OffsetDirection value)
    // Offset: 0x23EFD3C
    void set_offsetDirection(GlobalNamespace::OffsetDirection value);
    // public NoteLineLayer get_noteLineLayer()
    // Offset: 0x23EFD44
    GlobalNamespace::NoteLineLayer get_noteLineLayer();
    // private System.Void set_noteLineLayer(NoteLineLayer value)
    // Offset: 0x23EFD4C
    void set_noteLineLayer(GlobalNamespace::NoteLineLayer value);
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer noteLineLayer, OffsetDirection offsetDirection)
    // Offset: 0x23EFDCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointData* New_ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::OffsetDirection offsetDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::WaypointData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointData*, creationType>(time, lineIndex, noteLineLayer, offsetDirection)));
    }
    // private System.Void MirrorTransformOffsetDirection()
    // Offset: 0x23EFE30
    void MirrorTransformOffsetDirection();
    // public override BeatmapObjectType get_beatmapObjectType()
    // Offset: 0x23EFD2C
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectType BeatmapObjectData::get_beatmapObjectType()
    GlobalNamespace::BeatmapObjectType get_beatmapObjectType();
    // public override BeatmapObjectData GetCopy()
    // Offset: 0x23EFD54
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectData BeatmapObjectData::GetCopy()
    GlobalNamespace::BeatmapObjectData* GetCopy();
    // public override System.Void MirrorLineIndex(System.Int32 lineCount)
    // Offset: 0x23EFE1C
    // Implemented from: BeatmapObjectData
    // Base method: System.Void BeatmapObjectData::MirrorLineIndex(System.Int32 lineCount)
    void MirrorLineIndex(int lineCount);
  }; // WaypointData
  #pragma pack(pop)
  static check_size<sizeof(WaypointData), 28 + sizeof(GlobalNamespace::NoteLineLayer)> __GlobalNamespace_WaypointDataSizeCheck;
  static_assert(sizeof(WaypointData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointData*, "", "WaypointData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::get_offsetDirection
// Il2CppName: get_offsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OffsetDirection (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::get_offsetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "get_offsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::set_offsetDirection
// Il2CppName: set_offsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)(GlobalNamespace::OffsetDirection)>(&GlobalNamespace::WaypointData::set_offsetDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OffsetDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "set_offsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::get_noteLineLayer
// Il2CppName: get_noteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::get_noteLineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "get_noteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::set_noteLineLayer
// Il2CppName: set_noteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)(GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::WaypointData::set_noteLineLayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "set_noteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::MirrorTransformOffsetDirection
// Il2CppName: MirrorTransformOffsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::MirrorTransformOffsetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "MirrorTransformOffsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::get_beatmapObjectType
// Il2CppName: get_beatmapObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectType (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::get_beatmapObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "get_beatmapObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectData* (GlobalNamespace::WaypointData::*)()>(&GlobalNamespace::WaypointData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointData::MirrorLineIndex
// Il2CppName: MirrorLineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointData::*)(int)>(&GlobalNamespace::WaypointData::MirrorLineIndex)> {
  static const MethodInfo* get() {
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointData*), "MirrorLineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineCount});
  }
};
