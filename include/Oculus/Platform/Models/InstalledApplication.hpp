// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.InstalledApplication
  class InstalledApplication : public ::Il2CppObject {
    public:
    // public readonly System.String ApplicationId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ApplicationId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String PackageName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* PackageName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Status
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Status;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int32 VersionCode
    // Size: 0x4
    // Offset: 0x28
    int VersionCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: VersionCode and: VersionName
    char __padding3[0x4] = {};
    // public readonly System.String VersionName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* VersionName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: InstalledApplication
    InstalledApplication(::Il2CppString* ApplicationId_ = {}, ::Il2CppString* PackageName_ = {}, ::Il2CppString* Status_ = {}, int VersionCode_ = {}, ::Il2CppString* VersionName_ = {}) noexcept : ApplicationId{ApplicationId_}, PackageName{PackageName_}, Status{Status_}, VersionCode{VersionCode_}, VersionName{VersionName_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13AEE84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstalledApplication* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::InstalledApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstalledApplication*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.InstalledApplication
  #pragma pack(pop)
  static check_size<sizeof(InstalledApplication), 48 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_InstalledApplicationSizeCheck;
  static_assert(sizeof(InstalledApplication) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::InstalledApplication*, "Oculus.Platform.Models", "InstalledApplication");
