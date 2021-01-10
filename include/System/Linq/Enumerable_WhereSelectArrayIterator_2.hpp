// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Linq.Enumerable/Iterator`1
#include "System/Linq/Enumerable_Iterator_1.hpp"
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
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/WhereSelectArrayIterator`2
  // [] Offset: FFFFFFFF
  template<typename TSource, typename TResult>
  class Enumerable::WhereSelectArrayIterator_2 : public System::Linq::Enumerable::Iterator_1<TResult> {
    public:
    // private TSource[] source
    // Size: 0x8
    // Offset: 0x0
    ::Array<TSource>* source;
    // Field size check
    static_assert(sizeof(::Array<TSource>*) == 0x8);
    // private System.Func`2<TSource,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, bool>*) == 0x8);
    // private System.Func`2<TSource,TResult> selector
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, TResult>* selector;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, TResult>*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WhereSelectArrayIterator_2
    WhereSelectArrayIterator_2(::Array<TSource>* source_ = {}, System::Func_2<TSource, bool>* predicate_ = {}, System::Func_2<TSource, TResult>* selector_ = {}, int index_ = {}) noexcept : source{source_}, predicate{predicate_}, selector{selector_}, index{index_} {}
    // public System.Void .ctor(TSource[] source, System.Func`2<TSource,System.Boolean> predicate, System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::WhereSelectArrayIterator_2<TSource, TResult>* New_ctor(::Array<TSource>* source, System::Func_2<TSource, bool>* predicate, System::Func_2<TSource, TResult>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectArrayIterator_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::WhereSelectArrayIterator_2<TSource, TResult>*, creationType>(source, predicate, selector)));
    }
    // public System.Linq.Enumerable/Iterator`1<TResult> Clone()
    // Offset: 0xFFFFFFFF
    System::Linq::Enumerable::Iterator_1<TResult>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectArrayIterator_2::Clone");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Linq::Enumerable::Iterator_1<TResult>*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerable`1<TResult2> Select(System.Func`2<TResult,TResult2> selector)
    // Offset: 0xFFFFFFFF
    template<class TResult2>
    System::Collections::Generic::IEnumerable_1<TResult2>* Select(System::Func_2<TResult, TResult2>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectArrayIterator_2::Select");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Select", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get()}, ::il2cpp_utils::ExtractTypes(selector)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___generic__method, selector);
    }
    // public System.Collections.Generic.IEnumerable`1<TResult> Where(System.Func`2<TResult,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<TResult>* Where(System::Func_2<TResult, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectArrayIterator_2::Where");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Where", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(predicate)));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal__method, predicate);
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/Iterator`1
    // Base method: System.Boolean Iterator_1::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectArrayIterator_2::MoveNext");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext() {
      return MoveNext();
    }
  }; // System.Linq.Enumerable/WhereSelectArrayIterator`2
  // Could not write size check! Type: System.Linq.Enumerable/WhereSelectArrayIterator`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::WhereSelectArrayIterator_2, "System.Linq", "Enumerable/WhereSelectArrayIterator`2");
