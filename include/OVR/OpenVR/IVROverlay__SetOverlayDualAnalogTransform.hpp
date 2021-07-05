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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
}
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
  // [UnmanagedFunctionPointerAttribute] Offset: DCE23C
  class IVROverlay::_SetOverlayDualAnalogTransform : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayDualAnalogTransform
    _SetOverlayDualAnalogTransform() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x209B4FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayDualAnalogTransform* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayDualAnalogTransform*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius)
    // Offset: 0x209B50C
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x209B7CC
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x209B8B8
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_SetOverlayDualAnalogTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::*)(uint64_t, OVR::OpenVR::EDualAnalogWhich, System::IntPtr, float)>(&OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlay = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eWhich = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EDualAnalogWhich")->byval_arg;
    static auto* vCenter = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlay, eWhich, vCenter, fRadius});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::*)(uint64_t, OVR::OpenVR::EDualAnalogWhich, System::IntPtr, float, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlay = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eWhich = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EDualAnalogWhich")->byval_arg;
    static auto* vCenter = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlay, eWhich, vCenter, fRadius, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
