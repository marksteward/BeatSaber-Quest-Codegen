// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ILogger
#include "UnityEngine/ILogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ILogHandler because it is already included!
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Logger
  // [TokenAttribute] Offset: FFFFFFFF
  class Logger : public ::Il2CppObject/*, public UnityEngine::ILogger*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE2DA00
    // private UnityEngine.ILogHandler <logHandler>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ILogHandler* logHandler;
    // Field size check
    static_assert(sizeof(UnityEngine::ILogHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE2DA3C
    // private System.Boolean <logEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool logEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: logEnabled and: filterLogType
    char __padding1[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xE2DA78
    // private UnityEngine.LogType <filterLogType>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::LogType filterLogType;
    // Field size check
    static_assert(sizeof(UnityEngine::LogType) == 0x4);
    // Creating value type constructor for type: Logger
    Logger(UnityEngine::ILogHandler* logHandler_ = {}, bool logEnabled_ = {}, UnityEngine::LogType filterLogType_ = {}) noexcept : logHandler{logHandler_}, logEnabled{logEnabled_}, filterLogType{filterLogType_} {}
    // Creating interface conversion operator: operator UnityEngine::ILogger
    operator UnityEngine::ILogger() noexcept {
      return *reinterpret_cast<UnityEngine::ILogger*>(this);
    }
    // Get instance field: private UnityEngine.ILogHandler <logHandler>k__BackingField
    UnityEngine::ILogHandler* _get_$logHandler$k__BackingField();
    // Set instance field: private UnityEngine.ILogHandler <logHandler>k__BackingField
    void _set_$logHandler$k__BackingField(UnityEngine::ILogHandler* value);
    // Get instance field: private System.Boolean <logEnabled>k__BackingField
    bool _get_$logEnabled$k__BackingField();
    // Set instance field: private System.Boolean <logEnabled>k__BackingField
    void _set_$logEnabled$k__BackingField(bool value);
    // Get instance field: private UnityEngine.LogType <filterLogType>k__BackingField
    UnityEngine::LogType _get_$filterLogType$k__BackingField();
    // Set instance field: private UnityEngine.LogType <filterLogType>k__BackingField
    void _set_$filterLogType$k__BackingField(UnityEngine::LogType value);
    // public UnityEngine.ILogHandler get_logHandler()
    // Offset: 0x22C3AFC
    UnityEngine::ILogHandler* get_logHandler();
    // public System.Void set_logHandler(UnityEngine.ILogHandler value)
    // Offset: 0x22C3B04
    void set_logHandler(UnityEngine::ILogHandler* value);
    // public System.Boolean get_logEnabled()
    // Offset: 0x22C3B0C
    bool get_logEnabled();
    // public System.Void set_logEnabled(System.Boolean value)
    // Offset: 0x22C3B14
    void set_logEnabled(bool value);
    // public UnityEngine.LogType get_filterLogType()
    // Offset: 0x22C3B20
    UnityEngine::LogType get_filterLogType();
    // public System.Void set_filterLogType(UnityEngine.LogType value)
    // Offset: 0x22C3B28
    void set_filterLogType(UnityEngine::LogType value);
    // public System.Void .ctor(UnityEngine.ILogHandler logHandler)
    // Offset: 0x22C3AC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Logger* New_ctor(UnityEngine::ILogHandler* logHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Logger*, creationType>(logHandler)));
    }
    // public System.Boolean IsLogTypeAllowed(UnityEngine.LogType logType)
    // Offset: 0x22C3B30
    bool IsLogTypeAllowed(UnityEngine::LogType logType);
    // static private System.String GetString(System.Object message)
    // Offset: 0x22C3B6C
    static ::Il2CppString* GetString(::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message)
    // Offset: 0x22C3C9C
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    // Offset: 0x22C3E10
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message, UnityEngine::Object* context);
    // public System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    // Offset: 0x22C3F94
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, format, {args...});
    }
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x22C40A8
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, context, format, {args...});
    }
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x22C41C0
    void LogException(System::Exception* exception, UnityEngine::Object* context);
  }; // UnityEngine.Logger
  #pragma pack(pop)
  static check_size<sizeof(Logger), 28 + sizeof(UnityEngine::LogType)> __UnityEngine_LoggerSizeCheck;
  static_assert(sizeof(Logger) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Logger*, "UnityEngine", "Logger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Logger::get_logHandler
// Il2CppName: get_logHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ILogHandler* (UnityEngine::Logger::*)()>(&UnityEngine::Logger::get_logHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "get_logHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::set_logHandler
// Il2CppName: set_logHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::ILogHandler*)>(&UnityEngine::Logger::set_logHandler)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ILogHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "set_logHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::get_logEnabled
// Il2CppName: get_logEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Logger::*)()>(&UnityEngine::Logger::get_logEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "get_logEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::set_logEnabled
// Il2CppName: set_logEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(bool)>(&UnityEngine::Logger::set_logEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "set_logEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::get_filterLogType
// Il2CppName: get_filterLogType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LogType (UnityEngine::Logger::*)()>(&UnityEngine::Logger::get_filterLogType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "get_filterLogType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::set_filterLogType
// Il2CppName: set_filterLogType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType)>(&UnityEngine::Logger::set_filterLogType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "set_filterLogType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Logger::IsLogTypeAllowed
// Il2CppName: IsLogTypeAllowed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Logger::*)(UnityEngine::LogType)>(&UnityEngine::Logger::IsLogTypeAllowed)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "IsLogTypeAllowed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*)>(&UnityEngine::Logger::GetString)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, ::Il2CppObject*)>(&UnityEngine::Logger::Log)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, ::Il2CppObject*, UnityEngine::Object*)>(&UnityEngine::Logger::Log)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Logger::LogFormat)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(UnityEngine::LogType, UnityEngine::Object*, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::Logger::LogFormat)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Logger::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Logger::*)(System::Exception*, UnityEngine::Object*)>(&UnityEngine::Logger::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Logger*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
