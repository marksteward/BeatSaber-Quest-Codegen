// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.ArrayUtility
#include "UnityEngine/ProBuilder/ArrayUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ArrayUtility/<>c__DisplayClass21_0`2
  template<typename TSource, typename TKey>
  class ArrayUtility::$$c__DisplayClass21_0_2 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.HashSet`1<TKey> knownKeys
    // Offset: 0x0
    System::Collections::Generic::HashSet_1<TKey>* knownKeys;
    // public System.Func`2<TSource,TKey> keySelector
    // Offset: 0x0
    System::Func_2<TSource, TKey>* keySelector;
    // System.Boolean <DistinctBy>b__0(TSource x)
    // Offset: 0xFFFFFFFF
    bool $DistinctBy$b__0(TSource x) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<DistinctBy>b__0", x)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ArrayUtility::$$c__DisplayClass21_0_2<TSource, TKey>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<ArrayUtility::$$c__DisplayClass21_0_2<TSource, TKey>*>()));
    }
  }; // UnityEngine.ProBuilder.ArrayUtility/<>c__DisplayClass21_0`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::ArrayUtility::$$c__DisplayClass21_0_2, "UnityEngine.ProBuilder", "ArrayUtility/<>c__DisplayClass21_0`2");
#pragma pack(pop)
