// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Playables.INotificationReceiver
#include "UnityEngine/Playables/INotificationReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: INotification
  class INotification;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: TimelinePauseReceiver
  // [] Offset: FFFFFFFF
  class TimelinePauseReceiver : public UnityEngine::MonoBehaviour/*, public UnityEngine::Playables::INotificationReceiver*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD99418
    // private System.Action timelinePauseEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* timelinePauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: TimelinePauseReceiver
    TimelinePauseReceiver(System::Action* timelinePauseEvent_ = {}) noexcept : timelinePauseEvent{timelinePauseEvent_} {}
    // Creating interface conversion operator: operator UnityEngine::Playables::INotificationReceiver
    operator UnityEngine::Playables::INotificationReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::INotificationReceiver*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_timelinePauseEvent(System.Action value)
    // Offset: 0x19CEDB4
    void add_timelinePauseEvent(System::Action* value);
    // public System.Void remove_timelinePauseEvent(System.Action value)
    // Offset: 0x19CEE58
    void remove_timelinePauseEvent(System::Action* value);
    // public System.Void OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x19CEEFC
    // Implemented from: UnityEngine.Playables.INotificationReceiver
    // Base method: System.Void INotificationReceiver::OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    void OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
    // public System.Void .ctor()
    // Offset: 0x19CEF9C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelinePauseReceiver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TimelinePauseReceiver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelinePauseReceiver*, creationType>()));
    }
  }; // TimelinePauseReceiver
  static check_size<sizeof(TimelinePauseReceiver), 24 + sizeof(System::Action*)> __GlobalNamespace_TimelinePauseReceiverSizeCheck;
  static_assert(sizeof(TimelinePauseReceiver) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimelinePauseReceiver*, "", "TimelinePauseReceiver");
#pragma pack(pop)
