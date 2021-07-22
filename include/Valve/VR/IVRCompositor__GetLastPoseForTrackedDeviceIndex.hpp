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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
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
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._GetLastPoseForTrackedDeviceIndex
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DC00EC
  class IVRCompositor::_GetLastPoseForTrackedDeviceIndex : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetLastPoseForTrackedDeviceIndex
    _GetLastPoseForTrackedDeviceIndex() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FFCD20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetLastPoseForTrackedDeviceIndex* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetLastPoseForTrackedDeviceIndex*, creationType>(object, method)));
    }
    // public Valve.VR.EVRCompositorError Invoke(System.UInt32 unDeviceIndex, ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pOutputGamePose)
    // Offset: 0x1FFCD30
    Valve::VR::EVRCompositorError Invoke(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pOutputGamePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FFCFD0
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pOutputGamePose, System.IAsyncResult result)
    // Offset: 0x1FFD09C
    Valve::VR::EVRCompositorError EndInvoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._GetLastPoseForTrackedDeviceIndex
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*, "Valve.VR", "IVRCompositor/_GetLastPoseForTrackedDeviceIndex");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::*)(uint, Valve::VR::TrackedDevicePose_t&, Valve::VR::TrackedDevicePose_t&)>(&Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pOutputGamePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, pOutputPose, pOutputGamePose});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::*)(uint, Valve::VR::TrackedDevicePose_t&, Valve::VR::TrackedDevicePose_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pOutputGamePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, pOutputPose, pOutputGamePose, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRCompositorError (Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::*)(Valve::VR::TrackedDevicePose_t&, Valve::VR::TrackedDevicePose_t&, System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* pOutputGamePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pOutputGamePose, result});
  }
};
