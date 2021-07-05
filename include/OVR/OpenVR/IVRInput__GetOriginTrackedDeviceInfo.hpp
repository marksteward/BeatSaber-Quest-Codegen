// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: InputOriginInfo_t
  struct InputOriginInfo_t;
}
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
  // [UnmanagedFunctionPointerAttribute] Offset: DCE8F4
  class IVRInput::_GetOriginTrackedDeviceInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOriginTrackedDeviceInfo
    _GetOriginTrackedDeviceInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE9514
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetOriginTrackedDeviceInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetOriginTrackedDeviceInfo*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 origin, ref OVR.OpenVR.InputOriginInfo_t pOriginInfo, System.UInt32 unOriginInfoSize)
    // Offset: 0x1EE9524
    OVR::OpenVR::EVRInputError Invoke(uint64_t origin, OVR::OpenVR::InputOriginInfo_t& pOriginInfo, uint unOriginInfoSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 origin, ref OVR.OpenVR.InputOriginInfo_t pOriginInfo, System.UInt32 unOriginInfoSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE97C0
    System::IAsyncResult* BeginInvoke(uint64_t origin, OVR::OpenVR::InputOriginInfo_t& pOriginInfo, uint unOriginInfoSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputOriginInfo_t pOriginInfo, System.IAsyncResult result)
    // Offset: 0x1EE9894
    OVR::OpenVR::EVRInputError EndInvoke(OVR::OpenVR::InputOriginInfo_t& pOriginInfo, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo*, "OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::*)(uint64_t, OVR::OpenVR::InputOriginInfo_t&, uint)>(&OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pOriginInfo = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputOriginInfo_t")->this_arg;
    static auto* unOriginInfoSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, pOriginInfo, unOriginInfoSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::*)(uint64_t, OVR::OpenVR::InputOriginInfo_t&, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pOriginInfo = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputOriginInfo_t")->this_arg;
    static auto* unOriginInfoSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, pOriginInfo, unOriginInfoSize, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::*)(OVR::OpenVR::InputOriginInfo_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOriginInfo = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputOriginInfo_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOriginInfo, result});
  }
};
