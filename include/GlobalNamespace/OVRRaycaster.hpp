// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.GraphicRaycaster
#include "UnityEngine/UI/GraphicRaycaster.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: OVRRaycaster
  // [RequireComponent] Offset: CF2608
  class OVRRaycaster : public UnityEngine::UI::GraphicRaycaster/*, public UnityEngine::EventSystems::IPointerEnterHandler*/ {
    public:
    // Nested type: GlobalNamespace::OVRRaycaster::RaycastHit
    struct RaycastHit;
    // Nested type: GlobalNamespace::OVRRaycaster::$$c
    class $$c;
    // Size: 0x15
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRRaycaster/RaycastHit
    struct RaycastHit/*, public System::ValueType*/ {
      public:
      // public UnityEngine.UI.Graphic graphic
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::UI::Graphic* graphic;
      // Field size check
      static_assert(sizeof(UnityEngine::UI::Graphic*) == 0x8);
      // public UnityEngine.Vector3 worldPos
      // Size: 0xC
      // Offset: 0x8
      UnityEngine::Vector3 worldPos;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // public System.Boolean fromMouse
      // Size: 0x1
      // Offset: 0x14
      bool fromMouse;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Creating value type constructor for type: RaycastHit
      constexpr RaycastHit(UnityEngine::UI::Graphic* graphic_ = {}, UnityEngine::Vector3 worldPos_ = {}, bool fromMouse_ = {}) noexcept : graphic{graphic_}, worldPos{worldPos_}, fromMouse{fromMouse_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // OVRRaycaster/RaycastHit
    #pragma pack(pop)
    static check_size<sizeof(OVRRaycaster::RaycastHit), 20 + sizeof(bool)> __GlobalNamespace_OVRRaycaster_RaycastHitSizeCheck;
    static_assert(sizeof(OVRRaycaster::RaycastHit) == 0x15);
    // [TooltipAttribute] Offset: 0xCF58CC
    // public UnityEngine.GameObject pointer
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* pointer;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public System.Int32 sortOrder
    // Size: 0x4
    // Offset: 0x48
    int sortOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sortOrder and: m_Canvas
    char __padding1[0x4] = {};
    // private UnityEngine.Canvas m_Canvas
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Canvas* m_Canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> m_RaycastResults
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* m_RaycastResults;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>*) == 0x8);
    // Creating value type constructor for type: OVRRaycaster
    OVRRaycaster(UnityEngine::GameObject* pointer_ = {}, int sortOrder_ = {}, UnityEngine::Canvas* m_Canvas_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* m_RaycastResults_ = {}) noexcept : pointer{pointer_}, sortOrder{sortOrder_}, m_Canvas{m_Canvas_}, m_RaycastResults{m_RaycastResults_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Get static field: static private readonly System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> s_SortedGraphics
    static System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* _get_s_SortedGraphics();
    // Set static field: static private readonly System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> s_SortedGraphics
    static void _set_s_SortedGraphics(System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* value);
    // private System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList, UnityEngine.Ray ray, System.Boolean checkForBlocking)
    // Offset: 0x1584AE4
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList, UnityEngine::Ray ray, bool checkForBlocking);
    // public System.Void RaycastPointer(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x15856C8
    void RaycastPointer(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // private System.Void GraphicRaycast(UnityEngine.Canvas canvas, UnityEngine.Ray ray, System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> results)
    // Offset: 0x15850C4
    void GraphicRaycast(UnityEngine::Canvas* canvas, UnityEngine::Ray ray, System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* results);
    // public UnityEngine.Vector2 GetScreenPosition(UnityEngine.EventSystems.RaycastResult raycastResult)
    // Offset: 0x1585CD4
    UnityEngine::Vector2 GetScreenPosition(UnityEngine::EventSystems::RaycastResult raycastResult);
    // static private System.Boolean RayIntersectsRectTransform(UnityEngine.RectTransform rectTransform, UnityEngine.Ray ray, out UnityEngine.Vector3 worldPos)
    // Offset: 0x15858D4
    static bool RayIntersectsRectTransform(UnityEngine::RectTransform* rectTransform, UnityEngine::Ray ray, UnityEngine::Vector3& worldPos);
    // public System.Boolean IsFocussed()
    // Offset: 0x1585D98
    bool IsFocussed();
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData e)
    // Offset: 0x1585EC4
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* e);
    // protected System.Void .ctor()
    // Offset: 0x1584848
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::.ctor()
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRRaycaster*, creationType>()));
    }
    // private UnityEngine.Canvas get_canvas()
    // Offset: 0x15848D8
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: UnityEngine.Canvas GraphicRaycaster::get_canvas()
    UnityEngine::Canvas* get_canvas();
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x1584970
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: UnityEngine.Camera GraphicRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // public override System.Int32 get_sortOrderPriority()
    // Offset: 0x1584990
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Int32 GraphicRaycaster::get_sortOrderPriority()
    int get_sortOrderPriority();
    // protected override System.Void Start()
    // Offset: 0x1584998
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x1585650
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // static private System.Void .cctor()
    // Offset: 0x1585FD0
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRRaycaster
  #pragma pack(pop)
  static check_size<sizeof(OVRRaycaster), 88 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>*)> __GlobalNamespace_OVRRaycasterSizeCheck;
  static_assert(sizeof(OVRRaycaster) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster*, "", "OVRRaycaster");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster::RaycastHit, "", "OVRRaycaster/RaycastHit");
