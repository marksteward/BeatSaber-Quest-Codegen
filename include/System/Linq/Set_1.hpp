// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Set`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  class Set_1 : public ::Il2CppObject {
    public:
    // Nested type: System::Linq::Set_1::Slot<TElement>
    struct Slot;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Linq.Set`1/System.Linq.Slot
    // [TokenAttribute] Offset: FFFFFFFF
    struct Slot : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::ValueType*/ {
      public:
      using declaring_type = Set_1<TElement>*;
      static constexpr std::string_view NESTED_NAME = "Slot";
      // System.Int32 hashCode
      // Size: 0x4
      // Offset: 0x0
      int hashCode;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // TElement value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TElement value;
      // System.Int32 next
      // Size: 0x4
      // Offset: 0x0
      int next;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Slot
      constexpr Slot(int hashCode_ = {}, TElement value_ = {}, int next_ = {}) noexcept : hashCode{hashCode_}, value{value_}, next{next_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: System.Int32 hashCode
      int _get_hashCode() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Slot::_get_hashCode");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "hashCode"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field setter
      // Set instance field: System.Int32 hashCode
      void _set_hashCode(int value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Slot::_set_hashCode");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "hashCode"))->offset;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
      }
      // Autogenerated instance field getter
      // Get instance field: TElement value
      TElement _get_value() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Slot::_get_value");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
        return *reinterpret_cast<TElement*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field setter
      // Set instance field: TElement value
      void _set_value(TElement value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Slot::_set_value");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
        *reinterpret_cast<TElement*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
      }
      // Autogenerated instance field getter
      // Get instance field: System.Int32 next
      int _get_next() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Slot::_get_next");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "next"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field setter
      // Set instance field: System.Int32 next
      void _set_next(int value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Slot::_set_next");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "next"))->offset;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
      }
    }; // System.Linq.Set`1/System.Linq.Slot
    // Could not write size check! Type: System.Linq.Set`1/System.Linq.Slot is generic, or has no fields that are valid for size checks!
    // private System.Int32[] buckets
    // Size: 0x8
    // Offset: 0x0
    ::Array<int>* buckets;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Linq.Set`1/System.Linq.Slot<TElement>[] slots
    // Size: 0x8
    // Offset: 0x0
    ::Array<typename System::Linq::Set_1<TElement>::Slot>* slots;
    // Field size check
    static_assert(sizeof(::Array<typename System::Linq::Set_1<TElement>::Slot>*) == 0x8);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 freeList
    // Size: 0x4
    // Offset: 0x0
    int freeList;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEqualityComparer`1<TElement> comparer
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TElement>* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEqualityComparer_1<TElement>*) == 0x8);
    // Creating value type constructor for type: Set_1
    Set_1(::Array<int>* buckets_ = {}, ::Array<typename System::Linq::Set_1<TElement>::Slot>* slots_ = {}, int count_ = {}, int freeList_ = {}, System::Collections::Generic::IEqualityComparer_1<TElement>* comparer_ = {}) noexcept : buckets{buckets_}, slots{slots_}, count{count_}, freeList{freeList_}, comparer{comparer_} {}
    // Autogenerated instance field getter
    // Get instance field: private System.Int32[] buckets
    ::Array<int>* _get_buckets() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_get_buckets");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "buckets"))->offset;
      return *reinterpret_cast<::Array<int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Int32[] buckets
    void _set_buckets(::Array<int>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_set_buckets");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "buckets"))->offset;
      *reinterpret_cast<::Array<int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Linq.Set`1/System.Linq.Slot<TElement>[] slots
    ::Array<typename System::Linq::Set_1<TElement>::Slot>* _get_slots() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_get_slots");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "slots"))->offset;
      return *reinterpret_cast<::Array<typename System::Linq::Set_1<TElement>::Slot>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Linq.Set`1/System.Linq.Slot<TElement>[] slots
    void _set_slots(::Array<typename System::Linq::Set_1<TElement>::Slot>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_set_slots");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "slots"))->offset;
      *reinterpret_cast<::Array<typename System::Linq::Set_1<TElement>::Slot>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 count
    int _get_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_get_count");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Int32 count
    void _set_count(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_set_count");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "count"))->offset;
      *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 freeList
    int _get_freeList() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_get_freeList");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "freeList"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Int32 freeList
    void _set_freeList(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_set_freeList");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "freeList"))->offset;
      *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEqualityComparer`1<TElement> comparer
    System::Collections::Generic::IEqualityComparer_1<TElement>* _get_comparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_get_comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "comparer"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEqualityComparer_1<TElement>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Collections.Generic.IEqualityComparer`1<TElement> comparer
    void _set_comparer(System::Collections::Generic::IEqualityComparer_1<TElement>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::_set_comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "comparer"))->offset;
      *reinterpret_cast<System::Collections::Generic::IEqualityComparer_1<TElement>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // public System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TElement> comparer)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Set_1<TElement>* New_ctor(System::Collections::Generic::IEqualityComparer_1<TElement>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Set_1<TElement>*, creationType>(comparer)));
    }
    // public System.Boolean Add(TElement value)
    // Offset: 0xFFFFFFFF
    bool Add(TElement value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value);
    }
    // private System.Boolean Find(TElement value, System.Boolean add)
    // Offset: 0xFFFFFFFF
    bool Find(TElement value, bool add) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Find");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(add)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value, add);
    }
    // private System.Void Resize()
    // Offset: 0xFFFFFFFF
    void Resize() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::Resize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Resize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // System.Int32 InternalGetHashCode(TElement value)
    // Offset: 0xFFFFFFFF
    int InternalGetHashCode(TElement value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Set_1::InternalGetHashCode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InternalGetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
    }
  }; // System.Linq.Set`1
  // Could not write size check! Type: System.Linq.Set`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Set_1, "System.Linq", "Set`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
