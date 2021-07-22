// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetDXGIOutputInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBA6B8
  class IVRSystem::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDXGIOutputInfo
    _GetDXGIOutputInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x209BAB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetDXGIOutputInfo*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Int32 pnAdapterIndex)
    // Offset: 0x209BAC0
    void Invoke(int& pnAdapterIndex);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnAdapterIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x209BD0C
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnAdapterIndex, System.IAsyncResult result)
    // Offset: 0x209BDA0
    void EndInvoke(int& pnAdapterIndex, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetDXGIOutputInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*, "OVR.OpenVR", "IVRSystem/_GetDXGIOutputInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::*)(int&)>(&OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::*)(int&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::*)(int&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex, result});
  }
};
