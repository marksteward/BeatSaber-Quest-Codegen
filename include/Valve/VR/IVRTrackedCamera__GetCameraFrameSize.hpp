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
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetCameraFrameSize
  // [UnmanagedFunctionPointerAttribute] Offset: DD3618
  class IVRTrackedCamera::_GetCameraFrameSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCameraFrameSize
    _GetCameraFrameSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9E2B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraFrameSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraFrameSize*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize)
    // Offset: 0x1C9E2C0
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9E598
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize, System.IAsyncResult result)
    // Offset: 0x1C9E69C
    Valve::VR::EVRTrackedCameraError EndInvoke(uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetCameraFrameSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetCameraFrameSize*, "Valve.VR", "IVRTrackedCamera/_GetCameraFrameSize");
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::*)(uint, Valve::VR::EVRTrackedCameraFrameType, uint&, uint&, uint&)>(&Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::Invoke)> {
  const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnFrameBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetCameraFrameSize*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::*)(uint, Valve::VR::EVRTrackedCameraFrameType, uint&, uint&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnFrameBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetCameraFrameSize*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::*)(uint&, uint&, uint&, System::IAsyncResult*)>(&Valve::VR::IVRTrackedCamera::_GetCameraFrameSize::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnFrameBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetCameraFrameSize*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnWidth, pnHeight, pnFrameBufferSize, result});
  }
};
