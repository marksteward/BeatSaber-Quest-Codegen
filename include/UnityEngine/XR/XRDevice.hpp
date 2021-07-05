// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: TrackingSpaceType
  struct TrackingSpaceType;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.XRDevice
  // [NativeConditionalAttribute] Offset: DC8EC8
  class XRDevice : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: XRDevice
    XRDevice() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xDC8FBC
    // [DebuggerBrowsableAttribute] Offset: 0xDC8FBC
    // Get static field: static private System.Action`1<System.String> deviceLoaded
    static System::Action_1<::Il2CppString*>* _get_deviceLoaded();
    // Set static field: static private System.Action`1<System.String> deviceLoaded
    static void _set_deviceLoaded(System::Action_1<::Il2CppString*>* value);
    // static public System.Boolean get_isPresent()
    // Offset: 0x23F0D90
    static bool get_isPresent();
    // static public System.String get_model()
    // Offset: 0x23F0DC4
    static ::Il2CppString* get_model();
    // static public System.IntPtr GetNativePtr()
    // Offset: 0x23F0DF8
    static System::IntPtr GetNativePtr();
    // static public System.Boolean SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType trackingSpaceType)
    // Offset: 0x23F0E2C
    static bool SetTrackingSpaceType(UnityEngine::XR::TrackingSpaceType trackingSpaceType);
    // static private System.Void InvokeDeviceLoaded(System.String loadedDeviceName)
    // Offset: 0x23F0E6C
    static void InvokeDeviceLoaded(::Il2CppString* loadedDeviceName);
    // static private System.Void .cctor()
    // Offset: 0x23F0F24
    static void _cctor();
  }; // UnityEngine.XR.XRDevice
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDevice*, "UnityEngine.XR", "XRDevice");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::get_isPresent
// Il2CppName: get_isPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::XRDevice::get_isPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "get_isPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::get_model
// Il2CppName: get_model
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::XR::XRDevice::get_model)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "get_model", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::GetNativePtr
// Il2CppName: GetNativePtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)()>(&UnityEngine::XR::XRDevice::GetNativePtr)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "GetNativePtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::SetTrackingSpaceType
// Il2CppName: SetTrackingSpaceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::TrackingSpaceType)>(&UnityEngine::XR::XRDevice::SetTrackingSpaceType)> {
  static const MethodInfo* get() {
    static auto* trackingSpaceType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "TrackingSpaceType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "SetTrackingSpaceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingSpaceType});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::InvokeDeviceLoaded
// Il2CppName: InvokeDeviceLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::XR::XRDevice::InvokeDeviceLoaded)> {
  static const MethodInfo* get() {
    static auto* loadedDeviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "InvokeDeviceLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadedDeviceName});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::XRDevice::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
