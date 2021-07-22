// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.SdkAccountType
#include "Oculus/Platform/SdkAccountType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.SdkAccount
  // [TokenAttribute] Offset: FFFFFFFF
  class SdkAccount : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.SdkAccountType AccountType
    // Size: 0x4
    // Offset: 0x10
    Oculus::Platform::SdkAccountType AccountType;
    // Field size check
    static_assert(sizeof(Oculus::Platform::SdkAccountType) == 0x4);
    // Padding between fields: AccountType and: UserId
    char __padding0[0x4] = {};
    // public readonly System.UInt64 UserId
    // Size: 0x8
    // Offset: 0x18
    uint64_t UserId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: SdkAccount
    SdkAccount(Oculus::Platform::SdkAccountType AccountType_ = {}, uint64_t UserId_ = {}) noexcept : AccountType{AccountType_}, UserId{UserId_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14AA684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SdkAccount* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::SdkAccount::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SdkAccount*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.SdkAccount
  #pragma pack(pop)
  static check_size<sizeof(SdkAccount), 24 + sizeof(uint64_t)> __Oculus_Platform_Models_SdkAccountSizeCheck;
  static_assert(sizeof(SdkAccount) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SdkAccount*, "Oculus.Platform.Models", "SdkAccount");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::SdkAccount::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
