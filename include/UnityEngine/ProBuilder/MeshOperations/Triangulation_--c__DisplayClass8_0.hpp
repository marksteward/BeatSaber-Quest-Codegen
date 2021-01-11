// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.Triangulation
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: PolygonPoint
  class PolygonPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass8_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE320C
  class Triangulation::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: index and: $$9__1
    char __padding0[0x4] = {};
    // public System.Func`2<UnityEngine.Vector2,UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> <>9__1
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* $$9__1;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(int index_ = {}, System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* $$9__1_ = {}) noexcept : index{index_}, $$9__1{$$9__1_} {}
    // UnityEngine.ProBuilder.Poly2Tri.PolygonPoint <Triangulate>b__0(UnityEngine.Vector2 x)
    // Offset: 0x139311C
    UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* $Triangulate$b__0(UnityEngine::Vector2 x);
    // UnityEngine.ProBuilder.Poly2Tri.PolygonPoint <Triangulate>b__1(UnityEngine.Vector2 x)
    // Offset: 0x13931A4
    UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* $Triangulate$b__1(UnityEngine::Vector2 x);
    // public System.Void .ctor()
    // Offset: 0x1393004
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Triangulation::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Triangulation::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass8_0
  static check_size<sizeof(Triangulation::$$c__DisplayClass8_0), 24 + sizeof(System::Func_2<UnityEngine::Vector2, UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)> __UnityEngine_ProBuilder_MeshOperations_Triangulation_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(Triangulation::$$c__DisplayClass8_0) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass8_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass8_0");
