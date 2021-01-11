// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IAuthenticationTokenProvider
  // [] Offset: FFFFFFFF
  class IAuthenticationTokenProvider {
    public:
    // Creating value type constructor for type: IAuthenticationTokenProvider
    IAuthenticationTokenProvider() noexcept {}
    // public System.Threading.Tasks.Task`1<AuthenticationToken> GetAuthenticationToken()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();
    // public System.String get_hashedUserId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_hashedUserId();
  }; // IAuthenticationTokenProvider
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAuthenticationTokenProvider*, "", "IAuthenticationTokenProvider");
