// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PlatformInternal
  class PlatformInternal : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::PlatformInternal::MessageTypeInternal
    struct MessageTypeInternal;
    // Nested type: Oculus::Platform::PlatformInternal::HTTP
    class HTTP;
    // Nested type: Oculus::Platform::PlatformInternal::Users
    class Users;
    // Creating value type constructor for type: PlatformInternal
    PlatformInternal() noexcept {}
    // static public System.Void CrashApplication()
    // Offset: 0x13B17BC
    static void CrashApplication();
    // static Oculus.Platform.Message ParseMessageHandle(System.IntPtr messageHandle, Oculus.Platform.Message/MessageType messageType)
    // Offset: 0x13A4370
    static Oculus::Platform::Message* ParseMessageHandle(System::IntPtr messageHandle, Oculus::Platform::Message::MessageType messageType);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> InitializeStandaloneAsync(System.UInt64 appID, System.String accessToken)
    // Offset: 0x13B181C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* InitializeStandaloneAsync(uint64_t appID, ::Il2CppString* accessToken);
  }; // Oculus.Platform.PlatformInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInternal*, "Oculus.Platform", "PlatformInternal");
