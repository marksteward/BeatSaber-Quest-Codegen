// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHaptics/OVRHapticsOutput
#include "GlobalNamespace/OVRHaptics_OVRHapticsOutput.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRHapticsClip
  class OVRHapticsClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
  // [] Offset: FFFFFFFF
  class OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD87518
    // private System.Int32 <ReadCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int ReadCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ReadCount and: Clip
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD87528
    // private OVRHapticsClip <Clip>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRHapticsClip* Clip;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRHapticsClip*) == 0x8);
    // Creating value type constructor for type: ClipPlaybackTracker
    ClipPlaybackTracker(int ReadCount_ = {}, GlobalNamespace::OVRHapticsClip* Clip_ = {}) noexcept : ReadCount{ReadCount_}, Clip{Clip_} {}
    // public System.Int32 get_ReadCount()
    // Offset: 0x11BA1B0
    int get_ReadCount();
    // public System.Void set_ReadCount(System.Int32 value)
    // Offset: 0x11BA1B8
    void set_ReadCount(int value);
    // public OVRHapticsClip get_Clip()
    // Offset: 0x11BA1C0
    GlobalNamespace::OVRHapticsClip* get_Clip();
    // public System.Void set_Clip(OVRHapticsClip value)
    // Offset: 0x11BA1C8
    void set_Clip(GlobalNamespace::OVRHapticsClip* value);
    // public System.Void .ctor(OVRHapticsClip clip)
    // Offset: 0x11B9F24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker* New_ctor(GlobalNamespace::OVRHapticsClip* clip) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*, creationType>(clip)));
    }
  }; // OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
  static check_size<sizeof(OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker), 24 + sizeof(GlobalNamespace::OVRHapticsClip*)> __GlobalNamespace_OVRHaptics_OVRHapticsOutput_ClipPlaybackTrackerSizeCheck;
  static_assert(sizeof(OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*, "", "OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker");
