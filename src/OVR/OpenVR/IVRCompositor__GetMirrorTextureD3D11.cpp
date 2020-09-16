// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11
#include "OVR/OpenVR/IVRCompositor__GetMirrorTextureD3D11.hpp"
// Including type: OVR.OpenVR.EVRCompositorError
#include "OVR/OpenVR/EVRCompositorError.hpp"
// Including type: OVR.OpenVR.EVREye
#include "OVR/OpenVR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11..ctor
OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11* OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRCompositor::_GetMirrorTextureD3D11*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11.Invoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::Invoke(OVR::OpenVR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "Invoke", eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::BeginInvoke(OVR::OpenVR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11.EndInvoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11::EndInvoke(System::IntPtr& ppD3D11ShaderResourceView, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "EndInvoke", ppD3D11ShaderResourceView, result));
}
