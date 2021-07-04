// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
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
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ILogHandler
  class ILogHandler {
    public:
    // Creating value type constructor for type: ILogHandler
    ILogHandler() noexcept {}
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, context, format, {args...});
    }
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0xFFFFFFFF
    void LogException(System::Exception* exception, UnityEngine::Object* context);
  }; // UnityEngine.ILogHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ILogHandler*, "UnityEngine", "ILogHandler");
// Writing MetadataGetter for method: UnityEngine::ILogHandler::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogHandler::*)(UnityEngine::LogType, UnityEngine::Object*, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::ILogHandler::LogFormat)> {
  const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogHandler*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogHandler::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogHandler::*)(System::Exception*, UnityEngine::Object*)>(&UnityEngine::ILogHandler::LogException)> {
  const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogHandler*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
