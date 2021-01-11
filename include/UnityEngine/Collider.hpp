// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Bounds
  struct Bounds;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Collider
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D5C8D8
  // [RequiredByNativeCodeAttribute] Offset: D5C8D8
  // [RequireComponent] Offset: D5C8D8
  class Collider : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: Collider
    Collider() noexcept {}
    // public System.Boolean get_enabled()
    // Offset: 0x19F1A68
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x19F1AA8
    void set_enabled(bool value);
    // public UnityEngine.Rigidbody get_attachedRigidbody()
    // Offset: 0x19F1AF8
    UnityEngine::Rigidbody* get_attachedRigidbody();
    // public System.Boolean get_isTrigger()
    // Offset: 0x19F1B38
    bool get_isTrigger();
    // public System.Void set_isTrigger(System.Boolean value)
    // Offset: 0x19F1B78
    void set_isTrigger(bool value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x19F1BC8
    UnityEngine::Bounds get_bounds();
    // private System.Void Internal_ClosestPointOnBounds(UnityEngine.Vector3 point, ref UnityEngine.Vector3 outPos, ref System.Single distance)
    // Offset: 0x19F1C84
    void Internal_ClosestPointOnBounds(UnityEngine::Vector3 point, UnityEngine::Vector3& outPos, float& distance);
    // public UnityEngine.Vector3 ClosestPointOnBounds(UnityEngine.Vector3 position)
    // Offset: 0x19F1D5C
    UnityEngine::Vector3 ClosestPointOnBounds(UnityEngine::Vector3 position);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x19F1C34
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void Internal_ClosestPointOnBounds_Injected(ref UnityEngine.Vector3 point, ref UnityEngine.Vector3 outPos, ref System.Single distance)
    // Offset: 0x19F1CF4
    void Internal_ClosestPointOnBounds_Injected(UnityEngine::Vector3& point, UnityEngine::Vector3& outPos, float& distance);
  }; // UnityEngine.Collider
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Collider*, "UnityEngine", "Collider");
