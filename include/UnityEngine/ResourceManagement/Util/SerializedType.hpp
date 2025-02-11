// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.SerializedType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SerializedType/*, public System::ValueType*/ {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xE94504
    // private System.String m_AssemblyName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_AssemblyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE94550
    // private System.String m_ClassName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* m_ClassName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type m_CachedType
    // Size: 0x8
    // Offset: 0x10
    System::Type* m_CachedType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Boolean <ValueChanged>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool ValueChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SerializedType
    constexpr SerializedType(::Il2CppString* m_AssemblyName_ = {}, ::Il2CppString* m_ClassName_ = {}, System::Type* m_CachedType_ = {}, bool ValueChanged_ = {}) noexcept : m_AssemblyName{m_AssemblyName_}, m_ClassName{m_ClassName_}, m_CachedType{m_CachedType_}, ValueChanged{ValueChanged_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.String m_AssemblyName
    ::Il2CppString* _get_m_AssemblyName();
    // Set instance field: private System.String m_AssemblyName
    void _set_m_AssemblyName(::Il2CppString* value);
    // Get instance field: private System.String m_ClassName
    ::Il2CppString* _get_m_ClassName();
    // Set instance field: private System.String m_ClassName
    void _set_m_ClassName(::Il2CppString* value);
    // Get instance field: private System.Type m_CachedType
    System::Type* _get_m_CachedType();
    // Set instance field: private System.Type m_CachedType
    void _set_m_CachedType(System::Type* value);
    // Get instance field: private System.Boolean <ValueChanged>k__BackingField
    bool _get_$ValueChanged$k__BackingField();
    // Set instance field: private System.Boolean <ValueChanged>k__BackingField
    void _set_$ValueChanged$k__BackingField(bool value);
    // public System.String get_AssemblyName()
    // Offset: 0xD804FC
    ::Il2CppString* get_AssemblyName();
    // public System.String get_ClassName()
    // Offset: 0xD80504
    ::Il2CppString* get_ClassName();
    // public System.Type get_Value()
    // Offset: 0xD80514
    System::Type* get_Value();
    // public System.Void set_Value(System.Type value)
    // Offset: 0xD8051C
    void set_Value(System::Type* value);
    // public System.Boolean get_ValueChanged()
    // Offset: 0xD80524
    bool get_ValueChanged();
    // public System.Void set_ValueChanged(System.Boolean value)
    // Offset: 0xD8052C
    void set_ValueChanged(bool value);
    // public override System.String ToString()
    // Offset: 0xD8050C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ResourceManagement.Util.SerializedType
  #pragma pack(pop)
  static check_size<sizeof(SerializedType), 24 + sizeof(bool)> __UnityEngine_ResourceManagement_Util_SerializedTypeSizeCheck;
  static_assert(sizeof(SerializedType) == 0x19);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::SerializedType, "UnityEngine.ResourceManagement.Util", "SerializedType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_AssemblyName
// Il2CppName: get_AssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_AssemblyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_AssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_ClassName
// Il2CppName: get_ClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_ClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_ClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::SerializedType::*)(System::Type*)>(&UnityEngine::ResourceManagement::Util::SerializedType::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_ValueChanged
// Il2CppName: get_ValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_ValueChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_ValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::set_ValueChanged
// Il2CppName: set_ValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::SerializedType::*)(bool)>(&UnityEngine::ResourceManagement::Util::SerializedType::set_ValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "set_ValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
