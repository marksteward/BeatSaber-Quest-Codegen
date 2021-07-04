// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SaberSwingRating
  class SaberSwingRating : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SaberSwingRating
    SaberSwingRating() noexcept {}
    // static field const value: static public System.Single kMaxNormalAngleDiff
    static constexpr const float kMaxNormalAngleDiff = 90;
    // Get static field: static public System.Single kMaxNormalAngleDiff
    static float _get_kMaxNormalAngleDiff();
    // Set static field: static public System.Single kMaxNormalAngleDiff
    static void _set_kMaxNormalAngleDiff(float value);
    // static field const value: static public System.Single kToleranceNormalAngleDiff
    static constexpr const float kToleranceNormalAngleDiff = 75;
    // Get static field: static public System.Single kToleranceNormalAngleDiff
    static float _get_kToleranceNormalAngleDiff();
    // Set static field: static public System.Single kToleranceNormalAngleDiff
    static void _set_kToleranceNormalAngleDiff(float value);
    // static field const value: static public System.Single kMaxBeforeCutSwingDuration
    static constexpr const float kMaxBeforeCutSwingDuration = 0.4;
    // Get static field: static public System.Single kMaxBeforeCutSwingDuration
    static float _get_kMaxBeforeCutSwingDuration();
    // Set static field: static public System.Single kMaxBeforeCutSwingDuration
    static void _set_kMaxBeforeCutSwingDuration(float value);
    // static field const value: static public System.Single kMaxAfterCutSwingDuration
    static constexpr const float kMaxAfterCutSwingDuration = 0.4;
    // Get static field: static public System.Single kMaxAfterCutSwingDuration
    static float _get_kMaxAfterCutSwingDuration();
    // Set static field: static public System.Single kMaxAfterCutSwingDuration
    static void _set_kMaxAfterCutSwingDuration(float value);
    // static field const value: static public System.Single kBeforeCutAngleFor1Rating
    static constexpr const float kBeforeCutAngleFor1Rating = 100;
    // Get static field: static public System.Single kBeforeCutAngleFor1Rating
    static float _get_kBeforeCutAngleFor1Rating();
    // Set static field: static public System.Single kBeforeCutAngleFor1Rating
    static void _set_kBeforeCutAngleFor1Rating(float value);
    // static field const value: static public System.Single kAfterCutAngleFor1Rating
    static constexpr const float kAfterCutAngleFor1Rating = 60;
    // Get static field: static public System.Single kAfterCutAngleFor1Rating
    static float _get_kAfterCutAngleFor1Rating();
    // Set static field: static public System.Single kAfterCutAngleFor1Rating
    static void _set_kAfterCutAngleFor1Rating(float value);
    // static private System.Single NormalRating(System.Single normalDiff)
    // Offset: 0x10D05B4
    static float NormalRating(float normalDiff);
    // static public System.Single BeforeCutStepRating(System.Single angleDiff, System.Single normalDiff)
    // Offset: 0x10D030C
    static float BeforeCutStepRating(float angleDiff, float normalDiff);
    // static public System.Single AfterCutStepRating(System.Single angleDiff, System.Single normalDiff)
    // Offset: 0x10D0648
    static float AfterCutStepRating(float angleDiff, float normalDiff);
  }; // SaberSwingRating
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRating*, "", "SaberSwingRating");
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRating::NormalRating
// Il2CppName: NormalRating
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRating::BeforeCutStepRating
// Il2CppName: BeforeCutStepRating
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRating::AfterCutStepRating
// Il2CppName: AfterCutStepRating
// Cannot perform method pointer template specialization from operators!
