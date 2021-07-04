// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Runtime
  class Runtime : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Runtime
    Runtime() noexcept {}
    // static private System.Void mono_runtime_install_handlers()
    // Offset: 0x1A64AD8
    static void mono_runtime_install_handlers();
    // static public System.Void InstallSignalHandlers()
    // Offset: 0x1A64ADC
    static void InstallSignalHandlers();
    // static private System.Void mono_runtime_cleanup_handlers()
    // Offset: 0x1A64AE0
    static void mono_runtime_cleanup_handlers();
    // static public System.Void RemoveSignalHandlers()
    // Offset: 0x1A64B14
    static void RemoveSignalHandlers();
    // static public System.String GetDisplayName()
    // Offset: 0x1A64B48
    static ::Il2CppString* GetDisplayName();
    // static private System.String GetNativeStackTrace(System.Exception exception)
    // Offset: 0x1A64B4C
    static ::Il2CppString* GetNativeStackTrace(System::Exception* exception);
    // static public System.Boolean SetGCAllowSynchronousMajor(System.Boolean flag)
    // Offset: 0x1A64B50
    static bool SetGCAllowSynchronousMajor(bool flag);
  }; // Mono.Runtime
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Runtime*, "Mono", "Runtime");
// Writing MetadataGetter for method: Mono::Runtime::mono_runtime_install_handlers
// Il2CppName: mono_runtime_install_handlers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Runtime::InstallSignalHandlers
// Il2CppName: InstallSignalHandlers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Runtime::mono_runtime_cleanup_handlers
// Il2CppName: mono_runtime_cleanup_handlers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Runtime::RemoveSignalHandlers
// Il2CppName: RemoveSignalHandlers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Runtime::GetDisplayName
// Il2CppName: GetDisplayName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Runtime::GetNativeStackTrace
// Il2CppName: GetNativeStackTrace
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Runtime::SetGCAllowSynchronousMajor
// Il2CppName: SetGCAllowSynchronousMajor
// Cannot perform method pointer template specialization from operators!
