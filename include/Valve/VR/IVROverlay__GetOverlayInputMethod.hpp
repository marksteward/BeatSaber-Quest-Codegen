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
  // Forward declaring type: VROverlayInputMethod
  struct VROverlayInputMethod;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayInputMethod
  // [UnmanagedFunctionPointerAttribute] Offset: CF89E4
  class IVROverlay::_GetOverlayInputMethod : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayInputMethod
    _GetOverlayInputMethod() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E67E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayInputMethod* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayInputMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayInputMethod*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayInputMethod peInputMethod)
    // Offset: 0x1E67E18
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayInputMethod& peInputMethod);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayInputMethod peInputMethod, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E6809C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayInputMethod& peInputMethod, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref Valve.VR.VROverlayInputMethod peInputMethod, System.IAsyncResult result)
    // Offset: 0x1E6814C
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::VROverlayInputMethod& peInputMethod, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayInputMethod
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayInputMethod*, "Valve.VR", "IVROverlay/_GetOverlayInputMethod");
