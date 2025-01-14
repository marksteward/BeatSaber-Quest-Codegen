// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.LightmapBakeType
#include "UnityEngine/LightmapBakeType.hpp"
// Including type: UnityEngine.LightmapsMode
#include "UnityEngine/LightmapsMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Skipping declaration: LightmapMixedBakeModes because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MixedLightingMode
  struct MixedLightingMode;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures
  // [TokenAttribute] Offset: FFFFFFFF
  class SupportedRenderingFeatures : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes
    struct ReflectionProbeModes;
    // Nested type: UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes
    struct LightmapMixedBakeModes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct ReflectionProbeModes/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ReflectionProbeModes
      constexpr ReflectionProbeModes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes None
      static UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes _get_None();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes None
      static void _set_None(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes Rotation
      static constexpr const int Rotation = 1;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes Rotation
      static UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes _get_Rotation();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes Rotation
      static void _set_Rotation(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes
    #pragma pack(pop)
    static check_size<sizeof(SupportedRenderingFeatures::ReflectionProbeModes), 0 + sizeof(int)> __UnityEngine_Rendering_SupportedRenderingFeatures_ReflectionProbeModesSizeCheck;
    static_assert(sizeof(SupportedRenderingFeatures::ReflectionProbeModes) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct LightmapMixedBakeModes/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LightmapMixedBakeModes
      constexpr LightmapMixedBakeModes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes None
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_None();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes None
      static void _set_None(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes IndirectOnly
      static constexpr const int IndirectOnly = 1;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes IndirectOnly
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_IndirectOnly();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes IndirectOnly
      static void _set_IndirectOnly(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes Subtractive
      static constexpr const int Subtractive = 2;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes Subtractive
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_Subtractive();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes Subtractive
      static void _set_Subtractive(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes Shadowmask
      static constexpr const int Shadowmask = 4;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes Shadowmask
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_Shadowmask();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes Shadowmask
      static void _set_Shadowmask(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes
    #pragma pack(pop)
    static check_size<sizeof(SupportedRenderingFeatures::LightmapMixedBakeModes), 0 + sizeof(int)> __UnityEngine_Rendering_SupportedRenderingFeatures_LightmapMixedBakeModesSizeCheck;
    static_assert(sizeof(SupportedRenderingFeatures::LightmapMixedBakeModes) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2EFF4
    // private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes <reflectionProbeModes>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes reflectionProbeModes;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F030
    // private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes <defaultMixedLightingModes>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes defaultMixedLightingModes;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F06C
    // private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes <mixedLightingModes>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes mixedLightingModes;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F0A8
    // private UnityEngine.LightmapBakeType <lightmapBakeTypes>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::LightmapBakeType lightmapBakeTypes;
    // Field size check
    static_assert(sizeof(UnityEngine::LightmapBakeType) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F0E4
    // private UnityEngine.LightmapsMode <lightmapsModes>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::LightmapsMode lightmapsModes;
    // Field size check
    static_assert(sizeof(UnityEngine::LightmapsMode) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F120
    // private System.Boolean <enlighten>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool enlighten;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F15C
    // private System.Boolean <lightProbeProxyVolumes>k__BackingField
    // Size: 0x1
    // Offset: 0x25
    bool lightProbeProxyVolumes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F198
    // private System.Boolean <motionVectors>k__BackingField
    // Size: 0x1
    // Offset: 0x26
    bool motionVectors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F1D4
    // private System.Boolean <receiveShadows>k__BackingField
    // Size: 0x1
    // Offset: 0x27
    bool receiveShadows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F210
    // private System.Boolean <reflectionProbes>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool reflectionProbes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F24C
    // private System.Boolean <rendererPriority>k__BackingField
    // Size: 0x1
    // Offset: 0x29
    bool rendererPriority;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F288
    // private System.Boolean <terrainDetailUnsupported>k__BackingField
    // Size: 0x1
    // Offset: 0x2A
    bool terrainDetailUnsupported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F2C4
    // private System.Boolean <overridesEnvironmentLighting>k__BackingField
    // Size: 0x1
    // Offset: 0x2B
    bool overridesEnvironmentLighting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F300
    // private System.Boolean <overridesFog>k__BackingField
    // Size: 0x1
    // Offset: 0x2C
    bool overridesFog;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F33C
    // private System.Boolean <overridesOtherLightingSettings>k__BackingField
    // Size: 0x1
    // Offset: 0x2D
    bool overridesOtherLightingSettings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F378
    // private System.Boolean <editableMaterialRenderQueue>k__BackingField
    // Size: 0x1
    // Offset: 0x2E
    bool editableMaterialRenderQueue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F3B4
    // private System.Boolean <overridesLODBias>k__BackingField
    // Size: 0x1
    // Offset: 0x2F
    bool overridesLODBias;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xE2F3F0
    // private System.Boolean <overridesMaximumLODLevel>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool overridesMaximumLODLevel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SupportedRenderingFeatures
    SupportedRenderingFeatures(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes reflectionProbeModes_ = {}, UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes defaultMixedLightingModes_ = {}, UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes mixedLightingModes_ = {}, UnityEngine::LightmapBakeType lightmapBakeTypes_ = {}, UnityEngine::LightmapsMode lightmapsModes_ = {}, bool enlighten_ = {}, bool lightProbeProxyVolumes_ = {}, bool motionVectors_ = {}, bool receiveShadows_ = {}, bool reflectionProbes_ = {}, bool rendererPriority_ = {}, bool terrainDetailUnsupported_ = {}, bool overridesEnvironmentLighting_ = {}, bool overridesFog_ = {}, bool overridesOtherLightingSettings_ = {}, bool editableMaterialRenderQueue_ = {}, bool overridesLODBias_ = {}, bool overridesMaximumLODLevel_ = {}) noexcept : reflectionProbeModes{reflectionProbeModes_}, defaultMixedLightingModes{defaultMixedLightingModes_}, mixedLightingModes{mixedLightingModes_}, lightmapBakeTypes{lightmapBakeTypes_}, lightmapsModes{lightmapsModes_}, enlighten{enlighten_}, lightProbeProxyVolumes{lightProbeProxyVolumes_}, motionVectors{motionVectors_}, receiveShadows{receiveShadows_}, reflectionProbes{reflectionProbes_}, rendererPriority{rendererPriority_}, terrainDetailUnsupported{terrainDetailUnsupported_}, overridesEnvironmentLighting{overridesEnvironmentLighting_}, overridesFog{overridesFog_}, overridesOtherLightingSettings{overridesOtherLightingSettings_}, editableMaterialRenderQueue{editableMaterialRenderQueue_}, overridesLODBias{overridesLODBias_}, overridesMaximumLODLevel{overridesMaximumLODLevel_} {}
    // Get static field: static private UnityEngine.Rendering.SupportedRenderingFeatures s_Active
    static UnityEngine::Rendering::SupportedRenderingFeatures* _get_s_Active();
    // Set static field: static private UnityEngine.Rendering.SupportedRenderingFeatures s_Active
    static void _set_s_Active(UnityEngine::Rendering::SupportedRenderingFeatures* value);
    // Get instance field: private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes <reflectionProbeModes>k__BackingField
    UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes _get_$reflectionProbeModes$k__BackingField();
    // Set instance field: private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.ReflectionProbeModes <reflectionProbeModes>k__BackingField
    void _set_$reflectionProbeModes$k__BackingField(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes value);
    // Get instance field: private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes <defaultMixedLightingModes>k__BackingField
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_$defaultMixedLightingModes$k__BackingField();
    // Set instance field: private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes <defaultMixedLightingModes>k__BackingField
    void _set_$defaultMixedLightingModes$k__BackingField(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
    // Get instance field: private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes <mixedLightingModes>k__BackingField
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_$mixedLightingModes$k__BackingField();
    // Set instance field: private UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes <mixedLightingModes>k__BackingField
    void _set_$mixedLightingModes$k__BackingField(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
    // Get instance field: private UnityEngine.LightmapBakeType <lightmapBakeTypes>k__BackingField
    UnityEngine::LightmapBakeType _get_$lightmapBakeTypes$k__BackingField();
    // Set instance field: private UnityEngine.LightmapBakeType <lightmapBakeTypes>k__BackingField
    void _set_$lightmapBakeTypes$k__BackingField(UnityEngine::LightmapBakeType value);
    // Get instance field: private UnityEngine.LightmapsMode <lightmapsModes>k__BackingField
    UnityEngine::LightmapsMode _get_$lightmapsModes$k__BackingField();
    // Set instance field: private UnityEngine.LightmapsMode <lightmapsModes>k__BackingField
    void _set_$lightmapsModes$k__BackingField(UnityEngine::LightmapsMode value);
    // Get instance field: private System.Boolean <enlighten>k__BackingField
    bool _get_$enlighten$k__BackingField();
    // Set instance field: private System.Boolean <enlighten>k__BackingField
    void _set_$enlighten$k__BackingField(bool value);
    // Get instance field: private System.Boolean <lightProbeProxyVolumes>k__BackingField
    bool _get_$lightProbeProxyVolumes$k__BackingField();
    // Set instance field: private System.Boolean <lightProbeProxyVolumes>k__BackingField
    void _set_$lightProbeProxyVolumes$k__BackingField(bool value);
    // Get instance field: private System.Boolean <motionVectors>k__BackingField
    bool _get_$motionVectors$k__BackingField();
    // Set instance field: private System.Boolean <motionVectors>k__BackingField
    void _set_$motionVectors$k__BackingField(bool value);
    // Get instance field: private System.Boolean <receiveShadows>k__BackingField
    bool _get_$receiveShadows$k__BackingField();
    // Set instance field: private System.Boolean <receiveShadows>k__BackingField
    void _set_$receiveShadows$k__BackingField(bool value);
    // Get instance field: private System.Boolean <reflectionProbes>k__BackingField
    bool _get_$reflectionProbes$k__BackingField();
    // Set instance field: private System.Boolean <reflectionProbes>k__BackingField
    void _set_$reflectionProbes$k__BackingField(bool value);
    // Get instance field: private System.Boolean <rendererPriority>k__BackingField
    bool _get_$rendererPriority$k__BackingField();
    // Set instance field: private System.Boolean <rendererPriority>k__BackingField
    void _set_$rendererPriority$k__BackingField(bool value);
    // Get instance field: private System.Boolean <terrainDetailUnsupported>k__BackingField
    bool _get_$terrainDetailUnsupported$k__BackingField();
    // Set instance field: private System.Boolean <terrainDetailUnsupported>k__BackingField
    void _set_$terrainDetailUnsupported$k__BackingField(bool value);
    // Get instance field: private System.Boolean <overridesEnvironmentLighting>k__BackingField
    bool _get_$overridesEnvironmentLighting$k__BackingField();
    // Set instance field: private System.Boolean <overridesEnvironmentLighting>k__BackingField
    void _set_$overridesEnvironmentLighting$k__BackingField(bool value);
    // Get instance field: private System.Boolean <overridesFog>k__BackingField
    bool _get_$overridesFog$k__BackingField();
    // Set instance field: private System.Boolean <overridesFog>k__BackingField
    void _set_$overridesFog$k__BackingField(bool value);
    // Get instance field: private System.Boolean <overridesOtherLightingSettings>k__BackingField
    bool _get_$overridesOtherLightingSettings$k__BackingField();
    // Set instance field: private System.Boolean <overridesOtherLightingSettings>k__BackingField
    void _set_$overridesOtherLightingSettings$k__BackingField(bool value);
    // Get instance field: private System.Boolean <editableMaterialRenderQueue>k__BackingField
    bool _get_$editableMaterialRenderQueue$k__BackingField();
    // Set instance field: private System.Boolean <editableMaterialRenderQueue>k__BackingField
    void _set_$editableMaterialRenderQueue$k__BackingField(bool value);
    // Get instance field: private System.Boolean <overridesLODBias>k__BackingField
    bool _get_$overridesLODBias$k__BackingField();
    // Set instance field: private System.Boolean <overridesLODBias>k__BackingField
    void _set_$overridesLODBias$k__BackingField(bool value);
    // Get instance field: private System.Boolean <overridesMaximumLODLevel>k__BackingField
    bool _get_$overridesMaximumLODLevel$k__BackingField();
    // Set instance field: private System.Boolean <overridesMaximumLODLevel>k__BackingField
    void _set_$overridesMaximumLODLevel$k__BackingField(bool value);
    // static public UnityEngine.Rendering.SupportedRenderingFeatures get_active()
    // Offset: 0x22BA880
    static UnityEngine::Rendering::SupportedRenderingFeatures* get_active();
    // static public System.Void set_active(UnityEngine.Rendering.SupportedRenderingFeatures value)
    // Offset: 0x22B9758
    static void set_active(UnityEngine::Rendering::SupportedRenderingFeatures* value);
    // public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes get_defaultMixedLightingModes()
    // Offset: 0x22BA978
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes get_defaultMixedLightingModes();
    // public UnityEngine.Rendering.SupportedRenderingFeatures/UnityEngine.Rendering.LightmapMixedBakeModes get_mixedLightingModes()
    // Offset: 0x22BA980
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes get_mixedLightingModes();
    // public UnityEngine.LightmapBakeType get_lightmapBakeTypes()
    // Offset: 0x22BA988
    UnityEngine::LightmapBakeType get_lightmapBakeTypes();
    // public UnityEngine.LightmapsMode get_lightmapsModes()
    // Offset: 0x22BA990
    UnityEngine::LightmapsMode get_lightmapsModes();
    // public System.Boolean get_enlighten()
    // Offset: 0x22BA998
    bool get_enlighten();
    // static private System.Void .cctor()
    // Offset: 0x22BB000
    static void _cctor();
    // static System.Void FallbackMixedLightingModeByRef(System.IntPtr fallbackModePtr)
    // Offset: 0x22BA9A0
    static void FallbackMixedLightingModeByRef(System::IntPtr fallbackModePtr);
    // static System.Boolean IsMixedLightingModeSupported(UnityEngine.MixedLightingMode mixedMode)
    // Offset: 0x22BAB04
    static bool IsMixedLightingModeSupported(UnityEngine::MixedLightingMode mixedMode);
    // static System.Void IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode mixedMode, System.IntPtr isSupportedPtr)
    // Offset: 0x22BAB80
    static void IsMixedLightingModeSupportedByRef(UnityEngine::MixedLightingMode mixedMode, System::IntPtr isSupportedPtr);
    // static System.Boolean IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType bakeType)
    // Offset: 0x22BACB0
    static bool IsLightmapBakeTypeSupported(UnityEngine::LightmapBakeType bakeType);
    // static System.Void IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType bakeType, System.IntPtr isSupportedPtr)
    // Offset: 0x22BAD2C
    static void IsLightmapBakeTypeSupportedByRef(UnityEngine::LightmapBakeType bakeType, System::IntPtr isSupportedPtr);
    // static System.Void IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode mode, System.IntPtr isSupportedPtr)
    // Offset: 0x22BAE7C
    static void IsLightmapsModeSupportedByRef(UnityEngine::LightmapsMode mode, System::IntPtr isSupportedPtr);
    // static System.Void IsLightmapperSupportedByRef(System.Int32 lightmapper, System.IntPtr isSupportedPtr)
    // Offset: 0x22BAF18
    static void IsLightmapperSupportedByRef(int lightmapper, System::IntPtr isSupportedPtr);
    // static System.Void FallbackLightmapperByRef(System.IntPtr lightmapperPtr)
    // Offset: 0x22BAFE0
    static void FallbackLightmapperByRef(System::IntPtr lightmapperPtr);
    // public System.Void .ctor()
    // Offset: 0x22B971C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupportedRenderingFeatures* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rendering::SupportedRenderingFeatures::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupportedRenderingFeatures*, creationType>()));
    }
  }; // UnityEngine.Rendering.SupportedRenderingFeatures
  #pragma pack(pop)
  static check_size<sizeof(SupportedRenderingFeatures), 48 + sizeof(bool)> __UnityEngine_Rendering_SupportedRenderingFeaturesSizeCheck;
  static_assert(sizeof(SupportedRenderingFeatures) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SupportedRenderingFeatures*, "UnityEngine.Rendering", "SupportedRenderingFeatures");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/ReflectionProbeModes");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/LightmapMixedBakeModes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::SupportedRenderingFeatures* (*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::set_active
// Il2CppName: set_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::SupportedRenderingFeatures*)>(&UnityEngine::Rendering::SupportedRenderingFeatures::set_active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "SupportedRenderingFeatures")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "set_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes
// Il2CppName: get_defaultMixedLightingModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_defaultMixedLightingModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes
// Il2CppName: get_mixedLightingModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_mixedLightingModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes
// Il2CppName: get_lightmapBakeTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LightmapBakeType (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_lightmapBakeTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes
// Il2CppName: get_lightmapsModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LightmapsMode (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_lightmapsModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten
// Il2CppName: get_enlighten
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_enlighten", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef
// Il2CppName: FallbackMixedLightingModeByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef)> {
  static const MethodInfo* get() {
    static auto* fallbackModePtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "FallbackMixedLightingModeByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fallbackModePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported
// Il2CppName: IsMixedLightingModeSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::MixedLightingMode)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported)> {
  static const MethodInfo* get() {
    static auto* mixedMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "MixedLightingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsMixedLightingModeSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mixedMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef
// Il2CppName: IsMixedLightingModeSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MixedLightingMode, System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* mixedMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "MixedLightingMode")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsMixedLightingModeSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mixedMode, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported
// Il2CppName: IsLightmapBakeTypeSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::LightmapBakeType)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported)> {
  static const MethodInfo* get() {
    static auto* bakeType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LightmapBakeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapBakeTypeSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bakeType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef
// Il2CppName: IsLightmapBakeTypeSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::LightmapBakeType, System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* bakeType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LightmapBakeType")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapBakeTypeSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bakeType, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef
// Il2CppName: IsLightmapsModeSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::LightmapsMode, System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "LightmapsMode")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapsModeSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef
// Il2CppName: IsLightmapperSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* lightmapper = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapperSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightmapper, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef
// Il2CppName: FallbackLightmapperByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef)> {
  static const MethodInfo* get() {
    static auto* lightmapperPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "FallbackLightmapperByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightmapperPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
