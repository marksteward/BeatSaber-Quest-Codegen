// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngineInternal.Input.NativeInputUpdateType
#include "UnityEngineInternal/Input/NativeInputUpdateType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeUpdateCallback
  class NativeUpdateCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.Input.NativeInputSystem
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D9E238
  // [NativeHeaderAttribute] Offset: D9E238
  class NativeInputSystem : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NativeInputSystem
    NativeInputSystem() noexcept {}
    // Get static field: static public UnityEngineInternal.Input.NativeUpdateCallback onUpdate
    static UnityEngineInternal::Input::NativeUpdateCallback* _get_onUpdate();
    // Set static field: static public UnityEngineInternal.Input.NativeUpdateCallback onUpdate
    static void _set_onUpdate(UnityEngineInternal::Input::NativeUpdateCallback* value);
    // Get static field: static public System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> onBeforeUpdate
    static System::Action_1<UnityEngineInternal::Input::NativeInputUpdateType>* _get_onBeforeUpdate();
    // Set static field: static public System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> onBeforeUpdate
    static void _set_onBeforeUpdate(System::Action_1<UnityEngineInternal::Input::NativeInputUpdateType>* value);
    // Get static field: static public System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> onShouldRunUpdate
    static System::Func_2<UnityEngineInternal::Input::NativeInputUpdateType, bool>* _get_onShouldRunUpdate();
    // Set static field: static public System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> onShouldRunUpdate
    static void _set_onShouldRunUpdate(System::Func_2<UnityEngineInternal::Input::NativeInputUpdateType, bool>* value);
    // Get static field: static private System.Action`2<System.Int32,System.String> s_OnDeviceDiscoveredCallback
    static System::Action_2<int, ::Il2CppString*>* _get_s_OnDeviceDiscoveredCallback();
    // Set static field: static private System.Action`2<System.Int32,System.String> s_OnDeviceDiscoveredCallback
    static void _set_s_OnDeviceDiscoveredCallback(System::Action_2<int, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1A0B83C
    static void _cctor();
    // static System.Void NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType)
    // Offset: 0x1A0B8B8
    static void NotifyBeforeUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType);
    // static System.Void NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, System.IntPtr eventBuffer)
    // Offset: 0x1A0B944
    static void NotifyUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType, System::IntPtr eventBuffer);
    // static System.Void NotifyDeviceDiscovered(System.Int32 deviceId, System.String deviceDescriptor)
    // Offset: 0x1A0BC6C
    static void NotifyDeviceDiscovered(int deviceId, ::Il2CppString* deviceDescriptor);
    // static System.Void ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, out System.Boolean retval)
    // Offset: 0x1A0BD0C
    static void ShouldRunUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType, bool& retval);
    // static System.Void set_hasDeviceDiscoveredCallback(System.Boolean value)
    // Offset: 0x1A0B878
    static void set_hasDeviceDiscoveredCallback(bool value);
  }; // UnityEngineInternal.Input.NativeInputSystem
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputSystem*, "UnityEngineInternal.Input", "NativeInputSystem");
