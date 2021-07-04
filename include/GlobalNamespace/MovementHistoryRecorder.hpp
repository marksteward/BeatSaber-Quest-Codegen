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
  // Forward declaring type: AveragingValueRecorder
  class AveragingValueRecorder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MovementHistoryRecorder
  class MovementHistoryRecorder : public ::Il2CppObject {
    public:
    // private AveragingValueRecorder _averagingValueRecorer
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::AveragingValueRecorder* averagingValueRecorer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AveragingValueRecorder*) == 0x8);
    // private System.Single _increaseSpeed
    // Size: 0x4
    // Offset: 0x18
    float increaseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _decreaseSpeed
    // Size: 0x4
    // Offset: 0x1C
    float decreaseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _accum
    // Size: 0x4
    // Offset: 0x20
    float accum;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MovementHistoryRecorder
    MovementHistoryRecorder(GlobalNamespace::AveragingValueRecorder* averagingValueRecorer_ = {}, float increaseSpeed_ = {}, float decreaseSpeed_ = {}, float accum_ = {}) noexcept : averagingValueRecorer{averagingValueRecorer_}, increaseSpeed{increaseSpeed_}, decreaseSpeed{decreaseSpeed_}, accum{accum_} {}
    // public AveragingValueRecorder get_averagingValueRecorer()
    // Offset: 0x1144C78
    GlobalNamespace::AveragingValueRecorder* get_averagingValueRecorer();
    // public System.Void .ctor(System.Single averageWindowDuration, System.Single historyValuesPerSecond, System.Single increaseSpeed, System.Single decreaseSpeed)
    // Offset: 0x1144C80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovementHistoryRecorder* New_ctor(float averageWindowDuration, float historyValuesPerSecond, float increaseSpeed, float decreaseSpeed) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MovementHistoryRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovementHistoryRecorder*, creationType>(averageWindowDuration, historyValuesPerSecond, increaseSpeed, decreaseSpeed)));
    }
    // public System.Void AddMovement(System.Single distance)
    // Offset: 0x1144D1C
    void AddMovement(float distance);
    // public System.Void ManualUpdate(System.Single deltaTime)
    // Offset: 0x1144DB8
    void ManualUpdate(float deltaTime);
  }; // MovementHistoryRecorder
  #pragma pack(pop)
  static check_size<sizeof(MovementHistoryRecorder), 32 + sizeof(float)> __GlobalNamespace_MovementHistoryRecorderSizeCheck;
  static_assert(sizeof(MovementHistoryRecorder) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MovementHistoryRecorder*, "", "MovementHistoryRecorder");
// Writing MetadataGetter for method: GlobalNamespace::MovementHistoryRecorder::get_averagingValueRecorer
// Il2CppName: get_averagingValueRecorer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MovementHistoryRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MovementHistoryRecorder::AddMovement
// Il2CppName: AddMovement
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MovementHistoryRecorder::ManualUpdate
// Il2CppName: ManualUpdate
// Cannot perform method pointer template specialization from operators!
