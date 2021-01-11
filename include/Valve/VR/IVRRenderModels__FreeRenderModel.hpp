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
  // Autogenerated type: Valve.VR.IVRRenderModels/_FreeRenderModel
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89FB0
  class IVRRenderModels::_FreeRenderModel : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FreeRenderModel
    _FreeRenderModel() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x191D074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_FreeRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_FreeRenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_FreeRenderModel*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr pRenderModel)
    // Offset: 0x191D088
    void Invoke(System::IntPtr pRenderModel);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pRenderModel, System.AsyncCallback callback, System.Object object)
    // Offset: 0x191D2E8
    System::IAsyncResult* BeginInvoke(System::IntPtr pRenderModel, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x191D374
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_FreeRenderModel
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_FreeRenderModel*, "Valve.VR", "IVRRenderModels/_FreeRenderModel");
