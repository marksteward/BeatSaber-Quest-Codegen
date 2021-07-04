// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ScoreModel
  class ScoreModel : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ScoreModel
    ScoreModel() noexcept {}
    // static field const value: static public System.Int32 kMaxMultiplier
    static constexpr const int kMaxMultiplier = 8;
    // Get static field: static public System.Int32 kMaxMultiplier
    static int _get_kMaxMultiplier();
    // Set static field: static public System.Int32 kMaxMultiplier
    static void _set_kMaxMultiplier(int value);
    // static field const value: static public System.Int32 kMaxBeforeCutSwingRawScore
    static constexpr const int kMaxBeforeCutSwingRawScore = 70;
    // Get static field: static public System.Int32 kMaxBeforeCutSwingRawScore
    static int _get_kMaxBeforeCutSwingRawScore();
    // Set static field: static public System.Int32 kMaxBeforeCutSwingRawScore
    static void _set_kMaxBeforeCutSwingRawScore(int value);
    // static field const value: static public System.Int32 kMaxCutDistanceRawScore
    static constexpr const int kMaxCutDistanceRawScore = 15;
    // Get static field: static public System.Int32 kMaxCutDistanceRawScore
    static int _get_kMaxCutDistanceRawScore();
    // Set static field: static public System.Int32 kMaxCutDistanceRawScore
    static void _set_kMaxCutDistanceRawScore(int value);
    // static field const value: static public System.Int32 kMaxAfterCutSwingRawScore
    static constexpr const int kMaxAfterCutSwingRawScore = 30;
    // Get static field: static public System.Int32 kMaxAfterCutSwingRawScore
    static int _get_kMaxAfterCutSwingRawScore();
    // Set static field: static public System.Int32 kMaxAfterCutSwingRawScore
    static void _set_kMaxAfterCutSwingRawScore(int value);
    // static field const value: static public System.Int32 kMaxCutRawScore
    static constexpr const int kMaxCutRawScore = 115;
    // Get static field: static public System.Int32 kMaxCutRawScore
    static int _get_kMaxCutRawScore();
    // Set static field: static public System.Int32 kMaxCutRawScore
    static void _set_kMaxCutRawScore(int value);
    // static field const value: static private System.Single kSwingScorePart
    static constexpr const float kSwingScorePart = 0.7;
    // Get static field: static private System.Single kSwingScorePart
    static float _get_kSwingScorePart();
    // Set static field: static private System.Single kSwingScorePart
    static void _set_kSwingScorePart(float value);
    // static field const value: static private System.Single kDistanceToCenterScorePart
    static constexpr const float kDistanceToCenterScorePart = 0.3;
    // Get static field: static private System.Single kDistanceToCenterScorePart
    static float _get_kDistanceToCenterScorePart();
    // Set static field: static private System.Single kDistanceToCenterScorePart
    static void _set_kDistanceToCenterScorePart(float value);
    // static field const value: static private System.Single kMaxDistanceForDistanceToCenterScore
    static constexpr const float kMaxDistanceForDistanceToCenterScore = 0.3;
    // Get static field: static private System.Single kMaxDistanceForDistanceToCenterScore
    static float _get_kMaxDistanceForDistanceToCenterScore();
    // Set static field: static private System.Single kMaxDistanceForDistanceToCenterScore
    static void _set_kMaxDistanceForDistanceToCenterScore(float value);
    // static public System.Int32 MaxRawScoreForNumberOfNotes(System.Int32 noteCount)
    // Offset: 0x10D7490
    static int MaxRawScoreForNumberOfNotes(int noteCount);
    // static public System.Void RawScoreWithoutMultiplier(ISaberSwingRatingCounter saberSwingRatingCounter, System.Single cutDistanceToCenter, out System.Int32 beforeCutRawScore, out System.Int32 afterCutRawScore, out System.Int32 cutDistanceRawScore)
    // Offset: 0x10D7DDC
    static void RawScoreWithoutMultiplier(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter, float cutDistanceToCenter, int& beforeCutRawScore, int& afterCutRawScore, int& cutDistanceRawScore);
    // static public System.Int32 GetModifiedScoreForGameplayModifiersScoreMultiplier(System.Int32 rawScore, System.Single gameplayModifiersScoreMultiplier)
    // Offset: 0x10D6B0C
    static int GetModifiedScoreForGameplayModifiersScoreMultiplier(int rawScore, float gameplayModifiersScoreMultiplier);
    // public System.Void .ctor()
    // Offset: 0x10D7FE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreModel*, creationType>()));
    }
  }; // ScoreModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreModel*, "", "ScoreModel");
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::MaxRawScoreForNumberOfNotes
// Il2CppName: MaxRawScoreForNumberOfNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::ScoreModel::MaxRawScoreForNumberOfNotes)> {
  const MethodInfo* get() {
    static auto* noteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel*), "MaxRawScoreForNumberOfNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::RawScoreWithoutMultiplier
// Il2CppName: RawScoreWithoutMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::ISaberSwingRatingCounter*, float, int&, int&, int&)>(&GlobalNamespace::ScoreModel::RawScoreWithoutMultiplier)> {
  const MethodInfo* get() {
    static auto* saberSwingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    static auto* cutDistanceToCenter = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* beforeCutRawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* afterCutRawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* cutDistanceRawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel*), "RawScoreWithoutMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberSwingRatingCounter, cutDistanceToCenter, beforeCutRawScore, afterCutRawScore, cutDistanceRawScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier
// Il2CppName: GetModifiedScoreForGameplayModifiersScoreMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, float)>(&GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier)> {
  const MethodInfo* get() {
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gameplayModifiersScoreMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreModel*), "GetModifiedScoreForGameplayModifiersScoreMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawScore, gameplayModifiersScoreMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
