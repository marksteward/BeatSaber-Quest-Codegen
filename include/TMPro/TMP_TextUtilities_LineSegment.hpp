// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_TextUtilities
#include "TMPro/TMP_TextUtilities.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  // Autogenerated type: TMPro.TMP_TextUtilities/LineSegment
  // [] Offset: FFFFFFFF
  struct TMP_TextUtilities::LineSegment/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Vector3 Point1
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 Point1;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 Point2
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 Point2;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: LineSegment
    constexpr LineSegment(UnityEngine::Vector3 Point1_ = {}, UnityEngine::Vector3 Point2_ = {}) noexcept : Point1{Point1_}, Point2{Point2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0xC940B0
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  LineSegment(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2)
  }; // TMPro.TMP_TextUtilities/LineSegment
  static check_size<sizeof(TMP_TextUtilities::LineSegment), 12 + sizeof(UnityEngine::Vector3)> __TMPro_TMP_TextUtilities_LineSegmentSizeCheck;
  static_assert(sizeof(TMP_TextUtilities::LineSegment) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextUtilities::LineSegment, "TMPro", "TMP_TextUtilities/LineSegment");
#pragma pack(pop)
