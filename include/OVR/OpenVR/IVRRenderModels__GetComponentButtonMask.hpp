// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentButtonMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBBA40
  class IVRRenderModels::_GetComponentButtonMask : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentButtonMask
    _GetComponentButtonMask() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x208DB20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentButtonMask* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentButtonMask*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x208DB30
    uint64_t Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x208DF20
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x208DF50
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentButtonMask
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask*, "OVR.OpenVR", "IVRRenderModels/_GetComponentButtonMask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::*)(::Il2CppString*, ::Il2CppString*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::*)(::Il2CppString*, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentButtonMask*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
