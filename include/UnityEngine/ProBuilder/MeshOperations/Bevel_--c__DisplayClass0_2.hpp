// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
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
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_2
  // [CompilerGeneratedAttribute] Offset: E3A40C
  class Bevel::$$c__DisplayClass0_2 : public ::Il2CppObject {
    public:
    // public System.Int32 c
    // Size: 0x4
    // Offset: 0x10
    int c;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: c and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_2
    $$c__DisplayClass0_2(int c_ = {}, UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0* CS$$$8__locals1_ = {}) noexcept : c{c_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Boolean <BevelEdges>b__5(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x1545864
    bool $BevelEdges$b__5(UnityEngine::ProBuilder::WingedEdge* x);
    // public System.Void .ctor()
    // Offset: 0x154540C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bevel::$$c__DisplayClass0_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bevel::$$c__DisplayClass0_2*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_2
  #pragma pack(pop)
  static check_size<sizeof(Bevel::$$c__DisplayClass0_2), 24 + sizeof(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*)> __UnityEngine_ProBuilder_MeshOperations_Bevel_$$c__DisplayClass0_2SizeCheck;
  static_assert(sizeof(Bevel::$$c__DisplayClass0_2) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_2");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::$BevelEdges$b__5
// Il2CppName: <BevelEdges>b__5
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
