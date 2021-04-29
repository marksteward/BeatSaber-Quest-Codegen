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
  // Forward declaring type: EColorSpace
  struct EColorSpace;
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
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayTextureColorSpace
  // [UnmanagedFunctionPointerAttribute] Offset: CF8854
  class IVROverlay::_SetOverlayTextureColorSpace : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayTextureColorSpace
    _SetOverlayTextureColorSpace() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AC6304
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayTextureColorSpace* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetOverlayTextureColorSpace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayTextureColorSpace*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, Valve.VR.EColorSpace eTextureColorSpace)
    // Offset: 0x1AC6314
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, Valve::VR::EColorSpace eTextureColorSpace);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, Valve.VR.EColorSpace eTextureColorSpace, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AC6598
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::EColorSpace eTextureColorSpace, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1AC6644
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayTextureColorSpace
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayTextureColorSpace*, "Valve.VR", "IVROverlay/_SetOverlayTextureColorSpace");
