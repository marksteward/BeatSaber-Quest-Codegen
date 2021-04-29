// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/_GetFrameTiming
  // [UnmanagedFunctionPointerAttribute] Offset: CF8390
  class IVRCompositor::_GetFrameTiming : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetFrameTiming
    _GetFrameTiming() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E5C954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetFrameTiming* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetFrameTiming::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetFrameTiming*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo)
    // Offset: 0x1E5C964
    bool Invoke(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E5CBE4
    System::IAsyncResult* BeginInvoke(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x1E5CC98
    bool EndInvoke(Valve::VR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetFrameTiming
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetFrameTiming*, "Valve.VR", "IVRCompositor/_GetFrameTiming");
