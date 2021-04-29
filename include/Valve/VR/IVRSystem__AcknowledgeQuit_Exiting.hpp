// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting
  // [UnmanagedFunctionPointerAttribute] Offset: CF7D00
  class IVRSystem::_AcknowledgeQuit_Exiting : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _AcknowledgeQuit_Exiting
    _AcknowledgeQuit_Exiting() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AD3460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_AcknowledgeQuit_Exiting* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_AcknowledgeQuit_Exiting*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x1AD3470
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AD367C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1AD36A8
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_AcknowledgeQuit_Exiting*, "Valve.VR", "IVRSystem/_AcknowledgeQuit_Exiting");
