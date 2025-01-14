// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Including type: UnityEngine.MeshTopology
#include "UnityEngine/MeshTopology.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.SubMeshDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  struct SubMeshDescriptor/*, public System::ValueType*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE2EC70
    // private UnityEngine.Bounds <bounds>k__BackingField
    // Size: 0x18
    // Offset: 0x0
    UnityEngine::Bounds bounds;
    // Field size check
    static_assert(sizeof(UnityEngine::Bounds) == 0x18);
    // [DebuggerBrowsableAttribute] Offset: 0xE2ECAC
    // private UnityEngine.MeshTopology <topology>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::MeshTopology topology;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshTopology) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2ECE8
    // private System.Int32 <indexStart>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int indexStart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2ED24
    // private System.Int32 <indexCount>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int indexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2ED60
    // private System.Int32 <baseVertex>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int baseVertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2ED9C
    // private System.Int32 <firstVertex>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int firstVertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xE2EDD8
    // private System.Int32 <vertexCount>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SubMeshDescriptor
    constexpr SubMeshDescriptor(UnityEngine::Bounds bounds_ = {}, UnityEngine::MeshTopology topology_ = {}, int indexStart_ = {}, int indexCount_ = {}, int baseVertex_ = {}, int firstVertex_ = {}, int vertexCount_ = {}) noexcept : bounds{bounds_}, topology{topology_}, indexStart{indexStart_}, indexCount{indexCount_}, baseVertex{baseVertex_}, firstVertex{firstVertex_}, vertexCount{vertexCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private UnityEngine.Bounds <bounds>k__BackingField
    UnityEngine::Bounds _get_$bounds$k__BackingField();
    // Set instance field: private UnityEngine.Bounds <bounds>k__BackingField
    void _set_$bounds$k__BackingField(UnityEngine::Bounds value);
    // Get instance field: private UnityEngine.MeshTopology <topology>k__BackingField
    UnityEngine::MeshTopology _get_$topology$k__BackingField();
    // Set instance field: private UnityEngine.MeshTopology <topology>k__BackingField
    void _set_$topology$k__BackingField(UnityEngine::MeshTopology value);
    // Get instance field: private System.Int32 <indexStart>k__BackingField
    int _get_$indexStart$k__BackingField();
    // Set instance field: private System.Int32 <indexStart>k__BackingField
    void _set_$indexStart$k__BackingField(int value);
    // Get instance field: private System.Int32 <indexCount>k__BackingField
    int _get_$indexCount$k__BackingField();
    // Set instance field: private System.Int32 <indexCount>k__BackingField
    void _set_$indexCount$k__BackingField(int value);
    // Get instance field: private System.Int32 <baseVertex>k__BackingField
    int _get_$baseVertex$k__BackingField();
    // Set instance field: private System.Int32 <baseVertex>k__BackingField
    void _set_$baseVertex$k__BackingField(int value);
    // Get instance field: private System.Int32 <firstVertex>k__BackingField
    int _get_$firstVertex$k__BackingField();
    // Set instance field: private System.Int32 <firstVertex>k__BackingField
    void _set_$firstVertex$k__BackingField(int value);
    // Get instance field: private System.Int32 <vertexCount>k__BackingField
    int _get_$vertexCount$k__BackingField();
    // Set instance field: private System.Int32 <vertexCount>k__BackingField
    void _set_$vertexCount$k__BackingField(int value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0xF84B88
    UnityEngine::Bounds get_bounds();
    // public UnityEngine.MeshTopology get_topology()
    // Offset: 0xF84B9C
    UnityEngine::MeshTopology get_topology();
    // public System.Int32 get_indexStart()
    // Offset: 0xF84BA4
    int get_indexStart();
    // public System.Int32 get_indexCount()
    // Offset: 0xF84BAC
    int get_indexCount();
    // public System.Int32 get_baseVertex()
    // Offset: 0xF84BB4
    int get_baseVertex();
    // public System.Int32 get_firstVertex()
    // Offset: 0xF84BBC
    int get_firstVertex();
    // public System.Int32 get_vertexCount()
    // Offset: 0xF84BC4
    int get_vertexCount();
    // public override System.String ToString()
    // Offset: 0xF84BCC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Rendering.SubMeshDescriptor
  #pragma pack(pop)
  static check_size<sizeof(SubMeshDescriptor), 44 + sizeof(int)> __UnityEngine_Rendering_SubMeshDescriptorSizeCheck;
  static_assert(sizeof(SubMeshDescriptor) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SubMeshDescriptor, "UnityEngine.Rendering", "SubMeshDescriptor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_topology
// Il2CppName: get_topology
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MeshTopology (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_topology)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_topology", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_indexStart
// Il2CppName: get_indexStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_indexStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_indexStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_indexCount
// Il2CppName: get_indexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_indexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_indexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_baseVertex
// Il2CppName: get_baseVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_baseVertex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_baseVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_firstVertex
// Il2CppName: get_firstVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_firstVertex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_firstVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_vertexCount
// Il2CppName: get_vertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_vertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_vertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
