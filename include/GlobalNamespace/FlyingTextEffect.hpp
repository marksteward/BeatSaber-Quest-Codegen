// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingObjectEffect
#include "GlobalNamespace/FlyingObjectEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  // Autogenerated type: FlyingTextEffect
  // [] Offset: FFFFFFFF
  class FlyingTextEffect : public GlobalNamespace::FlyingObjectEffect {
    public:
    // Writing base type padding for base size: 0x7D to desired offset: 0x80
    char ___base_padding[0x3] = {};
    // Nested type: GlobalNamespace::FlyingTextEffect::Pool
    class Pool;
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.AnimationCurve _fadeAnimationCurve
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::AnimationCurve* fadeAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // protected UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: FlyingTextEffect
    FlyingTextEffect(TMPro::TextMeshPro* text_ = {}, UnityEngine::AnimationCurve* fadeAnimationCurve_ = {}, UnityEngine::Color color_ = {}) noexcept : text{text_}, fadeAnimationCurve{fadeAnimationCurve_}, color{color_} {}
    // public System.Void InitAndPresent(System.String text, System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, UnityEngine.Color color, System.Single fontSize, System.Boolean shake)
    // Offset: 0x1A15E58
    void InitAndPresent(::Il2CppString* text, float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Color color, float fontSize, bool shake);
    // protected override System.Void ManualUpdate(System.Single t)
    // Offset: 0x1A15ECC
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::ManualUpdate(System.Single t)
    void ManualUpdate(float t);
    // public System.Void .ctor()
    // Offset: 0x1A15F48
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingTextEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingTextEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingTextEffect*, creationType>()));
    }
  }; // FlyingTextEffect
  static check_size<sizeof(FlyingTextEffect), 144 + sizeof(UnityEngine::Color)> __GlobalNamespace_FlyingTextEffectSizeCheck;
  static_assert(sizeof(FlyingTextEffect) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingTextEffect*, "", "FlyingTextEffect");
#pragma pack(pop)
