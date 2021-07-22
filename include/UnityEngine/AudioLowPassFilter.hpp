// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioLowPassFilter
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DA9854
  class AudioLowPassFilter : public UnityEngine::Behaviour {
    public:
    // Creating value type constructor for type: AudioLowPassFilter
    AudioLowPassFilter() noexcept {}
    // public System.Single get_cutoffFrequency()
    // Offset: 0x23AA934
    float get_cutoffFrequency();
    // public System.Void set_cutoffFrequency(System.Single value)
    // Offset: 0x23AA974
    void set_cutoffFrequency(float value);
  }; // UnityEngine.AudioLowPassFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::get_cutoffFrequency
// Il2CppName: get_cutoffFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioLowPassFilter::*)()>(&UnityEngine::AudioLowPassFilter::get_cutoffFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "get_cutoffFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::set_cutoffFrequency
// Il2CppName: set_cutoffFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioLowPassFilter::*)(float)>(&UnityEngine::AudioLowPassFilter::set_cutoffFrequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "set_cutoffFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
