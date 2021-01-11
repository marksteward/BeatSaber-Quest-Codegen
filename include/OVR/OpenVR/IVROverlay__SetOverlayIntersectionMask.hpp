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
  // Forward declaring type: VROverlayIntersectionMaskPrimitive_t
  struct VROverlayIntersectionMaskPrimitive_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8521C
  class IVROverlay::_SetOverlayIntersectionMask : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayIntersectionMask
    _SetOverlayIntersectionMask() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18FE148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayIntersectionMask* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayIntersectionMask*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize)
    // Offset: 0x18FE15C
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18FE40C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.IAsyncResult result)
    // Offset: 0x18FE4F4
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask*, "OVR.OpenVR", "IVROverlay/_SetOverlayIntersectionMask");
