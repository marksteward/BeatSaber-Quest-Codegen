// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshArrays
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MeshArrays/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MeshArrays
    constexpr MeshArrays(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Position
    static constexpr const int Position = 1;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Position
    static UnityEngine::ProBuilder::MeshArrays _get_Position();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Position
    static void _set_Position(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Texture0
    static constexpr const int Texture0 = 2;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Texture0
    static UnityEngine::ProBuilder::MeshArrays _get_Texture0();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Texture0
    static void _set_Texture0(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Texture1
    static constexpr const int Texture1 = 4;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Texture1
    static UnityEngine::ProBuilder::MeshArrays _get_Texture1();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Texture1
    static void _set_Texture1(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Lightmap
    static constexpr const int Lightmap = 4;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Lightmap
    static UnityEngine::ProBuilder::MeshArrays _get_Lightmap();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Lightmap
    static void _set_Lightmap(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Texture2
    static constexpr const int Texture2 = 8;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Texture2
    static UnityEngine::ProBuilder::MeshArrays _get_Texture2();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Texture2
    static void _set_Texture2(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Texture3
    static constexpr const int Texture3 = 16;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Texture3
    static UnityEngine::ProBuilder::MeshArrays _get_Texture3();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Texture3
    static void _set_Texture3(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Color
    static constexpr const int Color = 32;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Color
    static UnityEngine::ProBuilder::MeshArrays _get_Color();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Color
    static void _set_Color(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Normal
    static constexpr const int Normal = 64;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Normal
    static UnityEngine::ProBuilder::MeshArrays _get_Normal();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Normal
    static void _set_Normal(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays Tangent
    static constexpr const int Tangent = 128;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays Tangent
    static UnityEngine::ProBuilder::MeshArrays _get_Tangent();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays Tangent
    static void _set_Tangent(UnityEngine::ProBuilder::MeshArrays value);
    // static field const value: static public UnityEngine.ProBuilder.MeshArrays All
    static constexpr const int All = 255;
    // Get static field: static public UnityEngine.ProBuilder.MeshArrays All
    static UnityEngine::ProBuilder::MeshArrays _get_All();
    // Set static field: static public UnityEngine.ProBuilder.MeshArrays All
    static void _set_All(UnityEngine::ProBuilder::MeshArrays value);
  }; // UnityEngine.ProBuilder.MeshArrays
  static check_size<sizeof(MeshArrays), 0 + sizeof(int)> __UnityEngine_ProBuilder_MeshArraysSizeCheck;
  static_assert(sizeof(MeshArrays) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshArrays, "UnityEngine.ProBuilder", "MeshArrays");
