// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Animation
  class Animation;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEffectController
  class BTSStarTextEffectController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSStarTextEffectController::Pool
    class Pool;
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private System.Single _currentAnimationDuration
    // Size: 0x4
    // Offset: 0x30
    float currentAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BTSStarTextEffectController
    BTSStarTextEffectController(UnityEngine::Transform* transform_ = {}, UnityEngine::SpriteRenderer* spriteRenderer_ = {}, UnityEngine::Animation* animation_ = {}, float currentAnimationDuration_ = {}) noexcept : transform{transform_}, spriteRenderer{spriteRenderer_}, animation{animation_}, currentAnimationDuration{currentAnimationDuration_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kAnimationName
    static constexpr const char* kAnimationName = "StarTextShort";
    // Get static field: static private System.String kAnimationName
    static ::Il2CppString* _get_kAnimationName();
    // Set static field: static private System.String kAnimationName
    static void _set_kAnimationName(::Il2CppString* value);
    // public System.Single get_animationDuration()
    // Offset: 0x113CC34
    float get_animationDuration();
    // private System.Void Reinitialize(UnityEngine.Sprite sprite, UnityEngine.Transform parentTransform, System.Single desiredAnimationLength)
    // Offset: 0x113CC3C
    void Reinitialize(UnityEngine::Sprite* sprite, UnityEngine::Transform* parentTransform, float desiredAnimationLength);
    // public System.Void .ctor()
    // Offset: 0x113CD4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEffectController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEffectController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEffectController*, creationType>()));
    }
  }; // BTSStarTextEffectController
  #pragma pack(pop)
  static check_size<sizeof(BTSStarTextEffectController), 48 + sizeof(float)> __GlobalNamespace_BTSStarTextEffectControllerSizeCheck;
  static_assert(sizeof(BTSStarTextEffectController) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEffectController*, "", "BTSStarTextEffectController");
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::get_animationDuration
// Il2CppName: get_animationDuration
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::Reinitialize
// Il2CppName: Reinitialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
