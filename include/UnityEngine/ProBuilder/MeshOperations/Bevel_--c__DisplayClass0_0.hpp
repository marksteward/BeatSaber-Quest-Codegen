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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE308C
  class Bevel::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.List`1<System.Int32>> ignore
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::List_1<int>*>* ignore;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::List_1<int>*>*) == 0x8);
    // public UnityEngine.ProBuilder.SharedVertex[] sharedIndexes
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::ProBuilder::SharedVertex*>* sharedIndexes;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ProBuilder::SharedVertex*>*) == 0x8);
    // public System.Func`2<System.Int32,System.Int32> <>9__7
    // Size: 0x8
    // Offset: 0x20
    System::Func_2<int, int>* $$9__7;
    // Field size check
    static_assert(sizeof(System::Func_2<int, int>*) == 0x8);
    // public System.Func`2<System.Int32,System.Int32> <>9__8
    // Size: 0x8
    // Offset: 0x28
    System::Func_2<int, int>* $$9__8;
    // Field size check
    static_assert(sizeof(System::Func_2<int, int>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::List_1<int>*>* ignore_ = {}, ::Array<UnityEngine::ProBuilder::SharedVertex*>* sharedIndexes_ = {}, System::Func_2<int, int>* $$9__7_ = {}, System::Func_2<int, int>* $$9__8_ = {}) noexcept : ignore{ignore_}, sharedIndexes{sharedIndexes_}, $$9__7{$$9__7_}, $$9__8{$$9__8_} {}
    // System.Int32 <BevelEdges>b__7(System.Int32 x)
    // Offset: 0x124B5A8
    int $BevelEdges$b__7(int x);
    // System.Int32 <BevelEdges>b__8(System.Int32 x)
    // Offset: 0x124B5F0
    int $BevelEdges$b__8(int x);
    // public System.Void .ctor()
    // Offset: 0x124A828
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bevel::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bevel::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_0
  static check_size<sizeof(Bevel::$$c__DisplayClass0_0), 40 + sizeof(System::Func_2<int, int>*)> __UnityEngine_ProBuilder_MeshOperations_Bevel_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(Bevel::$$c__DisplayClass0_0) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_0");
