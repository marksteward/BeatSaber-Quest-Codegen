// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CanvasGroup
  // [NativeClassAttribute] Offset: DB4C64
  // [NativeHeaderAttribute] Offset: DB4C64
  class CanvasGroup : public UnityEngine::Behaviour/*, public UnityEngine::ICanvasRaycastFilter*/ {
    public:
    // Creating value type constructor for type: CanvasGroup
    CanvasGroup() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ICanvasRaycastFilter
    operator UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // public System.Single get_alpha()
    // Offset: 0x23E3704
    float get_alpha();
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x23E3744
    void set_alpha(float value);
    // public System.Boolean get_interactable()
    // Offset: 0x23E3794
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x23E37D4
    void set_interactable(bool value);
    // public System.Boolean get_blocksRaycasts()
    // Offset: 0x23E3824
    bool get_blocksRaycasts();
    // public System.Void set_blocksRaycasts(System.Boolean value)
    // Offset: 0x23E3864
    void set_blocksRaycasts(bool value);
    // public System.Boolean get_ignoreParentGroups()
    // Offset: 0x23E38B4
    bool get_ignoreParentGroups();
    // public System.Void set_ignoreParentGroups(System.Boolean value)
    // Offset: 0x23E38F4
    void set_ignoreParentGroups(bool value);
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x23E3944
    bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
  }; // UnityEngine.CanvasGroup
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CanvasGroup*, "UnityEngine", "CanvasGroup");
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_alpha
// Il2CppName: get_alpha
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_alpha
// Il2CppName: set_alpha
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_interactable
// Il2CppName: get_interactable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_interactable
// Il2CppName: set_interactable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_blocksRaycasts
// Il2CppName: get_blocksRaycasts
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_blocksRaycasts
// Il2CppName: set_blocksRaycasts
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_ignoreParentGroups
// Il2CppName: get_ignoreParentGroups
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_ignoreParentGroups
// Il2CppName: set_ignoreParentGroups
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::IsRaycastLocationValid
// Il2CppName: IsRaycastLocationValid
// Cannot perform method pointer template specialization from operators!
