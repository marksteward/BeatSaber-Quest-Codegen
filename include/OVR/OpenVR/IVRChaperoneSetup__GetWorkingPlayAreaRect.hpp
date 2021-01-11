// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D84754
  class IVRChaperoneSetup::_GetWorkingPlayAreaRect : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWorkingPlayAreaRect
    _GetWorkingPlayAreaRect() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FB7DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetWorkingPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetWorkingPlayAreaRect*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x11F19A0
    bool Invoke(OVR::OpenVR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FB7F0
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x11FB884
    bool EndInvoke(OVR::OpenVR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
