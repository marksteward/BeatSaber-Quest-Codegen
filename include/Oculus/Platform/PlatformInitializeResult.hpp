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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.PlatformInitializeResult
  struct PlatformInitializeResult : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: PlatformInitializeResult
    constexpr PlatformInitializeResult(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Oculus.Platform.PlatformInitializeResult Success
    static constexpr const int Success = 0;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult Success
    static Oculus::Platform::PlatformInitializeResult _get_Success();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult Success
    static void _set_Success(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult Uninitialized
    static constexpr const int Uninitialized = -1;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult Uninitialized
    static Oculus::Platform::PlatformInitializeResult _get_Uninitialized();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult Uninitialized
    static void _set_Uninitialized(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult PreLoaded
    static constexpr const int PreLoaded = -2;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult PreLoaded
    static Oculus::Platform::PlatformInitializeResult _get_PreLoaded();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult PreLoaded
    static void _set_PreLoaded(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult FileInvalid
    static constexpr const int FileInvalid = -3;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult FileInvalid
    static Oculus::Platform::PlatformInitializeResult _get_FileInvalid();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult FileInvalid
    static void _set_FileInvalid(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult SignatureInvalid
    static constexpr const int SignatureInvalid = -4;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult SignatureInvalid
    static Oculus::Platform::PlatformInitializeResult _get_SignatureInvalid();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult SignatureInvalid
    static void _set_SignatureInvalid(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult UnableToVerify
    static constexpr const int UnableToVerify = -5;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult UnableToVerify
    static Oculus::Platform::PlatformInitializeResult _get_UnableToVerify();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult UnableToVerify
    static void _set_UnableToVerify(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult VersionMismatch
    static constexpr const int VersionMismatch = -6;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult VersionMismatch
    static Oculus::Platform::PlatformInitializeResult _get_VersionMismatch();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult VersionMismatch
    static void _set_VersionMismatch(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult Unknown
    static constexpr const int Unknown = -7;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult Unknown
    static Oculus::Platform::PlatformInitializeResult _get_Unknown();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult Unknown
    static void _set_Unknown(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult InvalidCredentials
    static constexpr const int InvalidCredentials = -8;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult InvalidCredentials
    static Oculus::Platform::PlatformInitializeResult _get_InvalidCredentials();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult InvalidCredentials
    static void _set_InvalidCredentials(Oculus::Platform::PlatformInitializeResult value);
    // static field const value: static public Oculus.Platform.PlatformInitializeResult NotEntitled
    static constexpr const int NotEntitled = -9;
    // Get static field: static public Oculus.Platform.PlatformInitializeResult NotEntitled
    static Oculus::Platform::PlatformInitializeResult _get_NotEntitled();
    // Set static field: static public Oculus.Platform.PlatformInitializeResult NotEntitled
    static void _set_NotEntitled(Oculus::Platform::PlatformInitializeResult value);
  }; // Oculus.Platform.PlatformInitializeResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInitializeResult, "Oculus.Platform", "PlatformInitializeResult");
#pragma pack(pop)
