// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.ICurvesOwner
#include "UnityEngine/Timeline/ICurvesOwner.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Timeline.ClipCaps
#include "UnityEngine/Timeline/ClipCaps.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: BlendCurveMode because it is already included!
  // Forward declaring type: TrackAsset
  class TrackAsset;
  // Skipping declaration: ClipExtrapolation because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0xB8
  // Autogenerated type: UnityEngine.Timeline.TimelineClip
  // [] Offset: FFFFFFFF
  class TimelineClip : public ::Il2CppObject/*, public UnityEngine::Timeline::ICurvesOwner, public UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // Nested type: UnityEngine::Timeline::TimelineClip::Versions
    struct Versions;
    // Nested type: UnityEngine::Timeline::TimelineClip::TimelineClipUpgrade
    class TimelineClipUpgrade;
    // Nested type: UnityEngine::Timeline::TimelineClip::ClipExtrapolation
    struct ClipExtrapolation;
    // Nested type: UnityEngine::Timeline::TimelineClip::BlendCurveMode
    struct BlendCurveMode;
    // Size: 0x4
    // Autogenerated type: UnityEngine.Timeline.TimelineClip/ClipExtrapolation
    // [] Offset: FFFFFFFF
    struct ClipExtrapolation/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ClipExtrapolation
      constexpr ClipExtrapolation(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation None
      static UnityEngine::Timeline::TimelineClip::ClipExtrapolation _get_None();
      // Set static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation None
      static void _set_None(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value);
      // static field const value: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Hold
      static constexpr const int Hold = 1;
      // Get static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Hold
      static UnityEngine::Timeline::TimelineClip::ClipExtrapolation _get_Hold();
      // Set static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Hold
      static void _set_Hold(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value);
      // static field const value: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Loop
      static constexpr const int Loop = 2;
      // Get static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Loop
      static UnityEngine::Timeline::TimelineClip::ClipExtrapolation _get_Loop();
      // Set static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Loop
      static void _set_Loop(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value);
      // static field const value: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation PingPong
      static constexpr const int PingPong = 3;
      // Get static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation PingPong
      static UnityEngine::Timeline::TimelineClip::ClipExtrapolation _get_PingPong();
      // Set static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation PingPong
      static void _set_PingPong(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value);
      // static field const value: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Continue
      static constexpr const int Continue = 4;
      // Get static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Continue
      static UnityEngine::Timeline::TimelineClip::ClipExtrapolation _get_Continue();
      // Set static field: static public UnityEngine.Timeline.TimelineClip/ClipExtrapolation Continue
      static void _set_Continue(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value);
    }; // UnityEngine.Timeline.TimelineClip/ClipExtrapolation
    static check_size<sizeof(TimelineClip::ClipExtrapolation), 0 + sizeof(int)> __UnityEngine_Timeline_TimelineClip_ClipExtrapolationSizeCheck;
    static_assert(sizeof(TimelineClip::ClipExtrapolation) == 0x4);
    // Size: 0x4
    // Autogenerated type: UnityEngine.Timeline.TimelineClip/BlendCurveMode
    // [] Offset: FFFFFFFF
    struct BlendCurveMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: BlendCurveMode
      constexpr BlendCurveMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.TimelineClip/BlendCurveMode Auto
      static constexpr const int Auto = 0;
      // Get static field: static public UnityEngine.Timeline.TimelineClip/BlendCurveMode Auto
      static UnityEngine::Timeline::TimelineClip::BlendCurveMode _get_Auto();
      // Set static field: static public UnityEngine.Timeline.TimelineClip/BlendCurveMode Auto
      static void _set_Auto(UnityEngine::Timeline::TimelineClip::BlendCurveMode value);
      // static field const value: static public UnityEngine.Timeline.TimelineClip/BlendCurveMode Manual
      static constexpr const int Manual = 1;
      // Get static field: static public UnityEngine.Timeline.TimelineClip/BlendCurveMode Manual
      static UnityEngine::Timeline::TimelineClip::BlendCurveMode _get_Manual();
      // Set static field: static public UnityEngine.Timeline.TimelineClip/BlendCurveMode Manual
      static void _set_Manual(UnityEngine::Timeline::TimelineClip::BlendCurveMode value);
    }; // UnityEngine.Timeline.TimelineClip/BlendCurveMode
    static check_size<sizeof(TimelineClip::BlendCurveMode), 0 + sizeof(int)> __UnityEngine_Timeline_TimelineClip_BlendCurveModeSizeCheck;
    static_assert(sizeof(TimelineClip::BlendCurveMode) == 0x4);
    // [HideInInspector] Offset: 0xD8D908
    // private System.Int32 m_Version
    // Size: 0x4
    // Offset: 0x10
    int m_Version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Version and: m_Start
    char __padding0[0x4] = {};
    // private System.Double m_Start
    // Size: 0x8
    // Offset: 0x18
    double m_Start;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_ClipIn
    // Size: 0x8
    // Offset: 0x20
    double m_ClipIn;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private UnityEngine.Object m_Asset
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Object* m_Asset;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD8D970
    // private System.Double m_Duration
    // Size: 0x8
    // Offset: 0x30
    double m_Duration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_TimeScale
    // Size: 0x8
    // Offset: 0x38
    double m_TimeScale;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private UnityEngine.Timeline.TrackAsset m_ParentTrack
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Timeline::TrackAsset* m_ParentTrack;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TrackAsset*) == 0x8);
    // private System.Double m_EaseInDuration
    // Size: 0x8
    // Offset: 0x48
    double m_EaseInDuration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_EaseOutDuration
    // Size: 0x8
    // Offset: 0x50
    double m_EaseOutDuration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_BlendInDuration
    // Size: 0x8
    // Offset: 0x58
    double m_BlendInDuration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_BlendOutDuration
    // Size: 0x8
    // Offset: 0x60
    double m_BlendOutDuration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private UnityEngine.AnimationCurve m_MixInCurve
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::AnimationCurve* m_MixInCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve m_MixOutCurve
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::AnimationCurve* m_MixOutCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Timeline.TimelineClip/BlendCurveMode m_BlendInCurveMode
    // Size: 0x4
    // Offset: 0x78
    UnityEngine::Timeline::TimelineClip::BlendCurveMode m_BlendInCurveMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineClip::BlendCurveMode) == 0x4);
    // private UnityEngine.Timeline.TimelineClip/BlendCurveMode m_BlendOutCurveMode
    // Size: 0x4
    // Offset: 0x7C
    UnityEngine::Timeline::TimelineClip::BlendCurveMode m_BlendOutCurveMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineClip::BlendCurveMode) == 0x4);
    // private System.Collections.Generic.List`1<System.String> m_ExposedParameterNames
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::List_1<::Il2CppString*>* m_ExposedParameterNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private UnityEngine.AnimationClip m_AnimationCurves
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::AnimationClip* m_AnimationCurves;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private System.Boolean m_Recordable
    // Size: 0x1
    // Offset: 0x90
    bool m_Recordable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Recordable and: m_PostExtrapolationMode
    char __padding17[0x3] = {};
    // private UnityEngine.Timeline.TimelineClip/ClipExtrapolation m_PostExtrapolationMode
    // Size: 0x4
    // Offset: 0x94
    UnityEngine::Timeline::TimelineClip::ClipExtrapolation m_PostExtrapolationMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineClip::ClipExtrapolation) == 0x4);
    // private UnityEngine.Timeline.TimelineClip/ClipExtrapolation m_PreExtrapolationMode
    // Size: 0x4
    // Offset: 0x98
    UnityEngine::Timeline::TimelineClip::ClipExtrapolation m_PreExtrapolationMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineClip::ClipExtrapolation) == 0x4);
    // Padding between fields: m_PreExtrapolationMode and: m_PostExtrapolationTime
    char __padding19[0x4] = {};
    // private System.Double m_PostExtrapolationTime
    // Size: 0x8
    // Offset: 0xA0
    double m_PostExtrapolationTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double m_PreExtrapolationTime
    // Size: 0x8
    // Offset: 0xA8
    double m_PreExtrapolationTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.String m_DisplayName
    // Size: 0x8
    // Offset: 0xB0
    ::Il2CppString* m_DisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TimelineClip
    TimelineClip(int m_Version_ = {}, double m_Start_ = {}, double m_ClipIn_ = {}, UnityEngine::Object* m_Asset_ = {}, double m_Duration_ = {}, double m_TimeScale_ = {}, UnityEngine::Timeline::TrackAsset* m_ParentTrack_ = {}, double m_EaseInDuration_ = {}, double m_EaseOutDuration_ = {}, double m_BlendInDuration_ = {}, double m_BlendOutDuration_ = {}, UnityEngine::AnimationCurve* m_MixInCurve_ = {}, UnityEngine::AnimationCurve* m_MixOutCurve_ = {}, UnityEngine::Timeline::TimelineClip::BlendCurveMode m_BlendInCurveMode_ = {}, UnityEngine::Timeline::TimelineClip::BlendCurveMode m_BlendOutCurveMode_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_ExposedParameterNames_ = {}, UnityEngine::AnimationClip* m_AnimationCurves_ = {}, bool m_Recordable_ = {}, UnityEngine::Timeline::TimelineClip::ClipExtrapolation m_PostExtrapolationMode_ = {}, UnityEngine::Timeline::TimelineClip::ClipExtrapolation m_PreExtrapolationMode_ = {}, double m_PostExtrapolationTime_ = {}, double m_PreExtrapolationTime_ = {}, ::Il2CppString* m_DisplayName_ = {}) noexcept : m_Version{m_Version_}, m_Start{m_Start_}, m_ClipIn{m_ClipIn_}, m_Asset{m_Asset_}, m_Duration{m_Duration_}, m_TimeScale{m_TimeScale_}, m_ParentTrack{m_ParentTrack_}, m_EaseInDuration{m_EaseInDuration_}, m_EaseOutDuration{m_EaseOutDuration_}, m_BlendInDuration{m_BlendInDuration_}, m_BlendOutDuration{m_BlendOutDuration_}, m_MixInCurve{m_MixInCurve_}, m_MixOutCurve{m_MixOutCurve_}, m_BlendInCurveMode{m_BlendInCurveMode_}, m_BlendOutCurveMode{m_BlendOutCurveMode_}, m_ExposedParameterNames{m_ExposedParameterNames_}, m_AnimationCurves{m_AnimationCurves_}, m_Recordable{m_Recordable_}, m_PostExtrapolationMode{m_PostExtrapolationMode_}, m_PreExtrapolationMode{m_PreExtrapolationMode_}, m_PostExtrapolationTime{m_PostExtrapolationTime_}, m_PreExtrapolationTime{m_PreExtrapolationTime_}, m_DisplayName{m_DisplayName_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ICurvesOwner
    operator UnityEngine::Timeline::ICurvesOwner() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ICurvesOwner*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ISerializationCallbackReceiver
    operator UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // static field const value: static private System.Int32 k_LatestVersion
    static constexpr const int k_LatestVersion = 1;
    // Get static field: static private System.Int32 k_LatestVersion
    static int _get_k_LatestVersion();
    // Set static field: static private System.Int32 k_LatestVersion
    static void _set_k_LatestVersion(int value);
    // Get static field: static public readonly UnityEngine.Timeline.ClipCaps kDefaultClipCaps
    static UnityEngine::Timeline::ClipCaps _get_kDefaultClipCaps();
    // Set static field: static public readonly UnityEngine.Timeline.ClipCaps kDefaultClipCaps
    static void _set_kDefaultClipCaps(UnityEngine::Timeline::ClipCaps value);
    // Get static field: static public readonly System.Single kDefaultClipDurationInSeconds
    static float _get_kDefaultClipDurationInSeconds();
    // Set static field: static public readonly System.Single kDefaultClipDurationInSeconds
    static void _set_kDefaultClipDurationInSeconds(float value);
    // Get static field: static public readonly System.Double kTimeScaleMin
    static double _get_kTimeScaleMin();
    // Set static field: static public readonly System.Double kTimeScaleMin
    static void _set_kTimeScaleMin(double value);
    // Get static field: static public readonly System.Double kTimeScaleMax
    static double _get_kTimeScaleMax();
    // Set static field: static public readonly System.Double kTimeScaleMax
    static void _set_kTimeScaleMax(double value);
    // Get static field: static readonly System.String kDefaultCurvesName
    static ::Il2CppString* _get_kDefaultCurvesName();
    // Set static field: static readonly System.String kDefaultCurvesName
    static void _set_kDefaultCurvesName(::Il2CppString* value);
    // Get static field: static readonly System.Double kMinDuration
    static double _get_kMinDuration();
    // Set static field: static readonly System.Double kMinDuration
    static void _set_kMinDuration(double value);
    // Get static field: static readonly System.Double kMaxTimeValue
    static double _get_kMaxTimeValue();
    // Set static field: static readonly System.Double kMaxTimeValue
    static void _set_kMaxTimeValue(double value);
    // private System.Void UpgradeToLatestVersion()
    // Offset: 0x1966ABC
    void UpgradeToLatestVersion();
    // System.Void .ctor(UnityEngine.Timeline.TrackAsset parent)
    // Offset: 0x1966B30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineClip* New_ctor(UnityEngine::Timeline::TrackAsset* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelineClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineClip*, creationType>(parent)));
    }
    // public System.Boolean get_hasPreExtrapolation()
    // Offset: 0x1966CA4
    bool get_hasPreExtrapolation();
    // public System.Boolean get_hasPostExtrapolation()
    // Offset: 0x1966CC4
    bool get_hasPostExtrapolation();
    // public System.Double get_timeScale()
    // Offset: 0x1966CE4
    double get_timeScale();
    // public System.Void set_timeScale(System.Double value)
    // Offset: 0x1966EC4
    void set_timeScale(double value);
    // public System.Double get_start()
    // Offset: 0x1966FB0
    double get_start();
    // public System.Void set_start(System.Double value)
    // Offset: 0x1966FB8
    void set_start(double value);
    // public System.Void set_duration(System.Double value)
    // Offset: 0x1967234
    void set_duration(double value);
    // public System.Double get_end()
    // Offset: 0x19672EC
    double get_end();
    // public System.Double get_clipIn()
    // Offset: 0x19672FC
    double get_clipIn();
    // public System.Void set_clipIn(System.Double value)
    // Offset: 0x1967328
    void set_clipIn(double value);
    // public System.String get_displayName()
    // Offset: 0x196740C
    ::Il2CppString* get_displayName();
    // public System.Void set_displayName(System.String value)
    // Offset: 0x1967414
    void set_displayName(::Il2CppString* value);
    // public System.Double get_clipAssetDuration()
    // Offset: 0x196741C
    double get_clipAssetDuration();
    // System.Void set_curves(UnityEngine.AnimationClip value)
    // Offset: 0x19674F4
    void set_curves(UnityEngine::AnimationClip* value);
    // public System.Void set_asset(UnityEngine.Object value)
    // Offset: 0x1967608
    void set_asset(UnityEngine::Object* value);
    // public UnityEngine.Object get_underlyingAsset()
    // Offset: 0x1967620
    UnityEngine::Object* get_underlyingAsset();
    // public System.Void set_underlyingAsset(UnityEngine.Object value)
    // Offset: 0x1967628
    void set_underlyingAsset(UnityEngine::Object* value);
    // public UnityEngine.Timeline.TrackAsset get_parentTrack()
    // Offset: 0x196762C
    UnityEngine::Timeline::TrackAsset* get_parentTrack();
    // public System.Void set_parentTrack(UnityEngine.Timeline.TrackAsset value)
    // Offset: 0x1966B70
    void set_parentTrack(UnityEngine::Timeline::TrackAsset* value);
    // public System.Double get_easeInDuration()
    // Offset: 0x1967754
    double get_easeInDuration();
    // public System.Void set_easeInDuration(System.Double value)
    // Offset: 0x19677F8
    void set_easeInDuration(double value);
    // public System.Double get_easeOutDuration()
    // Offset: 0x19678D8
    double get_easeOutDuration();
    // public System.Void set_easeOutDuration(System.Double value)
    // Offset: 0x196797C
    void set_easeOutDuration(double value);
    // public System.Double get_eastOutTime()
    // Offset: 0x1967A5C
    double get_eastOutTime();
    // public System.Double get_easeOutTime()
    // Offset: 0x1967A94
    double get_easeOutTime();
    // public System.Double get_blendInDuration()
    // Offset: 0x1967ACC
    double get_blendInDuration();
    // public System.Void set_blendInDuration(System.Double value)
    // Offset: 0x1967AF8
    void set_blendInDuration(double value);
    // public System.Double get_blendOutDuration()
    // Offset: 0x1967B90
    double get_blendOutDuration();
    // public System.Void set_blendOutDuration(System.Double value)
    // Offset: 0x1967BBC
    void set_blendOutDuration(double value);
    // public UnityEngine.Timeline.TimelineClip/BlendCurveMode get_blendInCurveMode()
    // Offset: 0x1967C54
    UnityEngine::Timeline::TimelineClip::BlendCurveMode get_blendInCurveMode();
    // public System.Void set_blendInCurveMode(UnityEngine.Timeline.TimelineClip/BlendCurveMode value)
    // Offset: 0x1967C5C
    void set_blendInCurveMode(UnityEngine::Timeline::TimelineClip::BlendCurveMode value);
    // public UnityEngine.Timeline.TimelineClip/BlendCurveMode get_blendOutCurveMode()
    // Offset: 0x1967C64
    UnityEngine::Timeline::TimelineClip::BlendCurveMode get_blendOutCurveMode();
    // public System.Void set_blendOutCurveMode(UnityEngine.Timeline.TimelineClip/BlendCurveMode value)
    // Offset: 0x1967C6C
    void set_blendOutCurveMode(UnityEngine::Timeline::TimelineClip::BlendCurveMode value);
    // public System.Boolean get_hasBlendIn()
    // Offset: 0x1967C74
    bool get_hasBlendIn();
    // public System.Boolean get_hasBlendOut()
    // Offset: 0x1967CAC
    bool get_hasBlendOut();
    // public UnityEngine.AnimationCurve get_mixInCurve()
    // Offset: 0x1967CE4
    UnityEngine::AnimationCurve* get_mixInCurve();
    // public System.Void set_mixInCurve(UnityEngine.AnimationCurve value)
    // Offset: 0x1967DA0
    void set_mixInCurve(UnityEngine::AnimationCurve* value);
    // public System.Single get_mixInPercentage()
    // Offset: 0x1967DA8
    float get_mixInPercentage();
    // public System.Double get_mixInDuration()
    // Offset: 0x1967DD4
    double get_mixInDuration();
    // public UnityEngine.AnimationCurve get_mixOutCurve()
    // Offset: 0x1967E28
    UnityEngine::AnimationCurve* get_mixOutCurve();
    // public System.Void set_mixOutCurve(UnityEngine.AnimationCurve value)
    // Offset: 0x1967EE4
    void set_mixOutCurve(UnityEngine::AnimationCurve* value);
    // public System.Double get_mixOutTime()
    // Offset: 0x1967EEC
    double get_mixOutTime();
    // public System.Double get_mixOutDuration()
    // Offset: 0x1967F24
    double get_mixOutDuration();
    // public System.Single get_mixOutPercentage()
    // Offset: 0x1967F78
    float get_mixOutPercentage();
    // public System.Boolean get_recordable()
    // Offset: 0x1967FA4
    bool get_recordable();
    // System.Void set_recordable(System.Boolean value)
    // Offset: 0x1967FAC
    void set_recordable(bool value);
    // public System.Collections.Generic.List`1<System.String> get_exposedParameters()
    // Offset: 0x1967FB8
    System::Collections::Generic::List_1<::Il2CppString*>* get_exposedParameters();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1966DC8
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // System.Int32 Hash()
    // Offset: 0x1968038
    int Hash();
    // public System.Single EvaluateMixOut(System.Double time)
    // Offset: 0x19680F8
    float EvaluateMixOut(double time);
    // public System.Single EvaluateMixIn(System.Double time)
    // Offset: 0x1968234
    float EvaluateMixIn(double time);
    // static private UnityEngine.AnimationCurve GetDefaultMixInCurve()
    // Offset: 0x1967D88
    static UnityEngine::AnimationCurve* GetDefaultMixInCurve();
    // static private UnityEngine.AnimationCurve GetDefaultMixOutCurve()
    // Offset: 0x1967ECC
    static UnityEngine::AnimationCurve* GetDefaultMixOutCurve();
    // public System.Double ToLocalTime(System.Double time)
    // Offset: 0x196834C
    double ToLocalTime(double time);
    // public System.Double ToLocalTimeUnbound(System.Double time)
    // Offset: 0x1968638
    double ToLocalTimeUnbound(double time);
    // System.Double FromLocalTimeUnbound(System.Double time)
    // Offset: 0x1968694
    double FromLocalTimeUnbound(double time);
    // public UnityEngine.AnimationClip get_animationClip()
    // Offset: 0x19686E4
    UnityEngine::AnimationClip* get_animationClip();
    // static private System.Double SanitizeTimeValue(System.Double value, System.Double defaultValue)
    // Offset: 0x19670C4
    static double SanitizeTimeValue(double value, double defaultValue);
    // public UnityEngine.Timeline.TimelineClip/ClipExtrapolation get_postExtrapolationMode()
    // Offset: 0x19687F0
    UnityEngine::Timeline::TimelineClip::ClipExtrapolation get_postExtrapolationMode();
    // System.Void set_postExtrapolationMode(UnityEngine.Timeline.TimelineClip/ClipExtrapolation value)
    // Offset: 0x1968820
    void set_postExtrapolationMode(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value);
    // public UnityEngine.Timeline.TimelineClip/ClipExtrapolation get_preExtrapolationMode()
    // Offset: 0x1968858
    UnityEngine::Timeline::TimelineClip::ClipExtrapolation get_preExtrapolationMode();
    // System.Void set_preExtrapolationMode(UnityEngine.Timeline.TimelineClip/ClipExtrapolation value)
    // Offset: 0x1968888
    void set_preExtrapolationMode(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value);
    // System.Void SetPostExtrapolationTime(System.Double time)
    // Offset: 0x19688C0
    void SetPostExtrapolationTime(double time);
    // System.Void SetPreExtrapolationTime(System.Double time)
    // Offset: 0x19688C8
    void SetPreExtrapolationTime(double time);
    // public System.Boolean IsExtrapolatedTime(System.Double sequenceTime)
    // Offset: 0x19688D0
    bool IsExtrapolatedTime(double sequenceTime);
    // public System.Boolean IsPreExtrapolatedTime(System.Double sequenceTime)
    // Offset: 0x196844C
    bool IsPreExtrapolatedTime(double sequenceTime);
    // public System.Boolean IsPostExtrapolatedTime(System.Double sequenceTime)
    // Offset: 0x19685D4
    bool IsPostExtrapolatedTime(double sequenceTime);
    // public System.Double get_extrapolatedStart()
    // Offset: 0x196891C
    double get_extrapolatedStart();
    // public System.Double get_extrapolatedDuration()
    // Offset: 0x1968934
    double get_extrapolatedDuration();
    // static private System.Double GetExtrapolatedTime(System.Double time, UnityEngine.Timeline.TimelineClip/ClipExtrapolation mode, System.Double duration)
    // Offset: 0x19684A8
    static double GetExtrapolatedTime(double time, UnityEngine::Timeline::TimelineClip::ClipExtrapolation mode, double duration);
    // public System.Void ConformEaseValues()
    // Offset: 0x1968F18
    void ConformEaseValues();
    // static private System.Double CalculateEasingRatio(System.Double easeIn, System.Double easeOut)
    // Offset: 0x1968FB8
    static double CalculateEasingRatio(double easeIn, double easeOut);
    // private System.Void UpdateDirty(System.Double oldValue, System.Double newValue)
    // Offset: 0x1966FAC
    void UpdateDirty(double oldValue, double newValue);
    // static private System.Void .cctor()
    // Offset: 0x1969090
    static void _cctor();
    // public System.Double get_duration()
    // Offset: 0x196722C
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: System.Double ICurvesOwner::get_duration()
    double get_duration();
    // public UnityEngine.AnimationClip get_curves()
    // Offset: 0x19674EC
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.AnimationClip ICurvesOwner::get_curves()
    UnityEngine::AnimationClip* get_curves();
    // private System.String UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName()
    // Offset: 0x19674FC
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: System.String ICurvesOwner::get_defaultCurvesName()
    ::Il2CppString* UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName();
    // public System.Boolean get_hasCurves()
    // Offset: 0x1967564
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: System.Boolean ICurvesOwner::get_hasCurves()
    bool get_hasCurves();
    // public UnityEngine.Object get_asset()
    // Offset: 0x1967600
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.Object ICurvesOwner::get_asset()
    UnityEngine::Object* get_asset();
    // Creating proxy method: UnityEngine_Timeline_ICurvesOwner_get_asset
    // Maps to method: get_asset
    UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_asset();
    // private UnityEngine.Object UnityEngine.Timeline.ICurvesOwner.get_assetOwner()
    // Offset: 0x1967610
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.Object ICurvesOwner::get_assetOwner()
    UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_assetOwner();
    // private UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.ICurvesOwner.get_targetTrack()
    // Offset: 0x1967618
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.Timeline.TrackAsset ICurvesOwner::get_targetTrack()
    UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_get_targetTrack();
    // public System.Void CreateCurves(System.String curvesClipName)
    // Offset: 0x1968A0C
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: System.Void ICurvesOwner::CreateCurves(System.String curvesClipName)
    void CreateCurves(::Il2CppString* curvesClipName);
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x1968CC4
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x1968CD0
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public override System.String ToString()
    // Offset: 0x1968D08
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Timeline.TimelineClip
  static check_size<sizeof(TimelineClip), 176 + sizeof(::Il2CppString*)> __UnityEngine_Timeline_TimelineClipSizeCheck;
  static_assert(sizeof(TimelineClip) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClip*, "UnityEngine.Timeline", "TimelineClip");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClip::ClipExtrapolation, "UnityEngine.Timeline", "TimelineClip/ClipExtrapolation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClip::BlendCurveMode, "UnityEngine.Timeline", "TimelineClip/BlendCurveMode");
#pragma pack(pop)
