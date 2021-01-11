// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Array/ArrayEnumerator
  // [] Offset: FFFFFFFF
  class Array::ArrayEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator, public System::ICloneable*/ {
    public:
    // private System.Array _array
    // Size: 0x8
    // Offset: 0x10
    System::Array* array;
    // Field size check
    static_assert(sizeof(System::Array*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _endIndex
    // Size: 0x4
    // Offset: 0x1C
    int endIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ArrayEnumerator
    ArrayEnumerator(System::Array* array_ = {}, int index_ = {}, int endIndex_ = {}) noexcept : array{array_}, index{index_}, endIndex{endIndex_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // System.Void .ctor(System.Array array)
    // Offset: 0x1CA6358
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Array::ArrayEnumerator* New_ctor(System::Array* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::ArrayEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Array::ArrayEnumerator*, creationType>(array)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1CA6D9C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x1CA6DC4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Object Clone()
    // Offset: 0x1CA6DD0
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Object get_Current()
    // Offset: 0x1CA6DD8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // System.Array/ArrayEnumerator
  static check_size<sizeof(Array::ArrayEnumerator), 28 + sizeof(int)> __System_Array_ArrayEnumeratorSizeCheck;
  static_assert(sizeof(Array::ArrayEnumerator) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Array::ArrayEnumerator*, "System", "Array/ArrayEnumerator");
