// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x14
  // Autogenerated type: UnityEngine.ProBuilder.ProBuilderMesh/<>c__DisplayClass152_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE2FEC
  class ProBuilderMesh::$$c__DisplayClass152_0 : public ::Il2CppObject {
    public:
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x10
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass152_0
    $$c__DisplayClass152_0(int i_ = {}) noexcept : i{i_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return i;
    }
    // System.Boolean <UnusedElementGroup>b__0(UnityEngine.ProBuilder.Face element)
    // Offset: 0x13C1BBC
    bool $UnusedElementGroup$b__0(UnityEngine::ProBuilder::Face* element);
    // public System.Void .ctor()
    // Offset: 0x13BE5C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProBuilderMesh::$$c__DisplayClass152_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProBuilderMesh::$$c__DisplayClass152_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ProBuilderMesh/<>c__DisplayClass152_0
  static check_size<sizeof(ProBuilderMesh::$$c__DisplayClass152_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_ProBuilderMesh_$$c__DisplayClass152_0SizeCheck;
  static_assert(sizeof(ProBuilderMesh::$$c__DisplayClass152_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass152_0*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass152_0");
#pragma pack(pop)
