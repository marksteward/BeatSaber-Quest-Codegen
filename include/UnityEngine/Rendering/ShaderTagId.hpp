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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.ShaderTagId
  struct ShaderTagId/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Rendering::ShaderTagId>*/ {
    public:
    // private System.Int32 m_Id
    // Size: 0x4
    // Offset: 0x0
    int m_Id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShaderTagId
    constexpr ShaderTagId(int m_Id_ = {}) noexcept : m_Id{m_Id_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Rendering::ShaderTagId>
    operator System::IEquatable_1<UnityEngine::Rendering::ShaderTagId>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Rendering::ShaderTagId>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Id;
    }
    // Get static field: static public readonly UnityEngine.Rendering.ShaderTagId none
    static UnityEngine::Rendering::ShaderTagId _get_none();
    // Set static field: static public readonly UnityEngine.Rendering.ShaderTagId none
    static void _set_none(UnityEngine::Rendering::ShaderTagId value);
    // System.Int32 get_id()
    // Offset: 0xF069D0
    int get_id();
    // System.Void set_id(System.Int32 value)
    // Offset: 0xF069D8
    void set_id(int value);
    // public System.Boolean Equals(UnityEngine.Rendering.ShaderTagId other)
    // Offset: 0xF069E8
    bool Equals(UnityEngine::Rendering::ShaderTagId other);
    // static private System.Void .cctor()
    // Offset: 0x1B30B80
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF069E0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF069F8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.ShaderTagId
  #pragma pack(pop)
  static check_size<sizeof(ShaderTagId), 0 + sizeof(int)> __UnityEngine_Rendering_ShaderTagIdSizeCheck;
  static_assert(sizeof(ShaderTagId) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ShaderTagId, "UnityEngine.Rendering", "ShaderTagId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::ShaderTagId::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ShaderTagId::*)()>(&UnityEngine::Rendering::ShaderTagId::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShaderTagId), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShaderTagId::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ShaderTagId::*)(int)>(&UnityEngine::Rendering::ShaderTagId::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShaderTagId), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShaderTagId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ShaderTagId::*)(UnityEngine::Rendering::ShaderTagId)>(&UnityEngine::Rendering::ShaderTagId::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShaderTagId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShaderTagId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShaderTagId::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::ShaderTagId::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShaderTagId), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShaderTagId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ShaderTagId::*)(::Il2CppObject*)>(&UnityEngine::Rendering::ShaderTagId::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShaderTagId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShaderTagId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ShaderTagId::*)()>(&UnityEngine::Rendering::ShaderTagId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShaderTagId), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
