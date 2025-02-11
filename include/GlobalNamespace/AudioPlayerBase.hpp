// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: AudioPlayerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioPlayerBase : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: AudioPlayerBase
    AudioPlayerBase() noexcept {}
    // public UnityEngine.AudioClip get_activeAudioClip()
    // Offset: 0xFFFFFFFF
    UnityEngine::AudioClip* get_activeAudioClip();
    // public System.Void FadeOut(System.Single duration)
    // Offset: 0xFFFFFFFF
    void FadeOut(float duration);
    // public System.Void PauseCurrentChannel()
    // Offset: 0xFFFFFFFF
    void PauseCurrentChannel();
    // public System.Void UnPauseCurrentChannel()
    // Offset: 0xFFFFFFFF
    void UnPauseCurrentChannel();
    // protected System.Void .ctor()
    // Offset: 0x1F2D7A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioPlayerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioPlayerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioPlayerBase*, creationType>()));
    }
  }; // AudioPlayerBase
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioPlayerBase*, "", "AudioPlayerBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioPlayerBase::get_activeAudioClip
// Il2CppName: get_activeAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (GlobalNamespace::AudioPlayerBase::*)()>(&GlobalNamespace::AudioPlayerBase::get_activeAudioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPlayerBase*), "get_activeAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPlayerBase::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioPlayerBase::*)(float)>(&GlobalNamespace::AudioPlayerBase::FadeOut)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPlayerBase*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPlayerBase::PauseCurrentChannel
// Il2CppName: PauseCurrentChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioPlayerBase::*)()>(&GlobalNamespace::AudioPlayerBase::PauseCurrentChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPlayerBase*), "PauseCurrentChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPlayerBase::UnPauseCurrentChannel
// Il2CppName: UnPauseCurrentChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioPlayerBase::*)()>(&GlobalNamespace::AudioPlayerBase::UnPauseCurrentChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPlayerBase*), "UnPauseCurrentChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPlayerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
