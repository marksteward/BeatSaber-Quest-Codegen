// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine/AudioClip_PCMReaderCallback.hpp"
// Including type: UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine/AudioClip_PCMSetPositionCallback.hpp"
// Including type: UnityEngine.AudioDataLoadState
#include "UnityEngine/AudioDataLoadState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.AudioClip.GetData
bool UnityEngine::AudioClip::GetData(UnityEngine::AudioClip* clip, ::Array<float>*& data, int numSamples, int samplesOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "AudioClip", "GetData", clip, data, numSamples, samplesOffset));
}
// Autogenerated method: UnityEngine.AudioClip.SetData
bool UnityEngine::AudioClip::SetData(UnityEngine::AudioClip* clip, ::Array<float>* data, int numsamples, int samplesOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "AudioClip", "SetData", clip, data, numsamples, samplesOffset));
}
// Autogenerated method: UnityEngine.AudioClip.Construct_Internal
UnityEngine::AudioClip* UnityEngine::AudioClip::Construct_Internal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioClip*>("UnityEngine", "AudioClip", "Construct_Internal"));
}
// Autogenerated method: UnityEngine.AudioClip.GetName
::Il2CppString* UnityEngine::AudioClip::GetName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetName"));
}
// Autogenerated method: UnityEngine.AudioClip.CreateUserSound
void UnityEngine::AudioClip::CreateUserSound(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CreateUserSound", name, lengthSamples, channels, frequency, stream));
}
// Autogenerated method: UnityEngine.AudioClip.get_length
float UnityEngine::AudioClip::get_length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_length"));
}
// Autogenerated method: UnityEngine.AudioClip.get_samples
int UnityEngine::AudioClip::get_samples() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_samples"));
}
// Autogenerated method: UnityEngine.AudioClip.get_channels
int UnityEngine::AudioClip::get_channels() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_channels"));
}
// Autogenerated method: UnityEngine.AudioClip.get_frequency
int UnityEngine::AudioClip::get_frequency() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_frequency"));
}
// Autogenerated method: UnityEngine.AudioClip.LoadAudioData
bool UnityEngine::AudioClip::LoadAudioData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "LoadAudioData"));
}
// Autogenerated method: UnityEngine.AudioClip.get_loadState
UnityEngine::AudioDataLoadState UnityEngine::AudioClip::get_loadState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioDataLoadState>(this, "get_loadState"));
}
// Autogenerated method: UnityEngine.AudioClip.GetData
bool UnityEngine::AudioClip::GetData(::Array<float>* data, int offsetSamples) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetData", data, offsetSamples));
}
// Autogenerated method: UnityEngine.AudioClip.SetData
bool UnityEngine::AudioClip::SetData(::Array<float>* data, int offsetSamples) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SetData", data, offsetSamples));
}
// Autogenerated method: UnityEngine.AudioClip.Create
UnityEngine::AudioClip* UnityEngine::AudioClip::Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioClip*>("UnityEngine", "AudioClip", "Create", name, lengthSamples, channels, frequency, stream));
}
// Autogenerated method: UnityEngine.AudioClip.Create
UnityEngine::AudioClip* UnityEngine::AudioClip::Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream, UnityEngine::AudioClip::PCMReaderCallback* pcmreadercallback, UnityEngine::AudioClip::PCMSetPositionCallback* pcmsetpositioncallback) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioClip*>("UnityEngine", "AudioClip", "Create", name, lengthSamples, channels, frequency, stream, pcmreadercallback, pcmsetpositioncallback));
}
// Autogenerated method: UnityEngine.AudioClip.add_m_PCMReaderCallback
void UnityEngine::AudioClip::add_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_m_PCMReaderCallback", value));
}
// Autogenerated method: UnityEngine.AudioClip.remove_m_PCMReaderCallback
void UnityEngine::AudioClip::remove_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_m_PCMReaderCallback", value));
}
// Autogenerated method: UnityEngine.AudioClip.add_m_PCMSetPositionCallback
void UnityEngine::AudioClip::add_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_m_PCMSetPositionCallback", value));
}
// Autogenerated method: UnityEngine.AudioClip.remove_m_PCMSetPositionCallback
void UnityEngine::AudioClip::remove_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_m_PCMSetPositionCallback", value));
}
// Autogenerated method: UnityEngine.AudioClip.InvokePCMReaderCallback_Internal
void UnityEngine::AudioClip::InvokePCMReaderCallback_Internal(::Array<float>* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokePCMReaderCallback_Internal", data));
}
// Autogenerated method: UnityEngine.AudioClip.InvokePCMSetPositionCallback_Internal
void UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal(int position) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokePCMSetPositionCallback_Internal", position));
}
// Autogenerated method: UnityEngine.AudioClip..ctor
UnityEngine::AudioClip* UnityEngine::AudioClip::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AudioClip*>());
}
