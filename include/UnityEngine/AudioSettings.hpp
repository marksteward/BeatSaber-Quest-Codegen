// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioConfiguration
  struct AudioConfiguration;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DA95EC
  // [StaticAccessorAttribute] Offset: DA95EC
  class AudioSettings : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::AudioSettings::AudioConfigurationChangeHandler
    class AudioConfigurationChangeHandler;
    // Nested type: UnityEngine::AudioSettings::Mobile
    class Mobile;
    // Creating value type constructor for type: AudioSettings
    AudioSettings() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xDA9D04
    // Get static field: static private UnityEngine.AudioSettings/UnityEngine.AudioConfigurationChangeHandler OnAudioConfigurationChanged
    static UnityEngine::AudioSettings::AudioConfigurationChangeHandler* _get_OnAudioConfigurationChanged();
    // Set static field: static private UnityEngine.AudioSettings/UnityEngine.AudioConfigurationChangeHandler OnAudioConfigurationChanged
    static void _set_OnAudioConfigurationChanged(UnityEngine::AudioSettings::AudioConfigurationChangeHandler* value);
    // static public System.Double get_dspTime()
    // Offset: 0x23AA9F8
    static double get_dspTime();
    // static public System.Int32 get_outputSampleRate()
    // Offset: 0x23AAA2C
    static int get_outputSampleRate();
    // static private System.Int32 GetSampleRate()
    // Offset: 0x23AA9C4
    static int GetSampleRate();
    // static public System.String GetSpatializerPluginName()
    // Offset: 0x23AAA60
    static ::Il2CppString* GetSpatializerPluginName();
    // static public UnityEngine.AudioConfiguration GetConfiguration()
    // Offset: 0x23AAA94
    static UnityEngine::AudioConfiguration GetConfiguration();
    // static System.Void InvokeOnAudioConfigurationChanged(System.Boolean deviceWasChanged)
    // Offset: 0x23AAB38
    static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged);
    // static System.Boolean StartAudioOutput()
    // Offset: 0x23AAE10
    static bool StartAudioOutput();
    // static System.Boolean StopAudioOutput()
    // Offset: 0x23AAE44
    static bool StopAudioOutput();
    // static private System.Void GetConfiguration_Injected(out UnityEngine.AudioConfiguration ret)
    // Offset: 0x23AAAF8
    static void GetConfiguration_Injected(UnityEngine::AudioConfiguration& ret);
  }; // UnityEngine.AudioSettings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings*, "UnityEngine", "AudioSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioSettings::get_dspTime
// Il2CppName: get_dspTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&UnityEngine::AudioSettings::get_dspTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "get_dspTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::get_outputSampleRate
// Il2CppName: get_outputSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::AudioSettings::get_outputSampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "get_outputSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::GetSampleRate
// Il2CppName: GetSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::AudioSettings::GetSampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "GetSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::GetSpatializerPluginName
// Il2CppName: GetSpatializerPluginName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::AudioSettings::GetSpatializerPluginName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "GetSpatializerPluginName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::GetConfiguration
// Il2CppName: GetConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioConfiguration (*)()>(&UnityEngine::AudioSettings::GetConfiguration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "GetConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged
// Il2CppName: InvokeOnAudioConfigurationChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged)> {
  static const MethodInfo* get() {
    static auto* deviceWasChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "InvokeOnAudioConfigurationChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceWasChanged});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::StartAudioOutput
// Il2CppName: StartAudioOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::AudioSettings::StartAudioOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "StartAudioOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::StopAudioOutput
// Il2CppName: StopAudioOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::AudioSettings::StopAudioOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "StopAudioOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::GetConfiguration_Injected
// Il2CppName: GetConfiguration_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AudioConfiguration&)>(&UnityEngine::AudioSettings::GetConfiguration_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioConfiguration")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings*), "GetConfiguration_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
