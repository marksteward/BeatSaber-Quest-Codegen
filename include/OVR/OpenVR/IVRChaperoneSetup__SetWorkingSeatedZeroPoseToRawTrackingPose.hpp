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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose
  // [UnmanagedFunctionPointerAttribute] Offset: DCD9B8
  class IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetWorkingSeatedZeroPoseToRawTrackingPose
    _SetWorkingSeatedZeroPoseToRawTrackingPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B6824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref OVR.OpenVR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x15AD690
    void Invoke(OVR::OpenVR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B6834
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x15B68C8
    void EndInvoke(OVR::OpenVR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose");
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
