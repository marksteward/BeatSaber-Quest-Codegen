// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/<>c__DisplayClass6_0`1
  template<typename TSource>
  class Enumerable::$$c__DisplayClass6_0_1 : public ::Il2CppObject {
    public:
    // public System.Func`2<TSource,System.Boolean> predicate1
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate1;
    // public System.Func`2<TSource,System.Boolean> predicate2
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate2;
    // System.Boolean <CombinePredicates>b__0(TSource x)
    // Offset: 0xFFFFFFFF
    bool $CombinePredicates$b__0(TSource x) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<CombinePredicates>b__0", x)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Enumerable::$$c__DisplayClass6_0_1<TSource>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<Enumerable::$$c__DisplayClass6_0_1<TSource>*>());
    }
  }; // System.Linq.Enumerable/<>c__DisplayClass6_0`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$$c__DisplayClass6_0_1, "System.Linq", "Enumerable/<>c__DisplayClass6_0`1");
#pragma pack(pop)
