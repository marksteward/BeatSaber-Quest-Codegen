// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11
  // [UnmanagedFunctionPointerAttribute] Offset: DCDD14
  class IVRCompositor::_GetMirrorTextureD3D11 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetMirrorTextureD3D11
    _GetMirrorTextureD3D11() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE0624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetMirrorTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetMirrorTextureD3D11*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRCompositorError Invoke(OVR.OpenVR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView)
    // Offset: 0x1EE0634
    OVR::OpenVR::EVRCompositorError Invoke(OVR::OpenVR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE08EC
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(ref System.IntPtr ppD3D11ShaderResourceView, System.IAsyncResult result)
    // Offset: 0x1EE09B4
    OVR::OpenVR::EVRCompositorError EndInvoke(System::IntPtr& ppD3D11ShaderResourceView, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureD3D11");
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
