// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TimelineAsset
#include "UnityEngine/Timeline/TimelineAsset.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: DC3E28
  struct TimelineAsset::MediaType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MediaType
    constexpr MediaType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Animation
    static constexpr const int Animation = 0;
    // Get static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Animation
    static UnityEngine::Timeline::TimelineAsset::MediaType _get_Animation();
    // Set static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Animation
    static void _set_Animation(UnityEngine::Timeline::TimelineAsset::MediaType value);
    // static field const value: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Audio
    static constexpr const int Audio = 1;
    // Get static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Audio
    static UnityEngine::Timeline::TimelineAsset::MediaType _get_Audio();
    // Set static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Audio
    static void _set_Audio(UnityEngine::Timeline::TimelineAsset::MediaType value);
    // static field const value: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Texture
    static constexpr const int Texture = 2;
    // Get static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Texture
    static UnityEngine::Timeline::TimelineAsset::MediaType _get_Texture();
    // Set static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Texture
    static void _set_Texture(UnityEngine::Timeline::TimelineAsset::MediaType value);
    // [ObsoleteAttribute] Offset: 0xDC4D54
    // static field const value: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Video
    static constexpr const int Video = 2;
    // Get static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Video
    static UnityEngine::Timeline::TimelineAsset::MediaType _get_Video();
    // Set static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Video
    static void _set_Video(UnityEngine::Timeline::TimelineAsset::MediaType value);
    // static field const value: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Script
    static constexpr const int Script = 3;
    // Get static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Script
    static UnityEngine::Timeline::TimelineAsset::MediaType _get_Script();
    // Set static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Script
    static void _set_Script(UnityEngine::Timeline::TimelineAsset::MediaType value);
    // static field const value: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Hybrid
    static constexpr const int Hybrid = 4;
    // Get static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Hybrid
    static UnityEngine::Timeline::TimelineAsset::MediaType _get_Hybrid();
    // Set static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Hybrid
    static void _set_Hybrid(UnityEngine::Timeline::TimelineAsset::MediaType value);
    // static field const value: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Group
    static constexpr const int Group = 5;
    // Get static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Group
    static UnityEngine::Timeline::TimelineAsset::MediaType _get_Group();
    // Set static field: static public UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType Group
    static void _set_Group(UnityEngine::Timeline::TimelineAsset::MediaType value);
  }; // UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType
  #pragma pack(pop)
  static check_size<sizeof(TimelineAsset::MediaType), 0 + sizeof(int)> __UnityEngine_Timeline_TimelineAsset_MediaTypeSizeCheck;
  static_assert(sizeof(TimelineAsset::MediaType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineAsset::MediaType, "UnityEngine.Timeline", "TimelineAsset/MediaType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
