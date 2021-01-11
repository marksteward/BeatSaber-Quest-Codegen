// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Experimental.Audio.AudioSampleProvider
#include "UnityEngine/Experimental/Audio/AudioSampleProvider.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
  // [] Offset: FFFFFFFF
  class AudioSampleProvider::SampleFramesHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SampleFramesHandler
    SampleFramesHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19EDED4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioSampleProvider::SampleFramesHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioSampleProvider::SampleFramesHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider provider, System.UInt32 sampleFrameCount)
    // Offset: 0x19EDA8C
    void Invoke(UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint sampleFrameCount);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider provider, System.UInt32 sampleFrameCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19EDEE8
    System::IAsyncResult* BeginInvoke(UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint sampleFrameCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x19EDF84
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*, "UnityEngine.Experimental.Audio", "AudioSampleProvider/SampleFramesHandler");
