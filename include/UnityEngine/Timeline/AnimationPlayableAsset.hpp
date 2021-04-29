// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Including type: UnityEngine.Timeline.IPropertyPreview
#include "UnityEngine/Timeline/IPropertyPreview.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.Timeline.MatchTargetFields
#include "UnityEngine/Timeline/MatchTargetFields.hpp"
// Including type: UnityEngine.Timeline.AppliedOffsetMode
#include "UnityEngine/Timeline/AppliedOffsetMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: LoopMode because it is already included!
  // Forward declaring type: ClipCaps
  struct ClipCaps;
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationPlayableAsset
  // [NotKeyableAttribute] Offset: CFC914
  class AnimationPlayableAsset : public UnityEngine::Playables::PlayableAsset/*, public UnityEngine::Timeline::ITimelineClipAsset, public UnityEngine::Timeline::IPropertyPreview, public UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // Nested type: UnityEngine::Timeline::AnimationPlayableAsset::LoopMode
    struct LoopMode;
    // Nested type: UnityEngine::Timeline::AnimationPlayableAsset::Versions
    struct Versions;
    // Nested type: UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAssetUpgrade
    class AnimationPlayableAssetUpgrade;
    // Nested type: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45
    class $get_outputs$d__45;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Timeline.AnimationPlayableAsset/LoopMode
    struct LoopMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LoopMode
      constexpr LoopMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // [TooltipAttribute] Offset: 0xCFDEB8
      // static field const value: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode UseSourceAsset
      static constexpr const int UseSourceAsset = 0;
      // Get static field: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode UseSourceAsset
      static UnityEngine::Timeline::AnimationPlayableAsset::LoopMode _get_UseSourceAsset();
      // Set static field: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode UseSourceAsset
      static void _set_UseSourceAsset(UnityEngine::Timeline::AnimationPlayableAsset::LoopMode value);
      // [TooltipAttribute] Offset: 0xCFDEF0
      // static field const value: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode On
      static constexpr const int On = 1;
      // Get static field: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode On
      static UnityEngine::Timeline::AnimationPlayableAsset::LoopMode _get_On();
      // Set static field: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode On
      static void _set_On(UnityEngine::Timeline::AnimationPlayableAsset::LoopMode value);
      // [TooltipAttribute] Offset: 0xCFDF28
      // static field const value: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode Off
      static constexpr const int Off = 2;
      // Get static field: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode Off
      static UnityEngine::Timeline::AnimationPlayableAsset::LoopMode _get_Off();
      // Set static field: static public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode Off
      static void _set_Off(UnityEngine::Timeline::AnimationPlayableAsset::LoopMode value);
    }; // UnityEngine.Timeline.AnimationPlayableAsset/LoopMode
    #pragma pack(pop)
    static check_size<sizeof(AnimationPlayableAsset::LoopMode), 0 + sizeof(int)> __UnityEngine_Timeline_AnimationPlayableAsset_LoopModeSizeCheck;
    static_assert(sizeof(AnimationPlayableAsset::LoopMode) == 0x4);
    // private UnityEngine.AnimationClip m_Clip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimationClip* m_Clip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_EulerAngles
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 m_EulerAngles;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean m_UseTrackMatchFields
    // Size: 0x1
    // Offset: 0x38
    bool m_UseTrackMatchFields;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseTrackMatchFields and: m_MatchTargetFields
    char __padding3[0x3] = {};
    // private UnityEngine.Timeline.MatchTargetFields m_MatchTargetFields
    // Size: 0x4
    // Offset: 0x3C
    UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::MatchTargetFields) == 0x4);
    // private System.Boolean m_RemoveStartOffset
    // Size: 0x1
    // Offset: 0x40
    bool m_RemoveStartOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_ApplyFootIK
    // Size: 0x1
    // Offset: 0x41
    bool m_ApplyFootIK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ApplyFootIK and: m_Loop
    char __padding6[0x2] = {};
    // private UnityEngine.Timeline.AnimationPlayableAsset/LoopMode m_Loop
    // Size: 0x4
    // Offset: 0x44
    UnityEngine::Timeline::AnimationPlayableAsset::LoopMode m_Loop;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::AnimationPlayableAsset::LoopMode) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCFD1B0
    // private UnityEngine.Timeline.AppliedOffsetMode <appliedOffsetMode>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    UnityEngine::Timeline::AppliedOffsetMode appliedOffsetMode;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::AppliedOffsetMode) == 0x4);
    // [HideInInspector] Offset: 0xCFD1C0
    // private System.Int32 m_Version
    // Size: 0x4
    // Offset: 0x4C
    int m_Version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [ObsoleteAttribute] Offset: 0xCFD1F8
    // [HideInInspector] Offset: 0xCFD1F8
    // private UnityEngine.Quaternion m_Rotation
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Quaternion m_Rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: AnimationPlayableAsset
    AnimationPlayableAsset(UnityEngine::AnimationClip* m_Clip_ = {}, UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Vector3 m_EulerAngles_ = {}, bool m_UseTrackMatchFields_ = {}, UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields_ = {}, bool m_RemoveStartOffset_ = {}, bool m_ApplyFootIK_ = {}, UnityEngine::Timeline::AnimationPlayableAsset::LoopMode m_Loop_ = {}, UnityEngine::Timeline::AppliedOffsetMode appliedOffsetMode_ = {}, int m_Version_ = {}, UnityEngine::Quaternion m_Rotation_ = {}) noexcept : m_Clip{m_Clip_}, m_Position{m_Position_}, m_EulerAngles{m_EulerAngles_}, m_UseTrackMatchFields{m_UseTrackMatchFields_}, m_MatchTargetFields{m_MatchTargetFields_}, m_RemoveStartOffset{m_RemoveStartOffset_}, m_ApplyFootIK{m_ApplyFootIK_}, m_Loop{m_Loop_}, appliedOffsetMode{appliedOffsetMode_}, m_Version{m_Version_}, m_Rotation{m_Rotation_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineClipAsset
    operator UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Timeline::IPropertyPreview
    operator UnityEngine::Timeline::IPropertyPreview() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::IPropertyPreview*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ISerializationCallbackReceiver
    operator UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 k_LatestVersion
    static int _get_k_LatestVersion();
    // Set static field: static private readonly System.Int32 k_LatestVersion
    static void _set_k_LatestVersion(int value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x167BFB4
    UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x167BFC0
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x167BFCC
    UnityEngine::Quaternion get_rotation();
    // public System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x167C054
    void set_rotation(UnityEngine::Quaternion value);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0x167C094
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0x167C0A0
    void set_eulerAngles(UnityEngine::Vector3 value);
    // public System.Boolean get_useTrackMatchFields()
    // Offset: 0x167C0AC
    bool get_useTrackMatchFields();
    // public System.Void set_useTrackMatchFields(System.Boolean value)
    // Offset: 0x167C0B4
    void set_useTrackMatchFields(bool value);
    // public UnityEngine.Timeline.MatchTargetFields get_matchTargetFields()
    // Offset: 0x167C0C0
    UnityEngine::Timeline::MatchTargetFields get_matchTargetFields();
    // public System.Void set_matchTargetFields(UnityEngine.Timeline.MatchTargetFields value)
    // Offset: 0x167C0C8
    void set_matchTargetFields(UnityEngine::Timeline::MatchTargetFields value);
    // public System.Boolean get_removeStartOffset()
    // Offset: 0x167C0D0
    bool get_removeStartOffset();
    // public System.Void set_removeStartOffset(System.Boolean value)
    // Offset: 0x167C0D8
    void set_removeStartOffset(bool value);
    // public System.Boolean get_applyFootIK()
    // Offset: 0x167C0E4
    bool get_applyFootIK();
    // public System.Void set_applyFootIK(System.Boolean value)
    // Offset: 0x167C0EC
    void set_applyFootIK(bool value);
    // public UnityEngine.Timeline.AnimationPlayableAsset/LoopMode get_loop()
    // Offset: 0x167C0F8
    UnityEngine::Timeline::AnimationPlayableAsset::LoopMode get_loop();
    // public System.Void set_loop(UnityEngine.Timeline.AnimationPlayableAsset/LoopMode value)
    // Offset: 0x167C100
    void set_loop(UnityEngine::Timeline::AnimationPlayableAsset::LoopMode value);
    // System.Boolean get_hasRootTransforms()
    // Offset: 0x167C108
    bool get_hasRootTransforms();
    // UnityEngine.Timeline.AppliedOffsetMode get_appliedOffsetMode()
    // Offset: 0x167C294
    UnityEngine::Timeline::AppliedOffsetMode get_appliedOffsetMode();
    // System.Void set_appliedOffsetMode(UnityEngine.Timeline.AppliedOffsetMode value)
    // Offset: 0x167C29C
    void set_appliedOffsetMode(UnityEngine::Timeline::AppliedOffsetMode value);
    // public UnityEngine.AnimationClip get_clip()
    // Offset: 0x167C2A4
    UnityEngine::AnimationClip* get_clip();
    // public System.Void set_clip(UnityEngine.AnimationClip value)
    // Offset: 0x167C2AC
    void set_clip(UnityEngine::AnimationClip* value);
    // static UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip, UnityEngine.Vector3 positionOffset, UnityEngine.Vector3 eulerOffset, System.Boolean removeStartOffset, UnityEngine.Timeline.AppliedOffsetMode mode, System.Boolean applyFootIK, UnityEngine.Timeline.AnimationPlayableAsset/LoopMode loop)
    // Offset: 0x167C748
    static UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip* clip, UnityEngine::Vector3 positionOffset, UnityEngine::Vector3 eulerOffset, bool removeStartOffset, UnityEngine::Timeline::AppliedOffsetMode mode, bool applyFootIK, UnityEngine::Timeline::AnimationPlayableAsset::LoopMode loop);
    // static private System.Boolean ShouldApplyOffset(UnityEngine.Timeline.AppliedOffsetMode mode, UnityEngine.AnimationClip clip)
    // Offset: 0x167CB20
    static bool ShouldApplyOffset(UnityEngine::Timeline::AppliedOffsetMode mode, UnityEngine::AnimationClip* clip);
    // static private System.Boolean ShouldApplyScaleRemove(UnityEngine.Timeline.AppliedOffsetMode mode)
    // Offset: 0x167CB00
    static bool ShouldApplyScaleRemove(UnityEngine::Timeline::AppliedOffsetMode mode);
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x167CBB0
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void ResetOffsets()
    // Offset: 0x167CCB8
    void ResetOffsets();
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0x167CD38
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
    // static System.Boolean HasRootTransforms(UnityEngine.AnimationClip clip)
    // Offset: 0x167C1B8
    static bool HasRootTransforms(UnityEngine::AnimationClip* clip);
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x167CDFC
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x167CE6C
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // private System.Void OnUpgradeFromVersion(System.Int32 oldVersion)
    // Offset: 0x167CF0C
    void OnUpgradeFromVersion(int oldVersion);
    // public override System.Double get_duration()
    // Offset: 0x167C370
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x167C5A0
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> PlayableAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x167C658
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // public System.Void .ctor()
    // Offset: 0x167CF54
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationPlayableAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AnimationPlayableAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationPlayableAsset*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x167D04C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.Timeline.AnimationPlayableAsset
  #pragma pack(pop)
  static check_size<sizeof(AnimationPlayableAsset), 80 + sizeof(UnityEngine::Quaternion)> __UnityEngine_Timeline_AnimationPlayableAssetSizeCheck;
  static_assert(sizeof(AnimationPlayableAsset) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationPlayableAsset*, "UnityEngine.Timeline", "AnimationPlayableAsset");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationPlayableAsset::LoopMode, "UnityEngine.Timeline", "AnimationPlayableAsset/LoopMode");
