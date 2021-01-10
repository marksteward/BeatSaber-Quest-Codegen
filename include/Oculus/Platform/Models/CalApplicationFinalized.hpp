// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Size: 0x28
  // Autogenerated type: Oculus.Platform.Models.CalApplicationFinalized
  // [] Offset: FFFFFFFF
  class CalApplicationFinalized : public ::Il2CppObject {
    public:
    // public readonly System.Int32 CountdownMS
    // Size: 0x4
    // Offset: 0x10
    int CountdownMS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: CountdownMS and: ID
    char __padding0[0x4] = {};
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x18
    uint64_t ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String LaunchDetails
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* LaunchDetails;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CalApplicationFinalized
    CalApplicationFinalized(int CountdownMS_ = {}, uint64_t ID_ = {}, ::Il2CppString* LaunchDetails_ = {}) noexcept : CountdownMS{CountdownMS_}, ID{ID_}, LaunchDetails{LaunchDetails_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11D8FEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalApplicationFinalized* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::CalApplicationFinalized::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalApplicationFinalized*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CalApplicationFinalized
  static check_size<sizeof(CalApplicationFinalized), 32 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_CalApplicationFinalizedSizeCheck;
  static_assert(sizeof(CalApplicationFinalized) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationFinalized*, "Oculus.Platform.Models", "CalApplicationFinalized");
#pragma pack(pop)
