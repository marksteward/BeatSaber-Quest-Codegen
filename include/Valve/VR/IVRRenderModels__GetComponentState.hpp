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
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
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
  // Autogenerated type: Valve.VR.IVRRenderModels/_GetComponentState
  // [UnmanagedFunctionPointerAttribute] Offset: DD4644
  class IVRRenderModels::_GetComponentState : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentState
    _GetComponentState() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8B3F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentState* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_GetComponentState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentState*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x1C8B400
    bool Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8B878
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0x1C8B968
    bool EndInvoke(Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_GetComponentState
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetComponentState*, "Valve.VR", "IVRRenderModels/_GetComponentState");
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentState::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRRenderModels::_GetComponentState::*)(::Il2CppString*, ::Il2CppString*, Valve::VR::VRControllerState_t&, Valve::VR::RenderModel_ControllerMode_State_t&, Valve::VR::RenderModel_ComponentState_t&)>(&Valve::VR::IVRRenderModels::_GetComponentState::Invoke)> {
  const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ComponentState_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentState*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentState::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRRenderModels::_GetComponentState::*)(::Il2CppString*, ::Il2CppString*, Valve::VR::VRControllerState_t&, Valve::VR::RenderModel_ControllerMode_State_t&, Valve::VR::RenderModel_ComponentState_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_GetComponentState::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ComponentState_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentState*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentState::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRRenderModels::_GetComponentState::*)(Valve::VR::VRControllerState_t&, Valve::VR::RenderModel_ControllerMode_State_t&, Valve::VR::RenderModel_ComponentState_t&, System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_GetComponentState::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ComponentState_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentState*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, pState, pComponentState, result});
  }
};
