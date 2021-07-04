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
  // [RequireComponent] Offset: DCCE84
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
    // Offset: 0x1EDB08C
    int get_depth();
    // public System.Int32 get_finalEventMask()
    // Offset: 0x1EDB154
    int get_finalEventMask();
    // public UnityEngine.LayerMask get_eventMask()
    // Offset: 0x1EDB228
    UnityEngine::LayerMask get_eventMask();
    // public System.Void set_eventMask(UnityEngine.LayerMask value)
    // Offset: 0x1EDB230
    void set_eventMask(UnityEngine::LayerMask value);
    // public System.Void Spherecast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList, System.Single radius)
    // Offset: 0x1ED9E98
    void Spherecast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList, float radius);
    // public UnityEngine.Vector2 GetScreenPos(UnityEngine.Vector3 worldPosition)
    // Offset: 0x1EDA210
    UnityEngine::Vector2 GetScreenPos(UnityEngine::Vector3 worldPosition);
    // protected System.Void .ctor()
    // Offset: 0x1EDAFF8
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
    // Offset: 0x1EDB02C
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // public override System.Int32 get_sortOrderPriority()
    // Offset: 0x1EDB14C
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Int32 BaseRaycaster::get_sortOrderPriority()
    int get_sortOrderPriority();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x1EDB238
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // UnityEngine.EventSystems.OVRPhysicsRaycaster
  #pragma pack(pop)
  static check_size<sizeof(OVRPhysicsRaycaster), 36 + sizeof(int)> __UnityEngine_EventSystems_OVRPhysicsRaycasterSizeCheck;
  static_assert(sizeof(OVRPhysicsRaycaster) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::OVRPhysicsRaycaster*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster");
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::get_depth
// Il2CppName: get_depth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::get_depth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "get_depth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::get_finalEventMask
// Il2CppName: get_finalEventMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::get_finalEventMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "get_finalEventMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventMask
// Il2CppName: get_eventMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "get_eventMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::set_eventMask
// Il2CppName: set_eventMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(UnityEngine::LayerMask)>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::set_eventMask)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "set_eventMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::Spherecast
// Il2CppName: Spherecast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*, float)>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::Spherecast)> {
  const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "Spherecast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::GetScreenPos
// Il2CppName: GetScreenPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(UnityEngine::Vector3)>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::GetScreenPos)> {
  const MethodInfo* get() {
    static auto* worldPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "GetScreenPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventCamera
// Il2CppName: get_eventCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera* (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::get_eventCamera)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "get_eventCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::get_sortOrderPriority
// Il2CppName: get_sortOrderPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)()>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::get_sortOrderPriority)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "get_sortOrderPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::OVRPhysicsRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::Raycast)> {
  const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList});
  }
};
