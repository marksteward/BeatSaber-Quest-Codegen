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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess
  // [UnmanagedFunctionPointerAttribute] Offset: CF359C
  class IVRCompositor::_GetCurrentSceneFocusProcess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCurrentSceneFocusProcess
    _GetCurrentSceneFocusProcess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D6CFEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetCurrentSceneFocusProcess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetCurrentSceneFocusProcess*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke()
    // Offset: 0x1D6CFFC
    uint Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D6D210
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D6D23C
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess*, "OVR.OpenVR", "IVRCompositor/_GetCurrentSceneFocusProcess");
