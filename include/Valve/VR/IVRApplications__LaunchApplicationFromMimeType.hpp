// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/_LaunchApplicationFromMimeType
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D891DC
  class IVRApplications::_LaunchApplicationFromMimeType : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LaunchApplicationFromMimeType
    _LaunchApplicationFromMimeType() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136E8E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchApplicationFromMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_LaunchApplicationFromMimeType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchApplicationFromMimeType*, creationType>(object, method)));
    }
    // public Valve.VR.EVRApplicationError Invoke(System.String pchMimeType, System.String pchArgs)
    // Offset: 0x1361A78
    Valve::VR::EVRApplicationError Invoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.String pchArgs, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136E8F8
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x136E928
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_LaunchApplicationFromMimeType
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_LaunchApplicationFromMimeType*, "Valve.VR", "IVRApplications/_LaunchApplicationFromMimeType");
