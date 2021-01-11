// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Logging.LogEvent
  // [] Offset: FFFFFFFF
  class LogEvent : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE6A18
    // private System.String <Message>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6A28
    // private System.String <StackTrace>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* StackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE6A38
    // private UnityEngine.LogType <LogType>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::LogType LogType;
    // Field size check
    static_assert(sizeof(UnityEngine::LogType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDE6A48
    // private System.Boolean <IsHandled>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool IsHandled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LogEvent
    LogEvent(::Il2CppString* Message_ = {}, ::Il2CppString* StackTrace_ = {}, UnityEngine::LogType LogType_ = {}, bool IsHandled_ = {}) noexcept : Message{Message_}, StackTrace{StackTrace_}, LogType{LogType_}, IsHandled{IsHandled_} {}
    // public System.String get_Message()
    // Offset: 0x119075C
    ::Il2CppString* get_Message();
    // public System.Void set_Message(System.String value)
    // Offset: 0x1190764
    void set_Message(::Il2CppString* value);
    // public System.String get_StackTrace()
    // Offset: 0x119076C
    ::Il2CppString* get_StackTrace();
    // public System.Void set_StackTrace(System.String value)
    // Offset: 0x1190774
    void set_StackTrace(::Il2CppString* value);
    // public UnityEngine.LogType get_LogType()
    // Offset: 0x119077C
    UnityEngine::LogType get_LogType();
    // public System.Void set_LogType(UnityEngine.LogType value)
    // Offset: 0x1190784
    void set_LogType(UnityEngine::LogType value);
    // public System.Boolean get_IsHandled()
    // Offset: 0x119078C
    bool get_IsHandled();
    // public System.Void set_IsHandled(System.Boolean value)
    // Offset: 0x1190794
    void set_IsHandled(bool value);
    // public override System.String ToString()
    // Offset: 0x11907A0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x1190824
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Logging::LogEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogEvent*, creationType>()));
    }
  }; // UnityEngine.TestTools.Logging.LogEvent
  static check_size<sizeof(LogEvent), 36 + sizeof(bool)> __UnityEngine_TestTools_Logging_LogEventSizeCheck;
  static_assert(sizeof(LogEvent) == 0x25);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogEvent*, "UnityEngine.TestTools.Logging", "LogEvent");
