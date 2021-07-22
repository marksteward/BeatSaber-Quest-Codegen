// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Touchable
#include "HMUI/Touchable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.CircleTouchable
  // [TokenAttribute] Offset: FFFFFFFF
  class CircleTouchable : public HMUI::Touchable {
    public:
    // private System.Single _minRadius
    // Size: 0x4
    // Offset: 0x90
    float minRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxRadius
    // Size: 0x4
    // Offset: 0x94
    float maxRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.RectTransform _containerRect
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::RectTransform* containerRect;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // Creating value type constructor for type: CircleTouchable
    CircleTouchable(float minRadius_ = {}, float maxRadius_ = {}, UnityEngine::RectTransform* containerRect_ = {}) noexcept : minRadius{minRadius_}, maxRadius{maxRadius_}, containerRect{containerRect_} {}
    // private System.Void UpdateCachedReferences()
    // Offset: 0x1304DB4
    void UpdateCachedReferences();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x1304F00
    void OnDrawGizmosSelected();
    // private System.Void DrawGizmoCircle(UnityEngine.Vector3 center, System.Single radius, System.Int32 steps)
    // Offset: 0x1305080
    void DrawGizmoCircle(UnityEngine::Vector3 center, float radius, int steps);
    // public System.Void .ctor()
    // Offset: 0x130525C
    // Implemented from: HMUI.Touchable
    // Base method: System.Void Touchable::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CircleTouchable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CircleTouchable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CircleTouchable*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1304D8C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnEnable()
    void OnEnable();
    // public override System.Boolean Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x1304E28
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Boolean Graphic::Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    bool Raycast(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
  }; // HMUI.CircleTouchable
  #pragma pack(pop)
  static check_size<sizeof(CircleTouchable), 152 + sizeof(UnityEngine::RectTransform*)> __HMUI_CircleTouchableSizeCheck;
  static_assert(sizeof(CircleTouchable) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CircleTouchable*, "HMUI", "CircleTouchable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::CircleTouchable::UpdateCachedReferences
// Il2CppName: UpdateCachedReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleTouchable::*)()>(&HMUI::CircleTouchable::UpdateCachedReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleTouchable*), "UpdateCachedReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleTouchable::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleTouchable::*)()>(&HMUI::CircleTouchable::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleTouchable*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleTouchable::DrawGizmoCircle
// Il2CppName: DrawGizmoCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleTouchable::*)(UnityEngine::Vector3, float, int)>(&HMUI::CircleTouchable::DrawGizmoCircle)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* steps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleTouchable*), "DrawGizmoCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius, steps});
  }
};
// Writing MetadataGetter for method: HMUI::CircleTouchable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::CircleTouchable::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CircleTouchable::*)()>(&HMUI::CircleTouchable::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleTouchable*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CircleTouchable::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::CircleTouchable::*)(UnityEngine::Vector2, UnityEngine::Camera*)>(&HMUI::CircleTouchable::Raycast)> {
  static const MethodInfo* get() {
    static auto* sp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CircleTouchable*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sp, eventCamera});
  }
};
