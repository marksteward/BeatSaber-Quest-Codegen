// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioClip/PCMReaderCallback
  class AudioClip::PCMReaderCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: PCMReaderCallback
    PCMReaderCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2197B00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClip::PCMReaderCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AudioClip::PCMReaderCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClip::PCMReaderCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single[] data)
    // Offset: 0x21974FC
    void Invoke(::Array<float>* data);
    // public System.IAsyncResult BeginInvoke(System.Single[] data, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2197B10
    System::IAsyncResult* BeginInvoke(::Array<float>* data, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2197B34
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AudioClip/PCMReaderCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip::PCMReaderCallback*, "UnityEngine", "AudioClip/PCMReaderCallback");
