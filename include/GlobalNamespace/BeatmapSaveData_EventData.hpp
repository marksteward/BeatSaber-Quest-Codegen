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
// Including type: BeatmapSaveData/BeatmapEventType
#include "GlobalNamespace/BeatmapSaveData_BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/EventData
  class BeatmapSaveData::EventData : public ::Il2CppObject/*, public GlobalNamespace::BeatmapSaveData::ITime*/ {
    public:
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapSaveData/BeatmapEventType _type
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::BeatmapSaveData::BeatmapEventType type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapSaveData::BeatmapEventType) == 0x4);
    // private System.Int32 _value
    // Size: 0x4
    // Offset: 0x18
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventData
    EventData(float time_ = {}, GlobalNamespace::BeatmapSaveData::BeatmapEventType type_ = {}, int value_ = {}) noexcept : time{time_}, type{type_}, value{value_} {}
    // Creating interface conversion operator: operator GlobalNamespace::BeatmapSaveData::ITime
    operator GlobalNamespace::BeatmapSaveData::ITime() noexcept {
      return *reinterpret_cast<GlobalNamespace::BeatmapSaveData::ITime*>(this);
    }
    // public System.Single get_time()
    // Offset: 0x110DDAC
    float get_time();
    // public BeatmapSaveData/BeatmapEventType get_type()
    // Offset: 0x110DDB4
    GlobalNamespace::BeatmapSaveData::BeatmapEventType get_type();
    // public System.Int32 get_value()
    // Offset: 0x110DDBC
    int get_value();
    // public System.Void .ctor(System.Single time, BeatmapSaveData/BeatmapEventType type, System.Int32 value)
    // Offset: 0x110DDC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::EventData* New_ctor(float time, GlobalNamespace::BeatmapSaveData::BeatmapEventType type, int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::EventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::EventData*, creationType>(time, type, value)));
    }
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0x110DE0C
    void MoveTime(float offset);
  }; // BeatmapSaveData/EventData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::EventData), 24 + sizeof(int)> __GlobalNamespace_BeatmapSaveData_EventDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::EventData) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::EventData*, "", "BeatmapSaveData/EventData");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::EventData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapSaveData::EventData::*)()>(&GlobalNamespace::BeatmapSaveData::EventData::get_time)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::EventData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::EventData::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData::BeatmapEventType (GlobalNamespace::BeatmapSaveData::EventData::*)()>(&GlobalNamespace::BeatmapSaveData::EventData::get_type)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::EventData*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::EventData::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapSaveData::EventData::*)()>(&GlobalNamespace::BeatmapSaveData::EventData::get_value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::EventData*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::EventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::EventData::MoveTime
// Il2CppName: MoveTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapSaveData::EventData::*)(float)>(&GlobalNamespace::BeatmapSaveData::EventData::MoveTime)> {
  const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::EventData*), "MoveTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
