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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
  // [UnmanagedFunctionPointerAttribute] Offset: CF327C
  class IVRChaperoneSetup::_GetWorkingPlayAreaSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWorkingPlayAreaSize
    _GetWorkingPlayAreaSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x141FD44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetWorkingPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetWorkingPlayAreaSize*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x1415DE4
    bool Invoke(float& pSizeX, float& pSizeZ);
    // public System.IAsyncResult BeginInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x141FD54
    System::IAsyncResult* BeginInvoke(float& pSizeX, float& pSizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.IAsyncResult result)
    // Offset: 0x141FE00
    bool EndInvoke(float& pSizeX, float& pSizeZ, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaSize");
