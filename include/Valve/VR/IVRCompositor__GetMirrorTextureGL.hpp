// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
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
  // Autogenerated type: Valve.VR.IVRCompositor/_GetMirrorTextureGL
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89894
  class IVRCompositor::_GetMirrorTextureGL : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetMirrorTextureGL
    _GetMirrorTextureGL() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E80C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetMirrorTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetMirrorTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetMirrorTextureGL*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(Valve.VR.EVREye eEye, ref System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle)
    // Offset: 0x18E80DC
    Valve::VR::EVRCompositorError Invoke(Valve::VR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, ref System.UInt32 pglTextureId, System.IntPtr pglSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E8388
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(ref System.UInt32 pglTextureId, System.IAsyncResult result)
    // Offset: 0x18E8458
    Valve::VR::EVRCompositorError EndInvoke(uint& pglTextureId, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetMirrorTextureGL
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetMirrorTextureGL*, "Valve.VR", "IVRCompositor/_GetMirrorTextureGL");
#pragma pack(pop)
