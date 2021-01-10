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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_IsApplicationInstalled
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D84434
  class IVRApplications::_IsApplicationInstalled : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _IsApplicationInstalled
    _IsApplicationInstalled() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FA6A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_IsApplicationInstalled* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_IsApplicationInstalled::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_IsApplicationInstalled*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchAppKey)
    // Offset: 0x11E93A8
    bool Invoke(::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FA6B8
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FA6DC
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_IsApplicationInstalled
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_IsApplicationInstalled*, "OVR.OpenVR", "IVRApplications/_IsApplicationInstalled");
#pragma pack(pop)
