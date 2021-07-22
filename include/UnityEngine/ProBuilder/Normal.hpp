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
  // [TokenAttribute] Offset: FFFFFFFF
  struct Normal/*, public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::Normal>*/ {
    public:
    // private UnityEngine.Vector3 <normal>k__BackingField
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector4 <tangent>k__BackingField
    // Size: 0x10
    // Offset: 0xC
    UnityEngine::Vector4 tangent;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
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
    // Offset: 0xEE4930
    UnityEngine::Vector3 get_normal();
    // public System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0xEE493C
    void set_normal(UnityEngine::Vector3 value);
    // public UnityEngine.Vector4 get_tangent()
    // Offset: 0xEE4948
    UnityEngine::Vector4 get_tangent();
    // public System.Void set_tangent(UnityEngine.Vector4 value)
    // Offset: 0xEE4954
    void set_tangent(UnityEngine::Vector4 value);
    // public UnityEngine.Vector3 get_bitangent()
    // Offset: 0xEE4960
    UnityEngine::Vector3 get_bitangent();
    // public System.Void set_bitangent(UnityEngine.Vector3 value)
    // Offset: 0xEE496C
    void set_bitangent(UnityEngine::Vector3 value);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Normal other)
    // Offset: 0xEE4988
    bool Equals(UnityEngine::ProBuilder::Normal other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEE4978
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEE4980
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Normal
  #pragma pack(pop)
  static check_size<sizeof(Normal), 28 + sizeof(UnityEngine::Vector3)> __UnityEngine_ProBuilder_NormalSizeCheck;
  static_assert(sizeof(Normal) == 0x28);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Normal a, UnityEngine.ProBuilder.Normal b)
  // Offset: 0x1703268
  bool operator ==(const UnityEngine::ProBuilder::Normal& a, const UnityEngine::ProBuilder::Normal& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Normal a, UnityEngine.ProBuilder.Normal b)
  // Offset: 0x170329C
  bool operator !=(const UnityEngine::ProBuilder::Normal& a, const UnityEngine::ProBuilder::Normal& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Normal, "UnityEngine.ProBuilder", "Normal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::ProBuilder::Normal::*)()>(&UnityEngine::ProBuilder::Normal::get_normal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::set_normal
// Il2CppName: set_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Normal::*)(UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Normal::set_normal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "set_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::get_tangent
// Il2CppName: get_tangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (UnityEngine::ProBuilder::Normal::*)()>(&UnityEngine::ProBuilder::Normal::get_tangent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "get_tangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::set_tangent
// Il2CppName: set_tangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Normal::*)(UnityEngine::Vector4)>(&UnityEngine::ProBuilder::Normal::set_tangent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "set_tangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::get_bitangent
// Il2CppName: get_bitangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::ProBuilder::Normal::*)()>(&UnityEngine::ProBuilder::Normal::get_bitangent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "get_bitangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::set_bitangent
// Il2CppName: set_bitangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Normal::*)(UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Normal::set_bitangent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "set_bitangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Normal::*)(UnityEngine::ProBuilder::Normal)>(&UnityEngine::ProBuilder::Normal::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Normal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Normal::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::Normal::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Normal::*)()>(&UnityEngine::ProBuilder::Normal::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normal), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normal::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
