// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative
  // [UnmanagedFunctionPointerAttribute] Offset: DD41A8
  class IVROverlay::_GetOverlayTransformTrackedDeviceRelative : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayTransformTrackedDeviceRelative
    _GetOverlayTransformTrackedDeviceRelative() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FCB6CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTransformTrackedDeviceRelative* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTransformTrackedDeviceRelative*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punTrackedDevice, ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform)
    // Offset: 0x1FCB6DC
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& punTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punTrackedDevice, ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FCB978
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& punTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt32 punTrackedDevice, ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x1FCBA4C
    Valve::VR::EVROverlayError EndInvoke(uint& punTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative*, "Valve.VR", "IVROverlay/_GetOverlayTransformTrackedDeviceRelative");
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
