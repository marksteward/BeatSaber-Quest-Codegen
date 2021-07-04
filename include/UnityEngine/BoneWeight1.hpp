// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.BoneWeight1
  // [UsedByNativeCodeAttribute] Offset: D8F16C
  struct BoneWeight1/*, public System::ValueType, public System::IEquatable_1<UnityEngine::BoneWeight1>*/ {
    public:
    // private System.Single m_Weight
    // Size: 0x4
    // Offset: 0x0
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_BoneIndex
    // Size: 0x4
    // Offset: 0x4
    int m_BoneIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BoneWeight1
    constexpr BoneWeight1(float m_Weight_ = {}, int m_BoneIndex_ = {}) noexcept : m_Weight{m_Weight_}, m_BoneIndex{m_BoneIndex_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::BoneWeight1>
    operator System::IEquatable_1<UnityEngine::BoneWeight1>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::BoneWeight1>*>(this);
    }
    // public System.Single get_weight()
    // Offset: 0xF07508
    float get_weight();
    // public System.Int32 get_boneIndex()
    // Offset: 0xF07510
    int get_boneIndex();
    // public System.Boolean Equals(UnityEngine.BoneWeight1 other)
    // Offset: 0xF07520
    bool Equals(UnityEngine::BoneWeight1 other);
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF07518
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF07528
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.BoneWeight1
  #pragma pack(pop)
  static check_size<sizeof(BoneWeight1), 4 + sizeof(int)> __UnityEngine_BoneWeight1SizeCheck;
  static_assert(sizeof(BoneWeight1) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BoneWeight1, "UnityEngine", "BoneWeight1");
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::get_weight
// Il2CppName: get_weight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::get_boneIndex
// Il2CppName: get_boneIndex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
