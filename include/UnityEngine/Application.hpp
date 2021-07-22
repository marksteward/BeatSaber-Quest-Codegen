// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ThreadPriority
  struct ThreadPriority;
  // Forward declaring type: RuntimePlatform
  struct RuntimePlatform;
  // Forward declaring type: SystemLanguage
  struct SystemLanguage;
  // Forward declaring type: NetworkReachability
  struct NetworkReachability;
  // Forward declaring type: LogType
  struct LogType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Application
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  // [NativeHeaderAttribute] Offset: D7B4E4
  class Application : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Application::LowMemoryCallback
    class LowMemoryCallback;
    // Nested type: UnityEngine::Application::LogCallback
    class LogCallback;
    // Creating value type constructor for type: Application
    Application() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xD80528
    // Get static field: static private UnityEngine.Application/UnityEngine.LowMemoryCallback lowMemory
    static UnityEngine::Application::LowMemoryCallback* _get_lowMemory();
    // Set static field: static private UnityEngine.Application/UnityEngine.LowMemoryCallback lowMemory
    static void _set_lowMemory(UnityEngine::Application::LowMemoryCallback* value);
    // Get static field: static private UnityEngine.Application/UnityEngine.LogCallback s_LogCallbackHandler
    static UnityEngine::Application::LogCallback* _get_s_LogCallbackHandler();
    // Set static field: static private UnityEngine.Application/UnityEngine.LogCallback s_LogCallbackHandler
    static void _set_s_LogCallbackHandler(UnityEngine::Application::LogCallback* value);
    // Get static field: static private UnityEngine.Application/UnityEngine.LogCallback s_LogCallbackHandlerThreaded
    static UnityEngine::Application::LogCallback* _get_s_LogCallbackHandlerThreaded();
    // Set static field: static private UnityEngine.Application/UnityEngine.LogCallback s_LogCallbackHandlerThreaded
    static void _set_s_LogCallbackHandlerThreaded(UnityEngine::Application::LogCallback* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD80564
    // Get static field: static private System.Action`1<System.Boolean> focusChanged
    static System::Action_1<bool>* _get_focusChanged();
    // Set static field: static private System.Action`1<System.Boolean> focusChanged
    static void _set_focusChanged(System::Action_1<bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD805A0
    // Get static field: static private System.Action`1<System.String> deepLinkActivated
    static System::Action_1<::Il2CppString*>* _get_deepLinkActivated();
    // Set static field: static private System.Action`1<System.String> deepLinkActivated
    static void _set_deepLinkActivated(System::Action_1<::Il2CppString*>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD805DC
    // Get static field: static private System.Func`1<System.Boolean> wantsToQuit
    static System::Func_1<bool>* _get_wantsToQuit();
    // Set static field: static private System.Func`1<System.Boolean> wantsToQuit
    static void _set_wantsToQuit(System::Func_1<bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD80618
    // Get static field: static private System.Action quitting
    static System::Action* _get_quitting();
    // Set static field: static private System.Action quitting
    static void _set_quitting(System::Action* value);
    // static public System.Boolean get_isPlaying()
    // Offset: 0x1BDA0AC
    static bool get_isPlaying();
    // static public System.Void set_runInBackground(System.Boolean value)
    // Offset: 0x1BDA0E0
    static void set_runInBackground(bool value);
    // static public System.String get_dataPath()
    // Offset: 0x1BDA120
    static ::Il2CppString* get_dataPath();
    // static public System.String get_streamingAssetsPath()
    // Offset: 0x1BDA154
    static ::Il2CppString* get_streamingAssetsPath();
    // static public System.String get_persistentDataPath()
    // Offset: 0x1BDA188
    static ::Il2CppString* get_persistentDataPath();
    // static public System.String get_unityVersion()
    // Offset: 0x1BDA1BC
    static ::Il2CppString* get_unityVersion();
    // static public System.String get_version()
    // Offset: 0x1BDA1F0
    static ::Il2CppString* get_version();
    // static public System.String get_identifier()
    // Offset: 0x1BDA224
    static ::Il2CppString* get_identifier();
    // static public System.String get_productName()
    // Offset: 0x1BDA258
    static ::Il2CppString* get_productName();
    // static public System.String get_companyName()
    // Offset: 0x1BDA28C
    static ::Il2CppString* get_companyName();
    // static public System.Void set_targetFrameRate(System.Int32 value)
    // Offset: 0x1BDA300
    static void set_targetFrameRate(int value);
    // static public System.Void set_backgroundLoadingPriority(UnityEngine.ThreadPriority value)
    // Offset: 0x1BDA380
    static void set_backgroundLoadingPriority(UnityEngine::ThreadPriority value);
    // static public UnityEngine.RuntimePlatform get_platform()
    // Offset: 0x1BDA3C0
    static UnityEngine::RuntimePlatform get_platform();
    // static public System.Boolean get_isMobilePlatform()
    // Offset: 0x1BDA3F4
    static bool get_isMobilePlatform();
    // static public UnityEngine.SystemLanguage get_systemLanguage()
    // Offset: 0x1BDA46C
    static UnityEngine::SystemLanguage get_systemLanguage();
    // static public UnityEngine.NetworkReachability get_internetReachability()
    // Offset: 0x1BDA4A0
    static UnityEngine::NetworkReachability get_internetReachability();
    // static public System.Boolean get_isEditor()
    // Offset: 0x1BDBB74
    static bool get_isEditor();
    // static public System.Void add_logMessageReceived(UnityEngine.Application/UnityEngine.LogCallback value)
    // Offset: 0x1BDA740
    static void add_logMessageReceived(UnityEngine::Application::LogCallback* value);
    // static public System.Void remove_logMessageReceived(UnityEngine.Application/UnityEngine.LogCallback value)
    // Offset: 0x1BDA7F0
    static void remove_logMessageReceived(UnityEngine::Application::LogCallback* value);
    // static public System.Void add_logMessageReceivedThreaded(UnityEngine.Application/UnityEngine.LogCallback value)
    // Offset: 0x1BDA87C
    static void add_logMessageReceivedThreaded(UnityEngine::Application::LogCallback* value);
    // static public System.Void remove_logMessageReceivedThreaded(UnityEngine.Application/UnityEngine.LogCallback value)
    // Offset: 0x1BDA92C
    static void remove_logMessageReceivedThreaded(UnityEngine::Application::LogCallback* value);
    // static public System.Void add_onBeforeRender(UnityEngine.Events.UnityAction value)
    // Offset: 0x1BDAE88
    static void add_onBeforeRender(UnityEngine::Events::UnityAction* value);
    // static public System.Void remove_onBeforeRender(UnityEngine.Events.UnityAction value)
    // Offset: 0x1BDB228
    static void remove_onBeforeRender(UnityEngine::Events::UnityAction* value);
    // static public System.Void Quit(System.Int32 exitCode)
    // Offset: 0x1BD9F74
    static void Quit(int exitCode);
    // static public System.Void Quit()
    // Offset: 0x1BD9FB4
    static void Quit();
    // static public System.Boolean CanStreamedLevelBeLoaded(System.Int32 levelIndex)
    // Offset: 0x1BD9FF0
    static bool CanStreamedLevelBeLoaded(int levelIndex);
    // static public System.Boolean CanStreamedLevelBeLoaded(System.String levelName)
    // Offset: 0x1BDA06C
    static bool CanStreamedLevelBeLoaded(::Il2CppString* levelName);
    // static public System.Void OpenURL(System.String url)
    // Offset: 0x1BDA2C0
    static void OpenURL(::Il2CppString* url);
    // static private System.Void SetLogCallbackDefined(System.Boolean defined)
    // Offset: 0x1BDA340
    static void SetLogCallbackDefined(bool defined);
    // static System.Void CallLowMemory()
    // Offset: 0x1BDA4D4
    static void CallLowMemory();
    // static private System.Void CallLogCallback(System.String logString, System.String stackTrace, UnityEngine.LogType type, System.Boolean invokedOnMainThread)
    // Offset: 0x1BDA9B8
    static void CallLogCallback(::Il2CppString* logString, ::Il2CppString* stackTrace, UnityEngine::LogType type, bool invokedOnMainThread);
    // static private System.Boolean Internal_ApplicationWantsToQuit()
    // Offset: 0x1BDB58C
    static bool Internal_ApplicationWantsToQuit();
    // static private System.Void Internal_ApplicationQuit()
    // Offset: 0x1BDB844
    static void Internal_ApplicationQuit();
    // static System.Void InvokeOnBeforeRender()
    // Offset: 0x1BDB8A8
    static void InvokeOnBeforeRender();
    // static System.Void InvokeFocusChanged(System.Boolean focus)
    // Offset: 0x1BDBA8C
    static void InvokeFocusChanged(bool focus);
    // static System.Void InvokeDeepLinkActivated(System.String url)
    // Offset: 0x1BDBB00
    static void InvokeDeepLinkActivated(::Il2CppString* url);
  }; // UnityEngine.Application
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Application*, "UnityEngine", "Application");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Application::get_isPlaying
// Il2CppName: get_isPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Application::get_isPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_isPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::set_runInBackground
// Il2CppName: set_runInBackground
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Application::set_runInBackground)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "set_runInBackground", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_dataPath
// Il2CppName: get_dataPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_dataPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_dataPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_streamingAssetsPath
// Il2CppName: get_streamingAssetsPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_streamingAssetsPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_streamingAssetsPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_persistentDataPath
// Il2CppName: get_persistentDataPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_persistentDataPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_persistentDataPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_unityVersion
// Il2CppName: get_unityVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_unityVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_unityVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_identifier
// Il2CppName: get_identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_identifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_productName
// Il2CppName: get_productName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_productName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_productName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_companyName
// Il2CppName: get_companyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::Application::get_companyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_companyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::set_targetFrameRate
// Il2CppName: set_targetFrameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::Application::set_targetFrameRate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "set_targetFrameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::set_backgroundLoadingPriority
// Il2CppName: set_backgroundLoadingPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ThreadPriority)>(&UnityEngine::Application::set_backgroundLoadingPriority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ThreadPriority")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "set_backgroundLoadingPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_platform
// Il2CppName: get_platform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RuntimePlatform (*)()>(&UnityEngine::Application::get_platform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_platform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_isMobilePlatform
// Il2CppName: get_isMobilePlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Application::get_isMobilePlatform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_isMobilePlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_systemLanguage
// Il2CppName: get_systemLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SystemLanguage (*)()>(&UnityEngine::Application::get_systemLanguage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_systemLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_internetReachability
// Il2CppName: get_internetReachability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::NetworkReachability (*)()>(&UnityEngine::Application::get_internetReachability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_internetReachability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::get_isEditor
// Il2CppName: get_isEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Application::get_isEditor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "get_isEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::add_logMessageReceived
// Il2CppName: add_logMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Application::LogCallback*)>(&UnityEngine::Application::add_logMessageReceived)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Application/LogCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "add_logMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::remove_logMessageReceived
// Il2CppName: remove_logMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Application::LogCallback*)>(&UnityEngine::Application::remove_logMessageReceived)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Application/LogCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "remove_logMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::add_logMessageReceivedThreaded
// Il2CppName: add_logMessageReceivedThreaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Application::LogCallback*)>(&UnityEngine::Application::add_logMessageReceivedThreaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Application/LogCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "add_logMessageReceivedThreaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::remove_logMessageReceivedThreaded
// Il2CppName: remove_logMessageReceivedThreaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Application::LogCallback*)>(&UnityEngine::Application::remove_logMessageReceivedThreaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Application/LogCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "remove_logMessageReceivedThreaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::add_onBeforeRender
// Il2CppName: add_onBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Events::UnityAction*)>(&UnityEngine::Application::add_onBeforeRender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "add_onBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::remove_onBeforeRender
// Il2CppName: remove_onBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Events::UnityAction*)>(&UnityEngine::Application::remove_onBeforeRender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "remove_onBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::Quit
// Il2CppName: Quit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::Application::Quit)> {
  static const MethodInfo* get() {
    static auto* exitCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "Quit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exitCode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::Quit
// Il2CppName: Quit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Application::Quit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "Quit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::CanStreamedLevelBeLoaded
// Il2CppName: CanStreamedLevelBeLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::Application::CanStreamedLevelBeLoaded)> {
  static const MethodInfo* get() {
    static auto* levelIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "CanStreamedLevelBeLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::CanStreamedLevelBeLoaded
// Il2CppName: CanStreamedLevelBeLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&UnityEngine::Application::CanStreamedLevelBeLoaded)> {
  static const MethodInfo* get() {
    static auto* levelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "CanStreamedLevelBeLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::OpenURL
// Il2CppName: OpenURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::Application::OpenURL)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "OpenURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::SetLogCallbackDefined
// Il2CppName: SetLogCallbackDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Application::SetLogCallbackDefined)> {
  static const MethodInfo* get() {
    static auto* defined = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "SetLogCallbackDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defined});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::CallLowMemory
// Il2CppName: CallLowMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Application::CallLowMemory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "CallLowMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::CallLogCallback
// Il2CppName: CallLogCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, UnityEngine::LogType, bool)>(&UnityEngine::Application::CallLogCallback)> {
  static const MethodInfo* get() {
    static auto* logString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* invokedOnMainThread = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "CallLogCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logString, stackTrace, type, invokedOnMainThread});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::Internal_ApplicationWantsToQuit
// Il2CppName: Internal_ApplicationWantsToQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Application::Internal_ApplicationWantsToQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "Internal_ApplicationWantsToQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::Internal_ApplicationQuit
// Il2CppName: Internal_ApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Application::Internal_ApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "Internal_ApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::InvokeOnBeforeRender
// Il2CppName: InvokeOnBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Application::InvokeOnBeforeRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "InvokeOnBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::InvokeFocusChanged
// Il2CppName: InvokeFocusChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Application::InvokeFocusChanged)> {
  static const MethodInfo* get() {
    static auto* focus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "InvokeFocusChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focus});
  }
};
// Writing MetadataGetter for method: UnityEngine::Application::InvokeDeepLinkActivated
// Il2CppName: InvokeDeepLinkActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::Application::InvokeDeepLinkActivated)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Application*), "InvokeDeepLinkActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url});
  }
};
