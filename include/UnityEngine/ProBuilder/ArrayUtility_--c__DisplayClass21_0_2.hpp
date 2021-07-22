// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.ArrayUtility
#include "UnityEngine/ProBuilder/ArrayUtility.hpp"
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
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.ArrayUtility/UnityEngine.ProBuilder.<>c__DisplayClass21_0`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TSource, typename TKey>
  class ArrayUtility::$$c__DisplayClass21_0_2 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.HashSet`1<TKey> knownKeys
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::HashSet_1<TKey>* knownKeys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<TKey>*) == 0x8);
    // public System.Func`2<TSource,TKey> keySelector
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, TKey>* keySelector;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, TKey>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass21_0_2
    $$c__DisplayClass21_0_2(System::Collections::Generic::HashSet_1<TKey>* knownKeys_ = {}, System::Func_2<TSource, TKey>* keySelector_ = {}) noexcept : knownKeys{knownKeys_}, keySelector{keySelector_} {}
    // System.Boolean <DistinctBy>b__0(TSource x)
    // Offset: 0xFFFFFFFF
    bool $DistinctBy$b__0(TSource x) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::$$c__DisplayClass21_0_2::<DistinctBy>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<DistinctBy>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayUtility::$$c__DisplayClass21_0_2<TSource, TKey>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::$$c__DisplayClass21_0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayUtility::$$c__DisplayClass21_0_2<TSource, TKey>*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ArrayUtility/UnityEngine.ProBuilder.<>c__DisplayClass21_0`2
  // Could not write size check! Type: UnityEngine.ProBuilder.ArrayUtility/UnityEngine.ProBuilder.<>c__DisplayClass21_0`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::ArrayUtility::$$c__DisplayClass21_0_2, "UnityEngine.ProBuilder", "ArrayUtility/<>c__DisplayClass21_0`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
