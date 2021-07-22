// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IInitializePotentialDragHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IInitializePotentialDragHandler : public ::Il2CppObject/*, public UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating value type constructor for type: IInitializePotentialDragHandler
    IInitializePotentialDragHandler() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IEventSystemHandler
    operator UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IInitializePotentialDragHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IInitializePotentialDragHandler*, "UnityEngine.EventSystems", "IInitializePotentialDragHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::IInitializePotentialDragHandler::OnInitializePotentialDrag
// Il2CppName: OnInitializePotentialDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IInitializePotentialDragHandler::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::IInitializePotentialDragHandler::OnInitializePotentialDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::IInitializePotentialDragHandler*), "OnInitializePotentialDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
