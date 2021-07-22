// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Linq.IGrouping`2
#include "System/Linq/IGrouping_2.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Skipping declaration: Grouping because it is already included!
  // Skipping declaration: <GetEnumerator>d__12 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Lookup`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D77A48
  template<typename TKey, typename TElement>
  class Lookup_2 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>*/ {
    public:
    // Nested type: System::Linq::Lookup_2::Grouping<TKey, TElement>
    class Grouping;
    // Nested type: System::Linq::Lookup_2::$GetEnumerator$d__12<TKey, TElement>
    class $GetEnumerator$d__12;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Linq.Lookup`2/System.Linq.Grouping
    // [TokenAttribute] Offset: FFFFFFFF
    class Grouping : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Linq::IGrouping_2<TKey, TElement>, public System::Collections::Generic::IList_1<TElement>*/ {
      public:
      using declaring_type = Lookup_2<TKey, TElement>*;
      static constexpr std::string_view NESTED_NAME = "Grouping";
      // Nested type: System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7<TKey, TElement>
      class $GetEnumerator$d__7;
      // WARNING Size may be invalid!
      // Autogenerated type: System.Linq.Lookup`2/System.Linq.Grouping/System.Linq.<GetEnumerator>d__7
      // [TokenAttribute] Offset: FFFFFFFF
      // [CompilerGeneratedAttribute] Offset: FFFFFFFF
      class $GetEnumerator$d__7 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<TElement>*/ {
        public:
        using declaring_type = typename Lookup_2<TKey, TElement>::Grouping*;
        static constexpr std::string_view NESTED_NAME = "<GetEnumerator>d__7";
        // private System.Int32 <>1__state
        // Size: 0x4
        // Offset: 0x0
        int $$1__state;
        // Field size check
        static_assert(sizeof(int) == 0x4);
        // private TElement <>2__current
        // Size: 0xFFFFFFFF
        // Offset: 0x0
        TElement $$2__current;
        // public System.Linq.Lookup`2/System.Linq.Grouping<TKey,TElement> <>4__this
        // Size: 0x8
        // Offset: 0x0
        typename System::Linq::Lookup_2<TKey, TElement>::Grouping* $$4__this;
        // Field size check
        static_assert(sizeof(typename System::Linq::Lookup_2<TKey, TElement>::Grouping*) == 0x8);
        // private System.Int32 <i>5__1
        // Size: 0x4
        // Offset: 0x0
        int $i$5__1;
        // Field size check
        static_assert(sizeof(int) == 0x4);
        // Creating value type constructor for type: $GetEnumerator$d__7
        $GetEnumerator$d__7(int $$1__state_ = {}, TElement $$2__current_ = {}, typename System::Linq::Lookup_2<TKey, TElement>::Grouping* $$4__this_ = {}, int $i$5__1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $i$5__1{$i$5__1_} {}
        // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TElement>
        operator System::Collections::Generic::IEnumerator_1<TElement>() noexcept {
          return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TElement>*>(this);
        }
        // private TElement System.Collections.Generic.IEnumerator<TElement>.get_Current()
        // Offset: 0xFFFFFFFF
        TElement System_Collections_Generic_IEnumerator$TElement$_get_Current() {
          static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current");
          auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TElement>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
          return ::il2cpp_utils::RunMethodThrow<TElement, false>(this, ___internal__method);
        }
        // private System.Object System.Collections.IEnumerator.get_Current()
        // Offset: 0xFFFFFFFF
        ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
          static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7::System.Collections.IEnumerator.get_Current");
          auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
          return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
        }
        // public System.Void .ctor(System.Int32 <>1__state)
        // Offset: 0xFFFFFFFF
        template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
        static typename Lookup_2<TKey, TElement>::Grouping::$GetEnumerator$d__7* New_ctor(int $$1__state) {
          static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7::.ctor");
          return THROW_UNLESS((::il2cpp_utils::New<typename Lookup_2<TKey, TElement>::Grouping::$GetEnumerator$d__7*, creationType>($$1__state)));
        }
        // private System.Void System.IDisposable.Dispose()
        // Offset: 0xFFFFFFFF
        void System_IDisposable_Dispose() {
          static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7::System.IDisposable.Dispose");
          auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
          ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
        }
        // private System.Boolean MoveNext()
        // Offset: 0xFFFFFFFF
        bool MoveNext() {
          static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7::MoveNext");
          auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
          return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
        }
        // private System.Void System.Collections.IEnumerator.Reset()
        // Offset: 0xFFFFFFFF
        void System_Collections_IEnumerator_Reset() {
          static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::$GetEnumerator$d__7::System.Collections.IEnumerator.Reset");
          auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
          ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
        }
      }; // System.Linq.Lookup`2/System.Linq.Grouping/System.Linq.<GetEnumerator>d__7
      // Could not write size check! Type: System.Linq.Lookup`2/System.Linq.Grouping/System.Linq.<GetEnumerator>d__7 is generic, or has no fields that are valid for size checks!
      // TKey key
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TKey key;
      // System.Int32 hashCode
      // Size: 0x4
      // Offset: 0x0
      int hashCode;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // TElement[] elements
      // Size: 0x8
      // Offset: 0x0
      ::Array<TElement>* elements;
      // Field size check
      static_assert(sizeof(::Array<TElement>*) == 0x8);
      // System.Int32 count
      // Size: 0x4
      // Offset: 0x0
      int count;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Linq.Lookup`2/System.Linq.Grouping<TKey,TElement> hashNext
      // Size: 0x8
      // Offset: 0x0
      typename System::Linq::Lookup_2<TKey, TElement>::Grouping* hashNext;
      // Field size check
      static_assert(sizeof(typename System::Linq::Lookup_2<TKey, TElement>::Grouping*) == 0x8);
      // System.Linq.Lookup`2/System.Linq.Grouping<TKey,TElement> next
      // Size: 0x8
      // Offset: 0x0
      typename System::Linq::Lookup_2<TKey, TElement>::Grouping* next;
      // Field size check
      static_assert(sizeof(typename System::Linq::Lookup_2<TKey, TElement>::Grouping*) == 0x8);
      // Creating value type constructor for type: Grouping
      Grouping(TKey key_ = {}, int hashCode_ = {}, ::Array<TElement>* elements_ = {}, int count_ = {}, typename System::Linq::Lookup_2<TKey, TElement>::Grouping* hashNext_ = {}, typename System::Linq::Lookup_2<TKey, TElement>::Grouping* next_ = {}) noexcept : key{key_}, hashCode{hashCode_}, elements{elements_}, count{count_}, hashNext{hashNext_}, next{next_} {}
      // Creating interface conversion operator: operator System::Linq::IGrouping_2<TKey, TElement>
      operator System::Linq::IGrouping_2<TKey, TElement>() noexcept {
        return *reinterpret_cast<System::Linq::IGrouping_2<TKey, TElement>*>(this);
      }
      // Creating interface conversion operator: operator System::Collections::Generic::IList_1<TElement>
      operator System::Collections::Generic::IList_1<TElement>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IList_1<TElement>*>(this);
      }
      // public TKey get_Key()
      // Offset: 0xFFFFFFFF
      TKey get_Key() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::get_Key");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<TKey, false>(this, ___internal__method);
      }
      // private System.Int32 System.Collections.Generic.ICollection<TElement>.get_Count()
      // Offset: 0xFFFFFFFF
      int System_Collections_Generic_ICollection$TElement$_get_Count() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.ICollection<TElement>.get_Count");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<TElement>.get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
      }
      // private System.Boolean System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
      // Offset: 0xFFFFFFFF
      bool System_Collections_Generic_ICollection$TElement$_get_IsReadOnly() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<TElement>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // private TElement System.Collections.Generic.IList<TElement>.get_Item(System.Int32 index)
      // Offset: 0xFFFFFFFF
      TElement System_Collections_Generic_IList$TElement$_get_Item(int index) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.IList<TElement>.get_Item");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<TElement>.get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
        return ::il2cpp_utils::RunMethodThrow<TElement, false>(this, ___internal__method, index);
      }
      // private System.Void System.Collections.Generic.IList<TElement>.set_Item(System.Int32 index, TElement value)
      // Offset: 0xFFFFFFFF
      void System_Collections_Generic_IList$TElement$_set_Item(int index, TElement value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.IList<TElement>.set_Item");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<TElement>.set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
      }
      // System.Void Add(TElement element)
      // Offset: 0xFFFFFFFF
      void Add(TElement element) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::Add");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, element);
      }
      // public System.Collections.Generic.IEnumerator`1<TElement> GetEnumerator()
      // Offset: 0xFFFFFFFF
      System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::GetEnumerator");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TElement>*, false>(this, ___internal__method);
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0xFFFFFFFF
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.IEnumerable.GetEnumerator");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.Generic.ICollection<TElement>.Add(TElement item)
      // Offset: 0xFFFFFFFF
      void System_Collections_Generic_ICollection$TElement$_Add(TElement item) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.ICollection<TElement>.Add");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<TElement>.Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
      }
      // private System.Void System.Collections.Generic.ICollection<TElement>.Clear()
      // Offset: 0xFFFFFFFF
      void System_Collections_Generic_ICollection$TElement$_Clear() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.ICollection<TElement>.Clear");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<TElement>.Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean System.Collections.Generic.ICollection<TElement>.Contains(TElement item)
      // Offset: 0xFFFFFFFF
      bool System_Collections_Generic_ICollection$TElement$_Contains(TElement item) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.ICollection<TElement>.Contains");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<TElement>.Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
      }
      // private System.Void System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[] array, System.Int32 arrayIndex)
      // Offset: 0xFFFFFFFF
      void System_Collections_Generic_ICollection$TElement$_CopyTo(::Array<TElement>* array, int arrayIndex) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<TElement>.CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayIndex)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, arrayIndex);
      }
      // private System.Boolean System.Collections.Generic.ICollection<TElement>.Remove(TElement item)
      // Offset: 0xFFFFFFFF
      bool System_Collections_Generic_ICollection$TElement$_Remove(TElement item) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.ICollection<TElement>.Remove");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<TElement>.Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
      }
      // private System.Int32 System.Collections.Generic.IList<TElement>.IndexOf(TElement item)
      // Offset: 0xFFFFFFFF
      int System_Collections_Generic_IList$TElement$_IndexOf(TElement item) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.IList<TElement>.IndexOf");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<TElement>.IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
        return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, item);
      }
      // private System.Void System.Collections.Generic.IList<TElement>.Insert(System.Int32 index, TElement item)
      // Offset: 0xFFFFFFFF
      void System_Collections_Generic_IList$TElement$_Insert(int index, TElement item) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.IList<TElement>.Insert");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<TElement>.Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, item);
      }
      // private System.Void System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32 index)
      // Offset: 0xFFFFFFFF
      void System_Collections_Generic_IList$TElement$_RemoveAt(int index) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::System.Collections.Generic.IList<TElement>.RemoveAt");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<TElement>.RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Lookup_2<TKey, TElement>::Grouping* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Grouping::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Lookup_2<TKey, TElement>::Grouping*, creationType>()));
      }
    }; // System.Linq.Lookup`2/System.Linq.Grouping
    // Could not write size check! Type: System.Linq.Lookup`2/System.Linq.Grouping is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Linq.Lookup`2/System.Linq.<GetEnumerator>d__12
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $GetEnumerator$d__12 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>*/ {
      public:
      using declaring_type = Lookup_2<TKey, TElement>*;
      static constexpr std::string_view NESTED_NAME = "<GetEnumerator>d__12";
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Linq.IGrouping`2<TKey,TElement> <>2__current
      // Size: 0x8
      // Offset: 0x0
      System::Linq::IGrouping_2<TKey, TElement>* $$2__current;
      // Field size check
      static_assert(sizeof(System::Linq::IGrouping_2<TKey, TElement>*) == 0x8);
      // public System.Linq.Lookup`2<TKey,TElement> <>4__this
      // Size: 0x8
      // Offset: 0x0
      System::Linq::Lookup_2<TKey, TElement>* $$4__this;
      // Field size check
      static_assert(sizeof(System::Linq::Lookup_2<TKey, TElement>*) == 0x8);
      // private System.Linq.Lookup`2/System.Linq.Grouping<TKey,TElement> <g>5__1
      // Size: 0x8
      // Offset: 0x0
      typename System::Linq::Lookup_2<TKey, TElement>::Grouping* $g$5__1;
      // Field size check
      static_assert(sizeof(typename System::Linq::Lookup_2<TKey, TElement>::Grouping*) == 0x8);
      // Creating value type constructor for type: $GetEnumerator$d__12
      $GetEnumerator$d__12(int $$1__state_ = {}, System::Linq::IGrouping_2<TKey, TElement>* $$2__current_ = {}, System::Linq::Lookup_2<TKey, TElement>* $$4__this_ = {}, typename System::Linq::Lookup_2<TKey, TElement>::Grouping* $g$5__1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $g$5__1{$g$5__1_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>
      operator System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>*>(this);
      }
      // private System.Linq.IGrouping`2<TKey,TElement> System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
      // Offset: 0xFFFFFFFF
      System::Linq::IGrouping_2<TKey, TElement>* System_Collections_Generic_IEnumerator$System_Linq_IGrouping$TKey_TElement$$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::$GetEnumerator$d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<System::Linq::IGrouping_2<TKey, TElement>*, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::$GetEnumerator$d__12::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Lookup_2<TKey, TElement>::$GetEnumerator$d__12* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::$GetEnumerator$d__12::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Lookup_2<TKey, TElement>::$GetEnumerator$d__12*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::$GetEnumerator$d__12::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::$GetEnumerator$d__12::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::$GetEnumerator$d__12::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
    }; // System.Linq.Lookup`2/System.Linq.<GetEnumerator>d__12
    // Could not write size check! Type: System.Linq.Lookup`2/System.Linq.<GetEnumerator>d__12 is generic, or has no fields that are valid for size checks!
    // private System.Collections.Generic.IEqualityComparer`1<TKey> comparer
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEqualityComparer_1<TKey>*) == 0x8);
    // private System.Linq.Lookup`2/System.Linq.Grouping<TKey,TElement>[] groupings
    // Size: 0x8
    // Offset: 0x0
    ::Array<typename System::Linq::Lookup_2<TKey, TElement>::Grouping*>* groupings;
    // Field size check
    static_assert(sizeof(::Array<typename System::Linq::Lookup_2<TKey, TElement>::Grouping*>*) == 0x8);
    // private System.Linq.Lookup`2/System.Linq.Grouping<TKey,TElement> lastGrouping
    // Size: 0x8
    // Offset: 0x0
    typename System::Linq::Lookup_2<TKey, TElement>::Grouping* lastGrouping;
    // Field size check
    static_assert(sizeof(typename System::Linq::Lookup_2<TKey, TElement>::Grouping*) == 0x8);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Lookup_2
    Lookup_2(System::Collections::Generic::IEqualityComparer_1<TKey>* comparer_ = {}, ::Array<typename System::Linq::Lookup_2<TKey, TElement>::Grouping*>* groupings_ = {}, typename System::Linq::Lookup_2<TKey, TElement>::Grouping* lastGrouping_ = {}, int count_ = {}) noexcept : comparer{comparer_}, groupings{groupings_}, lastGrouping{lastGrouping_}, count{count_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>
    operator System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>*>(this);
    }
    // private System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lookup_2<TKey, TElement>* New_ctor(System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lookup_2<TKey, TElement>*, creationType>(comparer)));
    }
    // static System.Linq.Lookup`2<TKey,TElement> Create(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector, System.Func`2<TSource,TElement> elementSelector, System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    template<class TSource>
    static System::Linq::Lookup_2<TKey, TElement>* Create(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector, System::Func_2<TSource, TElement>* elementSelector, System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lookup_2<TKey, TElement>*>::get(), "Create", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(keySelector), ::il2cpp_utils::ExtractType(elementSelector), ::il2cpp_utils::ExtractType(comparer)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Linq::Lookup_2<TKey, TElement>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, source, keySelector, elementSelector, comparer);
    }
    // public System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // System.Int32 InternalGetHashCode(TKey key)
    // Offset: 0xFFFFFFFF
    int InternalGetHashCode(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::InternalGetHashCode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InternalGetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, key);
    }
    // System.Linq.Lookup`2/System.Linq.Grouping<TKey,TElement> GetGrouping(TKey key, System.Boolean create)
    // Offset: 0xFFFFFFFF
    typename System::Linq::Lookup_2<TKey, TElement>::Grouping* GetGrouping(TKey key, bool create) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::GetGrouping");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetGrouping", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(create)})));
      return ::il2cpp_utils::RunMethodThrow<typename System::Linq::Lookup_2<TKey, TElement>::Grouping*, false>(this, ___internal__method, key, create);
    }
    // private System.Void Resize()
    // Offset: 0xFFFFFFFF
    void Resize() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Lookup_2::Resize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Resize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // System.Linq.Lookup`2
  // Could not write size check! Type: System.Linq.Lookup`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Lookup_2, "System.Linq", "Lookup`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
