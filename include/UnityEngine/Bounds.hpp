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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Bounds
  // [NativeHeaderAttribute] Offset: CB8DC4
  // [NativeHeaderAttribute] Offset: CB8DC4
  // [NativeClassAttribute] Offset: CB8DC4
  // [NativeHeaderAttribute] Offset: CB8DC4
  // [NativeTypeAttribute] Offset: CB8DC4
  // [NativeHeaderAttribute] Offset: CB8DC4
  // [RequiredByNativeCodeAttribute] Offset: CB8DC4
  struct Bounds/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Bounds>*/ {
    public:
    // private UnityEngine.Vector3 m_Center
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Center;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0xCBD704
    // private UnityEngine.Vector3 m_Extents
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 m_Extents;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Bounds
    constexpr Bounds(UnityEngine::Vector3 m_Center_ = {}, UnityEngine::Vector3 m_Extents_ = {}) noexcept : m_Center{m_Center_}, m_Extents{m_Extents_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Bounds>
    operator System::IEquatable_1<UnityEngine::Bounds>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Bounds>*>(this);
    }
    // public System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xE120D0
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Bounds(UnityEngine::Vector3 center, UnityEngine::Vector3 size)
    // public System.Boolean Equals(UnityEngine.Bounds other)
    // Offset: 0xE120E8
    bool Equals(UnityEngine::Bounds other);
    // public UnityEngine.Vector3 get_center()
    // Offset: 0xE12120
    UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0xE1212C
    void set_center(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_size()
    // Offset: 0xE12138
    UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0xE12140
    void set_size(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_extents()
    // Offset: 0xE12148
    UnityEngine::Vector3 get_extents();
    // public System.Void set_extents(UnityEngine.Vector3 value)
    // Offset: 0xE12154
    void set_extents(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_min()
    // Offset: 0xE12160
    UnityEngine::Vector3 get_min();
    // public UnityEngine.Vector3 get_max()
    // Offset: 0xE12168
    UnityEngine::Vector3 get_max();
    // public System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
    // Offset: 0xE12170
    void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max);
    // public System.Void Encapsulate(UnityEngine.Vector3 point)
    // Offset: 0xE12178
    void Encapsulate(UnityEngine::Vector3 point);
    // public System.Boolean IntersectRay(UnityEngine.Ray ray, out System.Single distance)
    // Offset: 0xE12180
    bool IntersectRay(UnityEngine::Ray ray, float& distance);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0xE12200
    bool Contains(UnityEngine::Vector3 point);
    // static private System.Boolean IntersectRayAABB(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
    // Offset: 0x1A02BF8
    static bool IntersectRayAABB(UnityEngine::Ray ray, UnityEngine::Bounds bounds, float& dist);
    // static private System.Boolean Contains_Injected(ref UnityEngine.Bounds _unity_self, ref UnityEngine.Vector3 point)
    // Offset: 0x1A02DE0
    static bool Contains_Injected(UnityEngine::Bounds& _unity_self, UnityEngine::Vector3& point);
    // static private System.Boolean IntersectRayAABB_Injected(ref UnityEngine.Ray ray, ref UnityEngine.Bounds bounds, out System.Single dist)
    // Offset: 0x1A02E30
    static bool IntersectRayAABB_Injected(UnityEngine::Ray& ray, UnityEngine::Bounds& bounds, float& dist);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE120D8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE120E0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xE121F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Bounds
  #pragma pack(pop)
  static check_size<sizeof(Bounds), 12 + sizeof(UnityEngine::Vector3)> __UnityEngine_BoundsSizeCheck;
  static_assert(sizeof(Bounds) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x1A02830
  bool operator ==(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0x1A0294C
  bool operator !=(const UnityEngine::Bounds& lhs, const UnityEngine::Bounds& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bounds, "UnityEngine", "Bounds");
