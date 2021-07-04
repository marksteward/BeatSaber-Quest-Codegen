// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ILogger
  class ILogger;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Debug
  // [NativeHeaderAttribute] Offset: D8E2B8
  class Debug : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Debug
    Debug() noexcept {}
    // Get static field: static UnityEngine.ILogger s_Logger
    static UnityEngine::ILogger* _get_s_Logger();
    // Set static field: static UnityEngine.ILogger s_Logger
    static void _set_s_Logger(UnityEngine::ILogger* value);
    // static public UnityEngine.ILogger get_unityLogger()
    // Offset: 0x1B93454
    static UnityEngine::ILogger* get_unityLogger();
    // static public System.Void DrawLine(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color)
    // Offset: 0x1B934BC
    static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color);
    // static public System.Void DrawLine(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color, System.Single duration, System.Boolean depthTest)
    // Offset: 0x1B93594
    static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color, float duration, bool depthTest);
    // static public System.Void Log(System.Object message)
    // Offset: 0x1B936D0
    static void Log(::Il2CppObject* message);
    // static public System.Void Log(System.Object message, UnityEngine.Object context)
    // Offset: 0x1B937B0
    static void Log(::Il2CppObject* message, UnityEngine::Object* context);
    // static public System.Void LogFormat(System.String format, params System.Object[] args)
    // Offset: 0x1B938A0
    static void LogFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(System.String format, params System.Object[] args)
    static void LogFormat(::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(System.String format, params System.Object[] args)
    template<class ...TParams>
    static void LogFormat(::Il2CppString* format, TParams&&... args) {
      LogFormat(format, {args...});
    }
    // static public System.Void LogError(System.Object message)
    // Offset: 0x1B93990
    static void LogError(::Il2CppObject* message);
    // static public System.Void LogError(System.Object message, UnityEngine.Object context)
    // Offset: 0x1B93A70
    static void LogError(::Il2CppObject* message, UnityEngine::Object* context);
    // static public System.Void LogErrorFormat(System.String format, params System.Object[] args)
    // Offset: 0x1B93B60
    static void LogErrorFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogErrorFormat(System.String format, params System.Object[] args)
    static void LogErrorFormat(::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogErrorFormat(System.String format, params System.Object[] args)
    template<class ...TParams>
    static void LogErrorFormat(::Il2CppString* format, TParams&&... args) {
      LogErrorFormat(format, {args...});
    }
    // static public System.Void LogErrorFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x1B93C50
    static void LogErrorFormat(UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogErrorFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    static void LogErrorFormat(UnityEngine::Object* context, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogErrorFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    template<class ...TParams>
    static void LogErrorFormat(UnityEngine::Object* context, ::Il2CppString* format, TParams&&... args) {
      LogErrorFormat(context, format, {args...});
    }
    // static public System.Void LogException(System.Exception exception)
    // Offset: 0x1B8A240
    static void LogException(System::Exception* exception);
    // static public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x1B93D44
    static void LogException(System::Exception* exception, UnityEngine::Object* context);
    // static public System.Void LogWarning(System.Object message)
    // Offset: 0x1B93E30
    static void LogWarning(::Il2CppObject* message);
    // static public System.Void LogWarning(System.Object message, UnityEngine.Object context)
    // Offset: 0x1B93F10
    static void LogWarning(::Il2CppObject* message, UnityEngine::Object* context);
    // static public System.Void LogWarningFormat(System.String format, params System.Object[] args)
    // Offset: 0x1B94000
    static void LogWarningFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogWarningFormat(System.String format, params System.Object[] args)
    static void LogWarningFormat(::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogWarningFormat(System.String format, params System.Object[] args)
    template<class ...TParams>
    static void LogWarningFormat(::Il2CppString* format, TParams&&... args) {
      LogWarningFormat(format, {args...});
    }
    // static public System.Void LogWarningFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x1B940F0
    static void LogWarningFormat(UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogWarningFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    static void LogWarningFormat(UnityEngine::Object* context, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogWarningFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    template<class ...TParams>
    static void LogWarningFormat(UnityEngine::Object* context, ::Il2CppString* format, TParams&&... args) {
      LogWarningFormat(context, format, {args...});
    }
    // static public System.Void LogAssertion(System.Object message)
    // Offset: 0x1B8A868
    static void LogAssertion(::Il2CppObject* message);
    // static public System.Boolean get_isDebugBuild()
    // Offset: 0x1B941E4
    static bool get_isDebugBuild();
    // static System.Boolean CallOverridenDebugHandler(System.Exception exception, UnityEngine.Object obj)
    // Offset: 0x1B94218
    static bool CallOverridenDebugHandler(System::Exception* exception, UnityEngine::Object* obj);
    // static private System.Void .cctor()
    // Offset: 0x1B943C4
    static void _cctor();
    // static private System.Void DrawLine_Injected(ref UnityEngine.Vector3 start, ref UnityEngine.Vector3 end, ref UnityEngine.Color color, System.Single duration, System.Boolean depthTest)
    // Offset: 0x1B93658
    static void DrawLine_Injected(UnityEngine::Vector3& start, UnityEngine::Vector3& end, UnityEngine::Color& color, float duration, bool depthTest);
  }; // UnityEngine.Debug
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Debug*, "UnityEngine", "Debug");
// Writing MetadataGetter for method: UnityEngine::Debug::get_unityLogger
// Il2CppName: get_unityLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ILogger* (*)()>(&UnityEngine::Debug::get_unityLogger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "get_unityLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::DrawLine
// Il2CppName: DrawLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Color)>(&UnityEngine::Debug::DrawLine)> {
  const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "DrawLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, color});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::DrawLine
// Il2CppName: DrawLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Color, float, bool)>(&UnityEngine::Debug::DrawLine)> {
  const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* depthTest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "DrawLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, color, duration, depthTest});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::Log)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, UnityEngine::Object*)>(&UnityEngine::Debug::Log)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Debug::LogFormat)> {
  const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::LogError)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, UnityEngine::Object*)>(&UnityEngine::Debug::LogError)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogErrorFormat
// Il2CppName: LogErrorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Debug::LogErrorFormat)> {
  const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogErrorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogErrorFormat
// Il2CppName: LogErrorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object*, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Debug::LogErrorFormat)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogErrorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*)>(&UnityEngine::Debug::LogException)> {
  const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*, UnityEngine::Object*)>(&UnityEngine::Debug::LogException)> {
  const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::LogWarning)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, UnityEngine::Object*)>(&UnityEngine::Debug::LogWarning)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarningFormat
// Il2CppName: LogWarningFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Debug::LogWarningFormat)> {
  const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarningFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarningFormat
// Il2CppName: LogWarningFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object*, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Debug::LogWarningFormat)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarningFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogAssertion
// Il2CppName: LogAssertion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::LogAssertion)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogAssertion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::get_isDebugBuild
// Il2CppName: get_isDebugBuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Debug::get_isDebugBuild)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "get_isDebugBuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::CallOverridenDebugHandler
// Il2CppName: CallOverridenDebugHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Exception*, UnityEngine::Object*)>(&UnityEngine::Debug::CallOverridenDebugHandler)> {
  const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "CallOverridenDebugHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Debug::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::DrawLine_Injected
// Il2CppName: DrawLine_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Color&, float, bool)>(&UnityEngine::Debug::DrawLine_Injected)> {
  const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* depthTest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "DrawLine_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, color, duration, depthTest});
  }
};
