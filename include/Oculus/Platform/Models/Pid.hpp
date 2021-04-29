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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Pid
  class Pid : public ::Il2CppObject {
    public:
    // public readonly System.String Id
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Pid
    Pid(::Il2CppString* Id_ = {}) noexcept : Id{Id_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Id;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13AF8D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pid* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::Pid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pid*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Pid
  #pragma pack(pop)
  static check_size<sizeof(Pid), 16 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_PidSizeCheck;
  static_assert(sizeof(Pid) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Pid*, "Oculus.Platform.Models", "Pid");
