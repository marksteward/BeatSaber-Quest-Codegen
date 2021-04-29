// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.AchievementProgress
  class AchievementProgress : public ::Il2CppObject {
    public:
    // public readonly System.String Bitfield
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Bitfield;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.UInt64 Count
    // Size: 0x8
    // Offset: 0x18
    uint64_t Count;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.Boolean IsUnlocked
    // Size: 0x1
    // Offset: 0x20
    bool IsUnlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsUnlocked and: Name
    char __padding2[0x7] = {};
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.DateTime UnlockTime
    // Size: 0x8
    // Offset: 0x30
    System::DateTime UnlockTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: AchievementProgress
    AchievementProgress(::Il2CppString* Bitfield_ = {}, uint64_t Count_ = {}, bool IsUnlocked_ = {}, ::Il2CppString* Name_ = {}, System::DateTime UnlockTime_ = {}) noexcept : Bitfield{Bitfield_}, Count{Count_}, IsUnlocked{IsUnlocked_}, Name{Name_}, UnlockTime{UnlockTime_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13AEA5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementProgress* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AchievementProgress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementProgress*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AchievementProgress
  #pragma pack(pop)
  static check_size<sizeof(AchievementProgress), 48 + sizeof(System::DateTime)> __Oculus_Platform_Models_AchievementProgressSizeCheck;
  static_assert(sizeof(AchievementProgress) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementProgress*, "Oculus.Platform.Models", "AchievementProgress");
