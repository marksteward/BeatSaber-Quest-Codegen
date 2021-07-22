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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
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
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetControllerStateWithPose
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBF9E4
  class IVRSystem::_GetControllerStateWithPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetControllerStateWithPose
    _GetControllerStateWithPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CC74B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerStateWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetControllerStateWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerStateWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1CC74C0
    bool Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CC77BC
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t pControllerState, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x1CC78C4
    bool EndInvoke(Valve::VR::VRControllerState_t& pControllerState, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetControllerStateWithPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetControllerStateWithPose*, "Valve.VR", "IVRSystem/_GetControllerStateWithPose");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerStateWithPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerStateWithPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_GetControllerStateWithPose::*)(Valve::VR::ETrackingUniverseOrigin, uint, Valve::VR::VRControllerState_t&, uint, Valve::VR::TrackedDevicePose_t&)>(&Valve::VR::IVRSystem::_GetControllerStateWithPose::Invoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetControllerStateWithPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerStateWithPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetControllerStateWithPose::*)(Valve::VR::ETrackingUniverseOrigin, uint, Valve::VR::VRControllerState_t&, uint, Valve::VR::TrackedDevicePose_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetControllerStateWithPose::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetControllerStateWithPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetControllerStateWithPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_GetControllerStateWithPose::*)(Valve::VR::VRControllerState_t&, Valve::VR::TrackedDevicePose_t&, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetControllerStateWithPose::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetControllerStateWithPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, pTrackedDevicePose, result});
  }
};
