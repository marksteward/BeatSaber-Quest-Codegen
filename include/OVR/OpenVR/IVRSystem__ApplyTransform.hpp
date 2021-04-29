// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_ApplyTransform
  // [UnmanagedFunctionPointerAttribute] Offset: CF2BC4
  class IVRSystem::_ApplyTransform : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ApplyTransform
    _ApplyTransform() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F1BE74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ApplyTransform* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_ApplyTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ApplyTransform*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform)
    // Offset: 0x1F1BE84
    void Invoke(OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, OVR::OpenVR::HmdMatrix34_t& pTransform);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F1C110
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, OVR::OpenVR::HmdMatrix34_t& pTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform, System.IAsyncResult result)
    // Offset: 0x1F1C1E4
    void EndInvoke(OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, OVR::OpenVR::HmdMatrix34_t& pTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_ApplyTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_ApplyTransform*, "OVR.OpenVR", "IVRSystem/_ApplyTransform");
