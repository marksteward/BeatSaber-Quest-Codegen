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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayDualAnalogTransform
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89DA8
  class IVROverlay::_GetOverlayDualAnalogTransform : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayDualAnalogTransform
    _GetOverlayDualAnalogTransform() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18F0F3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayDualAnalogTransform* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayDualAnalogTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayDualAnalogTransform*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, ref Valve.VR.HmdVector2_t pvCenter, ref System.Single pfRadius)
    // Offset: 0x18F0F50
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlay, Valve::VR::EDualAnalogWhich eWhich, Valve::VR::HmdVector2_t& pvCenter, float& pfRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, ref Valve.VR.HmdVector2_t pvCenter, ref System.Single pfRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18F1200
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, Valve::VR::EDualAnalogWhich eWhich, Valve::VR::HmdVector2_t& pvCenter, float& pfRadius, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref Valve.VR.HmdVector2_t pvCenter, ref System.Single pfRadius, System.IAsyncResult result)
    // Offset: 0x18F12F4
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::HmdVector2_t& pvCenter, float& pfRadius, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayDualAnalogTransform
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayDualAnalogTransform*, "Valve.VR", "IVROverlay/_GetOverlayDualAnalogTransform");
#pragma pack(pop)
