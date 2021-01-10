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
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x18
  // Autogenerated type: HMUI.PanelAnimation
  // [] Offset: FFFFFFFF
  class PanelAnimation : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::PanelAnimation::$AnimationCoroutine$d__1
    class $AnimationCoroutine$d__1;
    // Creating value type constructor for type: PanelAnimation
    PanelAnimation() noexcept {}
    // public System.Void StartAnimation(UnityEngine.CanvasGroup canvasGroup, UnityEngine.CanvasGroup parentCanvasGroup, System.Single duration, UnityEngine.AnimationCurve scaleXAnimationCurve, UnityEngine.AnimationCurve scaleYAnimationCurve, UnityEngine.AnimationCurve alphaAnimationCurve, UnityEngine.AnimationCurve parentAlphaAnimationCurve, System.Action finishedCallback)
    // Offset: 0x107D124
    void StartAnimation(UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, float duration, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback);
    // public System.Collections.IEnumerator AnimationCoroutine(System.Single duration, UnityEngine.CanvasGroup canvasGroup, UnityEngine.CanvasGroup parentCanvasGroup, UnityEngine.AnimationCurve scaleXAnimationCurve, UnityEngine.AnimationCurve scaleYAnimationCurve, UnityEngine.AnimationCurve alphaAnimationCurve, UnityEngine.AnimationCurve parentAlphaAnimationCurve, System.Action finishedCallback)
    // Offset: 0x107D294
    System::Collections::IEnumerator* AnimationCoroutine(float duration, UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback);
    // public System.Void .ctor()
    // Offset: 0x107D3F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PanelAnimation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::PanelAnimation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PanelAnimation*, creationType>()));
    }
  }; // HMUI.PanelAnimation
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimation*, "HMUI", "PanelAnimation");
#pragma pack(pop)
