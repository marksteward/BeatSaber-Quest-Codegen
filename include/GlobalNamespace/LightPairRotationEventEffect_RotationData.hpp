// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightPairRotationEventEffect
#include "GlobalNamespace/LightPairRotationEventEffect.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: LightPairRotationEventEffect/RotationData
  // [] Offset: FFFFFFFF
  class LightPairRotationEventEffect::RotationData : public ::Il2CppObject {
    public:
    // public System.Boolean enabled
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: rotationSpeed
    char __padding0[0x3] = {};
    // public System.Single rotationSpeed
    // Size: 0x4
    // Offset: 0x14
    float rotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion startRotation
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Quaternion startRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single startRotationAngle
    // Size: 0x4
    // Offset: 0x30
    float startRotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotationAngle
    // Size: 0x4
    // Offset: 0x34
    float rotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RotationData
    RotationData(bool enabled_ = {}, float rotationSpeed_ = {}, UnityEngine::Quaternion startRotation_ = {}, UnityEngine::Transform* transform_ = {}, float startRotationAngle_ = {}, float rotationAngle_ = {}) noexcept : enabled{enabled_}, rotationSpeed{rotationSpeed_}, startRotation{startRotation_}, transform{transform_}, startRotationAngle{startRotationAngle_}, rotationAngle{rotationAngle_} {}
    // public System.Void .ctor()
    // Offset: 0x1AC6C68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightPairRotationEventEffect::RotationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightPairRotationEventEffect::RotationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightPairRotationEventEffect::RotationData*, creationType>()));
    }
  }; // LightPairRotationEventEffect/RotationData
  static check_size<sizeof(LightPairRotationEventEffect::RotationData), 52 + sizeof(float)> __GlobalNamespace_LightPairRotationEventEffect_RotationDataSizeCheck;
  static_assert(sizeof(LightPairRotationEventEffect::RotationData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightPairRotationEventEffect::RotationData*, "", "LightPairRotationEventEffect/RotationData");
#pragma pack(pop)
