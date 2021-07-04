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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Queue
  // [DebuggerDisplayAttribute] Offset: D7FF74
  // [DebuggerTypeProxyAttribute] Offset: D7FF74
  // [ComVisibleAttribute] Offset: D7FF74
  class Queue : public ::Il2CppObject/*, public System::Collections::ICollection, public System::ICloneable*/ {
    public:
    // Nested type: System::Collections::Queue::QueueEnumerator
    class QueueEnumerator;
    // Nested type: System::Collections::Queue::QueueDebugView
    class QueueDebugView;
    // private System.Object[] _array
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* array;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Int32 _head
    // Size: 0x4
    // Offset: 0x18
    int head;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _tail
    // Size: 0x4
    // Offset: 0x1C
    int tail;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _growFactor
    // Size: 0x4
    // Offset: 0x24
    int growFactor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x28
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Queue
    Queue(::Array<::Il2CppObject*>* array_ = {}, int head_ = {}, int tail_ = {}, int size_ = {}, int growFactor_ = {}, int version_ = {}) noexcept : array{array_}, head{head_}, tail{tail_}, size{size_}, growFactor{growFactor_}, version{version_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x1973F7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Int32 capacity, System.Single growFactor)
    // Offset: 0x1973DA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor(int capacity, float growFactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>(capacity, growFactor)));
    }
    // public System.Void .ctor(System.Collections.ICollection col)
    // Offset: 0x1973F84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor(System::Collections::ICollection* col) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>(col)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x197420C
    int get_Count();
    // public System.Object Clone()
    // Offset: 0x1974214
    ::Il2CppObject* Clone();
    // public System.Void Clear()
    // Offset: 0x1974300
    void Clear();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1974374
    void CopyTo(System::Array* array, int index);
    // public System.Void Enqueue(System.Object obj)
    // Offset: 0x1974564
    void Enqueue(::Il2CppObject* obj);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1974768
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Object Dequeue()
    // Offset: 0x197481C
    ::Il2CppObject* Dequeue();
    // public System.Object Peek()
    // Offset: 0x197492C
    ::Il2CppObject* Peek();
    // System.Object GetElement(System.Int32 i)
    // Offset: 0x1974A00
    ::Il2CppObject* GetElement(int i);
    // public System.Object[] ToArray()
    // Offset: 0x1974A4C
    ::Array<::Il2CppObject*>* ToArray();
    // private System.Void SetCapacity(System.Int32 capacity)
    // Offset: 0x197466C
    void SetCapacity(int capacity);
    // public System.Void .ctor()
    // Offset: 0x1973D98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Queue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Queue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Queue*, creationType>()));
    }
  }; // System.Collections.Queue
  #pragma pack(pop)
  static check_size<sizeof(Queue), 40 + sizeof(int)> __System_Collections_QueueSizeCheck;
  static_assert(sizeof(Queue) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Queue*, "System.Collections", "Queue");
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Queue::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Queue::*)()>(&System::Collections::Queue::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)()>(&System::Collections::Queue::Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)()>(&System::Collections::Queue::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)(System::Array*, int)>(&System::Collections::Queue::CopyTo)> {
  const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)(::Il2CppObject*)>(&System::Collections::Queue::Enqueue)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::Queue::*)()>(&System::Collections::Queue::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Dequeue
// Il2CppName: Dequeue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)()>(&System::Collections::Queue::Dequeue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Dequeue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)()>(&System::Collections::Queue::Peek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::GetElement
// Il2CppName: GetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Queue::*)(int)>(&System::Collections::Queue::GetElement)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "GetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Collections::Queue::*)()>(&System::Collections::Queue::ToArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::SetCapacity
// Il2CppName: SetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Queue::*)(int)>(&System::Collections::Queue::SetCapacity)> {
  const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Queue*), "SetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Collections::Queue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
