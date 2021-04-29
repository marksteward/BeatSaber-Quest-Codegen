// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector2
  // [NativeClassAttribute] Offset: CBA2E0
  // [RequiredByNativeCodeAttribute] Offset: CBA2E0
  // [DefaultMemberAttribute] Offset: CBA2E0
  struct Vector2/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Vector2>*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Vector2
    constexpr Vector2(float x_ = {}, float y_ = {}) noexcept : x{x_}, y{y_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Vector2>
    operator System::IEquatable_1<UnityEngine::Vector2>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Vector2>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector2 zeroVector
    static UnityEngine::Vector2 _get_zeroVector();
    // Set static field: static private readonly UnityEngine.Vector2 zeroVector
    static void _set_zeroVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 oneVector
    static UnityEngine::Vector2 _get_oneVector();
    // Set static field: static private readonly UnityEngine.Vector2 oneVector
    static void _set_oneVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 upVector
    static UnityEngine::Vector2 _get_upVector();
    // Set static field: static private readonly UnityEngine.Vector2 upVector
    static void _set_upVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 downVector
    static UnityEngine::Vector2 _get_downVector();
    // Set static field: static private readonly UnityEngine.Vector2 downVector
    static void _set_downVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 leftVector
    static UnityEngine::Vector2 _get_leftVector();
    // Set static field: static private readonly UnityEngine.Vector2 leftVector
    static void _set_leftVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 rightVector
    static UnityEngine::Vector2 _get_rightVector();
    // Set static field: static private readonly UnityEngine.Vector2 rightVector
    static void _set_rightVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 positiveInfinityVector
    static UnityEngine::Vector2 _get_positiveInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector2 positiveInfinityVector
    static void _set_positiveInfinityVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 negativeInfinityVector
    static UnityEngine::Vector2 _get_negativeInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector2 negativeInfinityVector
    static void _set_negativeInfinityVector(UnityEngine::Vector2 value);
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-05;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // static field const value: static public System.Single kEpsilonNormalSqrt
    static constexpr const float kEpsilonNormalSqrt = 1e-15;
    // Get static field: static public System.Single kEpsilonNormalSqrt
    static float _get_kEpsilonNormalSqrt();
    // Set static field: static public System.Single kEpsilonNormalSqrt
    static void _set_kEpsilonNormalSqrt(float value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xE11650
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xE11658
    void set_Item(int index, float value);
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0xE11660
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector2(float x, float y)
    // static public UnityEngine.Vector2 Lerp(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single t)
    // Offset: 0x19CC59C
    static UnityEngine::Vector2 Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t);
    // static public UnityEngine.Vector2 Scale(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x19CC648
    static UnityEngine::Vector2 Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // public System.Void Scale(UnityEngine.Vector2 scale)
    // Offset: 0xE11668
    void Scale(UnityEngine::Vector2 scale);
    // public System.Void Normalize()
    // Offset: 0xE1167C
    void Normalize();
    // public UnityEngine.Vector2 get_normalized()
    // Offset: 0xE11684
    UnityEngine::Vector2 get_normalized();
    // public System.String ToString(System.String format)
    // Offset: 0xE116B8
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.Boolean Equals(UnityEngine.Vector2 other)
    // Offset: 0xE11704
    bool Equals(UnityEngine::Vector2 other);
    // static public UnityEngine.Vector2 Perpendicular(UnityEngine.Vector2 inDirection)
    // Offset: 0x19CCBF0
    static UnityEngine::Vector2 Perpendicular(UnityEngine::Vector2 inDirection);
    // static public System.Single Dot(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
    // Offset: 0x19CCC04
    static float Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs);
    // public System.Single get_magnitude()
    // Offset: 0xE11728
    float get_magnitude();
    // public System.Single get_sqrMagnitude()
    // Offset: 0xE11730
    float get_sqrMagnitude();
    // static public System.Single Angle(UnityEngine.Vector2 from, UnityEngine.Vector2 to)
    // Offset: 0x19CCC28
    static float Angle(UnityEngine::Vector2 from, UnityEngine::Vector2 to);
    // static public System.Single SignedAngle(UnityEngine.Vector2 from, UnityEngine.Vector2 to)
    // Offset: 0x19CCD84
    static float SignedAngle(UnityEngine::Vector2 from, UnityEngine::Vector2 to);
    // static public System.Single Distance(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x19CCE58
    static float Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // static public UnityEngine.Vector2 get_zero()
    // Offset: 0x19CC7D0
    static UnityEngine::Vector2 get_zero();
    // static public UnityEngine.Vector2 get_one()
    // Offset: 0x19CD044
    static UnityEngine::Vector2 get_one();
    // static public UnityEngine.Vector2 get_up()
    // Offset: 0x19CD0AC
    static UnityEngine::Vector2 get_up();
    // static public UnityEngine.Vector2 get_right()
    // Offset: 0x19CD114
    static UnityEngine::Vector2 get_right();
    // static private System.Void .cctor()
    // Offset: 0x19CD17C
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xE116B0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xE116C0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE116FC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Vector2
  #pragma pack(pop)
  static check_size<sizeof(Vector2), 4 + sizeof(float)> __UnityEngine_Vector2SizeCheck;
  static_assert(sizeof(Vector2) == 0x8);
  // static public UnityEngine.Vector2 op_Addition(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x19CCF0C
  UnityEngine::Vector2 operator+(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Subtraction(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x19CCF18
  UnityEngine::Vector2 operator-(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x19CCF24
  UnityEngine::Vector2 operator*(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x19CCF30
  UnityEngine::Vector2 operator/(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_UnaryNegation(UnityEngine.Vector2 a)
  // Offset: 0x19CCF3C
  UnityEngine::Vector2 operator-(const UnityEngine::Vector2& a);
  // static public UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, System.Single d)
  // Offset: 0x19CCF48
  UnityEngine::Vector2 operator*(const UnityEngine::Vector2& a, const float& d);
  // static public UnityEngine.Vector2 op_Multiply(System.Single d, UnityEngine.Vector2 a)
  // Offset: 0x19CCF54
  UnityEngine::Vector2 operator*(const float& d, const UnityEngine::Vector2& a);
  // static public UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, System.Single d)
  // Offset: 0x19CC7C4
  UnityEngine::Vector2 operator/(const UnityEngine::Vector2& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
  // Offset: 0x19CCF64
  bool operator ==(const UnityEngine::Vector2& lhs, const UnityEngine::Vector2& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
  // Offset: 0x19CCF8C
  bool operator !=(const UnityEngine::Vector2& lhs, const UnityEngine::Vector2& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector2, "UnityEngine", "Vector2");
