// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetFrameTimings
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8495C
  class IVRCompositor::_GetFrameTimings : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetFrameTimings
    _GetFrameTimings() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x185B130
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetFrameTimings* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_GetFrameTimings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetFrameTimings*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0x185B144
    uint Invoke(OVR::OpenVR::Compositor_FrameTiming& pTiming, uint nFrames);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 nFrames, System.AsyncCallback callback, System.Object object)
    // Offset: 0x185B3B8
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::Compositor_FrameTiming& pTiming, uint nFrames, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x185B46C
    uint EndInvoke(OVR::OpenVR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetFrameTimings
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetFrameTimings*, "OVR.OpenVR", "IVRCompositor/_GetFrameTimings");
#pragma pack(pop)
