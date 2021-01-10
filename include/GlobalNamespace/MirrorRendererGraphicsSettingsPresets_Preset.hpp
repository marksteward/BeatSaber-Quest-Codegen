// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MirrorRendererGraphicsSettingsPresets
#include "GlobalNamespace/MirrorRendererGraphicsSettingsPresets.hpp"
// Including type: NamedPreset
#include "GlobalNamespace/NamedPreset.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  // Autogenerated type: MirrorRendererGraphicsSettingsPresets/Preset
  // [] Offset: FFFFFFFF
  class MirrorRendererGraphicsSettingsPresets::Preset : public GlobalNamespace::NamedPreset {
    public:
    // public UnityEngine.LayerMask reflectLayers
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::LayerMask reflectLayers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // public System.Int32 stereoTextureWidth
    // Size: 0x4
    // Offset: 0x1C
    int stereoTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stereoTextureHeight
    // Size: 0x4
    // Offset: 0x20
    int stereoTextureHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 monoTextureWidth
    // Size: 0x4
    // Offset: 0x24
    int monoTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 monoTextureHeight
    // Size: 0x4
    // Offset: 0x28
    int monoTextureHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxAntiAliasing
    // Size: 0x4
    // Offset: 0x2C
    int maxAntiAliasing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean enableBloomPrePassFog
    // Size: 0x1
    // Offset: 0x30
    bool enableBloomPrePassFog;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Preset
    Preset(UnityEngine::LayerMask reflectLayers_ = {}, int stereoTextureWidth_ = {}, int stereoTextureHeight_ = {}, int monoTextureWidth_ = {}, int monoTextureHeight_ = {}, int maxAntiAliasing_ = {}, bool enableBloomPrePassFog_ = {}) noexcept : reflectLayers{reflectLayers_}, stereoTextureWidth{stereoTextureWidth_}, stereoTextureHeight{stereoTextureHeight_}, monoTextureWidth{monoTextureWidth_}, monoTextureHeight{monoTextureHeight_}, maxAntiAliasing{maxAntiAliasing_}, enableBloomPrePassFog{enableBloomPrePassFog_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1A73FC4
    // Implemented from: NamedPreset
    // Base method: System.Void NamedPreset::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirrorRendererGraphicsSettingsPresets::Preset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirrorRendererGraphicsSettingsPresets::Preset*, creationType>()));
    }
  }; // MirrorRendererGraphicsSettingsPresets/Preset
  static check_size<sizeof(MirrorRendererGraphicsSettingsPresets::Preset), 48 + sizeof(bool)> __GlobalNamespace_MirrorRendererGraphicsSettingsPresets_PresetSizeCheck;
  static_assert(sizeof(MirrorRendererGraphicsSettingsPresets::Preset) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*, "", "MirrorRendererGraphicsSettingsPresets/Preset");
#pragma pack(pop)
