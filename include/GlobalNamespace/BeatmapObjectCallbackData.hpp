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
  // Forward declaring type: BeatmapObjectCallback
  class BeatmapObjectCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectCallbackData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectCallbackData : public ::Il2CppObject {
    public:
    // public System.Single aheadTime
    // Size: 0x4
    // Offset: 0x10
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: aheadTime and: nextObjectIndexInLine
    char __padding0[0x4] = {};
    // public System.Int32[] nextObjectIndexInLine
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* nextObjectIndexInLine;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // public readonly BeatmapObjectCallback callback
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectCallback* callback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallback*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectCallbackData
    BeatmapObjectCallbackData(float aheadTime_ = {}, ::Array<int>* nextObjectIndexInLine_ = {}, GlobalNamespace::BeatmapObjectCallback* callback_ = {}) noexcept : aheadTime{aheadTime_}, nextObjectIndexInLine{nextObjectIndexInLine_}, callback{callback_} {}
    // Get instance field: public System.Single aheadTime
    float _get_aheadTime();
    // Set instance field: public System.Single aheadTime
    void _set_aheadTime(float value);
    // Get instance field: public System.Int32[] nextObjectIndexInLine
    ::Array<int>* _get_nextObjectIndexInLine();
    // Set instance field: public System.Int32[] nextObjectIndexInLine
    void _set_nextObjectIndexInLine(::Array<int>* value);
    // Get instance field: public readonly BeatmapObjectCallback callback
    GlobalNamespace::BeatmapObjectCallback* _get_callback();
    // Set instance field: public readonly BeatmapObjectCallback callback
    void _set_callback(GlobalNamespace::BeatmapObjectCallback* value);
    // public System.Void .ctor(BeatmapObjectCallback callback, System.Single aheadTime, System.Int32 numberOfLines)
    // Offset: 0x1093300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectCallbackData* New_ctor(GlobalNamespace::BeatmapObjectCallback* callback, float aheadTime, int numberOfLines) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectCallbackData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectCallbackData*, creationType>(callback, aheadTime, numberOfLines)));
    }
  }; // BeatmapObjectCallbackData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectCallbackData), 32 + sizeof(GlobalNamespace::BeatmapObjectCallback*)> __GlobalNamespace_BeatmapObjectCallbackDataSizeCheck;
  static_assert(sizeof(BeatmapObjectCallbackData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectCallbackData*, "", "BeatmapObjectCallbackData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectCallbackData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
