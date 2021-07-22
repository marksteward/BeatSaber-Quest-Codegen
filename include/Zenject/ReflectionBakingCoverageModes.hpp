// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ReflectionBakingCoverageModes
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReflectionBakingCoverageModes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ReflectionBakingCoverageModes
    constexpr ReflectionBakingCoverageModes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.ReflectionBakingCoverageModes FallbackToDirectReflection
    static constexpr const int FallbackToDirectReflection = 0;
    // Get static field: static public Zenject.ReflectionBakingCoverageModes FallbackToDirectReflection
    static Zenject::ReflectionBakingCoverageModes _get_FallbackToDirectReflection();
    // Set static field: static public Zenject.ReflectionBakingCoverageModes FallbackToDirectReflection
    static void _set_FallbackToDirectReflection(Zenject::ReflectionBakingCoverageModes value);
    // static field const value: static public Zenject.ReflectionBakingCoverageModes NoCheckAssumeFullCoverage
    static constexpr const int NoCheckAssumeFullCoverage = 1;
    // Get static field: static public Zenject.ReflectionBakingCoverageModes NoCheckAssumeFullCoverage
    static Zenject::ReflectionBakingCoverageModes _get_NoCheckAssumeFullCoverage();
    // Set static field: static public Zenject.ReflectionBakingCoverageModes NoCheckAssumeFullCoverage
    static void _set_NoCheckAssumeFullCoverage(Zenject::ReflectionBakingCoverageModes value);
    // static field const value: static public Zenject.ReflectionBakingCoverageModes FallbackToDirectReflectionWithWarning
    static constexpr const int FallbackToDirectReflectionWithWarning = 2;
    // Get static field: static public Zenject.ReflectionBakingCoverageModes FallbackToDirectReflectionWithWarning
    static Zenject::ReflectionBakingCoverageModes _get_FallbackToDirectReflectionWithWarning();
    // Set static field: static public Zenject.ReflectionBakingCoverageModes FallbackToDirectReflectionWithWarning
    static void _set_FallbackToDirectReflectionWithWarning(Zenject::ReflectionBakingCoverageModes value);
  }; // Zenject.ReflectionBakingCoverageModes
  #pragma pack(pop)
  static check_size<sizeof(ReflectionBakingCoverageModes), 0 + sizeof(int)> __Zenject_ReflectionBakingCoverageModesSizeCheck;
  static_assert(sizeof(ReflectionBakingCoverageModes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ReflectionBakingCoverageModes, "Zenject", "ReflectionBakingCoverageModes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
