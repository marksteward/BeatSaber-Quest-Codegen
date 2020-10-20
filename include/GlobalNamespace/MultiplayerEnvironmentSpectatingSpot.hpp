// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerSpectatingSpot
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSpectatingSpotManager
  class MultiplayerSpectatingSpotManager;
  // Forward declaring type: MultiplayerActivePlayersTimeOffsetAverage
  class MultiplayerActivePlayersTimeOffsetAverage;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerEnvironmentSpectatingSpot
  class MultiplayerEnvironmentSpectatingSpot : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerSpectatingSpot*/ {
    public:
    // private System.Boolean _preferredSpectatingSpot
    // Offset: 0x18
    bool preferredSpectatingSpot;
    // private System.Boolean _displaySpotNumber
    // Offset: 0x19
    bool displaySpotNumber;
    // private System.Int32 _spotNumber
    // Offset: 0x1C
    int spotNumber;
    // private readonly MultiplayerSpectatingSpotManager _spectatingSpotManager
    // Offset: 0x20
    GlobalNamespace::MultiplayerSpectatingSpotManager* spectatingSpotManager;
    // private readonly MultiplayerActivePlayersTimeOffsetAverage _activePlayersTimeOffsetAverage
    // Offset: 0x28
    GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* activePlayersTimeOffsetAverage;
    // private System.Action`1<IMultiplayerSpectatingSpot> hasBeenRemovedEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSpectatingSpot
    operator GlobalNamespace::IMultiplayerSpectatingSpot() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSpectatingSpot*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x203CA18
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x203CA38
    void OnDisable();
    // public System.Void add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x203C814
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Void IMultiplayerSpectatingSpot::add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    void add_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x203C8B8
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Void IMultiplayerSpectatingSpot::remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    void remove_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public IMultiplayerObservable get_observable()
    // Offset: 0x203C95C
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: IMultiplayerObservable IMultiplayerSpectatingSpot::get_observable()
    GlobalNamespace::IMultiplayerObservable* get_observable();
    // public System.String get_spotName()
    // Offset: 0x203C964
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.String IMultiplayerSpectatingSpot::get_spotName()
    ::Il2CppString* get_spotName();
    // public System.Boolean get_isMain()
    // Offset: 0x203CA10
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Boolean IMultiplayerSpectatingSpot::get_isMain()
    bool get_isMain();
    // public System.Void SetIsObserved(System.Boolean isObserved)
    // Offset: 0x203CA9C
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Void IMultiplayerSpectatingSpot::SetIsObserved(System.Boolean isObserved)
    void SetIsObserved(bool isObserved);
    // public System.Void .ctor()
    // Offset: 0x203CAA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerEnvironmentSpectatingSpot* New_ctor();
    // private UnityEngine.Transform IMultiplayerSpectatingSpot.get_transform()
    // Offset: 0x203CAA8
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: UnityEngine.Transform IMultiplayerSpectatingSpot::get_transform()
    UnityEngine::Transform* GlobalNamespace_IMultiplayerSpectatingSpot_get_transform();
  }; // MultiplayerEnvironmentSpectatingSpot
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*, "", "MultiplayerEnvironmentSpectatingSpot");
#pragma pack(pop)
