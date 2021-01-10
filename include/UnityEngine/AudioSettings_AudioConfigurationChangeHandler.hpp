// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioSettings
#include "UnityEngine/AudioSettings.hpp"
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
  // Autogenerated type: UnityEngine.AudioSettings/AudioConfigurationChangeHandler
  // [] Offset: FFFFFFFF
  class AudioSettings::AudioConfigurationChangeHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: AudioConfigurationChangeHandler
    AudioConfigurationChangeHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19ECBF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioSettings::AudioConfigurationChangeHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AudioSettings::AudioConfigurationChangeHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioSettings::AudioConfigurationChangeHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean deviceWasChanged)
    // Offset: 0x19EC90C
    void Invoke(bool deviceWasChanged);
    // public System.IAsyncResult BeginInvoke(System.Boolean deviceWasChanged, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19ECC04
    System::IAsyncResult* BeginInvoke(bool deviceWasChanged, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x19ECC94
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AudioSettings/AudioConfigurationChangeHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings::AudioConfigurationChangeHandler*, "UnityEngine", "AudioSettings/AudioConfigurationChangeHandler");
#pragma pack(pop)
