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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.UserReportID
  class UserReportID : public ::Il2CppObject {
    public:
    // public readonly System.Boolean DidCancel
    // Size: 0x1
    // Offset: 0x10
    bool DidCancel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DidCancel and: _ID
    char __padding0[0x7] = {};
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x18
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: UserReportID
    UserReportID(bool DidCancel_ = {}, uint64_t _ID_ = {}) noexcept : DidCancel{DidCancel_}, _ID{_ID_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13AE908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserReportID* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::UserReportID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserReportID*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.UserReportID
  #pragma pack(pop)
  static check_size<sizeof(UserReportID), 24 + sizeof(uint64_t)> __Oculus_Platform_Models_UserReportIDSizeCheck;
  static_assert(sizeof(UserReportID) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserReportID*, "Oculus.Platform.Models", "UserReportID");
