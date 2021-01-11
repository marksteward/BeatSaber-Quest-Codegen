// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: BezierTangentDirection
  struct BezierTangentDirection;
  // Forward declaring type: BezierTangentMode
  struct BezierTangentMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.BezierPoint
  // [] Offset: FFFFFFFF
  struct BezierPoint/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 tangentIn
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 tangentIn;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 tangentOut
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 tangentOut;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: BezierPoint
    constexpr BezierPoint(UnityEngine::Vector3 position_ = {}, UnityEngine::Vector3 tangentIn_ = {}, UnityEngine::Vector3 tangentOut_ = {}, UnityEngine::Quaternion rotation_ = {}) noexcept : position{position_}, tangentIn{tangentIn_}, tangentOut{tangentOut_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 tangentIn, UnityEngine.Vector3 tangentOut, UnityEngine.Quaternion rotation)
    // Offset: 0xCACFDC
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  BezierPoint(UnityEngine::Vector3 position, UnityEngine::Vector3 tangentIn, UnityEngine::Vector3 tangentOut, UnityEngine::Quaternion rotation)
    // public System.Void EnforceTangentMode(UnityEngine.ProBuilder.BezierTangentDirection master, UnityEngine.ProBuilder.BezierTangentMode mode)
    // Offset: 0xCAD004
    void EnforceTangentMode(UnityEngine::ProBuilder::BezierTangentDirection master, UnityEngine::ProBuilder::BezierTangentMode mode);
    // public System.Void SetPosition(UnityEngine.Vector3 position)
    // Offset: 0xCAD00C
    void SetPosition(UnityEngine::Vector3 position);
    // public System.Void SetTangentIn(UnityEngine.Vector3 tangent, UnityEngine.ProBuilder.BezierTangentMode mode)
    // Offset: 0xCAD014
    void SetTangentIn(UnityEngine::Vector3 tangent, UnityEngine::ProBuilder::BezierTangentMode mode);
    // public System.Void SetTangentOut(UnityEngine.Vector3 tangent, UnityEngine.ProBuilder.BezierTangentMode mode)
    // Offset: 0xCAD030
    void SetTangentOut(UnityEngine::Vector3 tangent, UnityEngine::ProBuilder::BezierTangentMode mode);
    // static public UnityEngine.Vector3 QuadraticPosition(UnityEngine.ProBuilder.BezierPoint a, UnityEngine.ProBuilder.BezierPoint b, System.Single t)
    // Offset: 0x1885088
    static UnityEngine::Vector3 QuadraticPosition(UnityEngine::ProBuilder::BezierPoint a, UnityEngine::ProBuilder::BezierPoint b, float t);
    // static public UnityEngine.Vector3 CubicPosition(UnityEngine.ProBuilder.BezierPoint a, UnityEngine.ProBuilder.BezierPoint b, System.Single t)
    // Offset: 0x1885128
    static UnityEngine::Vector3 CubicPosition(UnityEngine::ProBuilder::BezierPoint a, UnityEngine::ProBuilder::BezierPoint b, float t);
    // static public UnityEngine.Vector3 GetLookDirection(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.BezierPoint> points, System.Int32 index, System.Int32 previous, System.Int32 next)
    // Offset: 0x18852DC
    static UnityEngine::Vector3 GetLookDirection(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::BezierPoint>* points, int index, int previous, int next);
  }; // UnityEngine.ProBuilder.BezierPoint
  static check_size<sizeof(BezierPoint), 36 + sizeof(UnityEngine::Quaternion)> __UnityEngine_ProBuilder_BezierPointSizeCheck;
  static_assert(sizeof(BezierPoint) == 0x34);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierPoint, "UnityEngine.ProBuilder", "BezierPoint");
