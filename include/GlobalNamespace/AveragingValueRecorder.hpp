// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AveragingValueRecorder
  class AveragingValueRecorder : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AveragingValueRecorder::AverageValueData
    struct AverageValueData;
    // Autogenerated type: AveragingValueRecorder/AverageValueData
    struct AverageValueData : public System::ValueType {
      public:
      // private System.Single <value>k__BackingField
      // Offset: 0x0
      float value;
      // private System.Single <time>k__BackingField
      // Offset: 0x4
      float time;
      // Creating value type constructor for type: AverageValueData
      constexpr AverageValueData(float value_ = {}, float time_ = {}) : value{value_}, time{time_} {}
      // public System.Single get_value()
      // Offset: 0xA2BE10
      float get_value();
      // private System.Void set_value(System.Single value)
      // Offset: 0xA2BE18
      void set_value(float value);
      // public System.Single get_time()
      // Offset: 0xA2BE20
      float get_time();
      // private System.Void set_time(System.Single value)
      // Offset: 0xA2BE28
      void set_time(float value);
      // public System.Void .ctor(System.Single value, System.Single time)
      // Offset: 0xA2BE30
      static AveragingValueRecorder::AverageValueData* New_ctor(float value, float time);
    }; // AveragingValueRecorder/AverageValueData
    // private System.Single _averageWindowDuration
    // Offset: 0x10
    float averageWindowDuration;
    // private System.Single _historyValuesPerSecond
    // Offset: 0x14
    float historyValuesPerSecond;
    // private System.Int32 _historyValuesCount
    // Offset: 0x18
    int historyValuesCount;
    // private System.Collections.Generic.Queue`1<AveragingValueRecorder/AverageValueData> _averageWindowValues
    // Offset: 0x20
    System::Collections::Generic::Queue_1<GlobalNamespace::AveragingValueRecorder::AverageValueData>* averageWindowValues;
    // private System.Collections.Generic.Queue`1<System.Single> _historyValues
    // Offset: 0x28
    System::Collections::Generic::Queue_1<float>* historyValues;
    // private System.Single _time
    // Offset: 0x30
    float time;
    // private System.Single _historyTime
    // Offset: 0x34
    float historyTime;
    // private System.Single _averageValue
    // Offset: 0x38
    float averageValue;
    // private System.Single _averageWindowValuesDuration
    // Offset: 0x3C
    float averageWindowValuesDuration;
    // private System.Single _lastValue
    // Offset: 0x40
    float lastValue;
    // public System.Void .ctor(System.Single averageWindowDuration, System.Single historyWindowDuration, System.Single historyValuesPerSecond)
    // Offset: 0xB8B678
    static AveragingValueRecorder* New_ctor(float averageWindowDuration, float historyWindowDuration, float historyValuesPerSecond);
    // public System.Void Update(System.Single value, System.Single deltaTime)
    // Offset: 0xB8B798
    void Update(float value, float deltaTime);
    // public System.Single GetAverageValue()
    // Offset: 0xB8B9CC
    float GetAverageValue();
    // public System.Single GetLastValue()
    // Offset: 0xB8B9D4
    float GetLastValue();
    // public System.Collections.Generic.Queue`1<System.Single> GetHistoryValues()
    // Offset: 0xB8B9DC
    System::Collections::Generic::Queue_1<float>* GetHistoryValues();
  }; // AveragingValueRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AveragingValueRecorder*, "", "AveragingValueRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AveragingValueRecorder::AverageValueData, "", "AveragingValueRecorder/AverageValueData");
#pragma pack(pop)
