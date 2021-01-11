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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_CreateDashboardOverlay
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D85118
  class IVROverlay::_CreateDashboardOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateDashboardOverlay
    _CreateDashboardOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18686B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_CreateDashboardOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_CreateDashboardOverlay*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle)
    // Offset: 0x18686CC
    OVR::OpenVR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayFriendlyName, uint64_t& pMainHandle, uint64_t& pThumbnailHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1868B20
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayFriendlyName, uint64_t& pMainHandle, uint64_t& pThumbnailHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle, System.IAsyncResult result)
    // Offset: 0x1868BE0
    OVR::OpenVR::EVROverlayError EndInvoke(uint64_t& pMainHandle, uint64_t& pThumbnailHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_CreateDashboardOverlay
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_CreateDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_CreateDashboardOverlay");
