// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Stack
  // [DebuggerTypeProxyAttribute] Offset: D8018C
  // [ComVisibleAttribute] Offset: D8018C
  // [DebuggerDisplayAttribute] Offset: D8018C
  class Stack : public ::Il2CppObject/*, public System::Collections::ICollection, public System::ICloneable*/ {
    public:
    // Nested type: System::Collections::Stack::StackEnumerator
    class StackEnumerator;
    // Nested type: System::Collections::Stack::StackDebugView
    class StackDebugView;
    // private System.Object[] _array
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* array;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x18
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Stack
    Stack(::Array<::Il2CppObject*>* array_ = {}, int size_ = {}, int version_ = {}) noexcept : array{array_}, size{size_}, version{version_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x1978298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Stack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack*, creationType>(initialCapacity)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x1978370
    int get_Count();
    // public System.Void Clear()
    // Offset: 0x1978378
    void Clear();
    // public System.Object Clone()
    // Offset: 0x19783B4
    ::Il2CppObject* Clone();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1978454
    void CopyTo(System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x197870C
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Object Peek()
    // Offset: 0x19787B0
    ::Il2CppObject* Peek();
    // public System.Object Pop()
    // Offset: 0x1978878
    ::Il2CppObject* Pop();
    // public System.Void Push(System.Object obj)
    // Offset: 0x1978950
    void Push(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x1978234
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Stack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack*, creationType>()));
    }
  }; // System.Collections.Stack
  #pragma pack(pop)
  static check_size<sizeof(Stack), 28 + sizeof(int)> __System_Collections_StackSizeCheck;
  static_assert(sizeof(Stack) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Stack*, "System.Collections", "Stack");
// Writing MetadataGetter for method: System::Collections::Stack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Stack::get_Count
// Il2CppName: get_Count
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::Clear
// Il2CppName: Clear
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::CopyTo
// Il2CppName: CopyTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::GetEnumerator
// Il2CppName: GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::Peek
// Il2CppName: Peek
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::Pop
// Il2CppName: Pop
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::Push
// Il2CppName: Push
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::Stack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
