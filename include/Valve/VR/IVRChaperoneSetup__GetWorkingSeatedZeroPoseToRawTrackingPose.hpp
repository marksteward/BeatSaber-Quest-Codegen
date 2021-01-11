// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D894C0
  class IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWorkingSeatedZeroPoseToRawTrackingPose
    _GetWorkingSeatedZeroPoseToRawTrackingPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E1C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x18E1C5C
    bool Invoke(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E1EB8
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x18E1F4C
    bool EndInvoke(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose*, "Valve.VR", "IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose");
