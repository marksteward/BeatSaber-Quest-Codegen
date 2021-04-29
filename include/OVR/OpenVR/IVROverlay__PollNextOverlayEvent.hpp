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
  // Forward declaring type: VREvent_t
  struct VREvent_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_PollNextOverlayEvent
  // [UnmanagedFunctionPointerAttribute] Offset: CF3AC4
  class IVROverlay::_PollNextOverlayEvent : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextOverlayEvent
    _PollNextOverlayEvent() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D848C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_PollNextOverlayEvent* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_PollNextOverlayEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_PollNextOverlayEvent*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x1D848D8
    bool Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D84B78
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VREvent_t pEvent, System.IAsyncResult result)
    // Offset: 0x1D84C4C
    bool EndInvoke(OVR::OpenVR::VREvent_t& pEvent, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_PollNextOverlayEvent
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_PollNextOverlayEvent*, "OVR.OpenVR", "IVROverlay/_PollNextOverlayEvent");
