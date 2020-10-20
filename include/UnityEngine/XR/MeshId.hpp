// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: UnityEngine.XR.MeshId
  struct MeshId : public System::ValueType/*, public System::IEquatable_1<UnityEngine::XR::MeshId>*/ {
    public:
    // private System.UInt64 m_SubId1
    // Offset: 0x0
    uint64_t m_SubId1;
    // private System.UInt64 m_SubId2
    // Offset: 0x8
    uint64_t m_SubId2;
    // Creating value type constructor for type: MeshId
    constexpr MeshId(uint64_t m_SubId1_ = {}, uint64_t m_SubId2_ = {}) noexcept : m_SubId1{m_SubId1_}, m_SubId2{m_SubId2_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::MeshId>
    operator System::IEquatable_1<UnityEngine::XR::MeshId>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::MeshId>*>(this);
    }
    // Get static field: static private UnityEngine.XR.MeshId s_InvalidId
    static UnityEngine::XR::MeshId _get_s_InvalidId();
    // Set static field: static private UnityEngine.XR.MeshId s_InvalidId
    static void _set_s_InvalidId(UnityEngine::XR::MeshId value);
    // static private System.Void .cctor()
    // Offset: 0x1F5F2DC
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xC8B720
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xC8B728
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC8B764
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.XR.MeshId other)
    // Offset: 0xC8B76C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.XR.MeshId other)
    bool Equals(UnityEngine::XR::MeshId other);
  }; // UnityEngine.XR.MeshId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshId, "UnityEngine.XR", "MeshId");
#pragma pack(pop)
