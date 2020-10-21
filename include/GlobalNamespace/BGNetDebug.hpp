// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BGNetDebug
  class BGNetDebug : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BGNetDebug::ILogger
    class ILogger;
    // Nested type: GlobalNamespace::BGNetDebug::NetLogger
    class NetLogger;
    // Get static field: static private BGNetDebug/ILogger _logger
    static GlobalNamespace::BGNetDebug::ILogger* _get__logger();
    // Set static field: static private BGNetDebug/ILogger _logger
    static void _set__logger(GlobalNamespace::BGNetDebug::ILogger* value);
    // static private System.Void .cctor()
    // Offset: 0x215503C
    static void _cctor();
    // static public System.Void SetLogger(BGNetDebug/ILogger logger)
    // Offset: 0x21550CC
    static void SetLogger(GlobalNamespace::BGNetDebug::ILogger* logger);
    // static public System.Void Log(System.String message)
    // Offset: 0x215513C
    static void Log(::Il2CppString* message);
    // static public System.Void LogError(System.String message)
    // Offset: 0x2155254
    static void LogError(::Il2CppString* message);
    // static public System.Void LogWarning(System.String message)
    // Offset: 0x2155398
    static void LogWarning(::Il2CppString* message);
  }; // BGNetDebug
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BGNetDebug*, "", "BGNetDebug");
#pragma pack(pop)