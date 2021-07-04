// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL
  // [UnmanagedFunctionPointerAttribute] Offset: DD36B8
  class IVRTrackedCamera::_GetVideoStreamTextureGL : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVideoStreamTextureGL
    _GetVideoStreamTextureGL() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9F7C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetVideoStreamTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureGL*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1C9F7D0
    Valve::VR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9FAA4
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref System.UInt32 pglTextureId, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0x1C9FBAC
    Valve::VR::EVRTrackedCameraError EndInvoke(uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL*, "Valve.VR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::*)(uint64_t, Valve::VR::EVRTrackedCameraFrameType, uint&, Valve::VR::CameraVideoStreamFrameHeader_t&, uint)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::Invoke)> {
  const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("Valve.VR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::*)(uint64_t, Valve::VR::EVRTrackedCameraFrameType, uint&, Valve::VR::CameraVideoStreamFrameHeader_t&, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("Valve.VR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::*)(uint&, Valve::VR::CameraVideoStreamFrameHeader_t&, System::IAsyncResult*)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("Valve.VR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pglTextureId, pFrameHeader, result});
  }
};
