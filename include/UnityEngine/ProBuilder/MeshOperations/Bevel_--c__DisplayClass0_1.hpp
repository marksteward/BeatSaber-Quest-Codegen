// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
  // [CompilerGeneratedAttribute] Offset: E3A3FC
  class Bevel::$$c__DisplayClass0_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.EdgeLookup lup
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::ProBuilder::EdgeLookup lup;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::EdgeLookup) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass0_1
    $$c__DisplayClass0_1(UnityEngine::ProBuilder::EdgeLookup lup_ = {}) noexcept : lup{lup_} {}
    // Creating conversion operator: operator UnityEngine::ProBuilder::EdgeLookup
    constexpr operator UnityEngine::ProBuilder::EdgeLookup() const noexcept {
      return lup;
    }
    // System.Boolean <BevelEdges>b__4(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x1545824
    bool $BevelEdges$b__4(UnityEngine::ProBuilder::WingedEdge* x);
    // public System.Void .ctor()
    // Offset: 0x1544A5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bevel::$$c__DisplayClass0_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bevel::$$c__DisplayClass0_1*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
  #pragma pack(pop)
  static check_size<sizeof(Bevel::$$c__DisplayClass0_1), 16 + sizeof(UnityEngine::ProBuilder::EdgeLookup)> __UnityEngine_ProBuilder_MeshOperations_Bevel_$$c__DisplayClass0_1SizeCheck;
  static_assert(sizeof(Bevel::$$c__DisplayClass0_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_1");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::$BevelEdges$b__4
// Il2CppName: <BevelEdges>b__4
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
