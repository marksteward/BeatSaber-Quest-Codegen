// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ProBuilder.LogLevel
#include "UnityEngine/ProBuilder/LogLevel.hpp"
// Including type: UnityEngine.ProBuilder.LogOutput
#include "UnityEngine/ProBuilder/LogOutput.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Log
  class Log : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Log
    Log() noexcept {}
    // static field const value: static public System.String k_ProBuilderLogFileName
    static constexpr const char* k_ProBuilderLogFileName = "ProBuilderLog.txt";
    // Get static field: static public System.String k_ProBuilderLogFileName
    static ::Il2CppString* _get_k_ProBuilderLogFileName();
    // Set static field: static public System.String k_ProBuilderLogFileName
    static void _set_k_ProBuilderLogFileName(::Il2CppString* value);
    // Get static field: static private System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.LogLevel> s_logStack
    static System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::LogLevel>* _get_s_logStack();
    // Set static field: static private System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.LogLevel> s_logStack
    static void _set_s_logStack(System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::LogLevel>* value);
    // Get static field: static private UnityEngine.ProBuilder.LogLevel s_LogLevel
    static UnityEngine::ProBuilder::LogLevel _get_s_LogLevel();
    // Set static field: static private UnityEngine.ProBuilder.LogLevel s_LogLevel
    static void _set_s_LogLevel(UnityEngine::ProBuilder::LogLevel value);
    // Get static field: static private UnityEngine.ProBuilder.LogOutput s_Output
    static UnityEngine::ProBuilder::LogOutput _get_s_Output();
    // Set static field: static private UnityEngine.ProBuilder.LogOutput s_Output
    static void _set_s_Output(UnityEngine::ProBuilder::LogOutput value);
    // Get static field: static private System.String s_LogFilePath
    static ::Il2CppString* _get_s_LogFilePath();
    // Set static field: static private System.String s_LogFilePath
    static void _set_s_LogFilePath(::Il2CppString* value);
    // static public System.Void PushLogLevel(UnityEngine.ProBuilder.LogLevel level)
    // Offset: 0x1921B38
    static void PushLogLevel(UnityEngine::ProBuilder::LogLevel level);
    // static public System.Void PopLogLevel()
    // Offset: 0x1921BCC
    static void PopLogLevel();
    // static public System.Void SetLogLevel(UnityEngine.ProBuilder.LogLevel level)
    // Offset: 0x1921C58
    static void SetLogLevel(UnityEngine::ProBuilder::LogLevel level);
    // static public System.Void SetOutput(UnityEngine.ProBuilder.LogOutput output)
    // Offset: 0x1921CC4
    static void SetOutput(UnityEngine::ProBuilder::LogOutput output);
    // static public System.Void SetLogFile(System.String path)
    // Offset: 0x1921D30
    static void SetLogFile(::Il2CppString* path);
    // static public System.Void Debug(T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Debug(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Log::Debug");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Log", "Debug", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, value);
    }
    // static public System.Void Debug(System.String message)
    // Offset: 0x1921D9C
    static void Debug(::Il2CppString* message);
    // static public System.Void Debug(System.String format, params System.Object[] values)
    // Offset: 0x1921EFC
    static void Debug(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Debug(System.String format, params System.Object[] values)
    static void Debug(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Debug(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Debug(::Il2CppString* format, TParams&&... values) {
      Debug(format, {values...});
    }
    // static public System.Void Info(System.String format, params System.Object[] values)
    // Offset: 0x1921F00
    static void Info(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Info(System.String format, params System.Object[] values)
    static void Info(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Info(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Info(::Il2CppString* format, TParams&&... values) {
      Info(format, {values...});
    }
    // static public System.Void Info(System.String message)
    // Offset: 0x1921F88
    static void Info(::Il2CppString* message);
    // static public System.Void Warning(System.String format, params System.Object[] values)
    // Offset: 0x1922020
    static void Warning(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Warning(System.String format, params System.Object[] values)
    static void Warning(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Warning(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Warning(::Il2CppString* format, TParams&&... values) {
      Warning(format, {values...});
    }
    // static public System.Void Warning(System.String message)
    // Offset: 0x19220A8
    static void Warning(::Il2CppString* message);
    // static public System.Void Error(System.String format, params System.Object[] values)
    // Offset: 0x1922140
    static void Error(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Error(System.String format, params System.Object[] values)
    static void Error(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Error(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Error(::Il2CppString* format, TParams&&... values) {
      Error(format, {values...});
    }
    // static public System.Void Error(System.String message)
    // Offset: 0x19221C8
    static void Error(::Il2CppString* message);
    // static System.Void Watch(T key, K value)
    // Offset: 0xFFFFFFFF
    template<class T, class K>
    static void Watch(T key, K value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Log::Watch");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Log", "Watch", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, key, value);
    }
    // static private System.Void DoPrint(System.String message, UnityEngine.LogType type)
    // Offset: 0x1921E04
    static void DoPrint(::Il2CppString* message, UnityEngine::LogType type);
    // static private System.Void PrintToFile(System.String message, System.String path)
    // Offset: 0x1922374
    static void PrintToFile(::Il2CppString* message, ::Il2CppString* path);
    // static public System.Void ClearLogFile()
    // Offset: 0x192269C
    static void ClearLogFile();
    // static private System.Void PrintToConsole(System.String message, UnityEngine.LogType type)
    // Offset: 0x1922260
    static void PrintToConsole(::Il2CppString* message, UnityEngine::LogType type);
    // static System.Void NotNull(T obj, System.String message)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void NotNull(T obj, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Log::NotNull");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Log", "NotNull", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj), ::il2cpp_utils::ExtractType(message)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, obj, message);
    }
    // static private System.Void .cctor()
    // Offset: 0x1922744
    static void _cctor();
  }; // UnityEngine.ProBuilder.Log
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Log*, "UnityEngine.ProBuilder", "Log");
