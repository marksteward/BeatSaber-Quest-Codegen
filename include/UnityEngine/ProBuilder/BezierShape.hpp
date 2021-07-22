// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ProBuilder.BezierPoint
#include "UnityEngine/ProBuilder/BezierPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.BezierShape
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E24348
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  // [ExcludeFromObjectFactoryAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E24348
  class BezierShape : public UnityEngine::MonoBehaviour {
    public:
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.BezierPoint> points
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint>* points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint>*) == 0x8);
    // public System.Boolean closeLoop
    // Size: 0x1
    // Offset: 0x20
    bool closeLoop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closeLoop and: radius
    char __padding1[0x3] = {};
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x24
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 rows
    // Size: 0x4
    // Offset: 0x28
    int rows;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 columns
    // Size: 0x4
    // Offset: 0x2C
    int columns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean smooth
    // Size: 0x1
    // Offset: 0x30
    bool smooth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsEditing
    // Size: 0x1
    // Offset: 0x31
    bool m_IsEditing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsEditing and: m_Mesh
    char __padding6[0x6] = {};
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Mesh
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // Creating value type constructor for type: BezierShape
    BezierShape(System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint>* points_ = {}, bool closeLoop_ = {}, float radius_ = {}, int rows_ = {}, int columns_ = {}, bool smooth_ = {}, bool m_IsEditing_ = {}, UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh_ = {}) noexcept : points{points_}, closeLoop{closeLoop_}, radius{radius_}, rows{rows_}, columns{columns_}, smooth{smooth_}, m_IsEditing{m_IsEditing_}, m_Mesh{m_Mesh_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isEditing()
    // Offset: 0x1F2F7C4
    bool get_isEditing();
    // public System.Void set_isEditing(System.Boolean value)
    // Offset: 0x1F2F7CC
    void set_isEditing(bool value);
    // public UnityEngine.ProBuilder.ProBuilderMesh get_mesh()
    // Offset: 0x1F2F7D8
    UnityEngine::ProBuilder::ProBuilderMesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.ProBuilder.ProBuilderMesh value)
    // Offset: 0x1F2F870
    void set_mesh(UnityEngine::ProBuilder::ProBuilderMesh* value);
    // public System.Void Init()
    // Offset: 0x1F2F878
    void Init();
    // public System.Void Refresh()
    // Offset: 0x1F2FAAC
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1F2FB7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BezierShape* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::BezierShape::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BezierShape*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.BezierShape
  #pragma pack(pop)
  static check_size<sizeof(BezierShape), 56 + sizeof(UnityEngine::ProBuilder::ProBuilderMesh*)> __UnityEngine_ProBuilder_BezierShapeSizeCheck;
  static_assert(sizeof(BezierShape) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierShape*, "UnityEngine.ProBuilder", "BezierShape");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierShape::get_isEditing
// Il2CppName: get_isEditing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::BezierShape::*)()>(&UnityEngine::ProBuilder::BezierShape::get_isEditing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierShape*), "get_isEditing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierShape::set_isEditing
// Il2CppName: set_isEditing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierShape::*)(bool)>(&UnityEngine::ProBuilder::BezierShape::set_isEditing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierShape*), "set_isEditing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierShape::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ProBuilderMesh* (UnityEngine::ProBuilder::BezierShape::*)()>(&UnityEngine::ProBuilder::BezierShape::get_mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierShape*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierShape::set_mesh
// Il2CppName: set_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierShape::*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::BezierShape::set_mesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierShape*), "set_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierShape::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierShape::*)()>(&UnityEngine::ProBuilder::BezierShape::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierShape*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierShape::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierShape::*)()>(&UnityEngine::ProBuilder::BezierShape::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierShape*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierShape::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
