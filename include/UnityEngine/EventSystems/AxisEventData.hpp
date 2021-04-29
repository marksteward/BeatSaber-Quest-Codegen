// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.EventSystems.MoveDirection
#include "UnityEngine/EventSystems/MoveDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.AxisEventData
  class AxisEventData : public UnityEngine::EventSystems::BaseEventData {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCEDFEC
    // private UnityEngine.Vector2 <moveVector>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 moveVector;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCEDFFC
    // private UnityEngine.EventSystems.MoveDirection <moveDir>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::EventSystems::MoveDirection moveDir;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::MoveDirection) == 0x4);
    // Creating value type constructor for type: AxisEventData
    AxisEventData(UnityEngine::Vector2 moveVector_ = {}, UnityEngine::EventSystems::MoveDirection moveDir_ = {}) noexcept : moveVector{moveVector_}, moveDir{moveDir_} {}
    // public UnityEngine.Vector2 get_moveVector()
    // Offset: 0x1330D6C
    UnityEngine::Vector2 get_moveVector();
    // public System.Void set_moveVector(UnityEngine.Vector2 value)
    // Offset: 0x1330D74
    void set_moveVector(UnityEngine::Vector2 value);
    // public UnityEngine.EventSystems.MoveDirection get_moveDir()
    // Offset: 0x1330D7C
    UnityEngine::EventSystems::MoveDirection get_moveDir();
    // public System.Void set_moveDir(UnityEngine.EventSystems.MoveDirection value)
    // Offset: 0x1330D84
    void set_moveDir(UnityEngine::EventSystems::MoveDirection value);
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0x1330D8C
    // Implemented from: UnityEngine.EventSystems.BaseEventData
    // Base method: System.Void BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AxisEventData* New_ctor(UnityEngine::EventSystems::EventSystem* eventSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::AxisEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AxisEventData*, creationType>(eventSystem)));
    }
  }; // UnityEngine.EventSystems.AxisEventData
  #pragma pack(pop)
  static check_size<sizeof(AxisEventData), 40 + sizeof(UnityEngine::EventSystems::MoveDirection)> __UnityEngine_EventSystems_AxisEventDataSizeCheck;
  static_assert(sizeof(AxisEventData) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::AxisEventData*, "UnityEngine.EventSystems", "AxisEventData");
