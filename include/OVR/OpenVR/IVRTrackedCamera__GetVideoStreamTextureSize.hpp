// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
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
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize
  // [UnmanagedFunctionPointerAttribute] Offset: DCD594
  class IVRTrackedCamera::_GetVideoStreamTextureSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVideoStreamTextureSize
    _GetVideoStreamTextureSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1277AB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetVideoStreamTextureSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureSize*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1277AC8
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1277DA0
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1277EAC
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(OVR::OpenVR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureSize");
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureSize::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
