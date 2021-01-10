// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: HmdRect2_t
  struct HmdRect2_t;
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
  // Autogenerated type: Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89F38
  class IVROverlay::_SetKeyboardPositionForOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetKeyboardPositionForOverlay
    _SetKeyboardPositionForOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18F90C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetKeyboardPositionForOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetKeyboardPositionForOverlay*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.UInt64 ulOverlayHandle, Valve.VR.HmdRect2_t avoidRect)
    // Offset: 0x18F90DC
    void Invoke(uint64_t ulOverlayHandle, Valve::VR::HmdRect2_t avoidRect);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, Valve.VR.HmdRect2_t avoidRect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18F939C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::HmdRect2_t avoidRect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18F944C
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay*, "Valve.VR", "IVROverlay/_SetKeyboardPositionForOverlay");
#pragma pack(pop)
