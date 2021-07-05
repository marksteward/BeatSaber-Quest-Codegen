// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess
  // [UnmanagedFunctionPointerAttribute] Offset: DD443C
  class IVROverlay::_GetDashboardOverlaySceneProcess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDashboardOverlaySceneProcess
    _GetDashboardOverlaySceneProcess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FC5400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetDashboardOverlaySceneProcess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetDashboardOverlaySceneProcess*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punProcessId)
    // Offset: 0x1FC5410
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& punProcessId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punProcessId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FC5694
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& punProcessId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt32 punProcessId, System.IAsyncResult result)
    // Offset: 0x1FC5744
    Valve::VR::EVROverlayError EndInvoke(uint& punProcessId, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess*, "Valve.VR", "IVROverlay/_GetDashboardOverlaySceneProcess");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::*)(uint64_t, uint&)>(&Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punProcessId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punProcessId});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::*)(uint64_t, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punProcessId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punProcessId, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::*)(uint&, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punProcessId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punProcessId, result});
  }
};
