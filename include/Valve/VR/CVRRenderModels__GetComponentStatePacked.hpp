// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRRenderModels
#include "Valve/VR/CVRRenderModels.hpp"
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
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
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
  // Autogenerated type: Valve.VR.CVRRenderModels/_GetComponentStatePacked
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8A348
  class CVRRenderModels::_GetComponentStatePacked : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentStatePacked
    _GetComponentStatePacked() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136B65C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRRenderModels::_GetComponentStatePacked* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRRenderModels::_GetComponentStatePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRRenderModels::_GetComponentStatePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x136B0FC
    bool Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136B670
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0x136B760
    bool EndInvoke(Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::IAsyncResult* result);
  }; // Valve.VR.CVRRenderModels/_GetComponentStatePacked
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRRenderModels::_GetComponentStatePacked*, "Valve.VR", "CVRRenderModels/_GetComponentStatePacked");
