// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.ElementSelection
#include "UnityEngine/ProBuilder/MeshOperations/ElementSelection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x28
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ElementSelection/<>c__DisplayClass23_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE315C
  class ElementSelection::$$c__DisplayClass23_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.HashSet`1<System.Int32> common
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<int>* common;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // public System.Func`2<UnityEngine.ProBuilder.WingedEdge,System.Boolean> <>9__1
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<UnityEngine::ProBuilder::WingedEdge*, bool>* $$9__1;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::ProBuilder::WingedEdge*, bool>*) == 0x8);
    // public System.Func`2<UnityEngine.ProBuilder.WingedEdge,System.Boolean> <>9__2
    // Size: 0x8
    // Offset: 0x20
    System::Func_2<UnityEngine::ProBuilder::WingedEdge*, bool>* $$9__2;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::ProBuilder::WingedEdge*, bool>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass23_0
    $$c__DisplayClass23_0(System::Collections::Generic::HashSet_1<int>* common_ = {}, System::Func_2<UnityEngine::ProBuilder::WingedEdge*, bool>* $$9__1_ = {}, System::Func_2<UnityEngine::ProBuilder::WingedEdge*, bool>* $$9__2_ = {}) noexcept : common{common_}, $$9__1{$$9__1_}, $$9__2{$$9__2_} {}
    // System.Boolean <FindHoles>b__1(UnityEngine.ProBuilder.WingedEdge w)
    // Offset: 0x1257F40
    bool $FindHoles$b__1(UnityEngine::ProBuilder::WingedEdge* w);
    // System.Boolean <FindHoles>b__2(UnityEngine.ProBuilder.WingedEdge w)
    // Offset: 0x1257FAC
    bool $FindHoles$b__2(UnityEngine::ProBuilder::WingedEdge* w);
    // public System.Void .ctor()
    // Offset: 0x1257B6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElementSelection::$$c__DisplayClass23_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass23_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElementSelection::$$c__DisplayClass23_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.ElementSelection/<>c__DisplayClass23_0
  static check_size<sizeof(ElementSelection::$$c__DisplayClass23_0), 32 + sizeof(System::Func_2<UnityEngine::ProBuilder::WingedEdge*, bool>*)> __UnityEngine_ProBuilder_MeshOperations_ElementSelection_$$c__DisplayClass23_0SizeCheck;
  static_assert(sizeof(ElementSelection::$$c__DisplayClass23_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass23_0*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass23_0");
#pragma pack(pop)
