// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.BoneWeight
#include "UnityEngine/BoneWeight.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Rendering.VertexAttribute
#include "UnityEngine/Rendering/VertexAttribute.hpp"
// Including type: UnityEngine.Rendering.VertexAttributeFormat
#include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IndexFormat
  struct IndexFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshTopology
  struct MeshTopology;
  // Forward declaring type: Bounds
  struct Bounds;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Mesh
  // [NativeHeaderAttribute] Offset: CB9B4C
  // [RequiredByNativeCodeAttribute] Offset: CB9B4C
  class Mesh : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: Mesh
    Mesh() noexcept {}
    // static private System.Void Internal_Create(UnityEngine.Mesh mono)
    // Offset: 0x1AB0C7C
    static void Internal_Create(UnityEngine::Mesh* mono);
    // public System.Void set_indexFormat(UnityEngine.Rendering.IndexFormat value)
    // Offset: 0x1AB0D54
    void set_indexFormat(UnityEngine::Rendering::IndexFormat value);
    // private System.UInt32 GetIndexCountImpl(System.Int32 submesh)
    // Offset: 0x1AB0DA4
    uint GetIndexCountImpl(int submesh);
    // private System.Int32[] GetTrianglesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1AB0DF4
    ::Array<int>* GetTrianglesImpl(int submesh, bool applyBaseVertex);
    // private System.Int32[] GetIndicesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1AB0E4C
    ::Array<int>* GetIndicesImpl(int submesh, bool applyBaseVertex);
    // private System.Void SetIndicesImpl(System.Int32 submesh, UnityEngine.MeshTopology topology, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array indices, System.Int32 arrayStart, System.Int32 arraySize, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB0EA4
    void SetIndicesImpl(int submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array* indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex);
    // private System.Void PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute ch)
    // Offset: 0x1AB0F44
    void PrintErrorCantAccessChannel(UnityEngine::Rendering::VertexAttribute ch);
    // public System.Boolean HasVertexAttribute(UnityEngine.Rendering.VertexAttribute attr)
    // Offset: 0x1AB0F94
    bool HasVertexAttribute(UnityEngine::Rendering::VertexAttribute attr);
    // private System.Void SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 arraySize, System.Int32 valuesStart, System.Int32 valuesCount)
    // Offset: 0x1AB0FE4
    void SetArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values, int arraySize, int valuesStart, int valuesCount);
    // private System.Array GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
    // Offset: 0x1AB107C
    System::Array* GetAllocArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim);
    // private System.Void GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values)
    // Offset: 0x1AB10E4
    void GetArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values);
    // private System.Void SetBoneWeightsImpl(UnityEngine.BoneWeight[] weights)
    // Offset: 0x1AB1154
    void SetBoneWeightsImpl(::Array<UnityEngine::BoneWeight>* weights);
    // public System.Void set_bindposes(UnityEngine.Matrix4x4[] value)
    // Offset: 0x1AB11A4
    void set_bindposes(::Array<UnityEngine::Matrix4x4>* value);
    // System.Boolean get_canAccess()
    // Offset: 0x1AB11F4
    bool get_canAccess();
    // public System.Int32 get_vertexCount()
    // Offset: 0x1AB1234
    int get_vertexCount();
    // public System.Int32 get_subMeshCount()
    // Offset: 0x1AB1274
    int get_subMeshCount();
    // public System.Void set_subMeshCount(System.Int32 value)
    // Offset: 0x1AB12B4
    void set_subMeshCount(int value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1AB1304
    UnityEngine::Bounds get_bounds();
    // public System.Void set_bounds(UnityEngine.Bounds value)
    // Offset: 0x1AB13C0
    void set_bounds(UnityEngine::Bounds value);
    // private System.Void ClearImpl(System.Boolean keepVertexLayout)
    // Offset: 0x1AB1460
    void ClearImpl(bool keepVertexLayout);
    // private System.Void RecalculateBoundsImpl()
    // Offset: 0x1AB14B0
    void RecalculateBoundsImpl();
    // private System.Void MarkDynamicImpl()
    // Offset: 0x1AB14F0
    void MarkDynamicImpl();
    // private System.Void UploadMeshDataImpl(System.Boolean markNoLongerReadable)
    // Offset: 0x1AB1530
    void UploadMeshDataImpl(bool markNoLongerReadable);
    // private UnityEngine.MeshTopology GetTopologyImpl(System.Int32 submesh)
    // Offset: 0x1AB1580
    UnityEngine::MeshTopology GetTopologyImpl(int submesh);
    // UnityEngine.Rendering.VertexAttribute GetUVChannel(System.Int32 uvIndex)
    // Offset: 0x1AB15D0
    UnityEngine::Rendering::VertexAttribute GetUVChannel(int uvIndex);
    // static System.Int32 DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0x1AB1664
    static int DefaultDimensionForChannel(UnityEngine::Rendering::VertexAttribute channel);
    // private T[] GetAllocArrayFromChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::GetAllocArrayFromChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllocArrayFromChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(dim)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, channel, format, dim);
    }
    // private T[] GetAllocArrayFromChannel(UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::GetAllocArrayFromChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllocArrayFromChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(channel)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, channel);
    }
    // private System.Void SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 valuesArrayLength, System.Int32 valuesStart, System.Int32 valuesCount)
    // Offset: 0x1AB1720
    void SetSizedArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values, int valuesArrayLength, int valuesStart, int valuesCount);
    // private System.Void SetArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, T[] values)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, ::Array<T>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::SetArrayForChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetArrayForChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(dim), ::il2cpp_utils::ExtractType(values)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, channel, format, dim, values);
    }
    // private System.Void SetArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, T[] values)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, ::Array<T>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::SetArrayForChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetArrayForChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(values)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, channel, values);
    }
    // private System.Void SetListForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Collections.Generic.List`1<T> values, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Collections::Generic::List_1<T>* values, int start, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::SetListForChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetListForChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(dim), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, channel, format, dim, values, start, length);
    }
    // private System.Void SetListForChannel(UnityEngine.Rendering.VertexAttribute channel, System.Collections.Generic.List`1<T> values, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, System::Collections::Generic::List_1<T>* values, int start, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::SetListForChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetListForChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, channel, values, start, length);
    }
    // private System.Void GetListForChannel(System.Collections.Generic.List`1<T> buffer, System.Int32 capacity, UnityEngine.Rendering.VertexAttribute channel, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetListForChannel(System::Collections::Generic::List_1<T>* buffer, int capacity, UnityEngine::Rendering::VertexAttribute channel, int dim) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::GetListForChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetListForChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(buffer), ::il2cpp_utils::ExtractType(capacity), ::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(dim)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, buffer, capacity, channel, dim);
    }
    // private System.Void GetListForChannel(System.Collections.Generic.List`1<T> buffer, System.Int32 capacity, UnityEngine.Rendering.VertexAttribute channel, System.Int32 dim, UnityEngine.Rendering.VertexAttributeFormat channelType)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetListForChannel(System::Collections::Generic::List_1<T>* buffer, int capacity, UnityEngine::Rendering::VertexAttribute channel, int dim, UnityEngine::Rendering::VertexAttributeFormat channelType) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::GetListForChannel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetListForChannel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(buffer), ::il2cpp_utils::ExtractType(capacity), ::il2cpp_utils::ExtractType(channel), ::il2cpp_utils::ExtractType(dim), ::il2cpp_utils::ExtractType(channelType)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, buffer, capacity, channel, dim, channelType);
    }
    // public UnityEngine.Vector3[] get_vertices()
    // Offset: 0x1AB19AC
    ::Array<UnityEngine::Vector3>* get_vertices();
    // public System.Void set_vertices(UnityEngine.Vector3[] value)
    // Offset: 0x1AB1A00
    void set_vertices(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Vector3[] get_normals()
    // Offset: 0x1AB1A64
    ::Array<UnityEngine::Vector3>* get_normals();
    // public System.Void set_normals(UnityEngine.Vector3[] value)
    // Offset: 0x1AB1AB8
    void set_normals(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Vector4[] get_tangents()
    // Offset: 0x1AB1B1C
    ::Array<UnityEngine::Vector4>* get_tangents();
    // public System.Void set_tangents(UnityEngine.Vector4[] value)
    // Offset: 0x1AB1B70
    void set_tangents(::Array<UnityEngine::Vector4>* value);
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0x1AB1BD4
    ::Array<UnityEngine::Vector2>* get_uv();
    // public System.Void set_uv(UnityEngine.Vector2[] value)
    // Offset: 0x1AB1C28
    void set_uv(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv2()
    // Offset: 0x1AB1C8C
    ::Array<UnityEngine::Vector2>* get_uv2();
    // public System.Void set_uv2(UnityEngine.Vector2[] value)
    // Offset: 0x1AB1CE0
    void set_uv2(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv3()
    // Offset: 0x1AB1D44
    ::Array<UnityEngine::Vector2>* get_uv3();
    // public System.Void set_uv3(UnityEngine.Vector2[] value)
    // Offset: 0x1AB1D98
    void set_uv3(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv4()
    // Offset: 0x1AB1DFC
    ::Array<UnityEngine::Vector2>* get_uv4();
    // public UnityEngine.Color[] get_colors()
    // Offset: 0x1AB1E50
    ::Array<UnityEngine::Color>* get_colors();
    // public System.Void set_colors(UnityEngine.Color[] value)
    // Offset: 0x1AB1EA4
    void set_colors(::Array<UnityEngine::Color>* value);
    // public UnityEngine.Color32[] get_colors32()
    // Offset: 0x1AB1F08
    ::Array<UnityEngine::Color32>* get_colors32();
    // public System.Void set_colors32(UnityEngine.Color32[] value)
    // Offset: 0x1AB1F64
    void set_colors32(::Array<UnityEngine::Color32>* value);
    // public System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices)
    // Offset: 0x1AB1FD0
    void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3>* inVertices);
    // public System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB2040
    void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3>* inVertices, int start, int length);
    // public System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals)
    // Offset: 0x1AB20BC
    void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3>* inNormals);
    // public System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB212C
    void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3>* inNormals, int start, int length);
    // public System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents)
    // Offset: 0x1AB21A8
    void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4>* inTangents);
    // public System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB2218
    void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4>* inTangents, int start, int length);
    // public System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors)
    // Offset: 0x1AB2294
    void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32>* inColors);
    // public System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB2304
    void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32>* inColors, int start, int length);
    // private System.Void SetUvsImpl(System.Int32 uvIndex, System.Int32 dim, System.Collections.Generic.List`1<T> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetUvsImpl(int uvIndex, int dim, System::Collections::Generic::List_1<T>* uvs, int start, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::SetUvsImpl");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetUvsImpl", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(uvIndex), ::il2cpp_utils::ExtractType(dim), ::il2cpp_utils::ExtractType(uvs), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, uvIndex, dim, uvs, start, length);
    }
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs)
    // Offset: 0x1AB2388
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector2>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector3> uvs)
    // Offset: 0x1AB2484
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector3>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
    // Offset: 0x1AB2580
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB2400
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector2>* uvs, int start, int length);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector3> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB24FC
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector3>* uvs, int start, int length);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB25F8
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs, int start, int length);
    // private System.Void GetUVsImpl(System.Int32 uvIndex, System.Collections.Generic.List`1<T> uvs, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetUVsImpl(int uvIndex, System::Collections::Generic::List_1<T>* uvs, int dim) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::GetUVsImpl");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetUVsImpl", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(uvIndex), ::il2cpp_utils::ExtractType(uvs), ::il2cpp_utils::ExtractType(dim)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, uvIndex, uvs, dim);
    }
    // public System.Void GetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
    // Offset: 0x1AB267C
    void GetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs);
    // private System.Void PrintErrorCantAccessIndices()
    // Offset: 0x1AB26E8
    void PrintErrorCantAccessIndices();
    // private System.Boolean CheckCanAccessSubmesh(System.Int32 submesh, System.Boolean errorAboutTriangles)
    // Offset: 0x1AB2800
    bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles);
    // private System.Boolean CheckCanAccessSubmeshTriangles(System.Int32 submesh)
    // Offset: 0x1AB2930
    bool CheckCanAccessSubmeshTriangles(int submesh);
    // private System.Boolean CheckCanAccessSubmeshIndices(System.Int32 submesh)
    // Offset: 0x1AB2938
    bool CheckCanAccessSubmeshIndices(int submesh);
    // public System.Int32[] get_triangles()
    // Offset: 0x1AB2940
    ::Array<int>* get_triangles();
    // public System.Void set_triangles(System.Int32[] value)
    // Offset: 0x1AB29FC
    void set_triangles(::Array<int>* value);
    // public System.Int32[] GetTriangles(System.Int32 submesh)
    // Offset: 0x1AB2B80
    ::Array<int>* GetTriangles(int submesh);
    // public System.Int32[] GetTriangles(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1AB2B88
    ::Array<int>* GetTriangles(int submesh, bool applyBaseVertex);
    // public System.Int32[] GetIndices(System.Int32 submesh)
    // Offset: 0x1AB2C38
    ::Array<int>* GetIndices(int submesh);
    // public System.Int32[] GetIndices(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1AB2C40
    ::Array<int>* GetIndices(int submesh, bool applyBaseVertex);
    // public System.UInt32 GetIndexCount(System.Int32 submesh)
    // Offset: 0x1AB2CF0
    uint GetIndexCount(int submesh);
    // private System.Void CheckIndicesArrayRange(System.Int32 valuesLength, System.Int32 start, System.Int32 length)
    // Offset: 0x1AB2DD4
    void CheckIndicesArrayRange(int valuesLength, int start, int length);
    // private System.Void SetTrianglesImpl(System.Int32 submesh, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array triangles, System.Int32 trianglesArrayLength, System.Int32 start, System.Int32 length, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB2AD4
    void SetTrianglesImpl(int submesh, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array* triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh)
    // Offset: 0x1AB2F84
    void SetTriangles(::Array<int>* triangles, int submesh);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB2F90
    void SetTriangles(::Array<int>* triangles, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB3000
    void SetTriangles(::Array<int>* triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh)
    // Offset: 0x1AB30A4
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int submesh);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB30B0
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB3140
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh)
    // Offset: 0x1AB3274
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds)
    // Offset: 0x1AB3304
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB3280
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Int32[] indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB3310
    void SetIndices(::Array<int>* indices, int indicesStart, int indicesLength, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB3400
    void SetIndices(System::Collections::Generic::List_1<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1AB34AC
    void SetIndices(System::Collections::Generic::List_1<int>* indices, int indicesStart, int indicesLength, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void set_boneWeights(UnityEngine.BoneWeight[] value)
    // Offset: 0x1AB35EC
    void set_boneWeights(::Array<UnityEngine::BoneWeight>* value);
    // public System.Void Clear()
    // Offset: 0x1AB363C
    void Clear();
    // public System.Void RecalculateBounds()
    // Offset: 0x1AB3680
    void RecalculateBounds();
    // public System.Void MarkDynamic()
    // Offset: 0x1AB3770
    void MarkDynamic();
    // public System.Void UploadMeshData(System.Boolean markNoLongerReadable)
    // Offset: 0x1AB37E8
    void UploadMeshData(bool markNoLongerReadable);
    // public UnityEngine.MeshTopology GetTopology(System.Int32 submesh)
    // Offset: 0x1AB3874
    UnityEngine::MeshTopology GetTopology(int submesh);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x1AB1370
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void set_bounds_Injected(ref UnityEngine.Bounds value)
    // Offset: 0x1AB1410
    void set_bounds_Injected(UnityEngine::Bounds& value);
    // public System.Void .ctor()
    // Offset: 0x1AB0CBC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Mesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Mesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Mesh*, creationType>()));
    }
  }; // UnityEngine.Mesh
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mesh*, "UnityEngine", "Mesh");
