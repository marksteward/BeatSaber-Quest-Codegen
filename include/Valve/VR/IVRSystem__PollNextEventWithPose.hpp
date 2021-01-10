// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
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
  // Autogenerated type: Valve.VR.IVRSystem/_PollNextEventWithPose
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88ED0
  class IVRSystem::_PollNextEventWithPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextEventWithPose
    _PollNextEventWithPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1930560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PollNextEventWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_PollNextEventWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PollNextEventWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1930574
    bool Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1930840
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VREvent_t pEvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x1930930
    bool EndInvoke(Valve::VR::VREvent_t& pEvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_PollNextEventWithPose
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_PollNextEventWithPose*, "Valve.VR", "IVRSystem/_PollNextEventWithPose");
#pragma pack(pop)
