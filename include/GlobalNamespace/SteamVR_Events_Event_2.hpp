// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: UnityEngine.Events.UnityEvent`2
#include "UnityEngine/Events/UnityEvent_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SteamVR_Events/Event`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1>
  class SteamVR_Events::Event_2 : public UnityEngine::Events::UnityEvent_2<T0, T1> {
    public:
    // Creating value type constructor for type: Event_2
    Event_2() noexcept {}
    // public System.Void Listen(UnityEngine.Events.UnityAction`2<T0,T1> action)
    // Offset: 0xFFFFFFFF
    void Listen(UnityEngine::Events::UnityAction_2<T0, T1>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_2::Listen");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Listen", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, action);
    }
    // public System.Void Remove(UnityEngine.Events.UnityAction`2<T0,T1> action)
    // Offset: 0xFFFFFFFF
    void Remove(UnityEngine::Events::UnityAction_2<T0, T1>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_2::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, action);
    }
    // public System.Void Send(T0 arg0, T1 arg1)
    // Offset: 0xFFFFFFFF
    void Send(T0 arg0, T1 arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_2::Send");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, arg0, arg1);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEvent`2
    // Base method: System.Void UnityEvent_2::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::Event_2<T0, T1>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::Event_2<T0, T1>*, creationType>()));
    }
  }; // SteamVR_Events/Event`2
  // Could not write size check! Type: SteamVR_Events/Event`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Event_2, "", "SteamVR_Events/Event`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
