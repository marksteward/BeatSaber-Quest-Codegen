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
// Including type: System.Byte
#include "System/Byte.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.Vector3Mask
  // [DefaultMemberAttribute] Offset: D57A08
  struct Vector3Mask/*, public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::Vector3Mask>*/ {
    public:
    // private System.Byte m_Mask
    // Size: 0x1
    // Offset: 0x0
    uint8_t m_Mask;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: Vector3Mask
    constexpr Vector3Mask(uint8_t m_Mask_ = {}) noexcept : m_Mask{m_Mask_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::Vector3Mask>
    operator System::IEquatable_1<UnityEngine::ProBuilder::Vector3Mask>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::Vector3Mask>*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return m_Mask;
    }
    // static field const value: static private System.Byte X
    static constexpr const uint8_t X = 1u;
    // Get static field: static private System.Byte X
    static uint8_t _get_X();
    // Set static field: static private System.Byte X
    static void _set_X(uint8_t value);
    // static field const value: static private System.Byte Y
    static constexpr const uint8_t Y = 2u;
    // Get static field: static private System.Byte Y
    static uint8_t _get_Y();
    // Set static field: static private System.Byte Y
    static void _set_Y(uint8_t value);
    // static field const value: static private System.Byte Z
    static constexpr const uint8_t Z = 4u;
    // Get static field: static private System.Byte Z
    static uint8_t _get_Z();
    // Set static field: static private System.Byte Z
    static void _set_Z(uint8_t value);
    // Get static field: static public readonly UnityEngine.ProBuilder.Vector3Mask XYZ
    static UnityEngine::ProBuilder::Vector3Mask _get_XYZ();
    // Set static field: static public readonly UnityEngine.ProBuilder.Vector3Mask XYZ
    static void _set_XYZ(UnityEngine::ProBuilder::Vector3Mask value);
    // public System.Single get_x()
    // Offset: 0xE24900
    float get_x();
    // public System.Single get_y()
    // Offset: 0xE24918
    float get_y();
    // public System.Single get_z()
    // Offset: 0xE24930
    float get_z();
    // public System.Void .ctor(UnityEngine.Vector3 v, System.Single epsilon)
    // Offset: 0xE24948
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector3Mask(UnityEngine::Vector3 v, float epsilon) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Vector3Mask::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(v), ::il2cpp_utils::ExtractType(epsilon)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, v, epsilon);
    }
    // public System.Void .ctor(System.Byte mask)
    // Offset: 0xE24950
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector3Mask(uint8_t mask)
    // public System.Int32 get_active()
    // Offset: 0xE24960
    int get_active();
    // static public UnityEngine.ProBuilder.Vector3Mask op_Explicit(UnityEngine.Vector3 v)
    // Offset: 0x20A4160
    explicit Vector3Mask(UnityEngine::Vector3& v);
    // public System.Single get_Item(System.Int32 i)
    // Offset: 0xE2497C
    float get_Item(int i);
    // public System.Void set_Item(System.Int32 i, System.Single value)
    // Offset: 0xE24984
    void set_Item(int i, float value);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Vector3Mask other)
    // Offset: 0xE2498C
    bool Equals(UnityEngine::ProBuilder::Vector3Mask other);
    // static private System.Void .cctor()
    // Offset: 0x20A46AC
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xE24958
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE2499C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE249A4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Vector3Mask
  #pragma pack(pop)
  static check_size<sizeof(Vector3Mask), 0 + sizeof(uint8_t)> __UnityEngine_ProBuilder_Vector3MaskSizeCheck;
  static_assert(sizeof(Vector3Mask) == 0x1);
  // static public UnityEngine.ProBuilder.Vector3Mask op_BitwiseOr(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x20A4190
  UnityEngine::ProBuilder::Vector3Mask operator|(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right);
  // static public UnityEngine.ProBuilder.Vector3Mask op_BitwiseAnd(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x20A419C
  UnityEngine::ProBuilder::Vector3Mask operator&(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right);
  // static public UnityEngine.ProBuilder.Vector3Mask op_ExclusiveOr(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x20A41A8
  UnityEngine::ProBuilder::Vector3Mask operator^(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.ProBuilder.Vector3Mask mask, System.Single value)
  // Offset: 0x20A41B4
  UnityEngine::Vector3 operator*(const UnityEngine::ProBuilder::Vector3Mask& mask, const float& value);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.ProBuilder.Vector3Mask mask, UnityEngine.Vector3 value)
  // Offset: 0x20A4218
  UnityEngine::Vector3 operator*(const UnityEngine::ProBuilder::Vector3Mask& mask, const UnityEngine::Vector3& value);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.ProBuilder.Vector3Mask mask)
  // Offset: 0x20A4278
  UnityEngine::Vector3 operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::ProBuilder::Vector3Mask& mask);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x20A443C
  bool operator ==(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x20A444C
  bool operator !=(const UnityEngine::ProBuilder::Vector3Mask& left, const UnityEngine::ProBuilder::Vector3Mask& right);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Vector3Mask, "UnityEngine.ProBuilder", "Vector3Mask");
