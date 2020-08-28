// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
// Including type: UnityEngine.ProBuilder.Triangle
#include "UnityEngine/ProBuilder/Triangle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c
  class MeshValidation::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__4_0
    static System::Func_2<UnityEngine::ProBuilder::Triangle, System::Collections::Generic::IEnumerable_1<int>*>* _get_$$9__4_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__4_0
    static void _set_$$9__4_0(System::Func_2<UnityEngine::ProBuilder::Triangle, System::Collections::Generic::IEnumerable_1<int>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__4_1
    static System::Func_2<UnityEngine::ProBuilder::Triangle, System::Collections::Generic::IEnumerable_1<int>*>* _get_$$9__4_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__4_1
    static void _set_$$9__4_1(System::Func_2<UnityEngine::ProBuilder::Triangle, System::Collections::Generic::IEnumerable_1<int>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__7_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x10234F0
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<System.Int32> <EnsureFacesAreComposedOfContiguousTriangles>b__4_0(UnityEngine.ProBuilder.Triangle x)
    // Offset: 0x1023560
    System::Collections::Generic::IEnumerable_1<int>* $EnsureFacesAreComposedOfContiguousTriangles$b__4_0(UnityEngine::ProBuilder::Triangle x);
    // System.Collections.Generic.IEnumerable`1<System.Int32> <EnsureFacesAreComposedOfContiguousTriangles>b__4_1(UnityEngine.ProBuilder.Triangle x)
    // Offset: 0x102358C
    System::Collections::Generic::IEnumerable_1<int>* $EnsureFacesAreComposedOfContiguousTriangles$b__4_1(UnityEngine::ProBuilder::Triangle x);
    // System.Collections.Generic.IEnumerable`1<System.Int32> <RemoveUnusedVertices>b__7_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x10235B8
    System::Collections::Generic::IEnumerable_1<int>* $RemoveUnusedVertices$b__7_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x1023558
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MeshValidation::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c");
#pragma pack(pop)
