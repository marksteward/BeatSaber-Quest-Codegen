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
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureGL
  // [UnmanagedFunctionPointerAttribute] Offset: DCD5BC
  class IVRTrackedCamera::_GetVideoStreamTextureGL : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVideoStreamTextureGL
    _GetVideoStreamTextureGL() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1277694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetVideoStreamTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureGL*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x12776A4
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1277978
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref System.UInt32 pglTextureId, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0x1277A80
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(uint& pglTextureId, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureGL
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
