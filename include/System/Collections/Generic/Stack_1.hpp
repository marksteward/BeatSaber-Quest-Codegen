// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Collections.Generic.IReadOnlyCollection`1
#include "System/Collections/Generic/IReadOnlyCollection_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Enumerator because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.Stack`1
  // [] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: D45C34
  // [DebuggerTypeProxyAttribute] Offset: D45C34
  template<typename T>
  class Stack_1 : public ::Il2CppObject/*, public System::Collections::ICollection, public System::Collections::Generic::IReadOnlyCollection_1<T>*/ {
    public:
    // Nested type: System::Collections::Generic::Stack_1::Enumerator<T>
    struct Enumerator;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Collections.Generic.Stack`1/Enumerator
    // [] Offset: FFFFFFFF
    struct Enumerator : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::ValueType, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = Stack_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Enumerator";
      // private readonly System.Collections.Generic.Stack`1<T> _stack
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::Stack_1<T>* stack;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::Stack_1<T>*) == 0x8);
      // private readonly System.Int32 _version
      // Size: 0x4
      // Offset: 0x0
      int version;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Int32 _index
      // Size: 0x4
      // Offset: 0x0
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private T _currentElement
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T currentElement;
      // Creating value type constructor for type: Enumerator
      constexpr Enumerator(System::Collections::Generic::Stack_1<T>* stack_ = {}, int version_ = {}, int index_ = {}, T currentElement_ = {}) noexcept : stack{stack_}, version{version_}, index{index_}, currentElement{currentElement_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // System.Void .ctor(System.Collections.Generic.Stack`1<T> stack)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      Enumerator(System::Collections::Generic::Stack_1<T>* stack) {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Enumerator").WithContext(".ctor");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(stack)));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stack);
      }
      // private System.Void ThrowEnumerationNotStartedOrEnded()
      // Offset: 0xFFFFFFFF
      void ThrowEnumerationNotStartedOrEnded() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Enumerator").WithContext("ThrowEnumerationNotStartedOrEnded");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ThrowEnumerationNotStartedOrEnded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Enumerator").WithContext("Dispose");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
      }
      // Creating proxy method: System_IDisposable_Dispose
      // Maps to method: Dispose
      void System_IDisposable_Dispose() {
        Dispose();
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Enumerator").WithContext("MoveNext");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // public T get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      T get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Enumerator").WithContext("get_Current");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
      }
      // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
      // Maps to method: get_Current
      T System_Collections_Generic_IEnumerator_1_get_Current() {
        return get_Current();
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Enumerator").WithContext("System.Collections.IEnumerator.get_Current");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(*this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Enumerator").WithContext("System.Collections.IEnumerator.Reset");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
      }
    }; // System.Collections.Generic.Stack`1/Enumerator
    // Could not write size check! Type: System.Collections.Generic.Stack`1/Enumerator is generic, or has no fields that are valid for size checks!
    // private T[] _array
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* array;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x0
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x0
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: Stack_1
    Stack_1(::Array<T>* array_ = {}, int size_ = {}, int version_ = {}, ::Il2CppObject* syncRoot_ = {}) noexcept : array{array_}, size{size_}, version{version_}, syncRoot{syncRoot_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IReadOnlyCollection_1<T>
    operator System::Collections::Generic::IReadOnlyCollection_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IReadOnlyCollection_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 DefaultCapacity
    static int _get_DefaultCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("_get_DefaultCapacity");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get(), "DefaultCapacity"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 DefaultCapacity
    static void _set_DefaultCapacity(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("_set_DefaultCapacity");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Stack_1<T>*>::get(), "DefaultCapacity", value));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack_1<T>*, creationType>(capacity)));
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("Contains");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public T Peek()
    // Offset: 0xFFFFFFFF
    T Peek() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("Peek");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Peek", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public T Pop()
    // Offset: 0xFFFFFFFF
    T Pop() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("Pop");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Pop", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.Void Push(T item)
    // Offset: 0xFFFFFFFF
    void Push(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("Push");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Push", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void ThrowForEmptyStack()
    // Offset: 0xFFFFFFFF
    void ThrowForEmptyStack() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("ThrowForEmptyStack");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ThrowForEmptyStack", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack_1<T>*, creationType>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    // Base method: System.Int32 IReadOnlyCollection_1::get_Count()
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("get_Count");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count() {
      return get_Count();
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("System.Collections.ICollection.CopyTo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, arrayIndex)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, arrayIndex);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Generic").WithContext("Stack_1").WithContext("System.Collections.IEnumerable.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // System.Collections.Generic.Stack`1
  // Could not write size check! Type: System.Collections.Generic.Stack`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::Stack_1, "System.Collections.Generic", "Stack`1");
