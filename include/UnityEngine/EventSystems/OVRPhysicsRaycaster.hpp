// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.OVRPhysicsRaycaster
  // [RequireComponent] Offset: CF27E8
  class OVRPhysicsRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c
    class $$c;
    // protected UnityEngine.LayerMask m_EventMask
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::LayerMask m_EventMask;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // public System.Int32 sortOrder
    // Size: 0x4
    // Offset: 0x24
    int sortOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRPhysicsRaycaster
    OVRPhysicsRaycaster(UnityEngine::LayerMask m_EventMask_ = {}, int sortOrder_ = {}) noexcept : m_EventMask{m_EventMask_}, sortOrder{sortOrder_} {}
    // static field const value: static protected System.Int32 kNoEventMaskSet
    static constexpr const int kNoEventMaskSet = -1;
    // Get static field: static protected System.Int32 kNoEventMaskSet
    static int _get_kNoEventMaskSet();
    // Set static field: static protected System.Int32 kNoEventMaskSet
    static void _set_kNoEventMaskSet(int value);
    // public System.Int32 get_depth()
    // Offset: 0x1E7D064
    int get_depth();
    // public System.Int32 get_finalEventMask()
    // Offset: 0x1E7D12C
    int get_finalEventMask();
    // public UnityEngine.LayerMask get_eventMask()
    // Offset: 0x1E7D200
    UnityEngine::LayerMask get_eventMask();
    // public System.Void set_eventMask(UnityEngine.LayerMask value)
    // Offset: 0x1E7D208
    void set_eventMask(UnityEngine::LayerMask value);
    // public System.Void Spherecast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList, System.Single radius)
    // Offset: 0x1E7BE70
    void Spherecast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList, float radius);
    // public UnityEngine.Vector2 GetScreenPos(UnityEngine.Vector3 worldPosition)
    // Offset: 0x1E7C1E8
    UnityEngine::Vector2 GetScreenPos(UnityEngine::Vector3 worldPosition);
    // protected System.Void .ctor()
    // Offset: 0x1E7CFD0
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPhysicsRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::OVRPhysicsRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPhysicsRaycaster*, creationType>()));
    }
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x1E7D004
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // public override System.Int32 get_sortOrderPriority()
    // Offset: 0x1E7D124
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Int32 BaseRaycaster::get_sortOrderPriority()
    int get_sortOrderPriority();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x1E7D210
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // UnityEngine.EventSystems.OVRPhysicsRaycaster
  #pragma pack(pop)
  static check_size<sizeof(OVRPhysicsRaycaster), 36 + sizeof(int)> __UnityEngine_EventSystems_OVRPhysicsRaycasterSizeCheck;
  static_assert(sizeof(OVRPhysicsRaycaster) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::OVRPhysicsRaycaster*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster");
