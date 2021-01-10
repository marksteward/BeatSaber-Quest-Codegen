// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.SignalReceiver
#include "UnityEngine/Timeline/SignalReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalAsset
  class SignalAsset;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x20
  // Autogenerated type: UnityEngine.Timeline.SignalReceiver/EventKeyValue
  // [] Offset: FFFFFFFF
  class SignalReceiver::EventKeyValue : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset> m_Signals
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>* m_Signals;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>*) == 0x8);
    // [CustomSignalEventDrawer] Offset: 0xD8E304
    // private System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> m_Events
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>* m_Events;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>*) == 0x8);
    // Creating value type constructor for type: EventKeyValue
    EventKeyValue(System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>* m_Signals_ = {}, System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>* m_Events_ = {}) noexcept : m_Signals{m_Signals_}, m_Events{m_Events_} {}
    // public System.Boolean TryGetValue(UnityEngine.Timeline.SignalAsset key, out UnityEngine.Events.UnityEvent value)
    // Offset: 0x1420978
    bool TryGetValue(UnityEngine::Timeline::SignalAsset* key, UnityEngine::Events::UnityEvent*& value);
    // public System.Void Append(UnityEngine.Timeline.SignalAsset key, UnityEngine.Events.UnityEvent value)
    // Offset: 0x1420B6C
    void Append(UnityEngine::Timeline::SignalAsset* key, UnityEngine::Events::UnityEvent* value);
    // public System.Void Remove(System.Int32 idx)
    // Offset: 0x1421194
    void Remove(int idx);
    // public System.Void Remove(UnityEngine.Timeline.SignalAsset key)
    // Offset: 0x1420D30
    void Remove(UnityEngine::Timeline::SignalAsset* key);
    // public System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset> get_signals()
    // Offset: 0x1421590
    System::Collections::Generic::List_1<UnityEngine::Timeline::SignalAsset*>* get_signals();
    // public System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> get_events()
    // Offset: 0x1421598
    System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>* get_events();
    // public System.Void .ctor()
    // Offset: 0x14214E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalReceiver::EventKeyValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SignalReceiver::EventKeyValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalReceiver::EventKeyValue*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalReceiver/EventKeyValue
  static check_size<sizeof(SignalReceiver::EventKeyValue), 24 + sizeof(System::Collections::Generic::List_1<UnityEngine::Events::UnityEvent*>*)> __UnityEngine_Timeline_SignalReceiver_EventKeyValueSizeCheck;
  static_assert(sizeof(SignalReceiver::EventKeyValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalReceiver::EventKeyValue*, "UnityEngine.Timeline", "SignalReceiver/EventKeyValue");
#pragma pack(pop)
