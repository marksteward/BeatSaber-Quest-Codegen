// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LivestreamingStartStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct LivestreamingStartStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LivestreamingStartStatus
    constexpr LivestreamingStartStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xDE8FC4
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus Success
    static constexpr const int Success = 1;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus Success
    static Oculus::Platform::LivestreamingStartStatus _get_Success();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus Success
    static void _set_Success(Oculus::Platform::LivestreamingStartStatus value);
    // [DescriptionAttribute] Offset: 0xDE8FFC
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus Unknown
    static Oculus::Platform::LivestreamingStartStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus Unknown
    static void _set_Unknown(Oculus::Platform::LivestreamingStartStatus value);
    // [DescriptionAttribute] Offset: 0xDE9034
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus NoPackageSet
    static constexpr const int NoPackageSet = -1;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus NoPackageSet
    static Oculus::Platform::LivestreamingStartStatus _get_NoPackageSet();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus NoPackageSet
    static void _set_NoPackageSet(Oculus::Platform::LivestreamingStartStatus value);
    // [DescriptionAttribute] Offset: 0xDE906C
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus NoFbConnect
    static constexpr const int NoFbConnect = -2;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus NoFbConnect
    static Oculus::Platform::LivestreamingStartStatus _get_NoFbConnect();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus NoFbConnect
    static void _set_NoFbConnect(Oculus::Platform::LivestreamingStartStatus value);
    // [DescriptionAttribute] Offset: 0xDE90A4
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus NoSessionId
    static constexpr const int NoSessionId = -3;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus NoSessionId
    static Oculus::Platform::LivestreamingStartStatus _get_NoSessionId();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus NoSessionId
    static void _set_NoSessionId(Oculus::Platform::LivestreamingStartStatus value);
    // [DescriptionAttribute] Offset: 0xDE90DC
    // static field const value: static public Oculus.Platform.LivestreamingStartStatus MissingParameters
    static constexpr const int MissingParameters = -4;
    // Get static field: static public Oculus.Platform.LivestreamingStartStatus MissingParameters
    static Oculus::Platform::LivestreamingStartStatus _get_MissingParameters();
    // Set static field: static public Oculus.Platform.LivestreamingStartStatus MissingParameters
    static void _set_MissingParameters(Oculus::Platform::LivestreamingStartStatus value);
  }; // Oculus.Platform.LivestreamingStartStatus
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingStartStatus), 0 + sizeof(int)> __Oculus_Platform_LivestreamingStartStatusSizeCheck;
  static_assert(sizeof(LivestreamingStartStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LivestreamingStartStatus, "Oculus.Platform", "LivestreamingStartStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
