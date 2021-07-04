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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetActionHandle
  // [UnmanagedFunctionPointerAttribute] Offset: DCE7F0
  class IVRInput::_GetActionHandle : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetActionHandle
    _GetActionHandle() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE7770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetActionHandle* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetActionHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetActionHandle*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.String pchActionName, ref System.UInt64 pHandle)
    // Offset: 0x1EE7780
    OVR::OpenVR::EVRInputError Invoke(::Il2CppString* pchActionName, uint64_t& pHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchActionName, ref System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE7B70
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchActionName, uint64_t& pHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x1EE7C0C
    OVR::OpenVR::EVRInputError EndInvoke(uint64_t& pHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetActionHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetActionHandle*, "OVR.OpenVR", "IVRInput/_GetActionHandle");
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionHandle::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionHandle::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetActionHandle::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
