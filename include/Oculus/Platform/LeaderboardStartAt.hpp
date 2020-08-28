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
  // Autogenerated type: Oculus.Platform.LeaderboardStartAt
  struct LeaderboardStartAt : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: LeaderboardStartAt
    constexpr LeaderboardStartAt(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Oculus.Platform.LeaderboardStartAt Top
    static constexpr const int Top = 0;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt Top
    static Oculus::Platform::LeaderboardStartAt _get_Top();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt Top
    static void _set_Top(Oculus::Platform::LeaderboardStartAt value);
    // static field const value: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static constexpr const int CenteredOnViewer = 1;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static Oculus::Platform::LeaderboardStartAt _get_CenteredOnViewer();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static void _set_CenteredOnViewer(Oculus::Platform::LeaderboardStartAt value);
    // static field const value: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static constexpr const int CenteredOnViewerOrTop = 2;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static Oculus::Platform::LeaderboardStartAt _get_CenteredOnViewerOrTop();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static void _set_CenteredOnViewerOrTop(Oculus::Platform::LeaderboardStartAt value);
    // static field const value: static public Oculus.Platform.LeaderboardStartAt Unknown
    static constexpr const int Unknown = 3;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt Unknown
    static Oculus::Platform::LeaderboardStartAt _get_Unknown();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt Unknown
    static void _set_Unknown(Oculus::Platform::LeaderboardStartAt value);
  }; // Oculus.Platform.LeaderboardStartAt
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LeaderboardStartAt, "Oculus.Platform", "LeaderboardStartAt");
#pragma pack(pop)
