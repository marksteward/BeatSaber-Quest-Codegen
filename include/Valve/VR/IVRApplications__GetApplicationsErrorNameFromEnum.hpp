// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89240
  class IVRApplications::_GetApplicationsErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationsErrorNameFromEnum
    _GetApplicationsErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136E1CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationsErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetApplicationsErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationsErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(Valve.VR.EVRApplicationError error)
    // Offset: 0x1362D48
    System::IntPtr Invoke(Valve::VR::EVRApplicationError error);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRApplicationError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136E1E0
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRApplicationError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x136E26C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationsErrorNameFromEnum
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationsErrorNameFromEnum*, "Valve.VR", "IVRApplications/_GetApplicationsErrorNameFromEnum");
#pragma pack(pop)
