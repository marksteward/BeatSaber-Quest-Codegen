// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
// Including type: UnityEngine.ProBuilder.Triangle
#include "UnityEngine/ProBuilder/Triangle.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c
  // [CompilerGeneratedAttribute] Offset: E3A51C
  class MeshValidation::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
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
    // Offset: 0x170D7E4
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<System.Int32> <EnsureFacesAreComposedOfContiguousTriangles>b__4_0(UnityEngine.ProBuilder.Triangle x)
    // Offset: 0x170D850
    System::Collections::Generic::IEnumerable_1<int>* $EnsureFacesAreComposedOfContiguousTriangles$b__4_0(UnityEngine::ProBuilder::Triangle x);
    // System.Collections.Generic.IEnumerable`1<System.Int32> <EnsureFacesAreComposedOfContiguousTriangles>b__4_1(UnityEngine.ProBuilder.Triangle x)
    // Offset: 0x170D87C
    System::Collections::Generic::IEnumerable_1<int>* $EnsureFacesAreComposedOfContiguousTriangles$b__4_1(UnityEngine::ProBuilder::Triangle x);
    // System.Collections.Generic.IEnumerable`1<System.Int32> <RemoveUnusedVertices>b__7_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x170D8A8
    System::Collections::Generic::IEnumerable_1<int>* $RemoveUnusedVertices$b__7_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x170D848
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshValidation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshValidation::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::$EnsureFacesAreComposedOfContiguousTriangles$b__4_0
// Il2CppName: <EnsureFacesAreComposedOfContiguousTriangles>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<int>* (UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::*)(UnityEngine::ProBuilder::Triangle)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::$EnsureFacesAreComposedOfContiguousTriangles$b__4_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Triangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c*), "<EnsureFacesAreComposedOfContiguousTriangles>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::$EnsureFacesAreComposedOfContiguousTriangles$b__4_1
// Il2CppName: <EnsureFacesAreComposedOfContiguousTriangles>b__4_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<int>* (UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::*)(UnityEngine::ProBuilder::Triangle)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::$EnsureFacesAreComposedOfContiguousTriangles$b__4_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Triangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c*), "<EnsureFacesAreComposedOfContiguousTriangles>b__4_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::$RemoveUnusedVertices$b__7_0
// Il2CppName: <RemoveUnusedVertices>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<int>* (UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::$RemoveUnusedVertices$b__7_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c*), "<RemoveUnusedVertices>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
