// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: BGNetDebug/ILogger
#include "GlobalNamespace/BGNetDebug_ILogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Extensions::Logging
namespace Microsoft::Extensions::Logging {
  // Forward declaring type: ILogger
  class ILogger;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BGNetLogger
  class BGNetLogger : public ::Il2CppObject/*, public GlobalNamespace::BGNetDebug::ILogger*/ {
    public:
    // private readonly Microsoft.Extensions.Logging.ILogger[] _loggers
    // Size: 0x8
    // Offset: 0x10
    ::Array<Microsoft::Extensions::Logging::ILogger*>* loggers;
    // Field size check
    static_assert(sizeof(::Array<Microsoft::Extensions::Logging::ILogger*>*) == 0x8);
    // Creating value type constructor for type: BGNetLogger
    BGNetLogger(::Array<Microsoft::Extensions::Logging::ILogger*>* loggers_ = {}) noexcept : loggers{loggers_} {}
    // Creating interface conversion operator: operator GlobalNamespace::BGNetDebug::ILogger
    operator GlobalNamespace::BGNetDebug::ILogger() noexcept {
      return *reinterpret_cast<GlobalNamespace::BGNetDebug::ILogger*>(this);
    }
    // Creating conversion operator: operator ::Array<Microsoft::Extensions::Logging::ILogger*>*
    constexpr operator ::Array<Microsoft::Extensions::Logging::ILogger*>*() const noexcept {
      return loggers;
    }
    // public System.Void .ctor(params Microsoft.Extensions.Logging.ILogger[] loggers)
    // Offset: 0x13210B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BGNetLogger* New_ctor(::Array<Microsoft::Extensions::Logging::ILogger*>* loggers) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BGNetLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BGNetLogger*, creationType>(loggers)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params Microsoft.Extensions.Logging.ILogger[] loggers)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BGNetLogger* New_ctor(std::initializer_list<Microsoft::Extensions::Logging::ILogger*> loggers) {
      return New_ctor<creationType>(::Array<Microsoft::Extensions::Logging::ILogger*>::New(loggers));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params Microsoft.Extensions.Logging.ILogger[] loggers)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static BGNetLogger* New_ctor(TParams&&... loggers) {
      return New_ctor<creationType>({loggers...});
    }
    // public System.Void LogError(System.String message)
    // Offset: 0x13210E0
    void LogError(::Il2CppString* message);
    // public System.Void LogInfo(System.String message)
    // Offset: 0x13211E4
    void LogInfo(::Il2CppString* message);
    // public System.Void LogWarning(System.String message)
    // Offset: 0x13212EC
    void LogWarning(::Il2CppString* message);
  }; // BGNetLogger
  #pragma pack(pop)
  static check_size<sizeof(BGNetLogger), 16 + sizeof(::Array<Microsoft::Extensions::Logging::ILogger*>*)> __GlobalNamespace_BGNetLoggerSizeCheck;
  static_assert(sizeof(BGNetLogger) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BGNetLogger*, "", "BGNetLogger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetLogger::*)(::Il2CppString*)>(&GlobalNamespace::BGNetLogger::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetLogger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::LogInfo
// Il2CppName: LogInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetLogger::*)(::Il2CppString*)>(&GlobalNamespace::BGNetLogger::LogInfo)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetLogger*), "LogInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetLogger::*)(::Il2CppString*)>(&GlobalNamespace::BGNetLogger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetLogger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
