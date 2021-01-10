// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IMECompositionMode
  struct IMECompositionMode;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Touch
  struct Touch;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x18
  // Autogenerated type: UnityEngine.EventSystems.BaseInput
  // [] Offset: FFFFFFFF
  class BaseInput : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // Creating value type constructor for type: BaseInput
    BaseInput() noexcept {}
    // public System.String get_compositionString()
    // Offset: 0x114A6E0
    ::Il2CppString* get_compositionString();
    // public UnityEngine.IMECompositionMode get_imeCompositionMode()
    // Offset: 0x114A6E8
    UnityEngine::IMECompositionMode get_imeCompositionMode();
    // public System.Void set_imeCompositionMode(UnityEngine.IMECompositionMode value)
    // Offset: 0x114A6F0
    void set_imeCompositionMode(UnityEngine::IMECompositionMode value);
    // public UnityEngine.Vector2 get_compositionCursorPos()
    // Offset: 0x114A6FC
    UnityEngine::Vector2 get_compositionCursorPos();
    // public System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
    // Offset: 0x114A704
    void set_compositionCursorPos(UnityEngine::Vector2 value);
    // public System.Boolean get_mousePresent()
    // Offset: 0x114A70C
    bool get_mousePresent();
    // public System.Boolean GetMouseButtonDown(System.Int32 button)
    // Offset: 0x114A714
    bool GetMouseButtonDown(int button);
    // public System.Boolean GetMouseButtonUp(System.Int32 button)
    // Offset: 0x114A720
    bool GetMouseButtonUp(int button);
    // public System.Boolean GetMouseButton(System.Int32 button)
    // Offset: 0x114A72C
    bool GetMouseButton(int button);
    // public UnityEngine.Vector2 get_mousePosition()
    // Offset: 0x114A738
    UnityEngine::Vector2 get_mousePosition();
    // public UnityEngine.Vector2 get_mouseScrollDelta()
    // Offset: 0x114A740
    UnityEngine::Vector2 get_mouseScrollDelta();
    // public System.Boolean get_touchSupported()
    // Offset: 0x114A748
    bool get_touchSupported();
    // public System.Int32 get_touchCount()
    // Offset: 0x114A750
    int get_touchCount();
    // public UnityEngine.Touch GetTouch(System.Int32 index)
    // Offset: 0x114A758
    UnityEngine::Touch GetTouch(int index);
    // public System.Single GetAxisRaw(System.String axisName)
    // Offset: 0x114A764
    float GetAxisRaw(::Il2CppString* axisName);
    // public System.Boolean GetButtonDown(System.String buttonName)
    // Offset: 0x114A770
    bool GetButtonDown(::Il2CppString* buttonName);
    // public System.Void .ctor()
    // Offset: 0x114A77C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::BaseInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInput*, creationType>()));
    }
  }; // UnityEngine.EventSystems.BaseInput
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseInput*, "UnityEngine.EventSystems", "BaseInput");
#pragma pack(pop)
