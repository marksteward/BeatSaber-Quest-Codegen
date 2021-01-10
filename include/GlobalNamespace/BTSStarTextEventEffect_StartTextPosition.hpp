// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSStarTextEventEffect
#include "GlobalNamespace/BTSStarTextEventEffect.hpp"
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
  // Size: 0x20
  // Autogenerated type: BTSStarTextEventEffect/StartTextPosition
  // [] Offset: FFFFFFFF
  class BTSStarTextEventEffect::StartTextPosition : public ::Il2CppObject {
    public:
    // private System.Int32 _id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: transform
    char __padding0[0x4] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: StartTextPosition
    StartTextPosition(int id_ = {}, UnityEngine::Transform* transform_ = {}) noexcept : id{id_}, transform{transform_} {}
    // public System.Int32 get_id()
    // Offset: 0x1A4CAA0
    int get_id();
    // public UnityEngine.Transform get_transform()
    // Offset: 0x1A4CAA8
    UnityEngine::Transform* get_transform();
    // public System.Void .ctor()
    // Offset: 0x1A4CAB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEventEffect::StartTextPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEventEffect::StartTextPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEventEffect::StartTextPosition*, creationType>()));
    }
  }; // BTSStarTextEventEffect/StartTextPosition
  static check_size<sizeof(BTSStarTextEventEffect::StartTextPosition), 24 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_BTSStarTextEventEffect_StartTextPositionSizeCheck;
  static_assert(sizeof(BTSStarTextEventEffect::StartTextPosition) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*, "", "BTSStarTextEventEffect/StartTextPosition");
#pragma pack(pop)
