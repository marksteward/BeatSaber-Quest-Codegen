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
  // Autogenerated type: Zenject.LoadSceneRelationship
  // [] Offset: FFFFFFFF
  struct LoadSceneRelationship/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LoadSceneRelationship
    constexpr LoadSceneRelationship(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.LoadSceneRelationship None
    static constexpr const int None = 0;
    // Get static field: static public Zenject.LoadSceneRelationship None
    static Zenject::LoadSceneRelationship _get_None();
    // Set static field: static public Zenject.LoadSceneRelationship None
    static void _set_None(Zenject::LoadSceneRelationship value);
    // static field const value: static public Zenject.LoadSceneRelationship Child
    static constexpr const int Child = 1;
    // Get static field: static public Zenject.LoadSceneRelationship Child
    static Zenject::LoadSceneRelationship _get_Child();
    // Set static field: static public Zenject.LoadSceneRelationship Child
    static void _set_Child(Zenject::LoadSceneRelationship value);
    // static field const value: static public Zenject.LoadSceneRelationship Sibling
    static constexpr const int Sibling = 2;
    // Get static field: static public Zenject.LoadSceneRelationship Sibling
    static Zenject::LoadSceneRelationship _get_Sibling();
    // Set static field: static public Zenject.LoadSceneRelationship Sibling
    static void _set_Sibling(Zenject::LoadSceneRelationship value);
  }; // Zenject.LoadSceneRelationship
  static check_size<sizeof(LoadSceneRelationship), 0 + sizeof(int)> __Zenject_LoadSceneRelationshipSizeCheck;
  static_assert(sizeof(LoadSceneRelationship) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::LoadSceneRelationship, "Zenject", "LoadSceneRelationship");
