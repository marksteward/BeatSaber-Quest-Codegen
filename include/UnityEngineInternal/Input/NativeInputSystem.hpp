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
  // [NativeHeaderAttribute] Offset: DEA1E8
  // [NativeHeaderAttribute] Offset: DEA1E8
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
    // Offset: 0x23F394C
    static void _cctor();
    // static System.Void NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType)
    // Offset: 0x23F39C8
    static void NotifyBeforeUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType);
    // static System.Void NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, System.IntPtr eventBuffer)
    // Offset: 0x23F3A54
    static void NotifyUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType, System::IntPtr eventBuffer);
    // static System.Void NotifyDeviceDiscovered(System.Int32 deviceId, System.String deviceDescriptor)
    // Offset: 0x23F3D84
    static void NotifyDeviceDiscovered(int deviceId, ::Il2CppString* deviceDescriptor);
    // static System.Void ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, out System.Boolean retval)
    // Offset: 0x23F3E24
    static void ShouldRunUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType, bool& retval);
    // static System.Void set_hasDeviceDiscoveredCallback(System.Boolean value)
    // Offset: 0x23F3988
    static void set_hasDeviceDiscoveredCallback(bool value);
  }; // UnityEngineInternal.Input.NativeInputSystem
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputSystem*, "UnityEngineInternal.Input", "NativeInputSystem");
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngineInternal::Input::NativeInputSystem::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate
// Il2CppName: NotifyBeforeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngineInternal::Input::NativeInputUpdateType)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate)> {
  const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyBeforeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate
// Il2CppName: NotifyUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngineInternal::Input::NativeInputUpdateType, System::IntPtr)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate)> {
  const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* eventBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, eventBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered
// Il2CppName: NotifyDeviceDiscovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Il2CppString*)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered)> {
  const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* deviceDescriptor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyDeviceDiscovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, deviceDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate
// Il2CppName: ShouldRunUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngineInternal::Input::NativeInputUpdateType, bool&)>(&UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate)> {
  const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* retval = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "ShouldRunUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, retval});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback
// Il2CppName: set_hasDeviceDiscoveredCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "set_hasDeviceDiscoveredCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
