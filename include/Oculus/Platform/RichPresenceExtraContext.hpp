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
  // Autogenerated type: Oculus.Platform.RichPresenceExtraContext
  struct RichPresenceExtraContext/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RichPresenceExtraContext
    constexpr RichPresenceExtraContext(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xD205CC
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static Oculus::Platform::RichPresenceExtraContext _get_Unknown();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static void _set_Unknown(Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0xD20604
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext None
    static constexpr const int None = 1;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext None
    static Oculus::Platform::RichPresenceExtraContext _get_None();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext None
    static void _set_None(Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0xD2063C
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static constexpr const int CurrentCapacity = 2;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static Oculus::Platform::RichPresenceExtraContext _get_CurrentCapacity();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static void _set_CurrentCapacity(Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0xD20674
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static constexpr const int StartedAgo = 3;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static Oculus::Platform::RichPresenceExtraContext _get_StartedAgo();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static void _set_StartedAgo(Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0xD206AC
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static constexpr const int EndingIn = 4;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static Oculus::Platform::RichPresenceExtraContext _get_EndingIn();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static void _set_EndingIn(Oculus::Platform::RichPresenceExtraContext value);
    // [DescriptionAttribute] Offset: 0xD206E4
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static constexpr const int LookingForAMatch = 5;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static Oculus::Platform::RichPresenceExtraContext _get_LookingForAMatch();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static void _set_LookingForAMatch(Oculus::Platform::RichPresenceExtraContext value);
  }; // Oculus.Platform.RichPresenceExtraContext
  #pragma pack(pop)
  static check_size<sizeof(RichPresenceExtraContext), 0 + sizeof(int)> __Oculus_Platform_RichPresenceExtraContextSizeCheck;
  static_assert(sizeof(RichPresenceExtraContext) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RichPresenceExtraContext, "Oculus.Platform", "RichPresenceExtraContext");
