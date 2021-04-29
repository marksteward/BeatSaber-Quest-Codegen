// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationMixerPlayable
  // [NativeHeaderAttribute] Offset: CCFFC0
  // [StaticAccessorAttribute] Offset: CCFFC0
  // [NativeHeaderAttribute] Offset: CCFFC0
  // [NativeHeaderAttribute] Offset: CCFFC0
  // [RequiredByNativeCodeAttribute] Offset: CCFFC0
  struct AnimationMixerPlayable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationMixerPlayable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: AnimationMixerPlayable
    constexpr AnimationMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Animations::AnimationMixerPlayable>
    operator System::IEquatable_1<UnityEngine::Animations::AnimationMixerPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Animations::AnimationMixerPlayable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationMixerPlayable m_NullPlayable
    static UnityEngine::Animations::AnimationMixerPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationMixerPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationMixerPlayable value);
    // static public UnityEngine.Animations.AnimationMixerPlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeWeights)
    // Offset: 0x21737E4
    static UnityEngine::Animations::AnimationMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeWeights);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeWeights)
    // Offset: 0x217389C
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeWeights);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xE2C558
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AnimationMixerPlayable(UnityEngine::Playables::PlayableHandle handle)
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xE2C560
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationMixerPlayable other)
    // Offset: 0xE2C56C
    bool Equals(UnityEngine::Animations::AnimationMixerPlayable other);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, System.Boolean normalizeWeights, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2173A5C
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, bool normalizeWeights, UnityEngine::Playables::PlayableHandle& handle);
    // static private System.Void .cctor()
    // Offset: 0x2173C28
    static void _cctor();
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, System.Boolean normalizeWeights, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2173BD0
    static bool CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, bool normalizeWeights, UnityEngine::Playables::PlayableHandle& handle);
  }; // UnityEngine.Animations.AnimationMixerPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationMixerPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationMixerPlayableSizeCheck;
  static_assert(sizeof(AnimationMixerPlayable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationMixerPlayable, "UnityEngine.Animations", "AnimationMixerPlayable");
