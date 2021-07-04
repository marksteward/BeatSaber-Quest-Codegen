// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Debugger
  // [MonoTODOAttribute] Offset: D80D24
  // [ComVisibleAttribute] Offset: D80D24
  class Debugger : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Debugger
    Debugger() noexcept {}
    // Get static field: static public readonly System.String DefaultCategory
    static ::Il2CppString* _get_DefaultCategory();
    // Set static field: static public readonly System.String DefaultCategory
    static void _set_DefaultCategory(::Il2CppString* value);
    // static public System.Boolean get_IsAttached()
    // Offset: 0x1B0C580
    static bool get_IsAttached();
    // static private System.Boolean IsAttached_internal()
    // Offset: 0x1B0C5DC
    static bool IsAttached_internal();
    // static public System.Boolean IsLogging()
    // Offset: 0x1B0C5E0
    static bool IsLogging();
    // static public System.Void Log(System.Int32 level, System.String category, System.String message)
    // Offset: 0x1B0C5E4
    static void Log(int level, ::Il2CppString* category, ::Il2CppString* message);
    // static public System.Void NotifyOfCrossThreadDependency()
    // Offset: 0x1B0C5E8
    static void NotifyOfCrossThreadDependency();
    // static private System.Void .cctor()
    // Offset: 0x1B0C5EC
    static void _cctor();
  }; // System.Diagnostics.Debugger
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Debugger*, "System.Diagnostics", "Debugger");
// Writing MetadataGetter for method: System::Diagnostics::Debugger::get_IsAttached
// Il2CppName: get_IsAttached
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::Debugger::IsAttached_internal
// Il2CppName: IsAttached_internal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::Debugger::IsLogging
// Il2CppName: IsLogging
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::Debugger::Log
// Il2CppName: Log
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::Debugger::NotifyOfCrossThreadDependency
// Il2CppName: NotifyOfCrossThreadDependency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::Debugger::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
