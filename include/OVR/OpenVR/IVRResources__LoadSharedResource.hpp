// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRResources
#include "OVR/OpenVR/IVRResources.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRResources/_LoadSharedResource
  // [UnmanagedFunctionPointerAttribute] Offset: DCE764
  class IVRResources::_LoadSharedResource : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LoadSharedResource
    _LoadSharedResource() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20A6990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRResources::_LoadSharedResource* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRResources::_LoadSharedResource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRResources::_LoadSharedResource*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0x20A69A0
    uint Invoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20A6DB8
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x20A6E58
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRResources/_LoadSharedResource
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRResources::_LoadSharedResource*, "OVR.OpenVR", "IVRResources/_LoadSharedResource");
// Writing MetadataGetter for method: OVR::OpenVR::IVRResources::_LoadSharedResource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRResources::_LoadSharedResource::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRResources::_LoadSharedResource::*)(::Il2CppString*, ::Il2CppString*, uint)>(&OVR::OpenVR::IVRResources::_LoadSharedResource::Invoke)> {
  const MethodInfo* get() {
    static auto* pchResourceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRResources::_LoadSharedResource*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchResourceName, pchBuffer, unBufferLen});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRResources::_LoadSharedResource::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRResources::_LoadSharedResource::*)(::Il2CppString*, ::Il2CppString*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRResources::_LoadSharedResource::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pchResourceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRResources::_LoadSharedResource*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchResourceName, pchBuffer, unBufferLen, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRResources::_LoadSharedResource::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRResources::_LoadSharedResource::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRResources::_LoadSharedResource::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRResources::_LoadSharedResource*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
