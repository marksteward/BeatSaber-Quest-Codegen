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
  // Forward declaring type: EColorSpace
  struct EColorSpace;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayTextureColorSpace
  // [UnmanagedFunctionPointerAttribute] Offset: DCDFE4
  class IVROverlay::_SetOverlayTextureColorSpace : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayTextureColorSpace
    _SetOverlayTextureColorSpace() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x209EA9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayTextureColorSpace* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayTextureColorSpace*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.EColorSpace eTextureColorSpace)
    // Offset: 0x209EAAC
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace eTextureColorSpace);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.EColorSpace eTextureColorSpace, System.AsyncCallback callback, System.Object object)
    // Offset: 0x209ED30
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace eTextureColorSpace, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x209EDDC
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayTextureColorSpace
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace*, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureColorSpace");
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::*)(uint64_t, OVR::OpenVR::EColorSpace)>(&OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::Invoke)> {
  const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eTextureColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eTextureColorSpace});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::*)(uint64_t, OVR::OpenVR::EColorSpace, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eTextureColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eTextureColorSpace, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
