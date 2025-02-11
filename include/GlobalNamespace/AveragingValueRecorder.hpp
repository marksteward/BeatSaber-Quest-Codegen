// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: AveragingValueRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class AveragingValueRecorder : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AveragingValueRecorder::AverageValueData
    struct AverageValueData;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: AveragingValueRecorder/AverageValueData
    // [TokenAttribute] Offset: FFFFFFFF
    struct AverageValueData/*, public System::ValueType*/ {
      public:
      // private System.Single <value>k__BackingField
      // Size: 0x4
      // Offset: 0x0
      float value;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single <time>k__BackingField
      // Size: 0x4
      // Offset: 0x4
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Creating value type constructor for type: AverageValueData
      constexpr AverageValueData(float value_ = {}, float time_ = {}) noexcept : value{value_}, time{time_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field: private System.Single <value>k__BackingField
      float _get_$value$k__BackingField();
      // Set instance field: private System.Single <value>k__BackingField
      void _set_$value$k__BackingField(float value);
      // Get instance field: private System.Single <time>k__BackingField
      float _get_$time$k__BackingField();
      // Set instance field: private System.Single <time>k__BackingField
      void _set_$time$k__BackingField(float value);
      // public System.Single get_value()
      // Offset: 0xF7C310
      float get_value();
      // private System.Void set_value(System.Single value)
      // Offset: 0xF7C318
      void set_value(float value);
      // public System.Single get_time()
      // Offset: 0xF7C320
      float get_time();
      // private System.Void set_time(System.Single value)
      // Offset: 0xF7C328
      void set_time(float value);
      // public System.Void .ctor(System.Single value, System.Single time)
      // Offset: 0xF7C330
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  AverageValueData(float value, float time)
    }; // AveragingValueRecorder/AverageValueData
    #pragma pack(pop)
    static check_size<sizeof(AveragingValueRecorder::AverageValueData), 4 + sizeof(float)> __GlobalNamespace_AveragingValueRecorder_AverageValueDataSizeCheck;
    static_assert(sizeof(AveragingValueRecorder::AverageValueData) == 0x8);
    // private System.Single _averageWindowDuration
    // Size: 0x4
    // Offset: 0x10
    float averageWindowDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _historyValuesPerSecond
    // Size: 0x4
    // Offset: 0x14
    float historyValuesPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _historyValuesCount
    // Size: 0x4
    // Offset: 0x18
    int historyValuesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: historyValuesCount and: averageWindowValues
    char __padding2[0x4] = {};
    // private System.Collections.Generic.Queue`1<AveragingValueRecorder/AverageValueData> _averageWindowValues
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Queue_1<GlobalNamespace::AveragingValueRecorder::AverageValueData>* averageWindowValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<GlobalNamespace::AveragingValueRecorder::AverageValueData>*) == 0x8);
    // private System.Collections.Generic.Queue`1<System.Single> _historyValues
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Queue_1<float>* historyValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<float>*) == 0x8);
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x30
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _historyTime
    // Size: 0x4
    // Offset: 0x34
    float historyTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _averageValue
    // Size: 0x4
    // Offset: 0x38
    float averageValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _averageWindowValuesDuration
    // Size: 0x4
    // Offset: 0x3C
    float averageWindowValuesDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastValue
    // Size: 0x4
    // Offset: 0x40
    float lastValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AveragingValueRecorder
    AveragingValueRecorder(float averageWindowDuration_ = {}, float historyValuesPerSecond_ = {}, int historyValuesCount_ = {}, System::Collections::Generic::Queue_1<GlobalNamespace::AveragingValueRecorder::AverageValueData>* averageWindowValues_ = {}, System::Collections::Generic::Queue_1<float>* historyValues_ = {}, float time_ = {}, float historyTime_ = {}, float averageValue_ = {}, float averageWindowValuesDuration_ = {}, float lastValue_ = {}) noexcept : averageWindowDuration{averageWindowDuration_}, historyValuesPerSecond{historyValuesPerSecond_}, historyValuesCount{historyValuesCount_}, averageWindowValues{averageWindowValues_}, historyValues{historyValues_}, time{time_}, historyTime{historyTime_}, averageValue{averageValue_}, averageWindowValuesDuration{averageWindowValuesDuration_}, lastValue{lastValue_} {}
    // Get instance field: private System.Single _averageWindowDuration
    float _get__averageWindowDuration();
    // Set instance field: private System.Single _averageWindowDuration
    void _set__averageWindowDuration(float value);
    // Get instance field: private System.Single _historyValuesPerSecond
    float _get__historyValuesPerSecond();
    // Set instance field: private System.Single _historyValuesPerSecond
    void _set__historyValuesPerSecond(float value);
    // Get instance field: private System.Int32 _historyValuesCount
    int _get__historyValuesCount();
    // Set instance field: private System.Int32 _historyValuesCount
    void _set__historyValuesCount(int value);
    // Get instance field: private System.Collections.Generic.Queue`1<AveragingValueRecorder/AverageValueData> _averageWindowValues
    System::Collections::Generic::Queue_1<GlobalNamespace::AveragingValueRecorder::AverageValueData>* _get__averageWindowValues();
    // Set instance field: private System.Collections.Generic.Queue`1<AveragingValueRecorder/AverageValueData> _averageWindowValues
    void _set__averageWindowValues(System::Collections::Generic::Queue_1<GlobalNamespace::AveragingValueRecorder::AverageValueData>* value);
    // Get instance field: private System.Collections.Generic.Queue`1<System.Single> _historyValues
    System::Collections::Generic::Queue_1<float>* _get__historyValues();
    // Set instance field: private System.Collections.Generic.Queue`1<System.Single> _historyValues
    void _set__historyValues(System::Collections::Generic::Queue_1<float>* value);
    // Get instance field: private System.Single _time
    float _get__time();
    // Set instance field: private System.Single _time
    void _set__time(float value);
    // Get instance field: private System.Single _historyTime
    float _get__historyTime();
    // Set instance field: private System.Single _historyTime
    void _set__historyTime(float value);
    // Get instance field: private System.Single _averageValue
    float _get__averageValue();
    // Set instance field: private System.Single _averageValue
    void _set__averageValue(float value);
    // Get instance field: private System.Single _averageWindowValuesDuration
    float _get__averageWindowValuesDuration();
    // Set instance field: private System.Single _averageWindowValuesDuration
    void _set__averageWindowValuesDuration(float value);
    // Get instance field: private System.Single _lastValue
    float _get__lastValue();
    // Set instance field: private System.Single _lastValue
    void _set__lastValue(float value);
    // public System.Void .ctor(System.Single averageWindowDuration, System.Single historyWindowDuration, System.Single historyValuesPerSecond)
    // Offset: 0x1F35164
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AveragingValueRecorder* New_ctor(float averageWindowDuration, float historyWindowDuration, float historyValuesPerSecond) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AveragingValueRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AveragingValueRecorder*, creationType>(averageWindowDuration, historyWindowDuration, historyValuesPerSecond)));
    }
    // public System.Void Update(System.Single value, System.Single deltaTime)
    // Offset: 0x1F35270
    void Update(float value, float deltaTime);
    // public System.Single GetAverageValue()
    // Offset: 0x1F354A4
    float GetAverageValue();
    // public System.Single GetLastValue()
    // Offset: 0x1F354AC
    float GetLastValue();
    // public System.Collections.Generic.Queue`1<System.Single> GetHistoryValues()
    // Offset: 0x1F354B4
    System::Collections::Generic::Queue_1<float>* GetHistoryValues();
  }; // AveragingValueRecorder
  #pragma pack(pop)
  static check_size<sizeof(AveragingValueRecorder), 64 + sizeof(float)> __GlobalNamespace_AveragingValueRecorderSizeCheck;
  static_assert(sizeof(AveragingValueRecorder) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AveragingValueRecorder*, "", "AveragingValueRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AveragingValueRecorder::AverageValueData, "", "AveragingValueRecorder/AverageValueData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AveragingValueRecorder::*)(float, float)>(&GlobalNamespace::AveragingValueRecorder::Update)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, deltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::GetAverageValue
// Il2CppName: GetAverageValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AveragingValueRecorder::*)()>(&GlobalNamespace::AveragingValueRecorder::GetAverageValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "GetAverageValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::GetLastValue
// Il2CppName: GetLastValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AveragingValueRecorder::*)()>(&GlobalNamespace::AveragingValueRecorder::GetLastValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "GetLastValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::GetHistoryValues
// Il2CppName: GetHistoryValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Queue_1<float>* (GlobalNamespace::AveragingValueRecorder::*)()>(&GlobalNamespace::AveragingValueRecorder::GetHistoryValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "GetHistoryValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
