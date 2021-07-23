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
  // Forward declaring type: BeatmapObjectType
  struct BeatmapObjectType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectData : public ::Il2CppObject {
    public:
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <lineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapObjectData
    BeatmapObjectData(float time_ = {}, int lineIndex_ = {}) noexcept : time{time_}, lineIndex{lineIndex_} {}
    // Get instance field: private System.Single <time>k__BackingField
    float _get_$time$k__BackingField();
    // Set instance field: private System.Single <time>k__BackingField
    void _set_$time$k__BackingField(float value);
    // Get instance field: private System.Int32 <lineIndex>k__BackingField
    int _get_$lineIndex$k__BackingField();
    // Set instance field: private System.Int32 <lineIndex>k__BackingField
    void _set_$lineIndex$k__BackingField(int value);
    // public BeatmapObjectType get_beatmapObjectType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapObjectType get_beatmapObjectType();
    // public System.Single get_time()
    // Offset: 0x23B6B48
    float get_time();
    // private System.Void set_time(System.Single value)
    // Offset: 0x23B6B50
    void set_time(float value);
    // public System.Int32 get_lineIndex()
    // Offset: 0x23B6B58
    int get_lineIndex();
    // protected System.Void set_lineIndex(System.Int32 value)
    // Offset: 0x23B6B60
    void set_lineIndex(int value);
    // protected System.Void .ctor(System.Single time, System.Int32 lineIndex)
    // Offset: 0x23B6B68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectData* New_ctor(float time, int lineIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectData*, creationType>(time, lineIndex)));
    }
    // public System.Void MirrorLineIndex(System.Int32 lineCount)
    // Offset: 0x23B6BA4
    void MirrorLineIndex(int lineCount);
    // public System.Void MoveTime(System.Single newTime)
    // Offset: 0x23B6BB8
    void MoveTime(float newTime);
    // public BeatmapObjectData GetCopy()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapObjectData* GetCopy();
  }; // BeatmapObjectData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectData), 20 + sizeof(int)> __GlobalNamespace_BeatmapObjectDataSizeCheck;
  static_assert(sizeof(BeatmapObjectData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectData*, "", "BeatmapObjectData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::get_beatmapObjectType
// Il2CppName: get_beatmapObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectType (GlobalNamespace::BeatmapObjectData::*)()>(&GlobalNamespace::BeatmapObjectData::get_beatmapObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "get_beatmapObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectData::*)()>(&GlobalNamespace::BeatmapObjectData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectData::*)(float)>(&GlobalNamespace::BeatmapObjectData::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapObjectData::*)()>(&GlobalNamespace::BeatmapObjectData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::set_lineIndex
// Il2CppName: set_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectData::*)(int)>(&GlobalNamespace::BeatmapObjectData::set_lineIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "set_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::MirrorLineIndex
// Il2CppName: MirrorLineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectData::*)(int)>(&GlobalNamespace::BeatmapObjectData::MirrorLineIndex)> {
  static const MethodInfo* get() {
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "MirrorLineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::MoveTime
// Il2CppName: MoveTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectData::*)(float)>(&GlobalNamespace::BeatmapObjectData::MoveTime)> {
  static const MethodInfo* get() {
    static auto* newTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "MoveTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectData* (GlobalNamespace::BeatmapObjectData::*)()>(&GlobalNamespace::BeatmapObjectData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
