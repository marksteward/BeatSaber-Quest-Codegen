// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ArrayUtility
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ArrayUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::ArrayUtility::SearchRange
    struct SearchRange;
    // Nested type: UnityEngine::ProBuilder::ArrayUtility::$$c__DisplayClass21_0_2<TSource, TKey>
    template<typename TSource, typename TKey>
    class $$c__DisplayClass21_0_2;
    // Nested type: UnityEngine::ProBuilder::ArrayUtility::$$c__23_1<T>
    template<typename T>
    class $$c__23_1;
    // Creating value type constructor for type: ArrayUtility
    ArrayUtility() noexcept {}
    // static public T[] ValuesWithIndexes(T[] arr, System.Int32[] indexes)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* ValuesWithIndexes(::Array<T>* arr, ::Array<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::ValuesWithIndexes");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "ValuesWithIndexes", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, indexes)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, indexes);
    }
    // static public System.Collections.Generic.List`1<T> ValuesWithIndexes(System.Collections.Generic.List`1<T> arr, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<T>* ValuesWithIndexes(System::Collections::Generic::List_1<T>* arr, System::Collections::Generic::IList_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::ValuesWithIndexes");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "ValuesWithIndexes", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, indexes)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, indexes);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Int32> AllIndexesOf(System.Collections.Generic.IList`1<T> list, System.Func`2<T,System.Boolean> lambda)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<int>* AllIndexesOf(System::Collections::Generic::IList_1<T>* list, System::Func_2<T, bool>* lambda) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::AllIndexesOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "AllIndexesOf", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list, lambda)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<int>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, lambda);
    }
    // static public T[] Add(T[] arr, T val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* Add(::Array<T>* arr, T val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "Add", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, val);
    }
    // static public T[] AddRange(T[] arr, T[] val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* AddRange(::Array<T>* arr, ::Array<T>* val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::AddRange");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "AddRange", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, val);
    }
    // static public T[] Remove(T[] arr, T val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* Remove(::Array<T>* arr, T val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "Remove", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, val);
    }
    // static public T[] Remove(T[] arr, System.Collections.Generic.IEnumerable`1<T> val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* Remove(::Array<T>* arr, System::Collections::Generic::IEnumerable_1<T>* val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "Remove", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, val);
    }
    // static public T[] RemoveAt(T[] arr, System.Int32 index)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* RemoveAt(::Array<T>* arr, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::RemoveAt");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "RemoveAt", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, index)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, index);
    }
    // static public T[] RemoveAt(System.Collections.Generic.IList`1<T> list, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* RemoveAt(System::Collections::Generic::IList_1<T>* list, System::Collections::Generic::IEnumerable_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::RemoveAt");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "RemoveAt", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list, indexes)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, indexes);
    }
    // static public T[] SortedRemoveAt(System.Collections.Generic.IList`1<T> list, System.Collections.Generic.IList`1<System.Int32> sorted)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* SortedRemoveAt(System::Collections::Generic::IList_1<T>* list, System::Collections::Generic::IList_1<int>* sorted) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::SortedRemoveAt");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "SortedRemoveAt", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list, sorted)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, sorted);
    }
    // static public System.Int32 NearestIndexPriorToValue(System.Collections.Generic.IList`1<T> sorted_list, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int NearestIndexPriorToValue(System::Collections::Generic::IList_1<T>* sorted_list, T value) {
      static_assert(std::is_base_of_v<System::IComparable_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::NearestIndexPriorToValue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "NearestIndexPriorToValue", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(sorted_list, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, sorted_list, value);
    }
    // static public System.Collections.Generic.List`1<T> Fill(System.Func`2<System.Int32,T> ctor, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<T>* Fill(System::Func_2<int, T>* ctor, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::Fill");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "Fill", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(ctor, length)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, ctor, length);
    }
    // static public T[] Fill(T val, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* Fill(T val, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::Fill");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "Fill", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(val, length)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, val, length);
    }
    // static public System.Boolean ContainsMatch(T[] a, T[] b)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ContainsMatch(::Array<T>* a, ::Array<T>* b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::ContainsMatch");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "ContainsMatch", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(a, b)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, a, b);
    }
    // static public System.Boolean ContainsMatch(T[] a, T[] b, out System.Int32 index_a, out System.Int32 index_b)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ContainsMatch(::Array<T>* a, ::Array<T>* b, int& index_a, int& index_b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::ContainsMatch");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "ContainsMatch", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(a, b, index_a, index_b)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, a, b, index_a, index_b);
    }
    // static public T[] Concat(T[] x, T[] y)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* Concat(::Array<T>* x, ::Array<T>* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::Concat");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "Concat", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(x, y)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, x, y);
    }
    // static public System.Int32 IndexOf(System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> InList, T InValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int IndexOf(System::Collections::Generic::List_1<System::Collections::Generic::List_1<T>*>* InList, T InValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::IndexOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "IndexOf", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(InList, InValue)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, InList, InValue);
    }
    // static public T[] Fill(System.Int32 count, System.Func`2<System.Int32,T> ctor)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* Fill(int count, System::Func_2<int, T>* ctor) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::Fill");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "Fill", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(count, ctor)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, count, ctor);
    }
    // static public System.Void AddOrAppend(System.Collections.Generic.Dictionary`2<T,System.Collections.Generic.List`1<K>> dictionary, T key, K value)
    // Offset: 0xFFFFFFFF
    template<class T, class K>
    static void AddOrAppend(System::Collections::Generic::Dictionary_2<T, System::Collections::Generic::List_1<K>*>* dictionary, T key, K value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::AddOrAppend");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "AddOrAppend", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()}, ::il2cpp_utils::ExtractTypes(dictionary, key, value))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary, key, value);
    }
    // static public System.Void AddOrAppendRange(System.Collections.Generic.Dictionary`2<T,System.Collections.Generic.List`1<K>> dictionary, T key, System.Collections.Generic.List`1<K> value)
    // Offset: 0xFFFFFFFF
    template<class T, class K>
    static void AddOrAppendRange(System::Collections::Generic::Dictionary_2<T, System::Collections::Generic::List_1<K>*>* dictionary, T key, System::Collections::Generic::List_1<K>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::AddOrAppendRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "AddOrAppendRange", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()}, ::il2cpp_utils::ExtractTypes(dictionary, key, value))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary, key, value);
    }
    // static public System.Collections.Generic.IEnumerable`1<TSource> DistinctBy(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector)
    // Offset: 0xFFFFFFFF
    template<class TSource, class TKey>
    static System::Collections::Generic::IEnumerable_1<TSource>* DistinctBy(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::DistinctBy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "DistinctBy", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, ::il2cpp_utils::ExtractTypes(source, keySelector))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TSource>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, source, keySelector);
    }
    // static public System.String ToString(System.Collections.Generic.Dictionary`2<TKey,TValue> dict)
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    static ::Il2CppString* ToString(System::Collections::Generic::Dictionary_2<TKey, TValue>* dict) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::ToString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "ToString", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::il2cpp_utils::ExtractTypes(dict))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dict);
    }
    // static public System.String ToString(System.Collections.Generic.IEnumerable`1<T> arr, System.String separator)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Il2CppString* ToString(System::Collections::Generic::IEnumerable_1<T>* arr, ::Il2CppString* separator) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ArrayUtility::ToString");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "ArrayUtility", "ToString", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr, separator)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, separator);
    }
  }; // UnityEngine.ProBuilder.ArrayUtility
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ArrayUtility*, "UnityEngine.ProBuilder", "ArrayUtility");
