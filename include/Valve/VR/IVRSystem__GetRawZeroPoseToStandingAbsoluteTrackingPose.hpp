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
  // Autogenerated type: Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88D7C
  class IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRawZeroPoseToStandingAbsoluteTrackingPose
    _GetRawZeroPoseToStandingAbsoluteTrackingPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192D208
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*, creationType>(object, method)));
    }
    // public Valve.VR.HmdMatrix34_t Invoke()
    // Offset: 0x192D21C
    Valve::VR::HmdMatrix34_t Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x192D45C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdMatrix34_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x192D488
    Valve::VR::HmdMatrix34_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*, "Valve.VR", "IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose");
#pragma pack(pop)
