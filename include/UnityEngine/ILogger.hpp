// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ILogHandler
#include "UnityEngine/ILogHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ILogger
  class ILogger/*, public UnityEngine::ILogHandler*/ {
    public:
    // Creating value type constructor for type: ILogger
    ILogger() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ILogHandler
    operator UnityEngine::ILogHandler() noexcept {
      return *reinterpret_cast<UnityEngine::ILogHandler*>(this);
    }
    // public UnityEngine.ILogHandler get_logHandler()
    // Offset: 0xFFFFFFFF
    UnityEngine::ILogHandler* get_logHandler();
    // public System.Void Log(UnityEngine.LogType logType, System.Object message)
    // Offset: 0xFFFFFFFF
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    // Offset: 0xFFFFFFFF
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message, UnityEngine::Object* context);
    // public System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, format, {args...});
    }
  }; // UnityEngine.ILogger
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ILogger*, "UnityEngine", "ILogger");
// Writing MetadataGetter for method: UnityEngine::ILogger::get_logHandler
// Il2CppName: get_logHandler
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ILogger::Log
// Il2CppName: Log
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ILogger::Log
// Il2CppName: Log
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ILogger::LogFormat
// Il2CppName: LogFormat
// Cannot perform method pointer template specialization from operators!
