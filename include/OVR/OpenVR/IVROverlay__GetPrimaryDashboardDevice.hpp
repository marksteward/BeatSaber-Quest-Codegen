// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._GetPrimaryDashboardDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBB888
  class IVROverlay::_GetPrimaryDashboardDevice : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPrimaryDashboardDevice
    _GetPrimaryDashboardDevice() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F1044C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetPrimaryDashboardDevice* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetPrimaryDashboardDevice*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke()
    // Offset: 0x1F1045C
    uint Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F10670
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F1069C
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._GetPrimaryDashboardDevice
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice*, "OVR.OpenVR", "IVROverlay/_GetPrimaryDashboardDevice");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::*)()>(&OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::*)(System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
