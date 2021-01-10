// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
#include "UnityEngine/ProBuilder/Poly2Tri/Triangulatable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationMode
  struct TriangulationMode;
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x20
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.PointSet
  // [] Offset: FFFFFFFF
  class PointSet : public ::Il2CppObject/*, public UnityEngine::ProBuilder::Poly2Tri::Triangulatable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB1D20
    // private System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> <Points>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB1D30
    // private System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> <Triangles>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*) == 0x8);
    // Creating value type constructor for type: PointSet
    PointSet(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points_ = {}, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles_ = {}) noexcept : Points{Points_}, Triangles{Triangles_} {}
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::Poly2Tri::Triangulatable
    operator UnityEngine::ProBuilder::Poly2Tri::Triangulatable() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(this);
    }
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> get_Points()
    // Offset: 0x19B0D94
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points();
    // private System.Void set_Points(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> value)
    // Offset: 0x19B0D9C
    void set_Points(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);
    // private System.Void set_Triangles(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> value)
    // Offset: 0x19B0DAC
    void set_Triangles(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);
    // public System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> points)
    // Offset: 0x19B0DB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointSet* New_ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::PointSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointSet*, creationType>(points)));
    }
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> get_Triangles()
    // Offset: 0x19B0DA4
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Triangulatable::get_Triangles()
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x19B0E40
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Triangulatable::get_TriangulationMode()
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
    // public System.Void AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x19B0E48
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Void Triangulatable::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    void AddTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    // Offset: 0x19B0F0C
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Void Triangulatable::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    void AddTriangles(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);
    // public System.Void Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    // Offset: 0x19B11FC
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
    // Base method: System.Void Triangulatable::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);
  }; // UnityEngine.ProBuilder.Poly2Tri.PointSet
  static check_size<sizeof(PointSet), 24 + sizeof(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)> __UnityEngine_ProBuilder_Poly2Tri_PointSetSizeCheck;
  static_assert(sizeof(PointSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PointSet*, "UnityEngine.ProBuilder.Poly2Tri", "PointSet");
#pragma pack(pop)
