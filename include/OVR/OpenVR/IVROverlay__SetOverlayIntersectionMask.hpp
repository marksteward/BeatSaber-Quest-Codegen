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
  // [UnmanagedFunctionPointerAttribute] Offset: DCE3F4
  class IVROverlay::_SetOverlayIntersectionMask : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayIntersectionMask
    _SetOverlayIntersectionMask() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x209C350
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayIntersectionMask* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayIntersectionMask*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize)
    // Offset: 0x209C360
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x209C618
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.IAsyncResult result)
    // Offset: 0x209C700
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask*, "OVR.OpenVR", "IVROverlay/_SetOverlayIntersectionMask");
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
