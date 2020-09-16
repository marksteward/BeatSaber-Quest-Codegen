// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.Audio.AudioMixerPlayable
#include "UnityEngine/Audio/AudioMixerPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Audio.AudioMixerPlayable.Create
UnityEngine::Audio::AudioMixerPlayable UnityEngine::Audio::AudioMixerPlayable::Create(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Audio::AudioMixerPlayable>("UnityEngine.Audio", "AudioMixerPlayable", "Create", graph, inputCount, normalizeInputVolumes));
}
// Autogenerated method: UnityEngine.Audio.AudioMixerPlayable.CreateHandle
UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioMixerPlayable::CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>("UnityEngine.Audio", "AudioMixerPlayable", "CreateHandle", graph, inputCount, normalizeInputVolumes));
}
// Autogenerated method: UnityEngine.Audio.AudioMixerPlayable..ctor
// ABORTED elsewhere.  UnityEngine::Audio::AudioMixerPlayable::AudioMixerPlayable(UnityEngine::Playables::PlayableHandle handle)
// Autogenerated method: UnityEngine.Audio.AudioMixerPlayable.CreateAudioMixerPlayableInternal
bool UnityEngine::Audio::AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine::Playables::PlayableGraph& graph, bool normalizeInputVolumes, UnityEngine::Playables::PlayableHandle& handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.Audio", "AudioMixerPlayable", "CreateAudioMixerPlayableInternal", graph, normalizeInputVolumes, handle));
}
// Autogenerated method: UnityEngine.Audio.AudioMixerPlayable.GetHandle
UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioMixerPlayable::GetHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>(*this, "GetHandle"));
}
// Autogenerated method: UnityEngine.Audio.AudioMixerPlayable.Equals
bool UnityEngine::Audio::AudioMixerPlayable::Equals(UnityEngine::Audio::AudioMixerPlayable other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
