// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess
  // [UnmanagedFunctionPointerAttribute] Offset: CF8BB0
  class IVROverlay::_GetDashboardOverlaySceneProcess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDashboardOverlaySceneProcess
    _GetDashboardOverlaySceneProcess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E65308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetDashboardOverlaySceneProcess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetDashboardOverlaySceneProcess*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punProcessId)
    // Offset: 0x1E65318
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& punProcessId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punProcessId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E6559C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& punProcessId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt32 punProcessId, System.IAsyncResult result)
    // Offset: 0x1E6564C
    Valve::VR::EVROverlayError EndInvoke(uint& punProcessId, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess*, "Valve.VR", "IVROverlay/_GetDashboardOverlaySceneProcess");
