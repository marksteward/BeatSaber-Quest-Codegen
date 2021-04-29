// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Logging.LogScope
#include "UnityEngine/TestTools/Logging/LogScope.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Logging.LogScope/<>c
  // [CompilerGeneratedAttribute] Offset: D5B2EC
  class LogScope::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static UnityEngine::TestTools::Logging::LogScope::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::Logging::LogScope::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* _get_$$9__53_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static void _set_$$9__53_0(System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1373688
    static void _cctor();
    // System.Boolean <NoUnexpectedReceived>b__53_0(UnityEngine.TestTools.Logging.LogEvent x)
    // Offset: 0x13736F4
    bool $NoUnexpectedReceived$b__53_0(UnityEngine::TestTools::Logging::LogEvent* x);
    // public System.Void .ctor()
    // Offset: 0x13736EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogScope::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Logging::LogScope::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogScope::$$c*, creationType>()));
    }
  }; // UnityEngine.TestTools.Logging.LogScope/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogScope::$$c*, "UnityEngine.TestTools.Logging", "LogScope/<>c");
