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
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.Normal
  struct Normal/*, public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::Normal>*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE3AB74
    // private UnityEngine.Vector3 <normal>k__BackingField
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xE3AB84
    // private UnityEngine.Vector4 <tangent>k__BackingField
    // Size: 0x10
    // Offset: 0xC
    UnityEngine::Vector4 tangent;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xE3AB94
    // private UnityEngine.Vector3 <bitangent>k__BackingField
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 bitangent;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Normal
    constexpr Normal(UnityEngine::Vector3 normal_ = {}, UnityEngine::Vector4 tangent_ = {}, UnityEngine::Vector3 bitangent_ = {}) noexcept : normal{normal_}, tangent{tangent_}, bitangent{bitangent_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::Normal>
    operator System::IEquatable_1<UnityEngine::ProBuilder::Normal>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::Normal>*>(this);
    }
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xEFBC50
    UnityEngine::Vector3 get_normal();
    // public System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0xEFBC5C
    void set_normal(UnityEngine::Vector3 value);
    // public UnityEngine.Vector4 get_tangent()
    // Offset: 0xEFBC68
    UnityEngine::Vector4 get_tangent();
    // public System.Void set_tangent(UnityEngine.Vector4 value)
    // Offset: 0xEFBC74
    void set_tangent(UnityEngine::Vector4 value);
    // public UnityEngine.Vector3 get_bitangent()
    // Offset: 0xEFBC80
    UnityEngine::Vector3 get_bitangent();
    // public System.Void set_bitangent(UnityEngine.Vector3 value)
    // Offset: 0xEFBC8C
    void set_bitangent(UnityEngine::Vector3 value);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Normal other)
    // Offset: 0xEFBCA8
    bool Equals(UnityEngine::ProBuilder::Normal other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEFBC98
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFBCA0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Normal
  #pragma pack(pop)
  static check_size<sizeof(Normal), 28 + sizeof(UnityEngine::Vector3)> __UnityEngine_ProBuilder_NormalSizeCheck;
  static_assert(sizeof(Normal) == 0x28);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Normal a, UnityEngine.ProBuilder.Normal b)
  // Offset: 0x171ABA8
  bool operator ==(const UnityEngine::ProBuilder::Normal& a, const UnityEngine::ProBuilder::Normal& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Normal a, UnityEngine.ProBuilder.Normal b)
  // Offset: 0x171ABDC
  bool operator !=(const UnityEngine::ProBuilder::Normal& a, const UnityEngine::ProBuilder::Normal& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Normal, "UnityEngine.ProBuilder", "Normal");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::get_normal
// Il2CppName: get_normal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::set_normal
// Il2CppName: set_normal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::get_tangent
// Il2CppName: get_tangent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::set_tangent
// Il2CppName: set_tangent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::get_bitangent
// Il2CppName: get_bitangent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::set_bitangent
// Il2CppName: set_bitangent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
