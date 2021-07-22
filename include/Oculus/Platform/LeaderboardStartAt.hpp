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
  // Autogenerated type: Oculus.Platform.LeaderboardStartAt
  // [TokenAttribute] Offset: FFFFFFFF
  struct LeaderboardStartAt/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LeaderboardStartAt
    constexpr LeaderboardStartAt(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xDE8D5C
    // static field const value: static public Oculus.Platform.LeaderboardStartAt Top
    static constexpr const int Top = 0;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt Top
    static Oculus::Platform::LeaderboardStartAt _get_Top();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt Top
    static void _set_Top(Oculus::Platform::LeaderboardStartAt value);
    // [DescriptionAttribute] Offset: 0xDE8D94
    // static field const value: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static constexpr const int CenteredOnViewer = 1;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static Oculus::Platform::LeaderboardStartAt _get_CenteredOnViewer();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static void _set_CenteredOnViewer(Oculus::Platform::LeaderboardStartAt value);
    // [DescriptionAttribute] Offset: 0xDE8DCC
    // static field const value: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static constexpr const int CenteredOnViewerOrTop = 2;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static Oculus::Platform::LeaderboardStartAt _get_CenteredOnViewerOrTop();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static void _set_CenteredOnViewerOrTop(Oculus::Platform::LeaderboardStartAt value);
    // [DescriptionAttribute] Offset: 0xDE8E04
    // static field const value: static public Oculus.Platform.LeaderboardStartAt Unknown
    static constexpr const int Unknown = 3;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt Unknown
    static Oculus::Platform::LeaderboardStartAt _get_Unknown();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt Unknown
    static void _set_Unknown(Oculus::Platform::LeaderboardStartAt value);
  }; // Oculus.Platform.LeaderboardStartAt
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardStartAt), 0 + sizeof(int)> __Oculus_Platform_LeaderboardStartAtSizeCheck;
  static_assert(sizeof(LeaderboardStartAt) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LeaderboardStartAt, "Oculus.Platform", "LeaderboardStartAt");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
