// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SimpleFileLogger
  class SimpleFileLogger : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SimpleFileLogger::MonoLogger
    class MonoLogger;
    // Creating value type constructor for type: SimpleFileLogger
    SimpleFileLogger() noexcept {}
    // static field const value: static private System.String kFilename
    static constexpr const char* kFilename = "SimpleLog.txt";
    // Get static field: static private System.String kFilename
    static ::Il2CppString* _get_kFilename();
    // Set static field: static private System.String kFilename
    static void _set_kFilename(::Il2CppString* value);
    // Get static field: static private SimpleFileLogger/MonoLogger _monoLogger
    static GlobalNamespace::SimpleFileLogger::MonoLogger* _get__monoLogger();
    // Set static field: static private SimpleFileLogger/MonoLogger _monoLogger
    static void _set__monoLogger(GlobalNamespace::SimpleFileLogger::MonoLogger* value);
    // static private SimpleFileLogger/MonoLogger get_monoLogger()
    // Offset: 0x214CAFC
    static GlobalNamespace::SimpleFileLogger::MonoLogger* get_monoLogger();
    // static public System.Void Log(System.String text)
    // Offset: 0x214CBDC
    static void Log(::Il2CppString* text);
    // static public System.Void LogVector(System.String description, UnityEngine.Vector3 vec)
    // Offset: 0x214CC70
    static void LogVector(::Il2CppString* description, UnityEngine::Vector3 vec);
    // static public System.Void Clear()
    // Offset: 0x214CEE0
    static void Clear();
    // public System.Void .ctor()
    // Offset: 0x214CF68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleFileLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleFileLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleFileLogger*, creationType>()));
    }
  }; // SimpleFileLogger
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleFileLogger*, "", "SimpleFileLogger");
