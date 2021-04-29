// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayName
  // [UnmanagedFunctionPointerAttribute] Offset: CF37B8
  class IVROverlay::_GetOverlayName : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayName
    _GetOverlayName() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D7F584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayName* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayName*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref OVR.OpenVR.EVROverlayError pError)
    // Offset: 0x1D7F594
    uint Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref OVR.OpenVR.EVROverlayError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D7F84C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVROverlayError pError, System.IAsyncResult result)
    // Offset: 0x1D7F924
    uint EndInvoke(OVR::OpenVR::EVROverlayError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayName
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayName*, "OVR.OpenVR", "IVROverlay/_GetOverlayName");
