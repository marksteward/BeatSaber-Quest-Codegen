// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
  class PointerInputModule::MouseButtonEventData : public ::Il2CppObject {
    public:
    // public UnityEngine.EventSystems.PointerEventData/FramePressState buttonState
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::EventSystems::PointerEventData::FramePressState buttonState;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData::FramePressState) == 0x4);
    // Padding between fields: buttonState and: buttonData
    char __padding0[0x4] = {};
    // public UnityEngine.EventSystems.PointerEventData buttonData
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::EventSystems::PointerEventData* buttonData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // Creating value type constructor for type: MouseButtonEventData
    MouseButtonEventData(UnityEngine::EventSystems::PointerEventData::FramePressState buttonState_ = {}, UnityEngine::EventSystems::PointerEventData* buttonData_ = {}) noexcept : buttonState{buttonState_}, buttonData{buttonData_} {}
    // public System.Boolean PressedThisFrame()
    // Offset: 0x13388F4
    bool PressedThisFrame();
    // public System.Boolean ReleasedThisFrame()
    // Offset: 0x1338908
    bool ReleasedThisFrame();
    // public System.Void .ctor()
    // Offset: 0x133891C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerInputModule::MouseButtonEventData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerInputModule::MouseButtonEventData*, creationType>()));
    }
  }; // UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
  #pragma pack(pop)
  static check_size<sizeof(PointerInputModule::MouseButtonEventData), 24 + sizeof(UnityEngine::EventSystems::PointerEventData*)> __UnityEngine_EventSystems_PointerInputModule_MouseButtonEventDataSizeCheck;
  static_assert(sizeof(PointerInputModule::MouseButtonEventData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*, "UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData");
