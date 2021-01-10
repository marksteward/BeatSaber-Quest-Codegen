// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8486C
  class IVRChaperoneSetup::_GetLivePhysicalBoundsInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetLivePhysicalBoundsInfo
    _GetLivePhysicalBoundsInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FB52C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetLivePhysicalBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount)
    // Offset: 0x11F3EFC
    bool Invoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FB540
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punQuadsCount, System.IAsyncResult result)
    // Offset: 0x11FB5DC
    bool EndInvoke(uint& punQuadsCount, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLivePhysicalBoundsInfo");
#pragma pack(pop)
