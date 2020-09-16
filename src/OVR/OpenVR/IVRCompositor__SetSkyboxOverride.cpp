// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride
#include "OVR/OpenVR/IVRCompositor__SetSkyboxOverride.hpp"
// Including type: OVR.OpenVR.EVRCompositorError
#include "OVR/OpenVR/EVRCompositorError.hpp"
// Including type: OVR.OpenVR.Texture_t
#include "OVR/OpenVR/Texture_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride..ctor
OVR::OpenVR::IVRCompositor::_SetSkyboxOverride* OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRCompositor::_SetSkyboxOverride*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride.Invoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::Invoke(::Array<OVR::OpenVR::Texture_t>*& pTextures, uint unTextureCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "Invoke", pTextures, unTextureCount));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::BeginInvoke(::Array<OVR::OpenVR::Texture_t>*& pTextures, uint unTextureCount, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pTextures, unTextureCount, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride.EndInvoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_SetSkyboxOverride::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "EndInvoke", result));
}
