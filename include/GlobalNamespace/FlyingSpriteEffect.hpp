// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: FlyingSpriteEffect
  class FlyingSpriteEffect : public GlobalNamespace::FlyingObjectEffect {
    public:
    // Nested type: GlobalNamespace::FlyingSpriteEffect::Pool
    class Pool;
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
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
    // Creating value type constructor for type: FlyingSpriteEffect
    FlyingSpriteEffect(UnityEngine::SpriteRenderer* spriteRenderer_ = {}, UnityEngine::AnimationCurve* fadeAnimationCurve_ = {}, UnityEngine::Color color_ = {}) noexcept : spriteRenderer{spriteRenderer_}, fadeAnimationCurve{fadeAnimationCurve_}, color{color_} {}
    // public System.Void InitAndPresent(System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, UnityEngine.Sprite sprite, UnityEngine.Material material, UnityEngine.Color color, System.Boolean shake)
    // Offset: 0x1047C10
    void InitAndPresent(float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Sprite* sprite, UnityEngine::Material* material, UnityEngine::Color color, bool shake);
    // protected override System.Void ManualUpdate(System.Single t)
    // Offset: 0x1047CD4
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::ManualUpdate(System.Single t)
    void ManualUpdate(float t);
    // public System.Void .ctor()
    // Offset: 0x1047D48
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingSpriteEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingSpriteEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingSpriteEffect*, creationType>()));
    }
  }; // FlyingSpriteEffect
  #pragma pack(pop)
  static check_size<sizeof(FlyingSpriteEffect), 144 + sizeof(UnityEngine::Color)> __GlobalNamespace_FlyingSpriteEffectSizeCheck;
  static_assert(sizeof(FlyingSpriteEffect) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingSpriteEffect*, "", "FlyingSpriteEffect");
// Writing MetadataGetter for method: GlobalNamespace::FlyingSpriteEffect::InitAndPresent
// Il2CppName: InitAndPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingSpriteEffect::*)(float, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Sprite*, UnityEngine::Material*, UnityEngine::Color, bool)>(&GlobalNamespace::FlyingSpriteEffect::InitAndPresent)> {
  const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* shake = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingSpriteEffect*), "InitAndPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration, targetPos, rotation, sprite, material, color, shake});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingSpriteEffect::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingSpriteEffect::*)(float)>(&GlobalNamespace::FlyingSpriteEffect::ManualUpdate)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingSpriteEffect*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingSpriteEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
