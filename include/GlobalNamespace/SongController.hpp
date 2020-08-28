// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SongController
  class SongController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Action songDidFinishEvent
    // Offset: 0x18
    System::Action* songDidFinishEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void add_songDidFinishEvent(System.Action value)
    // Offset: 0xB9C358
    void add_songDidFinishEvent(System::Action* value);
    // public System.Void remove_songDidFinishEvent(System.Action value)
    // Offset: 0xB9C3FC
    void remove_songDidFinishEvent(System::Action* value);
    // public System.Void SendSongDidFinishEvent()
    // Offset: 0xB9C4A0
    void SendSongDidFinishEvent();
    // public System.Void StartSong()
    // Offset: 0xFFFFFFFF
    void StartSong();
    // public System.Void StopSong()
    // Offset: 0xFFFFFFFF
    void StopSong();
    // public System.Void PauseSong()
    // Offset: 0xFFFFFFFF
    void PauseSong();
    // public System.Void ResumeSong()
    // Offset: 0xFFFFFFFF
    void ResumeSong();
    // protected System.Void .ctor()
    // Offset: 0xB9C4B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SongController* New_ctor();
  }; // SongController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongController*, "", "SongController");
#pragma pack(pop)
