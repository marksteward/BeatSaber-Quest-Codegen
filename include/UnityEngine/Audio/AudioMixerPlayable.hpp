// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
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
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0xC
  // Autogenerated type: UnityEngine.Audio.AudioMixerPlayable
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D742E8
  // [NativeHeaderAttribute] Offset: D742E8
  // [NativeHeaderAttribute] Offset: D742E8
  // [NativeHeaderAttribute] Offset: D742E8
  // [StaticAccessorAttribute] Offset: D742E8
  struct AudioMixerPlayable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: AudioMixerPlayable
    constexpr AudioMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>
    operator System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // static public UnityEngine.Audio.AudioMixerPlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeInputVolumes)
    // Offset: 0x19EAB58
    static UnityEngine::Audio::AudioMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeInputVolumes)
    // Offset: 0x19EAB98
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xCB81F4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AudioMixerPlayable(UnityEngine::Playables::PlayableHandle handle)
    // static private System.Boolean CreateAudioMixerPlayableInternal(ref UnityEngine.Playables.PlayableGraph graph, System.Boolean normalizeInputVolumes, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x19EAD44
    static bool CreateAudioMixerPlayableInternal(UnityEngine::Playables::PlayableGraph& graph, bool normalizeInputVolumes, UnityEngine::Playables::PlayableHandle& handle);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xCB81FC
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Audio.AudioMixerPlayable other)
    // Offset: 0xCB8208
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Audio.AudioMixerPlayable other)
    bool Equals(UnityEngine::Audio::AudioMixerPlayable other);
  }; // UnityEngine.Audio.AudioMixerPlayable
  static check_size<sizeof(AudioMixerPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Audio_AudioMixerPlayableSizeCheck;
  static_assert(sizeof(AudioMixerPlayable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerPlayable, "UnityEngine.Audio", "AudioMixerPlayable");
#pragma pack(pop)
