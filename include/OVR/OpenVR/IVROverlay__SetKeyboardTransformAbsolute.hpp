// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D851F4
  class IVROverlay::_SetKeyboardTransformAbsolute : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetKeyboardTransformAbsolute
    _SetKeyboardTransformAbsolute() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18FC498
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetKeyboardTransformAbsolute* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetKeyboardTransformAbsolute*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform)
    // Offset: 0x18FC4AC
    void Invoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18FC734
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform, System.IAsyncResult result)
    // Offset: 0x18FC7E8
    void EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetKeyboardTransformAbsolute");
#pragma pack(pop)
