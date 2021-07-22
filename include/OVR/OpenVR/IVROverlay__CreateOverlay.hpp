// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._CreateOverlay
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBB310
  class IVROverlay::_CreateOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateOverlay
    _CreateOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F089C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_CreateOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_CreateOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_CreateOverlay*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle)
    // Offset: 0x1F089D8
    OVR::OpenVR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F08DF0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt64 pOverlayHandle, System.IAsyncResult result)
    // Offset: 0x1F08E98
    OVR::OpenVR::EVROverlayError EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._CreateOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_CreateOverlay*, "OVR.OpenVR", "IVROverlay/_CreateOverlay");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_CreateOverlay::*)(::Il2CppString*, ::Il2CppString*, uint64_t&)>(&OVR::OpenVR::IVROverlay::_CreateOverlay::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchOverlayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CreateOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayKey, pchOverlayName, pOverlayHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_CreateOverlay::*)(::Il2CppString*, ::Il2CppString*, uint64_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_CreateOverlay::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchOverlayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CreateOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayKey, pchOverlayName, pOverlayHandle, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_CreateOverlay::*)(uint64_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_CreateOverlay::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CreateOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOverlayHandle, result});
  }
};
