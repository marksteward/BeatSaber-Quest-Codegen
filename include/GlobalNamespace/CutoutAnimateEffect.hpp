// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  // Autogenerated type: CutoutAnimateEffect
  // [] Offset: FFFFFFFF
  class CutoutAnimateEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7
    class $AnimateToCutoutCoroutine$d__7;
    // private CutoutEffect[] _cuttoutEffects
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::CutoutEffect*>* cuttoutEffects;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CutoutEffect*>*) == 0x8);
    // private UnityEngine.AnimationCurve _transitionCurve
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationCurve* transitionCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC66A0
    // private System.Boolean <animating>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool animating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CutoutAnimateEffect
    CutoutAnimateEffect(::Array<GlobalNamespace::CutoutEffect*>* cuttoutEffects_ = {}, UnityEngine::AnimationCurve* transitionCurve_ = {}, bool animating_ = {}) noexcept : cuttoutEffects{cuttoutEffects_}, transitionCurve{transitionCurve_}, animating{animating_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_animating()
    // Offset: 0x1A57748
    bool get_animating();
    // private System.Void set_animating(System.Boolean value)
    // Offset: 0x1A57750
    void set_animating(bool value);
    // protected System.Void Start()
    // Offset: 0x1A5775C
    void Start();
    // private System.Collections.IEnumerator AnimateToCutoutCoroutine(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1A577DC
    System::Collections::IEnumerator* AnimateToCutoutCoroutine(float cutoutStart, float cutoutEnd, float duration);
    // private System.Void SetCutout(System.Single cutout)
    // Offset: 0x1A57764
    void SetCutout(float cutout);
    // public System.Void ResetEffect()
    // Offset: 0x1A57970
    void ResetEffect();
    // public System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1A579A0
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
    // public System.Void .ctor()
    // Offset: 0x1A57A00
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutoutAnimateEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CutoutAnimateEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutoutAnimateEffect*, creationType>()));
    }
  }; // CutoutAnimateEffect
  static check_size<sizeof(CutoutAnimateEffect), 40 + sizeof(bool)> __GlobalNamespace_CutoutAnimateEffectSizeCheck;
  static_assert(sizeof(CutoutAnimateEffect) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutoutAnimateEffect*, "", "CutoutAnimateEffect");
#pragma pack(pop)
