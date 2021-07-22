// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Ray2D
  // [TokenAttribute] Offset: FFFFFFFF
  struct Ray2D/*, public System::ValueType*/ {
    public:
    // private UnityEngine.Vector2 m_Origin
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Vector2 m_Origin;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_Direction
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Vector2 m_Direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Creating value type constructor for type: Ray2D
    constexpr Ray2D(UnityEngine::Vector2 m_Origin_ = {}, UnityEngine::Vector2 m_Direction_ = {}) noexcept : m_Origin{m_Origin_}, m_Direction{m_Direction_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.Vector2 get_origin()
    // Offset: 0xEF5268
    UnityEngine::Vector2 get_origin();
    // public UnityEngine.Vector2 get_direction()
    // Offset: 0xEF5270
    UnityEngine::Vector2 get_direction();
    // public System.Void .ctor(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction)
    // Offset: 0xEF5234
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Ray2D(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction)
    // public UnityEngine.Vector2 GetPoint(System.Single distance)
    // Offset: 0xEF5278
    UnityEngine::Vector2 GetPoint(float distance);
    // public override System.String ToString()
    // Offset: 0xEF5280
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Ray2D
  #pragma pack(pop)
  static check_size<sizeof(Ray2D), 8 + sizeof(UnityEngine::Vector2)> __UnityEngine_Ray2DSizeCheck;
  static_assert(sizeof(Ray2D) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Ray2D, "UnityEngine", "Ray2D");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Ray2D::get_origin
// Il2CppName: get_origin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::Ray2D::*)()>(&UnityEngine::Ray2D::get_origin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray2D), "get_origin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray2D::get_direction
// Il2CppName: get_direction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::Ray2D::*)()>(&UnityEngine::Ray2D::get_direction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray2D), "get_direction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray2D::Ray2D
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Ray2D::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::Ray2D::*)(float)>(&UnityEngine::Ray2D::GetPoint)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray2D), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray2D::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Ray2D::*)()>(&UnityEngine::Ray2D::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray2D), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
