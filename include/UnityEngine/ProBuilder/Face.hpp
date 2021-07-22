// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.AutoUnwrapSettings
#include "UnityEngine/ProBuilder/AutoUnwrapSettings.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Face
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E244A4
  class Face : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xE25008
    // private System.Int32[] m_Indexes
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* m_Indexes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE25054
    // private System.Int32 m_SmoothingGroup
    // Size: 0x4
    // Offset: 0x18
    int m_SmoothingGroup;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE250A0
    // private UnityEngine.ProBuilder.AutoUnwrapSettings m_Uv
    // Size: 0x20
    // Offset: 0x1C
    UnityEngine::ProBuilder::AutoUnwrapSettings m_Uv;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::AutoUnwrapSettings) == 0x20);
    // Padding between fields: m_Uv and: m_Material
    char __padding2[0x4] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xE250EC
    // private UnityEngine.Material m_Material
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Material* m_Material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Int32 m_SubmeshIndex
    // Size: 0x4
    // Offset: 0x48
    int m_SubmeshIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE25148
    // private System.Boolean m_ManualUV
    // Size: 0x1
    // Offset: 0x4C
    bool m_ManualUV;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ManualUV and: elementGroup
    char __padding5[0x3] = {};
    // System.Int32 elementGroup
    // Size: 0x4
    // Offset: 0x50
    int elementGroup;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_TextureGroup
    // Size: 0x4
    // Offset: 0x54
    int m_TextureGroup;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] m_DistinctIndexes
    // Size: 0x8
    // Offset: 0x58
    ::Array<int>* m_DistinctIndexes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private UnityEngine.ProBuilder.Edge[] m_Edges
    // Size: 0x8
    // Offset: 0x60
    ::Array<UnityEngine::ProBuilder::Edge>* m_Edges;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ProBuilder::Edge>*) == 0x8);
    // Creating value type constructor for type: Face
    Face(::Array<int>* m_Indexes_ = {}, int m_SmoothingGroup_ = {}, UnityEngine::ProBuilder::AutoUnwrapSettings m_Uv_ = {}, UnityEngine::Material* m_Material_ = {}, int m_SubmeshIndex_ = {}, bool m_ManualUV_ = {}, int elementGroup_ = {}, int m_TextureGroup_ = {}, ::Array<int>* m_DistinctIndexes_ = {}, ::Array<UnityEngine::ProBuilder::Edge>* m_Edges_ = {}) noexcept : m_Indexes{m_Indexes_}, m_SmoothingGroup{m_SmoothingGroup_}, m_Uv{m_Uv_}, m_Material{m_Material_}, m_SubmeshIndex{m_SubmeshIndex_}, m_ManualUV{m_ManualUV_}, elementGroup{elementGroup_}, m_TextureGroup{m_TextureGroup_}, m_DistinctIndexes{m_DistinctIndexes_}, m_Edges{m_Edges_} {}
    // public System.Boolean get_manualUV()
    // Offset: 0x1AE271C
    bool get_manualUV();
    // public System.Void set_manualUV(System.Boolean value)
    // Offset: 0x1AE2724
    void set_manualUV(bool value);
    // public System.Int32 get_textureGroup()
    // Offset: 0x1AE2730
    int get_textureGroup();
    // public System.Void set_textureGroup(System.Int32 value)
    // Offset: 0x1AE2738
    void set_textureGroup(int value);
    // System.Int32[] get_indexesInternal()
    // Offset: 0x1AE2740
    ::Array<int>* get_indexesInternal();
    // System.Void set_indexesInternal(System.Int32[] value)
    // Offset: 0x1AE2748
    void set_indexesInternal(::Array<int>* value);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> get_indexes()
    // Offset: 0x1AE283C
    System::Collections::ObjectModel::ReadOnlyCollection_1<int>* get_indexes();
    // System.Int32[] get_distinctIndexesInternal()
    // Offset: 0x1AE2078
    ::Array<int>* get_distinctIndexesInternal();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> get_distinctIndexes()
    // Offset: 0x1AE2A34
    System::Collections::ObjectModel::ReadOnlyCollection_1<int>* get_distinctIndexes();
    // UnityEngine.ProBuilder.Edge[] get_edgesInternal()
    // Offset: 0x1AE253C
    ::Array<UnityEngine::ProBuilder::Edge>* get_edgesInternal();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ProBuilder.Edge> get_edges()
    // Offset: 0x1AE2D20
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::Edge>* get_edges();
    // public System.Int32 get_smoothingGroup()
    // Offset: 0x1AE2DA0
    int get_smoothingGroup();
    // public System.Void set_smoothingGroup(System.Int32 value)
    // Offset: 0x1AE2DA8
    void set_smoothingGroup(int value);
    // public UnityEngine.Material get_material()
    // Offset: 0x1AE2DB0
    UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0x1AE2DB8
    void set_material(UnityEngine::Material* value);
    // public System.Int32 get_submeshIndex()
    // Offset: 0x1AE2DC0
    int get_submeshIndex();
    // public System.Void set_submeshIndex(System.Int32 value)
    // Offset: 0x1AE2DC8
    void set_submeshIndex(int value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings get_uv()
    // Offset: 0x1AE2DD0
    UnityEngine::ProBuilder::AutoUnwrapSettings get_uv();
    // public System.Void set_uv(UnityEngine.ProBuilder.AutoUnwrapSettings value)
    // Offset: 0x1AE2DE0
    void set_uv(UnityEngine::ProBuilder::AutoUnwrapSettings value);
    // public System.Int32 get_Item(System.Int32 i)
    // Offset: 0x1AE2DF0
    int get_Item(int i);
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Int32> indices)
    // Offset: 0x1AE2E54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Face* New_ctor(System::Collections::Generic::IEnumerable_1<int>* indices) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Face::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Face*, creationType>(indices)));
    }
    // System.Void .ctor(System.Int32[] triangles, UnityEngine.Material m, UnityEngine.ProBuilder.AutoUnwrapSettings u, System.Int32 smoothing, System.Int32 texture, System.Int32 element, System.Boolean manualUVs)
    // Offset: 0x1AE2F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Face* New_ctor(::Array<int>* triangles, UnityEngine::Material* m, UnityEngine::ProBuilder::AutoUnwrapSettings u, int smoothing, int texture, int element, bool manualUVs) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Face::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Face*, creationType>(triangles, m, u, smoothing, texture, element, manualUVs)));
    }
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Int32> triangles, System.Int32 submeshIndex, UnityEngine.ProBuilder.AutoUnwrapSettings u, System.Int32 smoothing, System.Int32 texture, System.Int32 element, System.Boolean manualUVs)
    // Offset: 0x1AE2FC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Face* New_ctor(System::Collections::Generic::IEnumerable_1<int>* triangles, int submeshIndex, UnityEngine::ProBuilder::AutoUnwrapSettings u, int smoothing, int texture, int element, bool manualUVs) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Face::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Face*, creationType>(triangles, submeshIndex, u, smoothing, texture, element, manualUVs)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.Face other)
    // Offset: 0x1AE3070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Face* New_ctor(UnityEngine::ProBuilder::Face* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Face::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Face*, creationType>(other)));
    }
    // public System.Void SetIndexes(System.Collections.Generic.IEnumerable`1<System.Int32> indices)
    // Offset: 0x1AE28AC
    void SetIndexes(System::Collections::Generic::IEnumerable_1<int>* indices);
    // public System.Void CopyFrom(UnityEngine.ProBuilder.Face other)
    // Offset: 0x1AE30A0
    void CopyFrom(UnityEngine::ProBuilder::Face* other);
    // System.Void InvalidateCache()
    // Offset: 0x1AE2834
    void InvalidateCache();
    // private UnityEngine.ProBuilder.Edge[] CacheEdges()
    // Offset: 0x1AE2AB4
    ::Array<UnityEngine::ProBuilder::Edge>* CacheEdges();
    // private System.Int32[] CacheDistinctIndexes()
    // Offset: 0x1AE29B0
    ::Array<int>* CacheDistinctIndexes();
    // public System.Boolean Contains(System.Int32 a, System.Int32 b, System.Int32 c)
    // Offset: 0x1AE31D4
    bool Contains(int a, int b, int c);
    // public System.Boolean IsQuad()
    // Offset: 0x1AE3274
    bool IsQuad();
    // public System.Int32[] ToQuad()
    // Offset: 0x1AE32C8
    ::Array<int>* ToQuad();
    // public System.Void ShiftIndexes(System.Int32 offset)
    // Offset: 0x1AE380C
    void ShiftIndexes(int offset);
    // private System.Int32 SmallestIndexValue()
    // Offset: 0x1AE387C
    int SmallestIndexValue();
    // public System.Void ShiftIndexesToZero()
    // Offset: 0x1AE38DC
    void ShiftIndexesToZero();
    // public System.Void Reverse()
    // Offset: 0x1AE394C
    void Reverse();
    // static System.Void GetIndices(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x1AE3978
    static void GetIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::List_1<int>* indices);
    // static System.Void GetDistinctIndices(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x1AE3C70
    static void GetDistinctIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::List_1<int>* indices);
    // System.Boolean TryGetNextEdge(UnityEngine.ProBuilder.Edge source, System.Int32 index, ref UnityEngine.ProBuilder.Edge nextEdge, ref System.Int32 nextIndex)
    // Offset: 0x1AE3F8C
    bool TryGetNextEdge(UnityEngine::ProBuilder::Edge source, int index, UnityEngine::ProBuilder::Edge& nextEdge, int& nextIndex);
    // public System.Void .ctor()
    // Offset: 0x1AE2E2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Face* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Face::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Face*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1AE364C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Face
  #pragma pack(pop)
  static check_size<sizeof(Face), 96 + sizeof(::Array<UnityEngine::ProBuilder::Edge>*)> __UnityEngine_ProBuilder_FaceSizeCheck;
  static_assert(sizeof(Face) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Face*, "UnityEngine.ProBuilder", "Face");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_manualUV
