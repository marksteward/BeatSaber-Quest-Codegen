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
  // Autogenerated type: Zenject.InjectSources
  // [] Offset: FFFFFFFF
  struct InjectSources/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InjectSources
    constexpr InjectSources(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.InjectSources Any
    static constexpr const int Any = 0;
    // Get static field: static public Zenject.InjectSources Any
    static Zenject::InjectSources _get_Any();
    // Set static field: static public Zenject.InjectSources Any
    static void _set_Any(Zenject::InjectSources value);
    // static field const value: static public Zenject.InjectSources Local
    static constexpr const int Local = 1;
    // Get static field: static public Zenject.InjectSources Local
    static Zenject::InjectSources _get_Local();
    // Set static field: static public Zenject.InjectSources Local
    static void _set_Local(Zenject::InjectSources value);
    // static field const value: static public Zenject.InjectSources Parent
    static constexpr const int Parent = 2;
    // Get static field: static public Zenject.InjectSources Parent
    static Zenject::InjectSources _get_Parent();
    // Set static field: static public Zenject.InjectSources Parent
    static void _set_Parent(Zenject::InjectSources value);
    // static field const value: static public Zenject.InjectSources AnyParent
    static constexpr const int AnyParent = 3;
    // Get static field: static public Zenject.InjectSources AnyParent
    static Zenject::InjectSources _get_AnyParent();
    // Set static field: static public Zenject.InjectSources AnyParent
    static void _set_AnyParent(Zenject::InjectSources value);
  }; // Zenject.InjectSources
  static check_size<sizeof(InjectSources), 0 + sizeof(int)> __Zenject_InjectSourcesSizeCheck;
  static_assert(sizeof(InjectSources) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectSources, "Zenject", "InjectSources");
