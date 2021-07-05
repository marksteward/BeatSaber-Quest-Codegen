// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.VertexHelper
  class VertexHelper : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> m_Positions
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Positions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Color32> m_Colors
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Color32>* m_Colors;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Color32>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv0S
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv0S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv1S
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv1S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv2S
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv2S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv3S
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv3S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> m_Normals
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Normals;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector4> m_Tangents
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<UnityEngine::Vector4>* m_Tangents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector4>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> m_Indices
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<int>* m_Indices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Boolean m_ListsInitalized
    // Size: 0x1
    // Offset: 0x58
    bool m_ListsInitalized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VertexHelper
    VertexHelper(System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Positions_ = {}, System::Collections::Generic::List_1<UnityEngine::Color32>* m_Colors_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv0S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv1S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv2S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv3S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Normals_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector4>* m_Tangents_ = {}, System::Collections::Generic::List_1<int>* m_Indices_ = {}, bool m_ListsInitalized_ = {}) noexcept : m_Positions{m_Positions_}, m_Colors{m_Colors_}, m_Uv0S{m_Uv0S_}, m_Uv1S{m_Uv1S_}, m_Uv2S{m_Uv2S_}, m_Uv3S{m_Uv3S_}, m_Normals{m_Normals_}, m_Tangents{m_Tangents_}, m_Indices{m_Indices_}, m_ListsInitalized{m_ListsInitalized_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static UnityEngine::Vector3 _get_s_DefaultNormal();
    // Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static void _set_s_DefaultNormal(UnityEngine::Vector3 value);
    // public System.Void .ctor(UnityEngine.Mesh m)
    // Offset: 0x23A2FB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VertexHelper* New_ctor(UnityEngine::Mesh* m) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::VertexHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VertexHelper*, creationType>(m)));
    }
    // private System.Void InitializeListIfRequired()
    // Offset: 0x23A3190
    void InitializeListIfRequired();
    // public System.Void Dispose()
    // Offset: 0x23A331C
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x23A1B28
    void Clear();
    // public System.Int32 get_currentVertCount()
    // Offset: 0x23A34D0
    int get_currentVertCount();
    // public System.Int32 get_currentIndexCount()
    // Offset: 0x23A3524
    int get_currentIndexCount();
    // public System.Void PopulateUIVertex(ref UnityEngine.UIVertex vertex, System.Int32 i)
    // Offset: 0x23A3578
    void PopulateUIVertex(UnityEngine::UIVertex& vertex, int i);
    // public System.Void SetUIVertex(UnityEngine.UIVertex vertex, System.Int32 i)
    // Offset: 0x23A3758
    void SetUIVertex(UnityEngine::UIVertex vertex, int i);
    // public System.Void FillMesh(UnityEngine.Mesh mesh)
    // Offset: 0x23A38A4
    void FillMesh(UnityEngine::Mesh* mesh);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0, UnityEngine.Vector2 uv1, UnityEngine.Vector2 uv2, UnityEngine.Vector2 uv3, UnityEngine.Vector3 normal, UnityEngine.Vector4 tangent)
    // Offset: 0x23A3A08
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector2 uv2, UnityEngine::Vector2 uv3, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0, UnityEngine.Vector2 uv1, UnityEngine.Vector3 normal, UnityEngine.Vector4 tangent)
    // Offset: 0x23A3BC8
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0)
    // Offset: 0x23A3CD4
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0);
    // public System.Void AddVert(UnityEngine.UIVertex v)
    // Offset: 0x23A3E04
    void AddVert(UnityEngine::UIVertex v);
    // public System.Void AddTriangle(System.Int32 idx0, System.Int32 idx1, System.Int32 idx2)
    // Offset: 0x23A3E74
    void AddTriangle(int idx0, int idx1, int idx2);
    // public System.Void AddUIVertexQuad(UnityEngine.UIVertex[] verts)
    // Offset: 0x23A1C40
    void AddUIVertexQuad(::Array<UnityEngine::UIVertex>* verts);
    // public System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x23A3F1C
    void AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<int>* indices);
    // public System.Void AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts)
    // Offset: 0x23A3FD0
    void AddUIVertexTriangleStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts);
    // public System.Void GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> stream)
    // Offset: 0x23A4024
    void GetUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* stream);
    // static private System.Void .cctor()
    // Offset: 0x23A4078
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x23A2FAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VertexHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::VertexHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VertexHelper*, creationType>()));
    }
  }; // UnityEngine.UI.VertexHelper
  #pragma pack(pop)
  static check_size<sizeof(VertexHelper), 88 + sizeof(bool)> __UnityEngine_UI_VertexHelperSizeCheck;
  static_assert(sizeof(VertexHelper) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::VertexHelper*, "UnityEngine.UI", "VertexHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::InitializeListIfRequired
// Il2CppName: InitializeListIfRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)()>(&UnityEngine::UI::VertexHelper::InitializeListIfRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "InitializeListIfRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)()>(&UnityEngine::UI::VertexHelper::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)()>(&UnityEngine::UI::VertexHelper::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::get_currentVertCount
// Il2CppName: get_currentVertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::VertexHelper::*)()>(&UnityEngine::UI::VertexHelper::get_currentVertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "get_currentVertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::get_currentIndexCount
// Il2CppName: get_currentIndexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::VertexHelper::*)()>(&UnityEngine::UI::VertexHelper::get_currentIndexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "get_currentIndexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::PopulateUIVertex
// Il2CppName: PopulateUIVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(UnityEngine::UIVertex&, int)>(&UnityEngine::UI::VertexHelper::PopulateUIVertex)> {
  static const MethodInfo* get() {
    static auto* vertex = &::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")->this_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "PopulateUIVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertex, i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::SetUIVertex
// Il2CppName: SetUIVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(UnityEngine::UIVertex, int)>(&UnityEngine::UI::VertexHelper::SetUIVertex)> {
  static const MethodInfo* get() {
    static auto* vertex = &::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "SetUIVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertex, i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::FillMesh
// Il2CppName: FillMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(UnityEngine::Mesh*)>(&UnityEngine::UI::VertexHelper::FillMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "FillMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddVert
// Il2CppName: AddVert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(UnityEngine::Vector3, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector3, UnityEngine::Vector4)>(&UnityEngine::UI::VertexHelper::AddVert)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddVert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, color, uv0, uv1, uv2, uv3, normal, tangent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddVert
// Il2CppName: AddVert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(UnityEngine::Vector3, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector3, UnityEngine::Vector4)>(&UnityEngine::UI::VertexHelper::AddVert)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddVert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, color, uv0, uv1, normal, tangent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddVert
// Il2CppName: AddVert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(UnityEngine::Vector3, UnityEngine::Color32, UnityEngine::Vector2)>(&UnityEngine::UI::VertexHelper::AddVert)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddVert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, color, uv0});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddVert
// Il2CppName: AddVert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(UnityEngine::UIVertex)>(&UnityEngine::UI::VertexHelper::AddVert)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddVert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddTriangle
// Il2CppName: AddTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(int, int, int)>(&UnityEngine::UI::VertexHelper::AddTriangle)> {
  static const MethodInfo* get() {
    static auto* idx0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* idx1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* idx2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx0, idx1, idx2});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddUIVertexQuad
// Il2CppName: AddUIVertexQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(::Array<UnityEngine::UIVertex>*)>(&UnityEngine::UI::VertexHelper::AddUIVertexQuad)> {
  static const MethodInfo* get() {
    static auto* verts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddUIVertexQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddUIVertexStream
// Il2CppName: AddUIVertexStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(System::Collections::Generic::List_1<UnityEngine::UIVertex>*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::UI::VertexHelper::AddUIVertexStream)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddUIVertexStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::AddUIVertexTriangleStream
// Il2CppName: AddUIVertexTriangleStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(System::Collections::Generic::List_1<UnityEngine::UIVertex>*)>(&UnityEngine::UI::VertexHelper::AddUIVertexTriangleStream)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "AddUIVertexTriangleStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::GetUIVertexStream
// Il2CppName: GetUIVertexStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::VertexHelper::*)(System::Collections::Generic::List_1<UnityEngine::UIVertex>*)>(&UnityEngine::UI::VertexHelper::GetUIVertexStream)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), "GetUIVertexStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::VertexHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::VertexHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::VertexHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
