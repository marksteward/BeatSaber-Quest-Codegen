// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshHandle
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Get instance field: private UnityEngine.Transform m_Transform
    UnityEngine::Transform* _get_m_Transform();
    // Set instance field: private UnityEngine.Transform m_Transform
    void _set_m_Transform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Mesh m_Mesh
    UnityEngine::Mesh* _get_m_Mesh();
    // Set instance field: private UnityEngine.Mesh m_Mesh
    void _set_m_Mesh(UnityEngine::Mesh* value);
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x1AF14CC
    UnityEngine::Mesh* get_mesh();
    // public System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Mesh mesh)
    // Offset: 0x1AF14D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshHandle* New_ctor(UnityEngine::Transform* transform, UnityEngine::Mesh* mesh) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshHandle*, creationType>(transform, mesh)));
    }
    // public System.Void DrawMeshNow(System.Int32 submeshIndex)
    // Offset: 0x1AF150C
    void DrawMeshNow(int submeshIndex);
  }; // UnityEngine.ProBuilder.MeshHandle
  #pragma pack(pop)
  static check_size<sizeof(MeshHandle), 24 + sizeof(UnityEngine::Mesh*)> __UnityEngine_ProBuilder_MeshHandleSizeCheck;
  static_assert(sizeof(MeshHandle) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshHandle*, "UnityEngine.ProBuilder", "MeshHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandle::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (UnityEngine::ProBuilder::MeshHandle::*)()>(&UnityEngine::ProBuilder::MeshHandle::get_mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandle*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandle::DrawMeshNow
// Il2CppName: DrawMeshNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshHandle::*)(int)>(&UnityEngine::ProBuilder::MeshHandle::DrawMeshNow)> {
  static const MethodInfo* get() {
    static auto* submeshIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandle*), "DrawMeshNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{submeshIndex});
  }
};
