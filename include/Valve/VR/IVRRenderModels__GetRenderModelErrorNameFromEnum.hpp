// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
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
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8A0F0
  class IVRRenderModels::_GetRenderModelErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRenderModelErrorNameFromEnum
    _GetRenderModelErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x191F524
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetRenderModelErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_GetRenderModelErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetRenderModelErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(Valve.VR.EVRRenderModelError error)
    // Offset: 0x191F538
    System::IntPtr Invoke(Valve::VR::EVRRenderModelError error);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRRenderModelError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x191F7AC
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRRenderModelError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x191F838
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetRenderModelErrorNameFromEnum*, "Valve.VR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum");
