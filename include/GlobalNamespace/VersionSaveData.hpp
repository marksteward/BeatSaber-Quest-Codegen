// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VersionSaveData
  // [] Offset: FFFFFFFF
  class VersionSaveData : public ::Il2CppObject {
    public:
    // public System.String version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: VersionSaveData
    VersionSaveData(::Il2CppString* version_ = {}) noexcept : version{version_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return version;
    }
    // public System.Void .ctor()
    // Offset: 0x1977808
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VersionSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionSaveData*, creationType>()));
    }
  }; // VersionSaveData
  static check_size<sizeof(VersionSaveData), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_VersionSaveDataSizeCheck;
  static_assert(sizeof(VersionSaveData) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VersionSaveData*, "", "VersionSaveData");
