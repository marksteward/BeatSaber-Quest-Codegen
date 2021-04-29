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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
  class TriangulationPoint : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD22B94
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> <Edges>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* Edges;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*) == 0x8);
    // public System.Double X
    // Size: 0x8
    // Offset: 0x18
    double X;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double Y
    // Size: 0x8
    // Offset: 0x20
    double Y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x28
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TriangulationPoint
    TriangulationPoint(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* Edges_ = {}, double X_ = {}, double Y_ = {}, int Index_ = {}) noexcept : Edges{Edges_}, X{X_}, Y{Y_}, Index{Index_} {}
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> get_Edges()
    // Offset: 0x215C990
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* get_Edges();
    // private System.Void set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> value)
    // Offset: 0x215C998
    void set_Edges(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value);
    // public System.Void .ctor(System.Double x, System.Double y, System.Int32 index)
    // Offset: 0x215B118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangulationPoint* New_ctor(double x, double y, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangulationPoint*, creationType>(x, y, index)));
    }
    // public System.Void AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint e)
    // Offset: 0x215A9A0
    void AddEdge(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e);
    // public System.Boolean get_HasEdges()
    // Offset: 0x2156E88
    bool get_HasEdges();
    // public override System.String ToString()
    // Offset: 0x215C9A0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
  #pragma pack(pop)
  static check_size<sizeof(TriangulationPoint), 40 + sizeof(int)> __UnityEngine_ProBuilder_Poly2Tri_TriangulationPointSizeCheck;
  static_assert(sizeof(TriangulationPoint) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint");
