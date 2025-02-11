// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Boolean
#include "System/Boolean.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassEffectSO
  class BloomPrePassEffectSO;
  // Forward declaring type: MainEffectSO
  class MainEffectSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: MirrorRendererGraphicsSettingsPresets
  class MirrorRendererGraphicsSettingsPresets;
  // Forward declaring type: MainEffectGraphicsSettingsPresetsSO
  class MainEffectGraphicsSettingsPresetsSO;
  // Forward declaring type: BloomPrePassGraphicsSettingsPresetsSO
  class BloomPrePassGraphicsSettingsPresetsSO;
  // Forward declaring type: MirrorRendererSO
  class MirrorRendererSO;
  // Forward declaring type: MainEffectContainerSO
  class MainEffectContainerSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
  // Forward declaring type: BakedLightDataLoader
  class BakedLightDataLoader;
  // Forward declaring type: BakedReflectionProbe
  class BakedReflectionProbe;
  // Forward declaring type: LightmapLightWithIds
  class LightmapLightWithIds;
  // Forward declaring type: FakeMirrorObjectsInstaller
  class FakeMirrorObjectsInstaller;
  // Forward declaring type: FakeMirrorSettings
  class FakeMirrorSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: LightBakingPersistentSettingsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class LightBakingPersistentSettingsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Int32 _reflectionsCount
    // Size: 0x4
    // Offset: 0x18
    int reflectionsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: reflectionsCount and: bloomPrePassEffectToneMappingOff
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0xEBEBEC
    // private BloomPrePassEffectSO _bloomPrePassEffectToneMappingOff
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffectToneMappingOff;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectSO*) == 0x8);
    // private MainEffectSO _mainEffectForBaking
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MainEffectSO* mainEffectForBaking;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xEBEC34
    // private System.Single _colorFromSchemeAlpha
    // Size: 0x4
    // Offset: 0x30
    float colorFromSchemeAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: colorFromSchemeAlpha and: bakedLightEditorColors
    char __padding3[0x4] = {};
    // private UnityEngine.Color[] _bakedLightEditorColors
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Color>* bakedLightEditorColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Color>*) == 0x8);
    // [SpaceAttribute] Offset: 0xEBEC7C
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private MirrorRendererGraphicsSettingsPresets _mirrorRendererGraphicsSettingsPresets
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MirrorRendererGraphicsSettingsPresets* mirrorRendererGraphicsSettingsPresets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MirrorRendererGraphicsSettingsPresets*) == 0x8);
    // private MainEffectGraphicsSettingsPresetsSO _mainEffectGraphicsSettingsPresets
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* mainEffectGraphicsSettingsPresets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*) == 0x8);
    // private BloomPrePassGraphicsSettingsPresetsSO _bloomPrePassGraphicsSettingsPresets
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* bloomPrePassGraphicsSettingsPresets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*) == 0x8);
    // private MirrorRendererSO _mirrorRenderer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MirrorRendererSO* mirrorRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MirrorRendererSO*) == 0x8);
    // private MainEffectContainerSO _mainEffectContainer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MainEffectContainerSO* mainEffectContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectContainerSO*) == 0x8);
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectContainerSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xEBED14
    // private BakedLightDataLoader _bakedLightDataLoaderPrefab
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::BakedLightDataLoader* bakedLightDataLoaderPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BakedLightDataLoader*) == 0x8);
    // private BakedReflectionProbe _bakedReflectionProbePrefab
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BakedReflectionProbe* bakedReflectionProbePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BakedReflectionProbe*) == 0x8);
    // private LightmapLightWithIds _lightmapLightWithIds
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::LightmapLightWithIds* lightmapLightWithIds;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LightmapLightWithIds*) == 0x8);
    // private FakeMirrorObjectsInstaller _fakeMirrorObjectsInstallerPrefab
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::FakeMirrorObjectsInstaller* fakeMirrorObjectsInstallerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FakeMirrorObjectsInstaller*) == 0x8);
    // private FakeMirrorSettings _fakeMirrorSettingsPrefab
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::FakeMirrorSettings* fakeMirrorSettingsPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FakeMirrorSettings*) == 0x8);
    // private UnityEngine.Material _defaultDepthOnlyWriteMaterialForFakeMirror
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::Material* defaultDepthOnlyWriteMaterialForFakeMirror;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: LightBakingPersistentSettingsSO
    LightBakingPersistentSettingsSO(int reflectionsCount_ = {}, GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffectToneMappingOff_ = {}, GlobalNamespace::MainEffectSO* mainEffectForBaking_ = {}, float colorFromSchemeAlpha_ = {}, ::Array<UnityEngine::Color>* bakedLightEditorColors_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::MirrorRendererGraphicsSettingsPresets* mirrorRendererGraphicsSettingsPresets_ = {}, GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* mainEffectGraphicsSettingsPresets_ = {}, GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* bloomPrePassGraphicsSettingsPresets_ = {}, GlobalNamespace::MirrorRendererSO* mirrorRenderer_ = {}, GlobalNamespace::MainEffectContainerSO* mainEffectContainer_ = {}, GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer_ = {}, GlobalNamespace::BakedLightDataLoader* bakedLightDataLoaderPrefab_ = {}, GlobalNamespace::BakedReflectionProbe* bakedReflectionProbePrefab_ = {}, GlobalNamespace::LightmapLightWithIds* lightmapLightWithIds_ = {}, GlobalNamespace::FakeMirrorObjectsInstaller* fakeMirrorObjectsInstallerPrefab_ = {}, GlobalNamespace::FakeMirrorSettings* fakeMirrorSettingsPrefab_ = {}, UnityEngine::Material* defaultDepthOnlyWriteMaterialForFakeMirror_ = {}) noexcept : reflectionsCount{reflectionsCount_}, bloomPrePassEffectToneMappingOff{bloomPrePassEffectToneMappingOff_}, mainEffectForBaking{mainEffectForBaking_}, colorFromSchemeAlpha{colorFromSchemeAlpha_}, bakedLightEditorColors{bakedLightEditorColors_}, mainSettingsModel{mainSettingsModel_}, mirrorRendererGraphicsSettingsPresets{mirrorRendererGraphicsSettingsPresets_}, mainEffectGraphicsSettingsPresets{mainEffectGraphicsSettingsPresets_}, bloomPrePassGraphicsSettingsPresets{bloomPrePassGraphicsSettingsPresets_}, mirrorRenderer{mirrorRenderer_}, mainEffectContainer{mainEffectContainer_}, bloomPrePassEffectContainer{bloomPrePassEffectContainer_}, bakedLightDataLoaderPrefab{bakedLightDataLoaderPrefab_}, bakedReflectionProbePrefab{bakedReflectionProbePrefab_}, lightmapLightWithIds{lightmapLightWithIds_}, fakeMirrorObjectsInstallerPrefab{fakeMirrorObjectsInstallerPrefab_}, fakeMirrorSettingsPrefab{fakeMirrorSettingsPrefab_}, defaultDepthOnlyWriteMaterialForFakeMirror{defaultDepthOnlyWriteMaterialForFakeMirror_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kDefaultMirrorGraphicsSettings
    static constexpr const int kDefaultMirrorGraphicsSettings = 0;
    // Get static field: static private System.Int32 kDefaultMirrorGraphicsSettings
    static int _get_kDefaultMirrorGraphicsSettings();
    // Set static field: static private System.Int32 kDefaultMirrorGraphicsSettings
    static void _set_kDefaultMirrorGraphicsSettings(int value);
    // static field const value: static private System.Int32 kDefaultMainEffectGraphicsSettings
    static constexpr const int kDefaultMainEffectGraphicsSettings = 1;
    // Get static field: static private System.Int32 kDefaultMainEffectGraphicsSettings
    static int _get_kDefaultMainEffectGraphicsSettings();
    // Set static field: static private System.Int32 kDefaultMainEffectGraphicsSettings
    static void _set_kDefaultMainEffectGraphicsSettings(int value);
    // static field const value: static private System.Int32 kDefaultAntiAliasingLevel
    static constexpr const int kDefaultAntiAliasingLevel = 8;
    // Get static field: static private System.Int32 kDefaultAntiAliasingLevel
    static int _get_kDefaultAntiAliasingLevel();
    // Set static field: static private System.Int32 kDefaultAntiAliasingLevel
    static void _set_kDefaultAntiAliasingLevel(int value);
    // static field const value: static private System.Single kDefaultVrResolutionScale
    static constexpr const float kDefaultVrResolutionScale = 1;
    // Get static field: static private System.Single kDefaultVrResolutionScale
    static float _get_kDefaultVrResolutionScale();
    // Set static field: static private System.Single kDefaultVrResolutionScale
    static void _set_kDefaultVrResolutionScale(float value);
    // static field const value: static private System.Single kDefaultMenuVRResolutionScaleMultiplier
    static constexpr const float kDefaultMenuVRResolutionScaleMultiplier = 1;
    // Get static field: static private System.Single kDefaultMenuVRResolutionScaleMultiplier
    static float _get_kDefaultMenuVRResolutionScaleMultiplier();
    // Set static field: static private System.Single kDefaultMenuVRResolutionScaleMultiplier
    static void _set_kDefaultMenuVRResolutionScaleMultiplier(float value);
    // static field const value: static private System.Boolean kDefaultUseFixedFoveatedRenderingDuringGameplay
    static constexpr const bool kDefaultUseFixedFoveatedRenderingDuringGameplay = false;
    // Get static field: static private System.Boolean kDefaultUseFixedFoveatedRenderingDuringGameplay
    static bool _get_kDefaultUseFixedFoveatedRenderingDuringGameplay();
    // Set static field: static private System.Boolean kDefaultUseFixedFoveatedRenderingDuringGameplay
    static void _set_kDefaultUseFixedFoveatedRenderingDuringGameplay(bool value);
    // static field const value: static private System.Boolean kDefaultBurnMarkTrailsEnabled
    static constexpr const bool kDefaultBurnMarkTrailsEnabled = true;
    // Get static field: static private System.Boolean kDefaultBurnMarkTrailsEnabled
    static bool _get_kDefaultBurnMarkTrailsEnabled();
    // Set static field: static private System.Boolean kDefaultBurnMarkTrailsEnabled
    static void _set_kDefaultBurnMarkTrailsEnabled(bool value);
    // static field const value: static private System.Boolean kDefaultScreenDisplacementEffectsEnabled
    static constexpr const bool kDefaultScreenDisplacementEffectsEnabled = true;
    // Get static field: static private System.Boolean kDefaultScreenDisplacementEffectsEnabled
    static bool _get_kDefaultScreenDisplacementEffectsEnabled();
    // Set static field: static private System.Boolean kDefaultScreenDisplacementEffectsEnabled
    static void _set_kDefaultScreenDisplacementEffectsEnabled(bool value);
    // Get instance field: private System.Int32 _reflectionsCount
    int _get__reflectionsCount();
    // Set instance field: private System.Int32 _reflectionsCount
    void _set__reflectionsCount(int value);
    // Get instance field: private BloomPrePassEffectSO _bloomPrePassEffectToneMappingOff
    GlobalNamespace::BloomPrePassEffectSO* _get__bloomPrePassEffectToneMappingOff();
    // Set instance field: private BloomPrePassEffectSO _bloomPrePassEffectToneMappingOff
    void _set__bloomPrePassEffectToneMappingOff(GlobalNamespace::BloomPrePassEffectSO* value);
    // Get instance field: private MainEffectSO _mainEffectForBaking
    GlobalNamespace::MainEffectSO* _get__mainEffectForBaking();
    // Set instance field: private MainEffectSO _mainEffectForBaking
    void _set__mainEffectForBaking(GlobalNamespace::MainEffectSO* value);
    // Get instance field: private System.Single _colorFromSchemeAlpha
    float _get__colorFromSchemeAlpha();
    // Set instance field: private System.Single _colorFromSchemeAlpha
    void _set__colorFromSchemeAlpha(float value);
    // Get instance field: private UnityEngine.Color[] _bakedLightEditorColors
    ::Array<UnityEngine::Color>* _get__bakedLightEditorColors();
    // Set instance field: private UnityEngine.Color[] _bakedLightEditorColors
    void _set__bakedLightEditorColors(::Array<UnityEngine::Color>* value);
    // Get instance field: private MainSettingsModelSO _mainSettingsModel
    GlobalNamespace::MainSettingsModelSO* _get__mainSettingsModel();
    // Set instance field: private MainSettingsModelSO _mainSettingsModel
    void _set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO* value);
    // Get instance field: private MirrorRendererGraphicsSettingsPresets _mirrorRendererGraphicsSettingsPresets
    GlobalNamespace::MirrorRendererGraphicsSettingsPresets* _get__mirrorRendererGraphicsSettingsPresets();
    // Set instance field: private MirrorRendererGraphicsSettingsPresets _mirrorRendererGraphicsSettingsPresets
    void _set__mirrorRendererGraphicsSettingsPresets(GlobalNamespace::MirrorRendererGraphicsSettingsPresets* value);
    // Get instance field: private MainEffectGraphicsSettingsPresetsSO _mainEffectGraphicsSettingsPresets
    GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* _get__mainEffectGraphicsSettingsPresets();
    // Set instance field: private MainEffectGraphicsSettingsPresetsSO _mainEffectGraphicsSettingsPresets
    void _set__mainEffectGraphicsSettingsPresets(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* value);
    // Get instance field: private BloomPrePassGraphicsSettingsPresetsSO _bloomPrePassGraphicsSettingsPresets
    GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* _get__bloomPrePassGraphicsSettingsPresets();
    // Set instance field: private BloomPrePassGraphicsSettingsPresetsSO _bloomPrePassGraphicsSettingsPresets
    void _set__bloomPrePassGraphicsSettingsPresets(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* value);
    // Get instance field: private MirrorRendererSO _mirrorRenderer
    GlobalNamespace::MirrorRendererSO* _get__mirrorRenderer();
    // Set instance field: private MirrorRendererSO _mirrorRenderer
    void _set__mirrorRenderer(GlobalNamespace::MirrorRendererSO* value);
    // Get instance field: private MainEffectContainerSO _mainEffectContainer
    GlobalNamespace::MainEffectContainerSO* _get__mainEffectContainer();
    // Set instance field: private MainEffectContainerSO _mainEffectContainer
    void _set__mainEffectContainer(GlobalNamespace::MainEffectContainerSO* value);
    // Get instance field: private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    GlobalNamespace::BloomPrePassEffectContainerSO* _get__bloomPrePassEffectContainer();
    // Set instance field: private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    void _set__bloomPrePassEffectContainer(GlobalNamespace::BloomPrePassEffectContainerSO* value);
    // Get instance field: private BakedLightDataLoader _bakedLightDataLoaderPrefab
    GlobalNamespace::BakedLightDataLoader* _get__bakedLightDataLoaderPrefab();
    // Set instance field: private BakedLightDataLoader _bakedLightDataLoaderPrefab
    void _set__bakedLightDataLoaderPrefab(GlobalNamespace::BakedLightDataLoader* value);
    // Get instance field: private BakedReflectionProbe _bakedReflectionProbePrefab
    GlobalNamespace::BakedReflectionProbe* _get__bakedReflectionProbePrefab();
    // Set instance field: private BakedReflectionProbe _bakedReflectionProbePrefab
    void _set__bakedReflectionProbePrefab(GlobalNamespace::BakedReflectionProbe* value);
    // Get instance field: private LightmapLightWithIds _lightmapLightWithIds
    GlobalNamespace::LightmapLightWithIds* _get__lightmapLightWithIds();
    // Set instance field: private LightmapLightWithIds _lightmapLightWithIds
    void _set__lightmapLightWithIds(GlobalNamespace::LightmapLightWithIds* value);
    // Get instance field: private FakeMirrorObjectsInstaller _fakeMirrorObjectsInstallerPrefab
    GlobalNamespace::FakeMirrorObjectsInstaller* _get__fakeMirrorObjectsInstallerPrefab();
    // Set instance field: private FakeMirrorObjectsInstaller _fakeMirrorObjectsInstallerPrefab
    void _set__fakeMirrorObjectsInstallerPrefab(GlobalNamespace::FakeMirrorObjectsInstaller* value);
    // Get instance field: private FakeMirrorSettings _fakeMirrorSettingsPrefab
    GlobalNamespace::FakeMirrorSettings* _get__fakeMirrorSettingsPrefab();
    // Set instance field: private FakeMirrorSettings _fakeMirrorSettingsPrefab
    void _set__fakeMirrorSettingsPrefab(GlobalNamespace::FakeMirrorSettings* value);
    // Get instance field: private UnityEngine.Material _defaultDepthOnlyWriteMaterialForFakeMirror
    UnityEngine::Material* _get__defaultDepthOnlyWriteMaterialForFakeMirror();
    // Set instance field: private UnityEngine.Material _defaultDepthOnlyWriteMaterialForFakeMirror
    void _set__defaultDepthOnlyWriteMaterialForFakeMirror(UnityEngine::Material* value);
    // public System.Int32 get_reflectionsCount()
    // Offset: 0x1FE4A2C
    int get_reflectionsCount();
    // public System.Void set_reflectionsCount(System.Int32 value)
    // Offset: 0x1FE4A34
    void set_reflectionsCount(int value);
    // public System.Single get_colorFromSchemeAlpha()
    // Offset: 0x1FE4A3C
    float get_colorFromSchemeAlpha();
    // public System.Void set_colorFromSchemeAlpha(System.Single value)
    // Offset: 0x1FE4A44
    void set_colorFromSchemeAlpha(float value);
    // public UnityEngine.Color[] get_bakedLightEditorColors()
    // Offset: 0x1FE4A4C
    ::Array<UnityEngine::Color>* get_bakedLightEditorColors();
    // public UnityEngine.Material get_defaultDepthOnlyWriteMaterialForFakeMirror()
    // Offset: 0x1FE4A54
    UnityEngine::Material* get_defaultDepthOnlyWriteMaterialForFakeMirror();
    // public System.Boolean get_mainEffectForBakingIsOn()
    // Offset: 0x1FE4A5C
    bool get_mainEffectForBakingIsOn();
    // public System.Void set_mainEffectForBakingIsOn(System.Boolean value)
    // Offset: 0x1FE4ADC
    void set_mainEffectForBakingIsOn(bool value);
    // public BakedLightDataLoader get_bakedLightDataLoaderPrefab()
    // Offset: 0x1FE4BA0
    GlobalNamespace::BakedLightDataLoader* get_bakedLightDataLoaderPrefab();
    // public BakedReflectionProbe get_bakedReflectionProbePrefab()
    // Offset: 0x1FE4BA8
    GlobalNamespace::BakedReflectionProbe* get_bakedReflectionProbePrefab();
    // public LightmapLightWithIds get_lightmapLightWithIds()
    // Offset: 0x1FE4BB0
    GlobalNamespace::LightmapLightWithIds* get_lightmapLightWithIds();
    // public FakeMirrorObjectsInstaller get_fakeMirrorObjectsInstallerPrefab()
    // Offset: 0x1FE4BB8
    GlobalNamespace::FakeMirrorObjectsInstaller* get_fakeMirrorObjectsInstallerPrefab();
    // public FakeMirrorSettings get_fakeMirrorSettingsPrefab()
    // Offset: 0x1FE4BC0
    GlobalNamespace::FakeMirrorSettings* get_fakeMirrorSettingsPrefab();
    // public System.Void SetGraphicsSettingsForBaking()
    // Offset: 0x1FE4BC8
    void SetGraphicsSettingsForBaking();
    // public System.Void SetPlatformGraphics()
    // Offset: 0x1FE4ECC
    void SetPlatformGraphics();
    // public System.Void SetToneMappingOn(System.Boolean isOn)
    // Offset: 0x1FE4E04
    void SetToneMappingOn(bool isOn);
    // public System.Boolean IsToneMappingOn()
    // Offset: 0x1FE5154
    bool IsToneMappingOn();
    // public System.Void .ctor()
    // Offset: 0x1FE518C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightBakingPersistentSettingsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightBakingPersistentSettingsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightBakingPersistentSettingsSO*, creationType>()));
    }
  }; // LightBakingPersistentSettingsSO
  #pragma pack(pop)
  static check_size<sizeof(LightBakingPersistentSettingsSO), 160 + sizeof(UnityEngine::Material*)> __GlobalNamespace_LightBakingPersistentSettingsSOSizeCheck;
  static_assert(sizeof(LightBakingPersistentSettingsSO) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightBakingPersistentSettingsSO*, "", "LightBakingPersistentSettingsSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_reflectionsCount
// Il2CppName: get_reflectionsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_reflectionsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_reflectionsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::set_reflectionsCount
// Il2CppName: set_reflectionsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightBakingPersistentSettingsSO::*)(int)>(&GlobalNamespace::LightBakingPersistentSettingsSO::set_reflectionsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "set_reflectionsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_colorFromSchemeAlpha
// Il2CppName: get_colorFromSchemeAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_colorFromSchemeAlpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_colorFromSchemeAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::set_colorFromSchemeAlpha
// Il2CppName: set_colorFromSchemeAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightBakingPersistentSettingsSO::*)(float)>(&GlobalNamespace::LightBakingPersistentSettingsSO::set_colorFromSchemeAlpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "set_colorFromSchemeAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightEditorColors
// Il2CppName: get_bakedLightEditorColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Color>* (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightEditorColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_bakedLightEditorColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_defaultDepthOnlyWriteMaterialForFakeMirror
// Il2CppName: get_defaultDepthOnlyWriteMaterialForFakeMirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_defaultDepthOnlyWriteMaterialForFakeMirror)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_defaultDepthOnlyWriteMaterialForFakeMirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_mainEffectForBakingIsOn
// Il2CppName: get_mainEffectForBakingIsOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_mainEffectForBakingIsOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_mainEffectForBakingIsOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::set_mainEffectForBakingIsOn
// Il2CppName: set_mainEffectForBakingIsOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightBakingPersistentSettingsSO::*)(bool)>(&GlobalNamespace::LightBakingPersistentSettingsSO::set_mainEffectForBakingIsOn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "set_mainEffectForBakingIsOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightDataLoaderPrefab
// Il2CppName: get_bakedLightDataLoaderPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BakedLightDataLoader* (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightDataLoaderPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_bakedLightDataLoaderPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedReflectionProbePrefab
// Il2CppName: get_bakedReflectionProbePrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BakedReflectionProbe* (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedReflectionProbePrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_bakedReflectionProbePrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_lightmapLightWithIds
// Il2CppName: get_lightmapLightWithIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LightmapLightWithIds* (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_lightmapLightWithIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_lightmapLightWithIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorObjectsInstallerPrefab
// Il2CppName: get_fakeMirrorObjectsInstallerPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::FakeMirrorObjectsInstaller* (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorObjectsInstallerPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_fakeMirrorObjectsInstallerPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorSettingsPrefab
// Il2CppName: get_fakeMirrorSettingsPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::FakeMirrorSettings* (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorSettingsPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "get_fakeMirrorSettingsPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::SetGraphicsSettingsForBaking
// Il2CppName: SetGraphicsSettingsForBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::SetGraphicsSettingsForBaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "SetGraphicsSettingsForBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::SetPlatformGraphics
// Il2CppName: SetPlatformGraphics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::SetPlatformGraphics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "SetPlatformGraphics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::SetToneMappingOn
// Il2CppName: SetToneMappingOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightBakingPersistentSettingsSO::*)(bool)>(&GlobalNamespace::LightBakingPersistentSettingsSO::SetToneMappingOn)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "SetToneMappingOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::IsToneMappingOn
// Il2CppName: IsToneMappingOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&GlobalNamespace::LightBakingPersistentSettingsSO::IsToneMappingOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightBakingPersistentSettingsSO*), "IsToneMappingOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightBakingPersistentSettingsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
