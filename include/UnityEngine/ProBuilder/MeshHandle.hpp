// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  // Autogenerated type: UnityEngine.ProBuilder.MeshHandle
  // [] Offset: FFFFFFFF
  class MeshHandle : public ::Il2CppObject {
    public:
    // private UnityEngine.Transform m_Transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* m_Transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Mesh m_Mesh
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Mesh* m_Mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // Creating value type constructor for type: MeshHandle
    MeshHandle(UnityEngine::Transform* m_Transform_ = {}, UnityEngine::Mesh* m_Mesh_ = {}) noexcept : m_Transform{m_Transform_}, m_Mesh{m_Mesh_} {}
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x1642CB0
    UnityEngine::Mesh* get_mesh();
    // public System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Mesh mesh)
    // Offset: 0x1642CB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshHandle* New_ctor(UnityEngine::Transform* transform, UnityEngine::Mesh* mesh) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshHandle*, creationType>(transform, mesh)));
    }
    // public System.Void DrawMeshNow(System.Int32 submeshIndex)
    // Offset: 0x1642D08
    void DrawMeshNow(int submeshIndex);
  }; // UnityEngine.ProBuilder.MeshHandle
  static check_size<sizeof(MeshHandle), 24 + sizeof(UnityEngine::Mesh*)> __UnityEngine_ProBuilder_MeshHandleSizeCheck;
  static_assert(sizeof(MeshHandle) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshHandle*, "UnityEngine.ProBuilder", "MeshHandle");
#pragma pack(pop)
