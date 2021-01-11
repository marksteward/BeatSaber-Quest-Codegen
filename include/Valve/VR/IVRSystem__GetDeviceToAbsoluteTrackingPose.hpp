// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88D40
  class IVRSystem::_GetDeviceToAbsoluteTrackingPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDeviceToAbsoluteTrackingPose
    _GetDeviceToAbsoluteTrackingPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192A964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetDeviceToAbsoluteTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetDeviceToAbsoluteTrackingPose*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, in Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray, System.UInt32 unTrackedDevicePoseArrayCount)
    // Offset: 0x192A978
    void Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>*& pTrackedDevicePoseArray, uint unTrackedDevicePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, in Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray, System.UInt32 unTrackedDevicePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192AC3C
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>*& pTrackedDevicePoseArray, uint unTrackedDevicePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x192AD14
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*, "Valve.VR", "IVRSystem/_GetDeviceToAbsoluteTrackingPose");
