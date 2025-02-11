// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/MeshType
#include "GlobalNamespace/OVRPlugin_MeshType.hpp"
// Including type: OVRPlugin/Vector3f
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Including type: OVRPlugin/Vector4s
#include "GlobalNamespace/OVRPlugin_Vector4s.hpp"
// Including type: OVRPlugin/Vector4f
#include "GlobalNamespace/OVRPlugin_Vector4f.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Mesh
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::Mesh : public ::Il2CppObject {
    public:
    // public OVRPlugin/MeshType Type
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::OVRPlugin::MeshType Type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::MeshType) == 0x4);
    // public System.UInt32 NumVertices
    // Size: 0x4
    // Offset: 0x14
    uint NumVertices;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 NumIndices
    // Size: 0x4
    // Offset: 0x18
    uint NumIndices;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: NumIndices and: VertexPositions
    char __padding2[0x4] = {};
    // public OVRPlugin/Vector3f[] VertexPositions
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* VertexPositions;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Vector3f>*) == 0x8);
    // public System.Int16[] Indices
    // Size: 0x8
    // Offset: 0x28
    ::Array<int16_t>* Indices;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // public OVRPlugin/Vector3f[] VertexNormals
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* VertexNormals;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Vector3f>*) == 0x8);
    // public OVRPlugin/Vector2f[] VertexUV0
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::OVRPlugin::Vector2f>* VertexUV0;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Vector2f>*) == 0x8);
    // public OVRPlugin/Vector4s[] BlendIndices
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::OVRPlugin::Vector4s>* BlendIndices;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Vector4s>*) == 0x8);
    // public OVRPlugin/Vector4f[] BlendWeights
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::OVRPlugin::Vector4f>* BlendWeights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Vector4f>*) == 0x8);
    // Creating value type constructor for type: Mesh
    Mesh(GlobalNamespace::OVRPlugin::MeshType Type_ = {}, uint NumVertices_ = {}, uint NumIndices_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector3f>* VertexPositions_ = {}, ::Array<int16_t>* Indices_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector3f>* VertexNormals_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector2f>* VertexUV0_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector4s>* BlendIndices_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector4f>* BlendWeights_ = {}) noexcept : Type{Type_}, NumVertices{NumVertices_}, NumIndices{NumIndices_}, VertexPositions{VertexPositions_}, Indices{Indices_}, VertexNormals{VertexNormals_}, VertexUV0{VertexUV0_}, BlendIndices{BlendIndices_}, BlendWeights{BlendWeights_} {}
    // Get instance field: public OVRPlugin/MeshType Type
    GlobalNamespace::OVRPlugin::MeshType _get_Type();
    // Set instance field: public OVRPlugin/MeshType Type
    void _set_Type(GlobalNamespace::OVRPlugin::MeshType value);
    // Get instance field: public System.UInt32 NumVertices
    uint _get_NumVertices();
    // Set instance field: public System.UInt32 NumVertices
    void _set_NumVertices(uint value);
    // Get instance field: public System.UInt32 NumIndices
    uint _get_NumIndices();
    // Set instance field: public System.UInt32 NumIndices
    void _set_NumIndices(uint value);
    // Get instance field: public OVRPlugin/Vector3f[] VertexPositions
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* _get_VertexPositions();
    // Set instance field: public OVRPlugin/Vector3f[] VertexPositions
    void _set_VertexPositions(::Array<GlobalNamespace::OVRPlugin::Vector3f>* value);
    // Get instance field: public System.Int16[] Indices
    ::Array<int16_t>* _get_Indices();
    // Set instance field: public System.Int16[] Indices
    void _set_Indices(::Array<int16_t>* value);
    // Get instance field: public OVRPlugin/Vector3f[] VertexNormals
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* _get_VertexNormals();
    // Set instance field: public OVRPlugin/Vector3f[] VertexNormals
    void _set_VertexNormals(::Array<GlobalNamespace::OVRPlugin::Vector3f>* value);
    // Get instance field: public OVRPlugin/Vector2f[] VertexUV0
    ::Array<GlobalNamespace::OVRPlugin::Vector2f>* _get_VertexUV0();
    // Set instance field: public OVRPlugin/Vector2f[] VertexUV0
    void _set_VertexUV0(::Array<GlobalNamespace::OVRPlugin::Vector2f>* value);
    // Get instance field: public OVRPlugin/Vector4s[] BlendIndices
    ::Array<GlobalNamespace::OVRPlugin::Vector4s>* _get_BlendIndices();
    // Set instance field: public OVRPlugin/Vector4s[] BlendIndices
    void _set_BlendIndices(::Array<GlobalNamespace::OVRPlugin::Vector4s>* value);
    // Get instance field: public OVRPlugin/Vector4f[] BlendWeights
    ::Array<GlobalNamespace::OVRPlugin::Vector4f>* _get_BlendWeights();
    // Set instance field: public OVRPlugin/Vector4f[] BlendWeights
    void _set_BlendWeights(::Array<GlobalNamespace::OVRPlugin::Vector4f>* value);
    // public System.Void .ctor()
    // Offset: 0x12F1EFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlugin::Mesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRPlugin::Mesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlugin::Mesh*, creationType>()));
    }
  }; // OVRPlugin/Mesh
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Mesh), 72 + sizeof(::Array<GlobalNamespace::OVRPlugin::Vector4f>*)> __GlobalNamespace_OVRPlugin_MeshSizeCheck;
  static_assert(sizeof(OVRPlugin::Mesh) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Mesh*, "", "OVRPlugin/Mesh");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Mesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
