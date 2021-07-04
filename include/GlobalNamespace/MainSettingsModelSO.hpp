// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: Vector2IntSO
  class Vector2IntSO;
  // Forward declaring type: IntSO
  class IntSO;
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: LanguageSO
  class LanguageSO;
  // Forward declaring type: StringSO
  class StringSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x154
  #pragma pack(push, 1)
  // Autogenerated type: MainSettingsModelSO
  class MainSettingsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::MainSettingsModelSO::WindowMode
    struct WindowMode;
    // Nested type: GlobalNamespace::MainSettingsModelSO::Config
    class Config;
    // [SOVariableAttribute] Offset: 0xE172B0
    // public FloatSO vrResolutionScale
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FloatSO* vrResolutionScale;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE172C0
    // public FloatSO menuVRResolutionScaleMultiplier
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FloatSO* menuVRResolutionScaleMultiplier;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE172D0
    // public BoolSO useFixedFoveatedRenderingDuringGameplay
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BoolSO* useFixedFoveatedRenderingDuringGameplay;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE172E0
    // public Vector2IntSO windowResolution
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::Vector2IntSO* windowResolution;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector2IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE172F0
    // public BoolSO fullscreen
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BoolSO* fullscreen;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17300
    // public IntSO antiAliasingLevel
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IntSO* antiAliasingLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17310
    // public FloatSO volume
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::FloatSO* volume;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17320
    // public FloatSO ambientVolumeScale
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::FloatSO* ambientVolumeScale;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17330
    // public BoolSO controllersRumbleEnabled
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BoolSO* controllersRumbleEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17340
    // public Vector3SO roomCenter
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::Vector3SO* roomCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17350
    // public FloatSO roomRotation
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::FloatSO* roomRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17360
    // public Vector3SO controllerPosition
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::Vector3SO* controllerPosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17370
    // public Vector3SO controllerRotation
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::Vector3SO* controllerRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17380
    // public IntSO mirrorGraphicsSettings
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::IntSO* mirrorGraphicsSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17390
    // public IntSO mainEffectGraphicsSettings
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::IntSO* mainEffectGraphicsSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE173A0
    // public IntSO bloomPrePassGraphicsSettings
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::IntSO* bloomPrePassGraphicsSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE173B0
    // public BoolSO smokeGraphicsSettings
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::BoolSO* smokeGraphicsSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE173C0
    // public BoolSO enableAlphaFeatures
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::BoolSO* enableAlphaFeatures;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE173D0
    // public IntSO pauseButtonPressDurationLevel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::IntSO* pauseButtonPressDurationLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE173E0
    // public BoolSO burnMarkTrailsEnabled
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::BoolSO* burnMarkTrailsEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE173F0
    // public BoolSO screenDisplacementEffectsEnabled
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::BoolSO* screenDisplacementEffectsEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17400
    // public BoolSO smoothCameraEnabled
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::BoolSO* smoothCameraEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17410
    // public FloatSO smoothCameraFieldOfView
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::FloatSO* smoothCameraFieldOfView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17420
    // public Vector3SO smoothCameraThirdPersonPosition
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::Vector3SO* smoothCameraThirdPersonPosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17430
    // public Vector3SO smoothCameraThirdPersonEulerAngles
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::Vector3SO* smoothCameraThirdPersonEulerAngles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17440
    // public BoolSO smoothCameraThirdPersonEnabled
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::BoolSO* smoothCameraThirdPersonEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17450
    // public FloatSO smoothCameraRotationSmooth
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::FloatSO* smoothCameraRotationSmooth;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17460
    // public FloatSO smoothCameraPositionSmooth
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::FloatSO* smoothCameraPositionSmooth;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17470
    // public BoolSO overrideAudioLatency
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::BoolSO* overrideAudioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17480
    // public FloatSO audioLatency
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17490
    // public IntSO maxShockwaveParticles
    // Size: 0x8
    // Offset: 0x108
    GlobalNamespace::IntSO* maxShockwaveParticles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE174A0
    // public IntSO maxNumberOfCutSoundEffects
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::IntSO* maxNumberOfCutSoundEffects;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE174B0
    // public BoolSO onlineServicesEnabled
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::BoolSO* onlineServicesEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE174C0
    // public BoolSO oculusMRCEnabled
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::BoolSO* oculusMRCEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE174D0
    // public BoolSO openVrThreadedHaptics
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::BoolSO* openVrThreadedHaptics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE174E0
    // public LanguageSO language
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::LanguageSO* language;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LanguageSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE174F0
    // public BoolSO useCustomServerEnvironment
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::BoolSO* useCustomServerEnvironment;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17500
    // public StringSO customServerHostName
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::StringSO* customServerHostName;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StringSO*) == 0x8);
    // [SOVariableAttribute] Offset: 0xE17510
    // public BoolSO depthTextureEnabled
    // Size: 0x8
    // Offset: 0x148
    GlobalNamespace::BoolSO* depthTextureEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17520
    // private System.Boolean <createScreenshotDuringTheGame>k__BackingField
    // Size: 0x1
    // Offset: 0x150
    bool createScreenshotDuringTheGame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xE17530
    // private System.Boolean <playingForTheFirstTime>k__BackingField
    // Size: 0x1
    // Offset: 0x151
    bool playingForTheFirstTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _playingForTheFirstTimeChecked
    // Size: 0x1
    // Offset: 0x152
    bool playingForTheFirstTimeChecked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isLoaded
    // Size: 0x1
    // Offset: 0x153
    bool isLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MainSettingsModelSO
    MainSettingsModelSO(GlobalNamespace::FloatSO* vrResolutionScale_ = {}, GlobalNamespace::FloatSO* menuVRResolutionScaleMultiplier_ = {}, GlobalNamespace::BoolSO* useFixedFoveatedRenderingDuringGameplay_ = {}, GlobalNamespace::Vector2IntSO* windowResolution_ = {}, GlobalNamespace::BoolSO* fullscreen_ = {}, GlobalNamespace::IntSO* antiAliasingLevel_ = {}, GlobalNamespace::FloatSO* volume_ = {}, GlobalNamespace::FloatSO* ambientVolumeScale_ = {}, GlobalNamespace::BoolSO* controllersRumbleEnabled_ = {}, GlobalNamespace::Vector3SO* roomCenter_ = {}, GlobalNamespace::FloatSO* roomRotation_ = {}, GlobalNamespace::Vector3SO* controllerPosition_ = {}, GlobalNamespace::Vector3SO* controllerRotation_ = {}, GlobalNamespace::IntSO* mirrorGraphicsSettings_ = {}, GlobalNamespace::IntSO* mainEffectGraphicsSettings_ = {}, GlobalNamespace::IntSO* bloomPrePassGraphicsSettings_ = {}, GlobalNamespace::BoolSO* smokeGraphicsSettings_ = {}, GlobalNamespace::BoolSO* enableAlphaFeatures_ = {}, GlobalNamespace::IntSO* pauseButtonPressDurationLevel_ = {}, GlobalNamespace::BoolSO* burnMarkTrailsEnabled_ = {}, GlobalNamespace::BoolSO* screenDisplacementEffectsEnabled_ = {}, GlobalNamespace::BoolSO* smoothCameraEnabled_ = {}, GlobalNamespace::FloatSO* smoothCameraFieldOfView_ = {}, GlobalNamespace::Vector3SO* smoothCameraThirdPersonPosition_ = {}, GlobalNamespace::Vector3SO* smoothCameraThirdPersonEulerAngles_ = {}, GlobalNamespace::BoolSO* smoothCameraThirdPersonEnabled_ = {}, GlobalNamespace::FloatSO* smoothCameraRotationSmooth_ = {}, GlobalNamespace::FloatSO* smoothCameraPositionSmooth_ = {}, GlobalNamespace::BoolSO* overrideAudioLatency_ = {}, GlobalNamespace::FloatSO* audioLatency_ = {}, GlobalNamespace::IntSO* maxShockwaveParticles_ = {}, GlobalNamespace::IntSO* maxNumberOfCutSoundEffects_ = {}, GlobalNamespace::BoolSO* onlineServicesEnabled_ = {}, GlobalNamespace::BoolSO* oculusMRCEnabled_ = {}, GlobalNamespace::BoolSO* openVrThreadedHaptics_ = {}, GlobalNamespace::LanguageSO* language_ = {}, GlobalNamespace::BoolSO* useCustomServerEnvironment_ = {}, GlobalNamespace::StringSO* customServerHostName_ = {}, GlobalNamespace::BoolSO* depthTextureEnabled_ = {}, bool createScreenshotDuringTheGame_ = {}, bool playingForTheFirstTime_ = {}, bool playingForTheFirstTimeChecked_ = {}, bool isLoaded_ = {}) noexcept : vrResolutionScale{vrResolutionScale_}, menuVRResolutionScaleMultiplier{menuVRResolutionScaleMultiplier_}, useFixedFoveatedRenderingDuringGameplay{useFixedFoveatedRenderingDuringGameplay_}, windowResolution{windowResolution_}, fullscreen{fullscreen_}, antiAliasingLevel{antiAliasingLevel_}, volume{volume_}, ambientVolumeScale{ambientVolumeScale_}, controllersRumbleEnabled{controllersRumbleEnabled_}, roomCenter{roomCenter_}, roomRotation{roomRotation_}, controllerPosition{controllerPosition_}, controllerRotation{controllerRotation_}, mirrorGraphicsSettings{mirrorGraphicsSettings_}, mainEffectGraphicsSettings{mainEffectGraphicsSettings_}, bloomPrePassGraphicsSettings{bloomPrePassGraphicsSettings_}, smokeGraphicsSettings{smokeGraphicsSettings_}, enableAlphaFeatures{enableAlphaFeatures_}, pauseButtonPressDurationLevel{pauseButtonPressDurationLevel_}, burnMarkTrailsEnabled{burnMarkTrailsEnabled_}, screenDisplacementEffectsEnabled{screenDisplacementEffectsEnabled_}, smoothCameraEnabled{smoothCameraEnabled_}, smoothCameraFieldOfView{smoothCameraFieldOfView_}, smoothCameraThirdPersonPosition{smoothCameraThirdPersonPosition_}, smoothCameraThirdPersonEulerAngles{smoothCameraThirdPersonEulerAngles_}, smoothCameraThirdPersonEnabled{smoothCameraThirdPersonEnabled_}, smoothCameraRotationSmooth{smoothCameraRotationSmooth_}, smoothCameraPositionSmooth{smoothCameraPositionSmooth_}, overrideAudioLatency{overrideAudioLatency_}, audioLatency{audioLatency_}, maxShockwaveParticles{maxShockwaveParticles_}, maxNumberOfCutSoundEffects{maxNumberOfCutSoundEffects_}, onlineServicesEnabled{onlineServicesEnabled_}, oculusMRCEnabled{oculusMRCEnabled_}, openVrThreadedHaptics{openVrThreadedHaptics_}, language{language_}, useCustomServerEnvironment{useCustomServerEnvironment_}, customServerHostName{customServerHostName_}, depthTextureEnabled{depthTextureEnabled_}, createScreenshotDuringTheGame{createScreenshotDuringTheGame_}, playingForTheFirstTime{playingForTheFirstTime_}, playingForTheFirstTimeChecked{playingForTheFirstTimeChecked_}, isLoaded{isLoaded_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kDefaultPlayerHeight
    static constexpr const float kDefaultPlayerHeight = 1.8;
    // Get static field: static public System.Single kDefaultPlayerHeight
    static float _get_kDefaultPlayerHeight();
    // Set static field: static public System.Single kDefaultPlayerHeight
    static void _set_kDefaultPlayerHeight(float value);
    // static field const value: static public System.Single kHeadPosToPlayerHeightOffset
    static constexpr const float kHeadPosToPlayerHeightOffset = 0.1;
    // Get static field: static public System.Single kHeadPosToPlayerHeightOffset
    static float _get_kHeadPosToPlayerHeightOffset();
    // Set static field: static public System.Single kHeadPosToPlayerHeightOffset
    static void _set_kHeadPosToPlayerHeightOffset(float value);
    // static field const value: static private System.String kFileName
    static constexpr const char* kFileName = "settings.cfg";
    // Get static field: static private System.String kFileName
    static ::Il2CppString* _get_kFileName();
    // Set static field: static private System.String kFileName
    static void _set_kFileName(::Il2CppString* value);
    // static field const value: static private System.String kTempFileName
    static constexpr const char* kTempFileName = "settings.cfg.tmp";
    // Get static field: static private System.String kTempFileName
    static ::Il2CppString* _get_kTempFileName();
    // Set static field: static private System.String kTempFileName
    static void _set_kTempFileName(::Il2CppString* value);
    // static field const value: static private System.String kBackupFileName
    static constexpr const char* kBackupFileName = "settings.cfg.bak";
    // Get static field: static private System.String kBackupFileName
    static ::Il2CppString* _get_kBackupFileName();
    // Set static field: static private System.String kBackupFileName
    static void _set_kBackupFileName(::Il2CppString* value);
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.0.0";
    // Get static field: static private System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // static field const value: static public System.Single kControllersPositionOffsetLimit
    static constexpr const float kControllersPositionOffsetLimit = 0.1;
    // Get static field: static public System.Single kControllersPositionOffsetLimit
    static float _get_kControllersPositionOffsetLimit();
    // Set static field: static public System.Single kControllersPositionOffsetLimit
    static void _set_kControllersPositionOffsetLimit(float value);
    // static field const value: static public System.Single kControllersRotationOffsetLimit
    static constexpr const float kControllersRotationOffsetLimit = 180;
    // Get static field: static public System.Single kControllersRotationOffsetLimit
    static float _get_kControllersRotationOffsetLimit();
    // Set static field: static public System.Single kControllersRotationOffsetLimit
    static void _set_kControllersRotationOffsetLimit(float value);
    // public System.Boolean get_createScreenshotDuringTheGame()
    // Offset: 0x2403EEC
    bool get_createScreenshotDuringTheGame();
    // private System.Void set_createScreenshotDuringTheGame(System.Boolean value)
    // Offset: 0x2403EF4
    void set_createScreenshotDuringTheGame(bool value);
    // public System.Boolean get_playingForTheFirstTime()
    // Offset: 0x2403F00
    bool get_playingForTheFirstTime();
    // private System.Void set_playingForTheFirstTime(System.Boolean value)
    // Offset: 0x2403F08
    void set_playingForTheFirstTime(bool value);
    // public System.Void Save()
    // Offset: 0x2403F14
    void Save();
    // public System.Void Load(System.Boolean forced)
    // Offset: 0x2404460
    void Load(bool forced);
    // public System.Void __DeleteSettingsFiles()
    // Offset: 0x2404B58
    void __DeleteSettingsFiles();
    // protected System.Void OnDisable()
    // Offset: 0x2404D24
    void OnDisable();
    // protected override System.Void OnEnable()
    // Offset: 0x2404C90
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x2404D34
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSettingsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainSettingsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSettingsModelSO*, creationType>()));
    }
  }; // MainSettingsModelSO
  #pragma pack(pop)
  static check_size<sizeof(MainSettingsModelSO), 339 + sizeof(bool)> __GlobalNamespace_MainSettingsModelSOSizeCheck;
  static_assert(sizeof(MainSettingsModelSO) == 0x154);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsModelSO*, "", "MainSettingsModelSO");
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame
// Il2CppName: get_createScreenshotDuringTheGame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MainSettingsModelSO::*)()>(&GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "get_createScreenshotDuringTheGame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame
// Il2CppName: set_createScreenshotDuringTheGame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsModelSO::*)(bool)>(&GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "set_createScreenshotDuringTheGame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime
// Il2CppName: get_playingForTheFirstTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MainSettingsModelSO::*)()>(&GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "get_playingForTheFirstTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime
// Il2CppName: set_playingForTheFirstTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsModelSO::*)(bool)>(&GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "set_playingForTheFirstTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsModelSO::*)()>(&GlobalNamespace::MainSettingsModelSO::Save)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsModelSO::*)(bool)>(&GlobalNamespace::MainSettingsModelSO::Load)> {
  const MethodInfo* get() {
    static auto* forced = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forced});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles
// Il2CppName: __DeleteSettingsFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsModelSO::*)()>(&GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "__DeleteSettingsFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsModelSO::*)()>(&GlobalNamespace::MainSettingsModelSO::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsModelSO::*)()>(&GlobalNamespace::MainSettingsModelSO::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsModelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
