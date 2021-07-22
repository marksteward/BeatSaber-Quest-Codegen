// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRNotifications
#include "Valve/VR/IVRNotifications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
  // Forward declaring type: EVRNotificationStyle
  struct EVRNotificationStyle;
  // Forward declaring type: NotificationBitmap_t
  struct NotificationBitmap_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRNotifications/Valve.VR._CreateNotification
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DC0BC8
  class IVRNotifications::_CreateNotification : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateNotification
    _CreateNotification() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2002A0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRNotifications::_CreateNotification* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRNotifications::_CreateNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRNotifications::_CreateNotification*, creationType>(object, method)));
    }
    // public Valve.VR.EVRNotificationError Invoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, Valve.VR.EVRNotificationType type, System.String pchText, Valve.VR.EVRNotificationStyle style, ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId)
    // Offset: 0x2002A1C
    Valve::VR::EVRNotificationError Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::Il2CppString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, Valve.VR.EVRNotificationType type, System.String pchText, Valve.VR.EVRNotificationStyle style, ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2002D40
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::Il2CppString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRNotificationError EndInvoke(ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.IAsyncResult result)
    // Offset: 0x2002E70
    Valve::VR::EVRNotificationError EndInvoke(Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId, System::IAsyncResult* result);
  }; // Valve.VR.IVRNotifications/Valve.VR._CreateNotification
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRNotifications::_CreateNotification*, "Valve.VR", "IVRNotifications/_CreateNotification");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::IVRNotifications::_CreateNotification::*)(uint64_t, uint64_t, Valve::VR::EVRNotificationType, ::Il2CppString*, Valve::VR::EVRNotificationStyle, Valve::VR::NotificationBitmap_t&, uint&)>(&Valve::VR::IVRNotifications::_CreateNotification::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulUserValue = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRNotificationType")->byval_arg;
    static auto* pchText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRNotificationStyle")->byval_arg;
    static auto* pImage = &::il2cpp_utils::GetClassFromName("Valve.VR", "NotificationBitmap_t")->this_arg;
    static auto* pNotificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_CreateNotification*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRNotifications::_CreateNotification::*)(uint64_t, uint64_t, Valve::VR::EVRNotificationType, ::Il2CppString*, Valve::VR::EVRNotificationStyle, Valve::VR::NotificationBitmap_t&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRNotifications::_CreateNotification::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulUserValue = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRNotificationType")->byval_arg;
    static auto* pchText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRNotificationStyle")->byval_arg;
    static auto* pImage = &::il2cpp_utils::GetClassFromName("Valve.VR", "NotificationBitmap_t")->this_arg;
    static auto* pNotificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_CreateNotification*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::IVRNotifications::_CreateNotification::*)(Valve::VR::NotificationBitmap_t&, uint&, System::IAsyncResult*)>(&Valve::VR::IVRNotifications::_CreateNotification::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pImage = &::il2cpp_utils::GetClassFromName("Valve.VR", "NotificationBitmap_t")->this_arg;
    static auto* pNotificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_CreateNotification*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pImage, pNotificationId, result});
  }
};
