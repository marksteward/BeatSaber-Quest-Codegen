// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.LogType
  struct LogType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: LogType
    constexpr LogType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.LogType Error
    static constexpr const int Error = 0;
    // Get static field: static public UnityEngine.LogType Error
    static UnityEngine::LogType _get_Error();
    // Set static field: static public UnityEngine.LogType Error
    static void _set_Error(UnityEngine::LogType value);
    // static field const value: static public UnityEngine.LogType Assert
    static constexpr const int Assert = 1;
    // Get static field: static public UnityEngine.LogType Assert
    static UnityEngine::LogType _get_Assert();
    // Set static field: static public UnityEngine.LogType Assert
    static void _set_Assert(UnityEngine::LogType value);
    // static field const value: static public UnityEngine.LogType Warning
    static constexpr const int Warning = 2;
    // Get static field: static public UnityEngine.LogType Warning
    static UnityEngine::LogType _get_Warning();
    // Set static field: static public UnityEngine.LogType Warning
    static void _set_Warning(UnityEngine::LogType value);
    // static field const value: static public UnityEngine.LogType Log
    static constexpr const int Log = 3;
    // Get static field: static public UnityEngine.LogType Log
    static UnityEngine::LogType _get_Log();
    // Set static field: static public UnityEngine.LogType Log
    static void _set_Log(UnityEngine::LogType value);
    // static field const value: static public UnityEngine.LogType Exception
    static constexpr const int Exception = 4;
    // Get static field: static public UnityEngine.LogType Exception
    static UnityEngine::LogType _get_Exception();
    // Set static field: static public UnityEngine.LogType Exception
    static void _set_Exception(UnityEngine::LogType value);
  }; // UnityEngine.LogType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LogType, "UnityEngine", "LogType");
#pragma pack(pop)
