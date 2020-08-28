// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.IExposedPropertyTable
#include "UnityEngine/IExposedPropertyTable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: DirectorWrapMode
  struct DirectorWrapMode;
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableDirector
  class PlayableDirector : public UnityEngine::Behaviour, public UnityEngine::IExposedPropertyTable {
    public:
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> played
    // Offset: 0x18
    System::Action_1<UnityEngine::Playables::PlayableDirector*>* played;
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> paused
    // Offset: 0x20
    System::Action_1<UnityEngine::Playables::PlayableDirector*>* paused;
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> stopped
    // Offset: 0x28
    System::Action_1<UnityEngine::Playables::PlayableDirector*>* stopped;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public UnityEngine.Playables.DirectorWrapMode get_extrapolationMode()
    // Offset: 0x1982E2C
    UnityEngine::Playables::DirectorWrapMode get_extrapolationMode();
    // public UnityEngine.Playables.PlayableAsset get_playableAsset()
    // Offset: 0x1982EAC
    UnityEngine::Playables::PlayableAsset* get_playableAsset();
    // public UnityEngine.Playables.PlayableGraph get_playableGraph()
    // Offset: 0x1982F94
    UnityEngine::Playables::PlayableGraph get_playableGraph();
    // public System.Void set_time(System.Double value)
    // Offset: 0x1982FF0
    void set_time(double value);
    // public System.Double get_time()
    // Offset: 0x1983040
    double get_time();
    // public System.Void Evaluate()
    // Offset: 0x1983080
    void Evaluate();
    // public System.Void Play()
    // Offset: 0x19830C0
    void Play();
    // public System.Void Stop()
    // Offset: 0x1983100
    void Stop();
    // public System.Void Pause()
    // Offset: 0x1983140
    void Pause();
    // public UnityEngine.Object GetGenericBinding(UnityEngine.Object key)
    // Offset: 0x1983234
    UnityEngine::Object* GetGenericBinding(UnityEngine::Object* key);
    // private UnityEngine.Playables.DirectorWrapMode GetWrapMode()
    // Offset: 0x1982E6C
    UnityEngine::Playables::DirectorWrapMode GetWrapMode();
    // private UnityEngine.Playables.PlayableGraph GetGraphHandle()
    // Offset: 0x1982F98
    UnityEngine::Playables::PlayableGraph GetGraphHandle();
    // private UnityEngine.ScriptableObject Internal_GetPlayableAsset()
    // Offset: 0x1982F54
    UnityEngine::ScriptableObject* Internal_GetPlayableAsset();
    // private System.Void SendOnPlayableDirectorPlay()
    // Offset: 0x19832D4
    void SendOnPlayableDirectorPlay();
    // private System.Void SendOnPlayableDirectorPause()
    // Offset: 0x1983338
    void SendOnPlayableDirectorPause();
    // private System.Void SendOnPlayableDirectorStop()
    // Offset: 0x198339C
    void SendOnPlayableDirectorStop();
    // private UnityEngine.Object GetReferenceValue_Injected(UnityEngine.PropertyName id, System.Boolean idValid)
    // Offset: 0x19831DC
    UnityEngine::Object* GetReferenceValue_Injected(UnityEngine::PropertyName& id, bool& idValid);
    // private System.Void GetGraphHandle_Injected(UnityEngine.Playables.PlayableGraph ret)
    // Offset: 0x1983284
    void GetGraphHandle_Injected(UnityEngine::Playables::PlayableGraph& ret);
    // public UnityEngine.Object GetReferenceValue(UnityEngine.PropertyName id, System.Boolean idValid)
    // Offset: 0x1983180
    // Implemented from: UnityEngine.IExposedPropertyTable
    // Base method: UnityEngine.Object IExposedPropertyTable::GetReferenceValue(UnityEngine.PropertyName id, System.Boolean idValid)
    UnityEngine::Object* GetReferenceValue(UnityEngine::PropertyName id, bool& idValid);
  }; // UnityEngine.Playables.PlayableDirector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
#pragma pack(pop)
