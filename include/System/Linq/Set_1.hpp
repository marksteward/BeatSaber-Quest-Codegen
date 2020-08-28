// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Skipping declaration: Slot because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Set`1
  template<typename TElement>
  class Set_1 : public ::Il2CppObject {
    public:
    // Nested type: System::Linq::Set_1::Slot<TElement>
    struct Slot;
    // Autogenerated type: System.Linq.Set`1/Slot
    struct Slot : public System::ValueType, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = Set_1<TElement>*;
      // System.Int32 hashCode
      // Offset: 0x0
      int hashCode;
      // TElement value
      // Offset: 0x0
      TElement value;
      // System.Int32 next
      // Offset: 0x0
      int next;
      // Creating value type constructor for type: Slot
      constexpr Slot(int hashCode_ = {}, TElement value_ = {}, int next_ = {}) : hashCode{hashCode_}, value{value_}, next{next_} {}
    }; // System.Linq.Set`1/Slot
    // private System.Int32[] buckets
    // Offset: 0x0
    ::Array<int>* buckets;
    // private System.Linq.Set`1/Slot<TElement>[] slots
    // Offset: 0x0
    ::Array<typename System::Linq::Set_1<TElement>::Slot>* slots;
    // private System.Int32 count
    // Offset: 0x0
    int count;
    // private System.Int32 freeList
    // Offset: 0x0
    int freeList;
    // private System.Collections.Generic.IEqualityComparer`1<TElement> comparer
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TElement>* comparer;
    // public System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TElement> comparer)
    // Offset: 0xFFFFFFFF
    static Set_1<TElement>* New_ctor(System::Collections::Generic::IEqualityComparer_1<TElement>* comparer) {
      return (Set_1<TElement>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Set_1<TElement>*>::get(), comparer));
    }
    // public System.Boolean Add(TElement value)
    // Offset: 0xFFFFFFFF
    bool Add(TElement value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Add", value));
    }
    // private System.Boolean Find(TElement value, System.Boolean add)
    // Offset: 0xFFFFFFFF
    bool Find(TElement value, bool add) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Find", value, add));
    }
    // private System.Void Resize()
    // Offset: 0xFFFFFFFF
    void Resize() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Resize"));
    }
    // System.Int32 InternalGetHashCode(TElement value)
    // Offset: 0xFFFFFFFF
    int InternalGetHashCode(TElement value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "InternalGetHashCode", value));
    }
  }; // System.Linq.Set`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Set_1, "System.Linq", "Set`1");
#pragma pack(pop)
