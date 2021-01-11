// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TrackLaneRingsRotationEffect
#include "GlobalNamespace/TrackLaneRingsRotationEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsRotationEffect/RingRotationEffect
  // [] Offset: FFFFFFFF
  class TrackLaneRingsRotationEffect::RingRotationEffect : public ::Il2CppObject {
    public:
    // public System.Single rotationAngle
    // Size: 0x4
    // Offset: 0x10
    float rotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotationStep
    // Size: 0x4
    // Offset: 0x14
    float rotationStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotationFlexySpeed
    // Size: 0x4
    // Offset: 0x18
    float rotationFlexySpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 rotationPropagationSpeed
    // Size: 0x4
    // Offset: 0x1C
    int rotationPropagationSpeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 progressPos
    // Size: 0x4
    // Offset: 0x20
    int progressPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RingRotationEffect
    RingRotationEffect(float rotationAngle_ = {}, float rotationStep_ = {}, float rotationFlexySpeed_ = {}, int rotationPropagationSpeed_ = {}, int progressPos_ = {}) noexcept : rotationAngle{rotationAngle_}, rotationStep{rotationStep_}, rotationFlexySpeed{rotationFlexySpeed_}, rotationPropagationSpeed{rotationPropagationSpeed_}, progressPos{progressPos_} {}
    // public System.Void .ctor()
    // Offset: 0xFEE050
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsRotationEffect::RingRotationEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsRotationEffect::RingRotationEffect*, creationType>()));
    }
  }; // TrackLaneRingsRotationEffect/RingRotationEffect
  static check_size<sizeof(TrackLaneRingsRotationEffect::RingRotationEffect), 32 + sizeof(int)> __GlobalNamespace_TrackLaneRingsRotationEffect_RingRotationEffectSizeCheck;
  static_assert(sizeof(TrackLaneRingsRotationEffect::RingRotationEffect) == 0x24);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*, "", "TrackLaneRingsRotationEffect/RingRotationEffect");
