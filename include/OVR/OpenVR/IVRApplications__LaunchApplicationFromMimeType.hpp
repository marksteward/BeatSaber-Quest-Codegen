// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D844AC
  class IVRApplications::_LaunchApplicationFromMimeType : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LaunchApplicationFromMimeType
    _LaunchApplicationFromMimeType() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FA7D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchApplicationFromMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchApplicationFromMimeType*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchMimeType, System.String pchArgs)
    // Offset: 0x11EA788
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.String pchArgs, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FA7EC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FA81C
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*, "OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType");
#pragma pack(pop)
