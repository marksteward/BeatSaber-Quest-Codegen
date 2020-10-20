// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.IEnvoyInfo
#include "System/Runtime/Remoting/IEnvoyInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.EnvoyInfo
  class EnvoyInfo : public ::Il2CppObject/*, public System::Runtime::Remoting::IEnvoyInfo*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink envoySinks
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* envoySinks;
    // Creating interface conversion operator: operator System::Runtime::Remoting::IEnvoyInfo
    operator System::Runtime::Remoting::IEnvoyInfo() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::IEnvoyInfo*>(this);
    }
    // Creating conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink*
    constexpr operator System::Runtime::Remoting::Messaging::IMessageSink*() const noexcept {
      return envoySinks;
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink sinks)
    // Offset: 0x109E5DC
    static EnvoyInfo* New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* sinks);
    // public System.Runtime.Remoting.Messaging.IMessageSink get_EnvoySinks()
    // Offset: 0x109E610
    // Implemented from: System.Runtime.Remoting.IEnvoyInfo
    // Base method: System.Runtime.Remoting.Messaging.IMessageSink IEnvoyInfo::get_EnvoySinks()
    System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks();
  }; // System.Runtime.Remoting.EnvoyInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::EnvoyInfo*, "System.Runtime.Remoting", "EnvoyInfo");
#pragma pack(pop)
