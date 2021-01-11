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
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector4
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D4CDCC
  // [RequiredByNativeCodeAttribute] Offset: D4CDCC
  // [NativeHeaderAttribute] Offset: D4CDCC
  // [NativeClassAttribute] Offset: D4CDCC
  struct Vector4/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Vector4>*/ {
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
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0xC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Vector4
    constexpr Vector4(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Vector4>
    operator System::IEquatable_1<UnityEngine::Vector4>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Vector4>*>(this);
    }
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-05;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // Get static field: static private readonly UnityEngine.Vector4 zeroVector
    static UnityEngine::Vector4 _get_zeroVector();
    // Set static field: static private readonly UnityEngine.Vector4 zeroVector
    static void _set_zeroVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 oneVector
    static UnityEngine::Vector4 _get_oneVector();
    // Set static field: static private readonly UnityEngine.Vector4 oneVector
    static void _set_oneVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 positiveInfinityVector
    static UnityEngine::Vector4 _get_positiveInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector4 positiveInfinityVector
    static void _set_positiveInfinityVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 negativeInfinityVector
    static UnityEngine::Vector4 _get_negativeInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector4 negativeInfinityVector
    static void _set_negativeInfinityVector(UnityEngine::Vector4 value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xCA6708
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xCA6710
    void set_Item(int index, float value);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xCA6718
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector4(float x, float y, float z, float w)
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z)
    // Offset: 0xCA6724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector4(float x, float y, float z) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Vector4::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, z)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, x, y, z);
    }
    // public System.Void Normalize()
    // Offset: 0xCA6780
    void Normalize();
    // static public System.Single Dot(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
    // Offset: 0x16CD7A0
    static float Dot(UnityEngine::Vector4 a, UnityEngine::Vector4 b);
    // static public System.Single Magnitude(UnityEngine.Vector4 a)
    // Offset: 0x16CD644
    static float Magnitude(UnityEngine::Vector4 a);
    // public System.Single get_magnitude()
    // Offset: 0xCA6788
    float get_magnitude();
    // public System.Single get_sqrMagnitude()
    // Offset: 0xCA6790
    float get_sqrMagnitude();
    // static public UnityEngine.Vector4 get_zero()
    // Offset: 0x16CD734
    static UnityEngine::Vector4 get_zero();
    // static public UnityEngine.Vector4 get_one()
    // Offset: 0x16CD92C
    static UnityEngine::Vector4 get_one();
    // public System.String ToString(System.String format)
    // Offset: 0xCA67A0
    ::Il2CppString* ToString(::Il2CppString* format);
    // static private System.Void .cctor()
    // Offset: 0x16CDF40
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA6734
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xCA673C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Vector4 other)
    // Offset: 0xCA6744
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Vector4 other)
    bool Equals(UnityEngine::Vector4 other);
    // public override System.String ToString()
    // Offset: 0xCA6798
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Vector4
  static check_size<sizeof(Vector4), 12 + sizeof(float)> __UnityEngine_Vector4SizeCheck;
  static_assert(sizeof(Vector4) == 0x10);
  // static public UnityEngine.Vector4 op_Addition(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
  // Offset: 0x16CD998
  UnityEngine::Vector4 operator+(const UnityEngine::Vector4& a, const UnityEngine::Vector4& b);
  // static public UnityEngine.Vector4 op_Subtraction(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
  // Offset: 0x16CD9AC
  UnityEngine::Vector4 operator-(const UnityEngine::Vector4& a, const UnityEngine::Vector4& b);
  // static public UnityEngine.Vector4 op_Multiply(UnityEngine.Vector4 a, System.Single d)
  // Offset: 0x16CD9C0
  UnityEngine::Vector4 operator*(const UnityEngine::Vector4& a, const float& d);
  // static public UnityEngine.Vector4 op_Division(UnityEngine.Vector4 a, System.Single d)
  // Offset: 0x16CD720
  UnityEngine::Vector4 operator/(const UnityEngine::Vector4& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector4 lhs, UnityEngine.Vector4 rhs)
  // Offset: 0x16CD9D4
  bool operator ==(const UnityEngine::Vector4& lhs, const UnityEngine::Vector4& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector4 lhs, UnityEngine.Vector4 rhs)
  // Offset: 0x16CDA14
  bool operator !=(const UnityEngine::Vector4& lhs, const UnityEngine::Vector4& rhs);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector4, "UnityEngine", "Vector4");
