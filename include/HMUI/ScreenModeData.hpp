// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScreenModeData
  class ScreenModeData : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 rotation
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x28
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean offsetHeightByHeadPos
    // Size: 0x1
    // Offset: 0x30
    bool offsetHeightByHeadPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: offsetHeightByHeadPos and: yOffsetRelativeToHead
    char __padding4[0x3] = {};
    // [DrawIfAttribute] Offset: 0xD174B8
    // public System.Single yOffsetRelativeToHead
    // Size: 0x4
    // Offset: 0x34
    float yOffsetRelativeToHead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xD17550
    // public System.Single minYPos
    // Size: 0x4
    // Offset: 0x38
    float minYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ScreenModeData
    ScreenModeData(UnityEngine::Vector3 position_ = {}, UnityEngine::Vector3 rotation_ = {}, float scale_ = {}, float radius_ = {}, bool offsetHeightByHeadPos_ = {}, float yOffsetRelativeToHead_ = {}, float minYPos_ = {}) noexcept : position{position_}, rotation{rotation_}, scale{scale_}, radius{radius_}, offsetHeightByHeadPos{offsetHeightByHeadPos_}, yOffsetRelativeToHead{yOffsetRelativeToHead_}, minYPos{minYPos_} {}
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 rotation, System.Single scale, System.Single radius, System.Boolean offsetHeightByHeadPos, System.Single yOffsetRelativeToHead, System.Single minYPos)
    // Offset: 0x121A2E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenModeData* New_ctor(UnityEngine::Vector3 position, UnityEngine::Vector3 rotation, float scale, float radius, bool offsetHeightByHeadPos, float yOffsetRelativeToHead, float minYPos) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScreenModeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenModeData*, creationType>(position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos)));
    }
  }; // HMUI.ScreenModeData
  #pragma pack(pop)
  static check_size<sizeof(ScreenModeData), 56 + sizeof(float)> __HMUI_ScreenModeDataSizeCheck;
  static_assert(sizeof(ScreenModeData) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScreenModeData*, "HMUI", "ScreenModeData");
