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
  class AudioSettings::Mobile : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Mobile
    Mobile() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xCE2D1C
    // [CompilerGeneratedAttribute] Offset: 0xCE2D1C
    // Get static field: static private System.Boolean <muteState>k__BackingField
    static bool _get_$muteState$k__BackingField();
    // Set static field: static private System.Boolean <muteState>k__BackingField
    static void _set_$muteState$k__BackingField(bool value);
    // Get static field: static private System.Boolean _stopAudioOutputOnMute
    static bool _get__stopAudioOutputOnMute();
    // Set static field: static private System.Boolean _stopAudioOutputOnMute
    static void _set__stopAudioOutputOnMute(bool value);
    // [CompilerGeneratedAttribute] Offset: 0xCE2D58
    // [DebuggerBrowsableAttribute] Offset: 0xCE2D58
    // Get static field: static private System.Action`1<System.Boolean> OnMuteStateChanged
    static System::Action_1<bool>* _get_OnMuteStateChanged();
    // Set static field: static private System.Action`1<System.Boolean> OnMuteStateChanged
    static void _set_OnMuteStateChanged(System::Action_1<bool>* value);
    // static public System.Boolean get_muteState()
    // Offset: 0x219824C
    static bool get_muteState();
    // static private System.Void set_muteState(System.Boolean value)
    // Offset: 0x21982B4
    static void set_muteState(bool value);
    // static public System.Boolean get_stopAudioOutputOnMute()
    // Offset: 0x2198324
    static bool get_stopAudioOutputOnMute();
    // static System.Void InvokeOnMuteStateChanged(System.Boolean mute)
    // Offset: 0x219838C
    static void InvokeOnMuteStateChanged(bool mute);
    // static public System.Void StartAudioOutput()
    // Offset: 0x2198634
    static void StartAudioOutput();
    // static public System.Void StopAudioOutput()
    // Offset: 0x2198600
    static void StopAudioOutput();
    // static private System.Void .cctor()
    // Offset: 0x2198668
    static void _cctor();
  }; // UnityEngine.AudioSettings/Mobile
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings::Mobile*, "UnityEngine", "AudioSettings/Mobile");
