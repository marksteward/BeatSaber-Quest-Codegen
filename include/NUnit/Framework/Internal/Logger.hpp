// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Internal.InternalTraceLevel
#include "NUnit/Framework/Internal/InternalTraceLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Logger
  // [TokenAttribute] Offset: FFFFFFFF
  class Logger : public ::Il2CppObject {
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String fullname
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* fullname;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private NUnit.Framework.Internal.InternalTraceLevel maxLevel
    // Size: 0x4
    // Offset: 0x20
    NUnit::Framework::Internal::InternalTraceLevel maxLevel;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::InternalTraceLevel) == 0x4);
    // Padding between fields: maxLevel and: writer
    char __padding2[0x4] = {};
    // private System.IO.TextWriter writer
    // Size: 0x8
    // Offset: 0x28
    System::IO::TextWriter* writer;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // Creating value type constructor for type: Logger
    Logger(::Il2CppString* name_ = {}, ::Il2CppString* fullname_ = {}, NUnit::Framework::Internal::InternalTraceLevel maxLevel_ = {}, System::IO::TextWriter* writer_ = {}) noexcept : name{name_}, fullname{fullname_}, maxLevel{maxLevel_}, writer{writer_} {}
    // Get static field: static private readonly System.String TIME_FMT
    static ::Il2CppString* _get_TIME_FMT();
    // Set static field: static private readonly System.String TIME_FMT
    static void _set_TIME_FMT(::Il2CppString* value);
    // Get static field: static private readonly System.String TRACE_FMT
    static ::Il2CppString* _get_TRACE_FMT();
    // Set static field: static private readonly System.String TRACE_FMT
    static void _set_TRACE_FMT(::Il2CppString* value);
    // public System.Void .ctor(System.String name, NUnit.Framework.Internal.InternalTraceLevel level, System.IO.TextWriter writer)
    // Offset: 0x223A434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Logger* New_ctor(::Il2CppString* name, NUnit::Framework::Internal::InternalTraceLevel level, System::IO::TextWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Logger*, creationType>(name, level, writer)));
    }
    // static private System.Void .cctor()
    // Offset: 0x223AAB8
    static void _cctor();
    // public System.Void Error(System.String message)
    // Offset: 0x223A760
    void Error(::Il2CppString* message);
    // public System.Void Debug(System.String message)
    // Offset: 0x223A7A0
    void Debug(::Il2CppString* message);
    // public System.Void Debug(System.String message, params System.Object[] args)
    // Offset: 0x223A7C4
    void Debug(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Debug(System.String message, params System.Object[] args)
    void Debug(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Debug(System.String message, params System.Object[] args)
    template<class ...TParams>
    void Debug(::Il2CppString* message, TParams&&... args) {
      Debug(message, {args...});
    }
    // private System.Void Log(NUnit.Framework.Internal.InternalTraceLevel level, System.String message)
    // Offset: 0x223A784
    void Log(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* message);
    // private System.Void Log(NUnit.Framework.Internal.InternalTraceLevel level, System.String format, params System.Object[] args)
    // Offset: 0x223A7D4
    void Log(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Log(NUnit.Framework.Internal.InternalTraceLevel level, System.String format, params System.Object[] args)
    void Log(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Log(NUnit.Framework.Internal.InternalTraceLevel level, System.String format, params System.Object[] args)
    template<class ...TParams>
    void Log(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* format, TParams&&... args) {
      Log(level, format, {args...});
    }
    // private System.Void WriteLog(NUnit.Framework.Internal.InternalTraceLevel level, System.String message)
    // Offset: 0x223A820
    void WriteLog(NUnit::Framework::Internal::InternalTraceLevel level, ::Il2CppString* message);
  }; // NUnit.Framework.Internal.Logger
  #pragma pack(pop)
  static check_size<sizeof(Logger), 40 + sizeof(System::IO::TextWriter*)> __NUnit_Framework_Internal_LoggerSizeCheck;
  static_assert(sizeof(Logger) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Logger*, "NUnit.Framework.Internal", "Logger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::Logger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Logger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Logger::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Logger::Error)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Logger*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Logger::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Logger::Debug)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Logger*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Logger::*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::Logger::Debug)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Logger*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Logger::*)(NUnit::Framework::Internal::InternalTraceLevel, ::Il2CppString*)>(&NUnit::Framework::Internal::Logger::Log)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "InternalTraceLevel")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Logger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, message});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Logger::*)(NUnit::Framework::Internal::InternalTraceLevel, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::Logger::Log)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "InternalTraceLevel")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Logger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, format, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Logger::WriteLog
// Il2CppName: WriteLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Logger::*)(NUnit::Framework::Internal::InternalTraceLevel, ::Il2CppString*)>(&NUnit::Framework::Internal::Logger::WriteLog)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "InternalTraceLevel")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Logger*), "WriteLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, message});
  }
};
