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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshTopology
  struct MeshTopology;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshUtility
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MeshUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshUtility::$$c
    class $$c;
    // Creating value type constructor for type: MeshUtility
    MeshUtility() noexcept {}
    // static UnityEngine.ProBuilder.Vertex[] GeneratePerTriangleMesh(UnityEngine.Mesh mesh)
    // Offset: 0x1399718
    static ::Array<UnityEngine::ProBuilder::Vertex*>* GeneratePerTriangleMesh(UnityEngine::Mesh* mesh);
    // static public System.Void GenerateTangent(UnityEngine.Mesh mesh)
    // Offset: 0x1399A90
    static void GenerateTangent(UnityEngine::Mesh* mesh);
    // static public UnityEngine.Mesh DeepCopy(UnityEngine.Mesh source)
    // Offset: 0x139A0F8
    static UnityEngine::Mesh* DeepCopy(UnityEngine::Mesh* source);
    // static public System.Void CopyTo(UnityEngine.Mesh source, UnityEngine.Mesh destination)
    // Offset: 0x139A164
    static void CopyTo(UnityEngine::Mesh* source, UnityEngine::Mesh* destination);
    // static T GetMeshChannel(UnityEngine.GameObject gameObject, System.Func`2<UnityEngine.Mesh,T> attributeGetter)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetMeshChannel(UnityEngine::GameObject* gameObject, System::Func_2<UnityEngine::Mesh*, T>* attributeGetter) {
      static_assert(std::is_base_of_v<System::Collections::IList, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshUtility::GetMeshChannel");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "MeshUtility", "GetMeshChannel", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(gameObject, attributeGetter)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, gameObject, attributeGetter);
    }
    // static public System.String Print(UnityEngine.Mesh mesh)
    // Offset: 0x139A5FC
    static ::Il2CppString* Print(UnityEngine::Mesh* mesh);
    // static public System.UInt32 GetIndexCount(UnityEngine.Mesh mesh)
    // Offset: 0x139BFD8
    static uint GetIndexCount(UnityEngine::Mesh* mesh);
    // static public System.UInt32 GetPrimitiveCount(UnityEngine.Mesh mesh)
    // Offset: 0x139C0A8
    static uint GetPrimitiveCount(UnityEngine::Mesh* mesh);
    // static public System.Void Compile(UnityEngine.ProBuilder.ProBuilderMesh probuilderMesh, UnityEngine.Mesh targetMesh, UnityEngine.MeshTopology preferredTopology)
    // Offset: 0x139C1D4
    static void Compile(UnityEngine::ProBuilder::ProBuilderMesh* probuilderMesh, UnityEngine::Mesh* targetMesh, UnityEngine::MeshTopology preferredTopology);
    // static public UnityEngine.ProBuilder.Vertex[] GetVertices(UnityEngine.Mesh mesh)
    // Offset: 0x138BEE0
    static ::Array<UnityEngine::ProBuilder::Vertex*>* GetVertices(UnityEngine::Mesh* mesh);
    // static public System.Void CollapseSharedVertices(UnityEngine.Mesh mesh, UnityEngine.ProBuilder.Vertex[] vertices)
    // Offset: 0x139C54C
    static void CollapseSharedVertices(UnityEngine::Mesh* mesh, ::Array<UnityEngine::ProBuilder::Vertex*>* vertices);
    // static System.String SanityCheck(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x139C978
    static ::Il2CppString* SanityCheck(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static System.String SanityCheck(UnityEngine.Mesh mesh)
    // Offset: 0x139CC1C
    static ::Il2CppString* SanityCheck(UnityEngine::Mesh* mesh);
    // static System.String SanityCheck(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices)
    // Offset: 0x139C99C
    static ::Il2CppString* SanityCheck(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices);
  }; // UnityEngine.ProBuilder.MeshUtility
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshUtility*, "UnityEngine.ProBuilder", "MeshUtility");
