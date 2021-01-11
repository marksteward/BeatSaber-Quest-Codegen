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
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ScoreModel
  // [] Offset: FFFFFFFF
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
    // Offset: 0xFC7CA4
    static int MaxRawScoreForNumberOfNotes(int noteCount);
    // static public System.Void RawScoreWithoutMultiplier(NoteCutInfo noteCutInfo, out System.Int32 beforeCutRawScore, out System.Int32 afterCutRawScore, out System.Int32 cutDistanceRawScore)
    // Offset: 0xFC8524
    static void RawScoreWithoutMultiplier(GlobalNamespace::NoteCutInfo* noteCutInfo, int& beforeCutRawScore, int& afterCutRawScore, int& cutDistanceRawScore);
    // static public System.Int32 GetModifiedScoreForGameplayModifiersScoreMultiplier(System.Int32 rawScore, System.Single gameplayModifiersScoreMultiplier)
    // Offset: 0xFC7450
    static int GetModifiedScoreForGameplayModifiersScoreMultiplier(int rawScore, float gameplayModifiersScoreMultiplier);
    // public System.Void .ctor()
    // Offset: 0xFC8768
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreModel*, creationType>()));
    }
  }; // ScoreModel
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreModel*, "", "ScoreModel");
