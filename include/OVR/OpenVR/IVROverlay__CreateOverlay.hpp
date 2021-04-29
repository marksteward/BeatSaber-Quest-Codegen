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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_CreateOverlay
  // [UnmanagedFunctionPointerAttribute] Offset: CF3754
  class IVROverlay::_CreateOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateOverlay
    _CreateOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D7B2AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_CreateOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_CreateOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_CreateOverlay*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle)
    // Offset: 0x1D7B2BC
    OVR::OpenVR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D7B6D4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt64 pOverlayHandle, System.IAsyncResult result)
    // Offset: 0x1D7B77C
    OVR::OpenVR::EVROverlayError EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_CreateOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_CreateOverlay*, "OVR.OpenVR", "IVROverlay/_CreateOverlay");
