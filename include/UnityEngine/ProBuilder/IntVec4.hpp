// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.IntVec4
  struct IntVec4 : public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::IntVec4> {
    public:
    // public UnityEngine.Vector4 value
    // Offset: 0x0
    UnityEngine::Vector4 value;
    // Creating value type constructor for type: IntVec4
    constexpr IntVec4(UnityEngine::Vector4 value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator UnityEngine::Vector4
    constexpr operator UnityEngine::Vector4() const noexcept {
      return value;
    }
    // public System.Single get_x()
    // Offset: 0xA3CD2C
    float get_x();
    // public System.Single get_y()
    // Offset: 0xA3CD34
    float get_y();
    // public System.Single get_z()
    // Offset: 0xA3CD3C
    float get_z();
    // public System.Single get_w()
    // Offset: 0xA3CD44
    float get_w();
    // public System.Void .ctor(UnityEngine.Vector4 vector)
    // Offset: 0xA3CD4C
    // ABORTED: conflicts with another method.  IntVec4(UnityEngine::Vector4 vector);
    // public System.Boolean Equals(UnityEngine.Vector4 p)
    // Offset: 0xA3CD68
    bool Equals(UnityEngine::Vector4 p);
    // static private System.Int32 round(System.Single v)
    // Offset: 0xF9E394
    static int round(float v);
    // public override System.String ToString()
    // Offset: 0xA3CD58
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.IntVec4 p)
    // Offset: 0xA3CD60
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.ProBuilder.IntVec4 p)
    bool Equals(UnityEngine::ProBuilder::IntVec4 p);
    // public override System.Boolean Equals(System.Object b)
    // Offset: 0xA3CD70
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object b)
    bool Equals(::Il2CppObject* b);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA3CD78
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.IntVec4
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.IntVec4 a, UnityEngine.ProBuilder.IntVec4 b)
  // Offset: 0xF9E260
  bool operator ==(const UnityEngine::ProBuilder::IntVec4& a, const UnityEngine::ProBuilder::IntVec4& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.IntVec4 a, UnityEngine.ProBuilder.IntVec4 b)
  // Offset: 0xF9E354
  bool operator !=(const UnityEngine::ProBuilder::IntVec4& a, const UnityEngine::ProBuilder::IntVec4& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IntVec4, "UnityEngine.ProBuilder", "IntVec4");
#pragma pack(pop)
