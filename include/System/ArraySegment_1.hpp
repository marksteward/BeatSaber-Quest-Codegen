// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ArraySegmentEnumerator because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ArraySegment`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct ArraySegment_1/*, public System::ValueType, public System::Collections::Generic::IList_1<T>, public System::Collections::Generic::IReadOnlyList_1<T>*/ {
    public:
    // Nested type: System::ArraySegment_1::ArraySegmentEnumerator<T>
    class ArraySegmentEnumerator;
    // WARNING Size may be invalid!
    // Autogenerated type: System.ArraySegment`1/System.ArraySegmentEnumerator
    // [TokenAttribute] Offset: FFFFFFFF
    class ArraySegmentEnumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = ArraySegment_1<T>;
      static constexpr std::string_view NESTED_NAME = "ArraySegmentEnumerator";
      // private T[] _array
      // Size: 0x8
      // Offset: 0x0
      ::Array<T>* array;
      // Field size check
      static_assert(sizeof(::Array<T>*) == 0x8);
      // private System.Int32 _start
      // Size: 0x4
      // Offset: 0x0
      int start;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _end
      // Size: 0x4
      // Offset: 0x0
      int end;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _current
      // Size: 0x4
      // Offset: 0x0
      int current;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ArraySegmentEnumerator
      ArraySegmentEnumerator(::Array<T>* array_ = {}, int start_ = {}, int end_ = {}, int current_ = {}) noexcept : array{array_}, start{start_}, end{end_}, current{current_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFF
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // System.Void .ctor(System.ArraySegment`1<T> arraySegment)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ArraySegment_1<T>::ArraySegmentEnumerator* New_ctor(System::ArraySegment_1<T> arraySegment) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ArraySegment_1<T>::ArraySegmentEnumerator*, creationType>(arraySegment)));
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFF
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::ArraySegmentEnumerator::Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
    }; // System.ArraySegment`1/System.ArraySegmentEnumerator
    // Could not write size check! Type: System.ArraySegment`1/System.ArraySegmentEnumerator is generic, or has no fields that are valid for size checks!
    // private T[] _array
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* array;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // private System.Int32 _offset
    // Size: 0x4
    // Offset: 0x0
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ArraySegment_1
    constexpr ArraySegment_1(::Array<T>* array_ = {}, int offset_ = {}, int count_ = {}) noexcept : array{array_}, offset{offset_}, count{count_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IList_1<T>
    operator System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IReadOnlyList_1<T>
    operator System::Collections::Generic::IReadOnlyList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IReadOnlyList_1<T>*>(this);
    }
    // public T[] get_Array()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_Array() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::get_Array");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Array", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(*this, ___internal__method);
    }
    // public System.Int32 get_Offset()
    // Offset: 0xFFFFFFFF
    int get_Offset() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::get_Offset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Offset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // private T System.Collections.Generic.IList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T System_Collections_Generic_IList$T$_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method, index);
    }
    // private System.Void System.Collections.Generic.IList<T>.set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_IList$T$_set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index, value);
    }
    // private T System.Collections.Generic.IReadOnlyList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T System_Collections_Generic_IReadOnlyList$T$_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IReadOnlyList<T>.get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IReadOnlyList<T>.get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method, index);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
    }
    // public System.Void .ctor(T[] array)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ArraySegment_1(::Array<T>* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, array);
    }
    // public System.Void .ctor(T[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  ArraySegment_1(::Array<T>* array, int offset, int count)
    // public System.Boolean Equals(System.ArraySegment`1<T> obj)
    // Offset: 0xFFFFFFFF
    bool Equals(System::ArraySegment_1<T> obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
    }
    // private System.Int32 System.Collections.Generic.IList<T>.IndexOf(T item)
    // Offset: 0xFFFFFFFF
    int System_Collections_Generic_IList$T$_IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.IndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.IList<T>.Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_IList$T$_Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index, item);
    }
    // private System.Void System.Collections.Generic.IList<T>.RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_IList$T$_RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IList<T>.RemoveAt");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IList<T>.RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Add(T item)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_ICollection$T$_Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Clear()
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_ICollection$T$_Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Contains(T item)
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, item);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_ICollection$T$_CopyTo(::Array<T>* array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayIndex)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, array, arrayIndex);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Remove(T item)
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.ICollection<T>.Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.ICollection<T>.Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, item);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(*this, ___internal__method);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArraySegment_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
    }
  }; // System.ArraySegment`1
  // Could not write size check! Type: System.ArraySegment`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ArraySegment_1, "System", "ArraySegment`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
