// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Assets.OVR.Scripts.Record
#include "Assets/OVR/Scripts/Record.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Size: 0x2C
  // Autogenerated type: Assets.OVR.Scripts.RangedRecord
  // [] Offset: FFFFFFFF
  class RangedRecord : public Assets::OVR::Scripts::Record {
    public:
    // public System.Single value
    // Size: 0x4
    // Offset: 0x20
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single min
    // Size: 0x4
    // Offset: 0x24
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single max
    // Size: 0x4
    // Offset: 0x28
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RangedRecord
    RangedRecord(float value_ = {}, float min_ = {}, float max_ = {}) noexcept : value{value_}, min{min_}, max{max_} {}
    // public System.Void .ctor(System.String cat, System.String msg, System.Single val, System.Single minVal, System.Single maxVal)
    // Offset: 0x11E89F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangedRecord* New_ctor(::Il2CppString* cat, ::Il2CppString* msg, float val, float minVal, float maxVal) {
      static auto ___internal__logger = ::Logger::get().WithContext("Assets::OVR::Scripts::RangedRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangedRecord*, creationType>(cat, msg, val, minVal, maxVal)));
    }
  }; // Assets.OVR.Scripts.RangedRecord
  static check_size<sizeof(RangedRecord), 40 + sizeof(float)> __Assets_OVR_Scripts_RangedRecordSizeCheck;
  static_assert(sizeof(RangedRecord) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::RangedRecord*, "Assets.OVR.Scripts", "RangedRecord");
#pragma pack(pop)
