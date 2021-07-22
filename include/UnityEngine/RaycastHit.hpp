// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RaycastHit
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D90764
  // [NativeHeaderAttribute] Offset: D90764
  // [UsedByNativeCodeAttribute] Offset: D90764
  // [NativeHeaderAttribute] Offset: D90764
  struct RaycastHit/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xD90C98
    // UnityEngine.Vector3 m_Point
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0xD90CD0
    // UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0xD90D08
    // System.UInt32 m_FaceID
    // Size: 0x4
    // Offset: 0x18
    uint m_FaceID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [NativeNameAttribute] Offset: 0xD90D40
    // System.Single m_Distance
    // Size: 0x4
    // Offset: 0x1C
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD90D78
    // UnityEngine.Vector2 m_UV
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 m_UV;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0xD90DB0
    // System.Int32 m_Collider
    // Size: 0x4
    // Offset: 0x28
    int m_Collider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RaycastHit
    constexpr RaycastHit(UnityEngine::Vector3 m_Point_ = {}, UnityEngine::Vector3 m_Normal_ = {}, uint m_FaceID_ = {}, float m_Distance_ = {}, UnityEngine::Vector2 m_UV_ = {}, int m_Collider_ = {}) noexcept : m_Point{m_Point_}, m_Normal{m_Normal_}, m_FaceID{m_FaceID_}, m_Distance{m_Distance_}, m_UV{m_UV_}, m_Collider{m_Collider_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.Collider get_collider()
    // Offset: 0xF0E2C0
    UnityEngine::Collider* get_collider();
    // public UnityEngine.Vector3 get_point()
    // Offset: 0xF0E2C8
    UnityEngine::Vector3 get_point();
    // public System.Void set_point(UnityEngine.Vector3 value)
    // Offset: 0xF0E2D4
    void set_point(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xF0E2E0
    UnityEngine::Vector3 get_normal();
    // public System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0xF0E2EC
    void set_normal(UnityEngine::Vector3 value);
    // public System.Single get_distance()
    // Offset: 0xF0E2F8
    float get_distance();
    // public System.Void set_distance(System.Single value)
    // Offset: 0xF0E300
    void set_distance(float value);
  }; // UnityEngine.RaycastHit
  #pragma pack(pop)
  static check_size<sizeof(RaycastHit), 40 + sizeof(int)> __UnityEngine_RaycastHitSizeCheck;
  static_assert(sizeof(RaycastHit) == 0x2C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_collider
// Il2CppName: get_collider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Collider* (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_collider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_collider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_point
// Il2CppName: get_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_point)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::set_point
// Il2CppName: set_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RaycastHit::*)(UnityEngine::Vector3)>(&UnityEngine::RaycastHit::set_point)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "set_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_normal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::set_normal
// Il2CppName: set_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RaycastHit::*)(UnityEngine::Vector3)>(&UnityEngine::RaycastHit::set_normal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "set_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_distance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::set_distance
// Il2CppName: set_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RaycastHit::*)(float)>(&UnityEngine::RaycastHit::set_distance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "set_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
