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
  // Size: 0x18
  // Autogenerated type: Oculus.Platform.Models.PartyID
  // [] Offset: FFFFFFFF
  class PartyID : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: PartyID
    PartyID(uint64_t ID_ = {}) noexcept : ID{ID_} {}
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return ID;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DDBE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyID* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::PartyID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyID*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.PartyID
  static check_size<sizeof(PartyID), 16 + sizeof(uint64_t)> __Oculus_Platform_Models_PartyIDSizeCheck;
  static_assert(sizeof(PartyID) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PartyID*, "Oculus.Platform.Models", "PartyID");
#pragma pack(pop)
