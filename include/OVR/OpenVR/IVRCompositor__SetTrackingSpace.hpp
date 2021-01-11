// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_SetTrackingSpace
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D848A8
  class IVRCompositor::_SetTrackingSpace : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetTrackingSpace
    _SetTrackingSpace() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x185EADC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_SetTrackingSpace* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_SetTrackingSpace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_SetTrackingSpace*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin)
    // Offset: 0x185EAF0
    void Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.AsyncCallback callback, System.Object object)
    // Offset: 0x185ED5C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x185EDE8
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_SetTrackingSpace
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_SetTrackingSpace*, "OVR.OpenVR", "IVRCompositor/_SetTrackingSpace");
