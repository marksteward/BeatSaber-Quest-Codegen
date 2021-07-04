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
// Including type: UnityEngine.Rendering.VertexAttribute
#include "UnityEngine/Rendering/VertexAttribute.hpp"
// Including type: UnityEngine.Rendering.VertexAttributeFormat
#include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.VertexAttributeDescriptor
  // [UsedByNativeCodeAttribute] Offset: D91D10
  struct VertexAttributeDescriptor/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Rendering::VertexAttributeDescriptor>*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD94A38
    // [DebuggerBrowsableAttribute] Offset: 0xD94A38
    // private UnityEngine.Rendering.VertexAttribute <attribute>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::Rendering::VertexAttribute attribute;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::VertexAttribute) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD94A74
    // [DebuggerBrowsableAttribute] Offset: 0xD94A74
    // private UnityEngine.Rendering.VertexAttributeFormat <format>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    UnityEngine::Rendering::VertexAttributeFormat format;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::VertexAttributeFormat) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD94AB0
    // [DebuggerBrowsableAttribute] Offset: 0xD94AB0
    // private System.Int32 <dimension>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int dimension;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD94AEC
    // [CompilerGeneratedAttribute] Offset: 0xD94AEC
    // private System.Int32 <stream>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    int stream;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: VertexAttributeDescriptor
    constexpr VertexAttributeDescriptor(UnityEngine::Rendering::VertexAttribute attribute_ = {}, UnityEngine::Rendering::VertexAttributeFormat format_ = {}, int dimension_ = {}, int stream_ = {}) noexcept : attribute{attribute_}, format{format_}, dimension{dimension_}, stream{stream_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Rendering::VertexAttributeDescriptor>
    operator System::IEquatable_1<UnityEngine::Rendering::VertexAttributeDescriptor>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Rendering::VertexAttributeDescriptor>*>(this);
    }
    // public UnityEngine.Rendering.VertexAttribute get_attribute()
    // Offset: 0xF06A6C
    UnityEngine::Rendering::VertexAttribute get_attribute();
    // public UnityEngine.Rendering.VertexAttributeFormat get_format()
    // Offset: 0xF06A74
    UnityEngine::Rendering::VertexAttributeFormat get_format();
    // public System.Int32 get_dimension()
    // Offset: 0xF06A7C
    int get_dimension();
    // public System.Int32 get_stream()
    // Offset: 0xF06A84
    int get_stream();
    // public System.Boolean Equals(UnityEngine.Rendering.VertexAttributeDescriptor other)
    // Offset: 0xF06AC4
    bool Equals(UnityEngine::Rendering::VertexAttributeDescriptor other);
    // public override System.String ToString()
    // Offset: 0xF06A8C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xF06A94
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF06ABC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Rendering.VertexAttributeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(VertexAttributeDescriptor), 12 + sizeof(int)> __UnityEngine_Rendering_VertexAttributeDescriptorSizeCheck;
  static_assert(sizeof(VertexAttributeDescriptor) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::VertexAttributeDescriptor, "UnityEngine.Rendering", "VertexAttributeDescriptor");
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_attribute
// Il2CppName: get_attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::VertexAttribute (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_attribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::VertexAttributeFormat (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_format)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_dimension
// Il2CppName: get_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_dimension)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_stream
// Il2CppName: get_stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_stream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VertexAttributeDescriptor::*)(UnityEngine::Rendering::VertexAttributeDescriptor)>(&UnityEngine::Rendering::VertexAttributeDescriptor::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VertexAttributeDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VertexAttributeDescriptor::*)(::Il2CppObject*)>(&UnityEngine::Rendering::VertexAttributeDescriptor::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
