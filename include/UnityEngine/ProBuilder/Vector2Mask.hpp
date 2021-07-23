// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.Vector2Mask
  // [TokenAttribute] Offset: FFFFFFFF
  struct Vector2Mask/*, public System::ValueType*/ {
    public:
    // private System.Byte m_Mask
    // Size: 0x1
    // Offset: 0x0
    uint8_t m_Mask;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: Vector2Mask
    constexpr Vector2Mask(uint8_t m_Mask_ = {}) noexcept : m_Mask{m_Mask_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
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
    // Get static field: static public readonly UnityEngine.ProBuilder.Vector2Mask XY
    static UnityEngine::ProBuilder::Vector2Mask _get_XY();
    // Set static field: static public readonly UnityEngine.ProBuilder.Vector2Mask XY
    static void _set_XY(UnityEngine::ProBuilder::Vector2Mask value);
    // Get instance field: private System.Byte m_Mask
    uint8_t _get_m_Mask();
    // Set instance field: private System.Byte m_Mask
    void _set_m_Mask(uint8_t value);
    // public System.Single get_x()
    // Offset: 0xF03870
    float get_x();
    // public System.Single get_y()
    // Offset: 0xF03888
    float get_y();
    // public System.Void .ctor(UnityEngine.Vector3 v, System.Single epsilon)
    // Offset: 0xF038A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector2Mask(UnityEngine::Vector3 v, float epsilon) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Vector2Mask::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(v), ::il2cpp_utils::ExtractType(epsilon)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, v, epsilon);
    }
    // public System.Void .ctor(System.Byte mask)
    // Offset: 0xF038A8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector2Mask(uint8_t mask)
    // static private System.Void .cctor()
    // Offset: 0x22AD2BC
    static void _cctor();
  }; // UnityEngine.ProBuilder.Vector2Mask
  #pragma pack(pop)
  static check_size<sizeof(Vector2Mask), 0 + sizeof(uint8_t)> __UnityEngine_ProBuilder_Vector2MaskSizeCheck;
  static_assert(sizeof(Vector2Mask) == 0x1);
  // static public UnityEngine.ProBuilder.Vector2Mask op_BitwiseOr(UnityEngine.ProBuilder.Vector2Mask left, UnityEngine.ProBuilder.Vector2Mask right)
  // Offset: 0x22AD248
  UnityEngine::ProBuilder::Vector2Mask operator|(const UnityEngine::ProBuilder::Vector2Mask& left, const UnityEngine::ProBuilder::Vector2Mask& right);
  // static public UnityEngine.ProBuilder.Vector2Mask op_BitwiseAnd(UnityEngine.ProBuilder.Vector2Mask left, UnityEngine.ProBuilder.Vector2Mask right)
  // Offset: 0x22AD254
  UnityEngine::ProBuilder::Vector2Mask operator&(const UnityEngine::ProBuilder::Vector2Mask& left, const UnityEngine::ProBuilder::Vector2Mask& right);
  // static public UnityEngine.ProBuilder.Vector2Mask op_ExclusiveOr(UnityEngine.ProBuilder.Vector2Mask left, UnityEngine.ProBuilder.Vector2Mask right)
  // Offset: 0x22AD260
  UnityEngine::ProBuilder::Vector2Mask operator^(const UnityEngine::ProBuilder::Vector2Mask& left, const UnityEngine::ProBuilder::Vector2Mask& right);
  // static public UnityEngine.Vector2 op_Multiply(UnityEngine.ProBuilder.Vector2Mask mask, System.Single value)
  // Offset: 0x22AD26C
  UnityEngine::Vector2 operator*(const UnityEngine::ProBuilder::Vector2Mask& mask, const float& value);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Vector2Mask, "UnityEngine.ProBuilder", "Vector2Mask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::Vector2Mask::*)()>(&UnityEngine::ProBuilder::Vector2Mask::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector2Mask), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::Vector2Mask::*)()>(&UnityEngine::ProBuilder::Vector2Mask::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector2Mask), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::Vector2Mask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::Vector2Mask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Vector2Mask::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector2Mask), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::operator|
// Il2CppName: op_BitwiseOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::operator&
// Il2CppName: op_BitwiseAnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::operator^
// Il2CppName: op_ExclusiveOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector2Mask::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
