// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRNotifications/_CreateNotification
#include "OVR/OpenVR/IVRNotifications__CreateNotification.hpp"
// Including type: OVR.OpenVR.EVRNotificationError
#include "OVR/OpenVR/EVRNotificationError.hpp"
// Including type: OVR.OpenVR.EVRNotificationType
#include "OVR/OpenVR/EVRNotificationType.hpp"
// Including type: OVR.OpenVR.EVRNotificationStyle
#include "OVR/OpenVR/EVRNotificationStyle.hpp"
// Including type: OVR.OpenVR.NotificationBitmap_t
#include "OVR/OpenVR/NotificationBitmap_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRNotifications/_CreateNotification..ctor
OVR::OpenVR::IVRNotifications::_CreateNotification* OVR::OpenVR::IVRNotifications::_CreateNotification::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRNotifications::_CreateNotification*>(object, method));
}
// Autogenerated method: OVR.OpenVR.IVRNotifications/_CreateNotification.Invoke
OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications::_CreateNotification::Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::Il2CppString* pchText, OVR::OpenVR::EVRNotificationStyle style, OVR::OpenVR::NotificationBitmap_t& pImage, uint& pNotificationId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRNotificationError>(this, "Invoke", ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId));
}
// Autogenerated method: OVR.OpenVR.IVRNotifications/_CreateNotification.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRNotifications::_CreateNotification::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::Il2CppString* pchText, OVR::OpenVR::EVRNotificationStyle style, OVR::OpenVR::NotificationBitmap_t& pImage, uint& pNotificationId, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRNotifications/_CreateNotification.EndInvoke
OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications::_CreateNotification::EndInvoke(OVR::OpenVR::NotificationBitmap_t& pImage, uint& pNotificationId, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRNotificationError>(this, "EndInvoke", pImage, pNotificationId, result));
}
