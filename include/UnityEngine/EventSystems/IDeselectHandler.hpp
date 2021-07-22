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
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IDeselectHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IDeselectHandler : public ::Il2CppObject/*, public UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating value type constructor for type: IDeselectHandler
    IDeselectHandler() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IEventSystemHandler
    operator UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnDeselect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnDeselect(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.EventSystems.IDeselectHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IDeselectHandler*, "UnityEngine.EventSystems", "IDeselectHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::IDeselectHandler::OnDeselect
// Il2CppName: OnDeselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IDeselectHandler::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::IDeselectHandler::OnDeselect)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::IDeselectHandler*), "OnDeselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
