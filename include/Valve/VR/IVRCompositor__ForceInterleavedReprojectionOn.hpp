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
  // Autogenerated type: Valve.VR.IVRCompositor/_ForceInterleavedReprojectionOn
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89830
  class IVRCompositor::_ForceInterleavedReprojectionOn : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ForceInterleavedReprojectionOn
    _ForceInterleavedReprojectionOn() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E5880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ForceInterleavedReprojectionOn* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_ForceInterleavedReprojectionOn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ForceInterleavedReprojectionOn*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean bOverride)
    // Offset: 0x18E5894
    void Invoke(bool bOverride);
    // public System.IAsyncResult BeginInvoke(System.Boolean bOverride, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E5B10
    System::IAsyncResult* BeginInvoke(bool bOverride, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18E5BA0
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_ForceInterleavedReprojectionOn
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_ForceInterleavedReprojectionOn*, "Valve.VR", "IVRCompositor/_ForceInterleavedReprojectionOn");
#pragma pack(pop)
