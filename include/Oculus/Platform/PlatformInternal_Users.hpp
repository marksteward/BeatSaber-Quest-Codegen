// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.PlatformInternal
#include "Oculus/Platform/PlatformInternal.hpp"
// Including type: Oculus.Platform.ServiceProvider
#include "Oculus/Platform/ServiceProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LinkedAccountList
  class LinkedAccountList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PlatformInternal/Users
  class PlatformInternal::Users : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Users
    Users() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList> GetLinkedAccounts(Oculus.Platform.ServiceProvider[] providers)
    // Offset: 0x13B19C4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList*>* GetLinkedAccounts(::Array<Oculus::Platform::ServiceProvider>* providers);
  }; // Oculus.Platform.PlatformInternal/Users
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInternal::Users*, "Oculus.Platform", "PlatformInternal/Users");
