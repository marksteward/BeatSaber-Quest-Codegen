// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
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
  // Forward declaring type: EVREye
  struct EVREye;
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
  // Autogenerated type: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport
  // [UnmanagedFunctionPointerAttribute] Offset: DCD4CC
  class IVRExtendedDisplay::_GetEyeOutputViewport : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetEyeOutputViewport
    _GetEyeOutputViewport() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE57C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetEyeOutputViewport* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetEyeOutputViewport*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1EE57D4
    void Invoke(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE5AC4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1EE5BC8
    void EndInvoke(uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport*, "OVR.OpenVR", "IVRExtendedDisplay/_GetEyeOutputViewport");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::*)(OVR::OpenVR::EVREye, uint&, uint&, uint&, uint&)>(&OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVREye")->byval_arg;
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::*)(OVR::OpenVR::EVREye, uint&, uint&, uint&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVREye")->byval_arg;
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pnX, pnY, pnWidth, pnHeight, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::*)(uint&, uint&, uint&, uint&, System::IAsyncResult*)>(&OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight, result});
  }
};
