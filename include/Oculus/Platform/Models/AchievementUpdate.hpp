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
  // Autogenerated type: Oculus.Platform.Models.AchievementUpdate
  class AchievementUpdate : public ::Il2CppObject {
    public:
    // public readonly System.Boolean JustUnlocked
    // Size: 0x1
    // Offset: 0x10
    bool JustUnlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: JustUnlocked and: Name
    char __padding0[0x7] = {};
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AchievementUpdate
    AchievementUpdate(bool JustUnlocked_ = {}, ::Il2CppString* Name_ = {}) noexcept : JustUnlocked{JustUnlocked_}, Name{Name_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14CC450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementUpdate* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AchievementUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementUpdate*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AchievementUpdate
  #pragma pack(pop)
  static check_size<sizeof(AchievementUpdate), 24 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_AchievementUpdateSizeCheck;
  static_assert(sizeof(AchievementUpdate) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementUpdate*, "Oculus.Platform.Models", "AchievementUpdate");
// Writing MetadataGetter for method: Oculus::Platform::Models::AchievementUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
