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
  // Autogenerated type: System.Linq.Enumerable/<>c__DisplayClass7_0`3
  template<typename TSource, typename TMiddle, typename TResult>
  class Enumerable::$$c__DisplayClass7_0_3 : public ::Il2CppObject {
    public:
    // public System.Func`2<TMiddle,TResult> selector2
    // Offset: 0x0
    System::Func_2<TMiddle, TResult>* selector2;
    // public System.Func`2<TSource,TMiddle> selector1
    // Offset: 0x0
    System::Func_2<TSource, TMiddle>* selector1;
    // TResult <CombineSelectors>b__0(TSource x)
    // Offset: 0xFFFFFFFF
    TResult $CombineSelectors$b__0(TSource x) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TResult>(this, "<CombineSelectors>b__0", x)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Enumerable::$$c__DisplayClass7_0_3<TSource, TMiddle, TResult>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<Enumerable::$$c__DisplayClass7_0_3<TSource, TMiddle, TResult>*>()));
    }
  }; // System.Linq.Enumerable/<>c__DisplayClass7_0`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$$c__DisplayClass7_0_3, "System.Linq", "Enumerable/<>c__DisplayClass7_0`3");
#pragma pack(pop)
