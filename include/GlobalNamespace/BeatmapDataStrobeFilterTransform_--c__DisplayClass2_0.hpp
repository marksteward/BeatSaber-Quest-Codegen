// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDataStrobeFilterTransform
#include "GlobalNamespace/BeatmapDataStrobeFilterTransform.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataStrobeFilterTransform/<>c__DisplayClass2_0
  // [CompilerGeneratedAttribute] Offset: D316CC
  struct BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0/*, public System::ValueType*/ {
    public:
    // public System.Collections.Generic.Dictionary`2<BeatmapEventType,BeatmapDataStrobeFilterTransform/StrobeStreakData> strobesDictionary
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapEventType, GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*>* strobesDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapEventType, GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    constexpr $$c__DisplayClass2_0(System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapEventType, GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*>* strobesDictionary_ = {}) noexcept : strobesDictionary{strobesDictionary_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapEventType, GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*>*
    constexpr operator System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapEventType, GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*>*() const noexcept {
      return strobesDictionary;
    }
  }; // BeatmapDataStrobeFilterTransform/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0), 0 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapEventType, GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData*>*)> __GlobalNamespace_BeatmapDataStrobeFilterTransform_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0, "", "BeatmapDataStrobeFilterTransform/<>c__DisplayClass2_0");
