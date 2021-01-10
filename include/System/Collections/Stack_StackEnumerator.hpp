// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Stack
#include "System/Collections/Stack.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  // Autogenerated type: System.Collections.Stack/StackEnumerator
  // [] Offset: FFFFFFFF
  class Stack::StackEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator, public System::ICloneable*/ {
    public:
    // private System.Collections.Stack _stack
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Stack* stack;
    // Field size check
    static_assert(sizeof(System::Collections::Stack*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object currentElement
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: StackEnumerator
    StackEnumerator(System::Collections::Stack* stack_ = {}, int index_ = {}, int version_ = {}, ::Il2CppObject* currentElement_ = {}) noexcept : stack{stack_}, index{index_}, version{version_}, currentElement{currentElement_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // System.Void .ctor(System.Collections.Stack stack)
    // Offset: 0x1530564
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack::StackEnumerator* New_ctor(System::Collections::Stack* stack) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Stack::StackEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack::StackEnumerator*, creationType>(stack)));
    }
    // public System.Object Clone()
    // Offset: 0x15308B0
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x15308B8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Object get_Current()
    // Offset: 0x15309E8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0x1530A9C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.Stack/StackEnumerator
  static check_size<sizeof(Stack::StackEnumerator), 32 + sizeof(::Il2CppObject*)> __System_Collections_Stack_StackEnumeratorSizeCheck;
  static_assert(sizeof(Stack::StackEnumerator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Stack::StackEnumerator*, "System.Collections", "Stack/StackEnumerator");
#pragma pack(pop)
