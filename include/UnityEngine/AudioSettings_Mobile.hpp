// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioSettings
#include "UnityEngine/AudioSettings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioSettings/Mobile
  // [] Offset: FFFFFFFF
  class AudioSettings::Mobile : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Mobile
    Mobile() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xD74608
    // [DebuggerBrowsableAttribute] Offset: 0xD74608
    // Get static field: static private System.Boolean <muteState>k__BackingField
    static bool _get_$muteState$k__BackingField();
    // Set static field: static private System.Boolean <muteState>k__BackingField
    static void _set_$muteState$k__BackingField(bool value);
    // Get static field: static private System.Boolean _stopAudioOutputOnMute
    static bool _get__stopAudioOutputOnMute();
    // Set static field: static private System.Boolean _stopAudioOutputOnMute
    static void _set__stopAudioOutputOnMute(bool value);
    // [CompilerGeneratedAttribute] Offset: 0xD74644
    // [DebuggerBrowsableAttribute] Offset: 0xD74644
    // Get static field: static private System.Action`1<System.Boolean> OnMuteStateChanged
    static System::Action_1<bool>* _get_OnMuteStateChanged();
    // Set static field: static private System.Action`1<System.Boolean> OnMuteStateChanged
    static void _set_OnMuteStateChanged(System::Action_1<bool>* value);
    // static public System.Boolean get_muteState()
    // Offset: 0x19ECCA0
    static bool get_muteState();
    // static private System.Void set_muteState(System.Boolean value)
    // Offset: 0x19ECD08
    static void set_muteState(bool value);
    // static public System.Boolean get_stopAudioOutputOnMute()
    // Offset: 0x19ECD78
    static bool get_stopAudioOutputOnMute();
    // static System.Void InvokeOnMuteStateChanged(System.Boolean mute)
    // Offset: 0x19ECDE0
    static void InvokeOnMuteStateChanged(bool mute);
    // static public System.Void StartAudioOutput()
    // Offset: 0x19ED088
    static void StartAudioOutput();
    // static public System.Void StopAudioOutput()
    // Offset: 0x19ED054
    static void StopAudioOutput();
    // static private System.Void .cctor()
    // Offset: 0x19ED0BC
    static void _cctor();
  }; // UnityEngine.AudioSettings/Mobile
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings::Mobile*, "UnityEngine", "AudioSettings/Mobile");
