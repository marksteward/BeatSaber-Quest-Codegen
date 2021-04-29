// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: ConnectionChangeType
  struct ConnectionChangeType;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevices
  // [UsedByNativeCodeAttribute] Offset: CDCE84
  // [NativeHeaderAttribute] Offset: CDCE84
  // [StaticAccessorAttribute] Offset: CDCE84
  // [NativeConditionalAttribute] Offset: CDCE84
  class InputDevices : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: InputDevices
    InputDevices() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xCDD534
    // [DebuggerBrowsableAttribute] Offset: 0xCDD534
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceConnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static void _set_deviceConnected(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // [CompilerGeneratedAttribute] Offset: 0xCDD570
    // [DebuggerBrowsableAttribute] Offset: 0xCDD570
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceDisconnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static void _set_deviceDisconnected(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // [CompilerGeneratedAttribute] Offset: 0xCDD5AC
    // [DebuggerBrowsableAttribute] Offset: 0xCDD5AC
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceConfigChanged();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static void _set_deviceConfigChanged(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // static private System.Void InvokeConnectionEvent(System.UInt64 deviceId, UnityEngine.XR.ConnectionChangeType change)
    // Offset: 0x219FEB4
    static void InvokeConnectionEvent(uint64_t deviceId, UnityEngine::XR::ConnectionChangeType change);
  }; // UnityEngine.XR.InputDevices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
