// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.ServiceProvider
#include "Oculus/Platform/ServiceProvider.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LinkedAccount
  class LinkedAccount : public ::Il2CppObject {
    public:
    // public readonly System.String AccessToken
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* AccessToken;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Oculus.Platform.ServiceProvider ServiceProvider
    // Size: 0x4
    // Offset: 0x18
    Oculus::Platform::ServiceProvider ServiceProvider;
    // Field size check
    static_assert(sizeof(Oculus::Platform::ServiceProvider) == 0x4);
    // Padding between fields: ServiceProvider and: UserId
    char __padding1[0x4] = {};
    // public readonly System.String UserId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* UserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LinkedAccount
    LinkedAccount(::Il2CppString* AccessToken_ = {}, Oculus::Platform::ServiceProvider ServiceProvider_ = {}, ::Il2CppString* UserId_ = {}) noexcept : AccessToken{AccessToken_}, ServiceProvider{ServiceProvider_}, UserId{UserId_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14D6930
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedAccount* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LinkedAccount::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedAccount*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LinkedAccount
  #pragma pack(pop)
  static check_size<sizeof(LinkedAccount), 32 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_LinkedAccountSizeCheck;
  static_assert(sizeof(LinkedAccount) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LinkedAccount*, "Oculus.Platform.Models", "LinkedAccount");
// Writing MetadataGetter for method: Oculus::Platform::Models::LinkedAccount::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
