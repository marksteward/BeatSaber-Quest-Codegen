// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: VROverlayFlags
  struct VROverlayFlags;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayFlag
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D84D08
  class IVROverlay::_GetOverlayFlag : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayFlag
    _GetOverlayFlag() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x186B93C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayFlag* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayFlag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayFlag*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.VROverlayFlags eOverlayFlag, ref System.Boolean pbEnabled)
    // Offset: 0x186B950
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool& pbEnabled);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.VROverlayFlags eOverlayFlag, ref System.Boolean pbEnabled, System.AsyncCallback callback, System.Object object)
    // Offset: 0x186BBE8
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool& pbEnabled, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.Boolean pbEnabled, System.IAsyncResult result)
    // Offset: 0x186BCBC
    OVR::OpenVR::EVROverlayError EndInvoke(bool& pbEnabled, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayFlag
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayFlag*, "OVR.OpenVR", "IVROverlay/_GetOverlayFlag");
#pragma pack(pop)
