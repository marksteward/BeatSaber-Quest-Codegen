// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Numerics.Hashing
namespace System::Numerics::Hashing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Numerics.Hashing.HashHelpers
  // [] Offset: FFFFFFFF
  class HashHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HashHelpers
    HashHelpers() noexcept {}
    // Get static field: static public readonly System.Int32 RandomSeed
    static int _get_RandomSeed();
    // Set static field: static public readonly System.Int32 RandomSeed
    static void _set_RandomSeed(int value);
    // static public System.Int32 Combine(System.Int32 h1, System.Int32 h2)
    // Offset: 0x171A624
    static int Combine(int h1, int h2);
    // static private System.Void .cctor()
    // Offset: 0x171A634
    static void _cctor();
  }; // System.Numerics.Hashing.HashHelpers
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Numerics::Hashing::HashHelpers*, "System.Numerics.Hashing", "HashHelpers");
