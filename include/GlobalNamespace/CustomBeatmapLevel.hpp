// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CustomPreviewBeatmapLevel
#include "GlobalNamespace/CustomPreviewBeatmapLevel.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelData
  class BeatmapLevelData;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: CustomBeatmapLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomBeatmapLevel : public GlobalNamespace::CustomPreviewBeatmapLevel/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // private BeatmapLevelData _beatmapLevelData
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::BeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelData*) == 0x8);
    // Creating value type constructor for type: CustomBeatmapLevel
    CustomBeatmapLevel(GlobalNamespace::BeatmapLevelData* beatmapLevelData_ = {}) noexcept : beatmapLevelData{beatmapLevelData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::BeatmapLevelData*
    constexpr operator GlobalNamespace::BeatmapLevelData*() const noexcept {
      return beatmapLevelData;
    }
    // Get instance field: private BeatmapLevelData _beatmapLevelData
    GlobalNamespace::BeatmapLevelData* _get__beatmapLevelData();
    // Set instance field: private BeatmapLevelData _beatmapLevelData
    void _set__beatmapLevelData(GlobalNamespace::BeatmapLevelData* value);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x1084B2C
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.Void .ctor(CustomPreviewBeatmapLevel customPreviewBeatmapLevel, UnityEngine.AudioClip previewAudioClip)
    // Offset: 0x1084B34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomBeatmapLevel* New_ctor(GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel, UnityEngine::AudioClip* previewAudioClip) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomBeatmapLevel*, creationType>(customPreviewBeatmapLevel, previewAudioClip)));
    }
    // public System.Void SetBeatmapLevelData(BeatmapLevelData beatmapLevelData)
    // Offset: 0x1084CF4
    void SetBeatmapLevelData(GlobalNamespace::BeatmapLevelData* beatmapLevelData);
  }; // CustomBeatmapLevel
  #pragma pack(pop)
  static check_size<sizeof(CustomBeatmapLevel), 168 + sizeof(GlobalNamespace::BeatmapLevelData*)> __GlobalNamespace_CustomBeatmapLevelSizeCheck;
  static_assert(sizeof(CustomBeatmapLevel) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevel*, "", "CustomBeatmapLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData
// Il2CppName: get_beatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelData* (GlobalNamespace::CustomBeatmapLevel::*)()>(&GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevel*), "get_beatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData
// Il2CppName: SetBeatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomBeatmapLevel::*)(GlobalNamespace::BeatmapLevelData*)>(&GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevel*), "SetBeatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData});
  }
};
