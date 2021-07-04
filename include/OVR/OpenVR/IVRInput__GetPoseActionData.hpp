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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: InputPoseActionData_t
  struct InputPoseActionData_t;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetPoseActionData
  // [UnmanagedFunctionPointerAttribute] Offset: DCE854
  class IVRInput::_GetPoseActionData : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPoseActionData
    _GetPoseActionData() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE98CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetPoseActionData* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetPoseActionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetPoseActionData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsFromNow, ref OVR.OpenVR.InputPoseActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1EE98DC
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, OVR::OpenVR::InputPoseActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsFromNow, ref OVR.OpenVR.InputPoseActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE9BD0
    System::IAsyncResult* BeginInvoke(uint64_t action, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, OVR::OpenVR::InputPoseActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputPoseActionData_t pActionData, System.IAsyncResult result)
    // Offset: 0x1EE9CFC
    OVR::OpenVR::EVRInputError EndInvoke(OVR::OpenVR::InputPoseActionData_t& pActionData, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetPoseActionData
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetPoseActionData*, "OVR.OpenVR", "IVRInput/_GetPoseActionData");
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetPoseActionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetPoseActionData::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetPoseActionData::*)(uint64_t, OVR::OpenVR::ETrackingUniverseOrigin, float, OVR::OpenVR::InputPoseActionData_t&, uint, uint64_t)>(&OVR::OpenVR::IVRInput::_GetPoseActionData::Invoke)> {
  const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* fPredictedSecondsFromNow = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputPoseActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetPoseActionData*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetPoseActionData::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRInput::_GetPoseActionData::*)(uint64_t, OVR::OpenVR::ETrackingUniverseOrigin, float, OVR::OpenVR::InputPoseActionData_t&, uint, uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_GetPoseActionData::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* fPredictedSecondsFromNow = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputPoseActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetPoseActionData*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetPoseActionData::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetPoseActionData::*)(OVR::OpenVR::InputPoseActionData_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_GetPoseActionData::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputPoseActionData_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetPoseActionData*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pActionData, result});
  }
};
