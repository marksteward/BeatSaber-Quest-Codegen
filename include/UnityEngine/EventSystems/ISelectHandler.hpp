// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.ISelectHandler
  class ISelectHandler/*, public UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating value type constructor for type: ISelectHandler
    ISelectHandler() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IEventSystemHandler
    operator UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnSelect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnSelect(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.EventSystems.ISelectHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::ISelectHandler*, "UnityEngine.EventSystems", "ISelectHandler");
// Writing MetadataGetter for method: UnityEngine::EventSystems::ISelectHandler::OnSelect
// Il2CppName: OnSelect
// Cannot perform method pointer template specialization from operators!
