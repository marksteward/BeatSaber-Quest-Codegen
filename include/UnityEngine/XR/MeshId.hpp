// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.MeshId
  // [NativeHeaderAttribute] Offset: DB6C44
  // [UsedByNativeCodeAttribute] Offset: DB6C44
  struct MeshId/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::MeshId>*/ {
    public:
    // private System.UInt64 m_SubId1
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_SubId1;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 m_SubId2
    // Size: 0x8
    // Offset: 0x8
    uint64_t m_SubId2;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: MeshId
    constexpr MeshId(uint64_t m_SubId1_ = {}, uint64_t m_SubId2_ = {}) noexcept : m_SubId1{m_SubId1_}, m_SubId2{m_SubId2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::MeshId>
    operator System::IEquatable_1<UnityEngine::XR::MeshId>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::MeshId>*>(this);
    }
    // Get static field: static private UnityEngine.XR.MeshId s_InvalidId
    static UnityEngine::XR::MeshId _get_s_InvalidId();
    // Set static field: static private UnityEngine.XR.MeshId s_InvalidId
    static void _set_s_InvalidId(UnityEngine::XR::MeshId value);
    // public System.Boolean Equals(UnityEngine.XR.MeshId other)
    // Offset: 0xF23C94
    bool Equals(UnityEngine::XR::MeshId other);
    // static private System.Void .cctor()
    // Offset: 0x23DD95C
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xF23C48
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xF23C50
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF23C8C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.XR.MeshId
  #pragma pack(pop)
  static check_size<sizeof(MeshId), 8 + sizeof(uint64_t)> __UnityEngine_XR_MeshIdSizeCheck;
  static_assert(sizeof(MeshId) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshId, "UnityEngine.XR", "MeshId");
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
