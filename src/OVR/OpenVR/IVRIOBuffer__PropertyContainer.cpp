// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRIOBuffer/_PropertyContainer
#include "OVR/OpenVR/IVRIOBuffer__PropertyContainer.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_PropertyContainer..ctor
OVR::OpenVR::IVRIOBuffer::_PropertyContainer* OVR::OpenVR::IVRIOBuffer::_PropertyContainer::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRIOBuffer::_PropertyContainer*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_PropertyContainer.Invoke
uint64_t OVR::OpenVR::IVRIOBuffer::_PropertyContainer::Invoke(uint64_t ulBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "Invoke", ulBuffer));
}
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_PropertyContainer.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRIOBuffer::_PropertyContainer::BeginInvoke(uint64_t ulBuffer, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulBuffer, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_PropertyContainer.EndInvoke
uint64_t OVR::OpenVR::IVRIOBuffer::_PropertyContainer::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "EndInvoke", result));
}
