// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine/AudioClip_PCMReaderCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.AudioClip/PCMReaderCallback..ctor
UnityEngine::AudioClip::PCMReaderCallback* UnityEngine::AudioClip::PCMReaderCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<AudioClip::PCMReaderCallback*>(object, method));
}
// Autogenerated method: UnityEngine.AudioClip/PCMReaderCallback.Invoke
void UnityEngine::AudioClip::PCMReaderCallback::Invoke(::Array<float>* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", data));
}
// Autogenerated method: UnityEngine.AudioClip/PCMReaderCallback.BeginInvoke
System::IAsyncResult* UnityEngine::AudioClip::PCMReaderCallback::BeginInvoke(::Array<float>* data, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", data, callback, object));
}
// Autogenerated method: UnityEngine.AudioClip/PCMReaderCallback.EndInvoke
void UnityEngine::AudioClip::PCMReaderCallback::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
