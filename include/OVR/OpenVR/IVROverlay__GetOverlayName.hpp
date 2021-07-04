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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayName
  // [UnmanagedFunctionPointerAttribute] Offset: DCDE54
  class IVROverlay::_GetOverlayName : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayName
    _GetOverlayName() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EF1604
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayName* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayName*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref OVR.OpenVR.EVROverlayError pError)
    // Offset: 0x1EF1614
    uint Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref OVR.OpenVR.EVROverlayError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EF18CC
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVROverlayError pError, System.IAsyncResult result)
    // Offset: 0x1EF19A4
    uint EndInvoke(OVR::OpenVR::EVROverlayError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayName
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayName*, "OVR.OpenVR", "IVROverlay/_GetOverlayName");
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayName::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVROverlay::_GetOverlayName::*)(uint64_t, System::Text::StringBuilder*, uint, OVR::OpenVR::EVROverlayError&)>(&OVR::OpenVR::IVROverlay::_GetOverlayName::Invoke)> {
  const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVROverlayError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayName*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pchValue, unBufferSize, pError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayName::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayName::*)(uint64_t, System::Text::StringBuilder*, uint, OVR::OpenVR::EVROverlayError&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayName::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVROverlayError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayName*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pchValue, unBufferSize, pError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayName::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVROverlay::_GetOverlayName::*)(OVR::OpenVR::EVROverlayError&, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayName::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVROverlayError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayName*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
