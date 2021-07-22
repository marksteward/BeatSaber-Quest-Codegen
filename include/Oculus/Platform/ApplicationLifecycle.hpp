// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchDetails
  class LaunchDetails;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: LaunchResult
  struct LaunchResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ApplicationLifecycle
  // [TokenAttribute] Offset: FFFFFFFF
  class ApplicationLifecycle : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ApplicationLifecycle
    ApplicationLifecycle() noexcept {}
    // static public Oculus.Platform.Models.LaunchDetails GetLaunchDetails()
    // Offset: 0x1C17568
    static Oculus::Platform::Models::LaunchDetails* GetLaunchDetails();
    // static public System.Void LogDeeplinkResult(System.String trackingID, Oculus.Platform.LaunchResult result)
    // Offset: 0x1C17668
    static void LogDeeplinkResult(::Il2CppString* trackingID, Oculus::Platform::LaunchResult result);
    // static public System.Void SetLaunchIntentChangedNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<System.String> callback)
    // Offset: 0x1C17784
    static void SetLaunchIntentChangedNotificationCallback(typename Oculus::Platform::Message_1<::Il2CppString*>::Callback* callback);
  }; // Oculus.Platform.ApplicationLifecycle
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ApplicationLifecycle*, "Oculus.Platform", "ApplicationLifecycle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::ApplicationLifecycle::GetLaunchDetails
// Il2CppName: GetLaunchDetails
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchDetails* (*)()>(&Oculus::Platform::ApplicationLifecycle::GetLaunchDetails)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ApplicationLifecycle*), "GetLaunchDetails", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult
// Il2CppName: LogDeeplinkResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Oculus::Platform::LaunchResult)>(&Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult)> {
  static const MethodInfo* get() {
    static auto* trackingID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "LaunchResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ApplicationLifecycle*), "LogDeeplinkResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingID, result});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback
// Il2CppName: SetLaunchIntentChangedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
