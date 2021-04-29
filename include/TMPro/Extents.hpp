// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.Extents
  struct Extents/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Vector2 min
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Vector2 min;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 max
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Vector2 max;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Creating value type constructor for type: Extents
    constexpr Extents(UnityEngine::Vector2 min_ = {}, UnityEngine::Vector2 max_ = {}) noexcept : min{min_}, max{max_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(UnityEngine.Vector2 min, UnityEngine.Vector2 max)
    // Offset: 0xDF4154
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Extents(UnityEngine::Vector2 min, UnityEngine::Vector2 max)
    // public override System.String ToString()
    // Offset: 0xDF4160
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // TMPro.Extents
  #pragma pack(pop)
  static check_size<sizeof(Extents), 8 + sizeof(UnityEngine::Vector2)> __TMPro_ExtentsSizeCheck;
  static_assert(sizeof(Extents) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::Extents, "TMPro", "Extents");
