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
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
  // [UnmanagedFunctionPointerAttribute] Offset: DCE250
  class IVROverlay::_GetOverlayDualAnalogTransform : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayDualAnalogTransform
    _GetOverlayDualAnalogTransform() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EEF8AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayDualAnalogTransform* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayDualAnalogTransform*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, ref OVR.OpenVR.HmdVector2_t pvCenter, ref System.Single pfRadius)
    // Offset: 0x1EEF8BC
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, OVR.OpenVR.EDualAnalogWhich eWhich, ref OVR.OpenVR.HmdVector2_t pvCenter, ref System.Single pfRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EEFB74
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, OVR::OpenVR::EDualAnalogWhich eWhich, OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.HmdVector2_t pvCenter, ref System.Single pfRadius, System.IAsyncResult result)
    // Offset: 0x1EEFC68
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::HmdVector2_t& pvCenter, float& pfRadius, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_GetOverlayDualAnalogTransform");
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::*)(uint64_t, OVR::OpenVR::EDualAnalogWhich, OVR::OpenVR::HmdVector2_t&, float&)>(&OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::Invoke)> {
  const MethodInfo* get() {
    static auto* ulOverlay = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eWhich = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EDualAnalogWhich")->byval_arg;
    static auto* pvCenter = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* pfRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlay, eWhich, pvCenter, pfRadius});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::*)(uint64_t, OVR::OpenVR::EDualAnalogWhich, OVR::OpenVR::HmdVector2_t&, float&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* ulOverlay = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eWhich = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EDualAnalogWhich")->byval_arg;
    static auto* pvCenter = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* pfRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlay, eWhich, pvCenter, pfRadius, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::*)(OVR::OpenVR::HmdVector2_t&, float&, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pvCenter = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* pfRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pvCenter, pfRadius, result});
  }
};