// Il2CppName: get_manualUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_manualUV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_manualUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::set_manualUV
// Il2CppName: set_manualUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(bool)>(&UnityEngine::ProBuilder::Face::set_manualUV)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "set_manualUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_textureGroup
// Il2CppName: get_textureGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_textureGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_textureGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::set_textureGroup
// Il2CppName: set_textureGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(int)>(&UnityEngine::ProBuilder::Face::set_textureGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "set_textureGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_indexesInternal
// Il2CppName: get_indexesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_indexesInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_indexesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::set_indexesInternal
// Il2CppName: set_indexesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(::Array<int>*)>(&UnityEngine::ProBuilder::Face::set_indexesInternal)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "set_indexesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_indexes
// Il2CppName: get_indexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<int>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_indexes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_indexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_distinctIndexesInternal
// Il2CppName: get_distinctIndexesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_distinctIndexesInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_distinctIndexesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_distinctIndexes
// Il2CppName: get_distinctIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<int>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_distinctIndexes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_distinctIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_edgesInternal
// Il2CppName: get_edgesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::Edge>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_edgesInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_edgesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_edges
// Il2CppName: get_edges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::Edge>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_edges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_edges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_smoothingGroup
// Il2CppName: get_smoothingGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_smoothingGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_smoothingGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::set_smoothingGroup
// Il2CppName: set_smoothingGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(int)>(&UnityEngine::ProBuilder::Face::set_smoothingGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "set_smoothingGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::set_material
// Il2CppName: set_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(UnityEngine::Material*)>(&UnityEngine::ProBuilder::Face::set_material)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "set_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_submeshIndex
// Il2CppName: get_submeshIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_submeshIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_submeshIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::set_submeshIndex
// Il2CppName: set_submeshIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(int)>(&UnityEngine::ProBuilder::Face::set_submeshIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "set_submeshIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_uv
// Il2CppName: get_uv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::AutoUnwrapSettings (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::get_uv)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_uv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::set_uv
// Il2CppName: set_uv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::Face::set_uv)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "AutoUnwrapSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "set_uv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Face::*)(int)>(&UnityEngine::ProBuilder::Face::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::SetIndexes
// Il2CppName: SetIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::Face::SetIndexes)> {
  static const MethodInfo* get() {
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "SetIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::Face::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::InvalidateCache
// Il2CppName: InvalidateCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::InvalidateCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "InvalidateCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::CacheEdges
// Il2CppName: CacheEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::ProBuilder::Edge>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::CacheEdges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "CacheEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::CacheDistinctIndexes
// Il2CppName: CacheDistinctIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::CacheDistinctIndexes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "CacheDistinctIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Face::*)(int, int, int)>(&UnityEngine::ProBuilder::Face::Contains)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::IsQuad
// Il2CppName: IsQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::IsQuad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "IsQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::ToQuad
// Il2CppName: ToQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::ToQuad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "ToQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::ShiftIndexes
// Il2CppName: ShiftIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)(int)>(&UnityEngine::ProBuilder::Face::ShiftIndexes)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "ShiftIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::SmallestIndexValue
// Il2CppName: SmallestIndexValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::SmallestIndexValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "SmallestIndexValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::ShiftIndexesToZero
// Il2CppName: ShiftIndexesToZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::ShiftIndexesToZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "ShiftIndexesToZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::Reverse
// Il2CppName: Reverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::Reverse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "Reverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::GetIndices
// Il2CppName: GetIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::Face::GetIndices)> {
  static const MethodInfo* get() {
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "GetIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{faces, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::GetDistinctIndices
// Il2CppName: GetDistinctIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::Face::GetDistinctIndices)> {
  static const MethodInfo* get() {
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "GetDistinctIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{faces, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::TryGetNextEdge
// Il2CppName: TryGetNextEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Face::*)(UnityEngine::ProBuilder::Edge, int, UnityEngine::ProBuilder::Edge&, int&)>(&UnityEngine::ProBuilder::Face::TryGetNextEdge)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nextEdge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->this_arg;
    static auto* nextIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "TryGetNextEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, index, nextEdge, nextIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Face::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::Face::*)()>(&UnityEngine::ProBuilder::Face::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Face*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
