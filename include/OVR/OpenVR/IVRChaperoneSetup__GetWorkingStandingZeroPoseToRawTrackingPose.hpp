// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose
  // [UnmanagedFunctionPointerAttribute] Offset: CF32E0
  class IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWorkingStandingZeroPoseToRawTrackingPose
    _GetWorkingStandingZeroPoseToRawTrackingPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x141FF14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x1416B8C
    bool Invoke(OVR::OpenVR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x141FF24
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x141FFB8
    bool EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose");
