// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
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
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ArrayList/ArrayListEnumeratorSimple
  class ArrayList::ArrayListEnumeratorSimple : public ::Il2CppObject/*, public System::Collections::IEnumerator, public System::ICloneable*/ {
    public:
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 version
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
    // private System.Boolean isArrayList
    // Size: 0x1
    // Offset: 0x28
    bool isArrayList;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ArrayListEnumeratorSimple
    ArrayListEnumeratorSimple(System::Collections::ArrayList* list_ = {}, int index_ = {}, int version_ = {}, ::Il2CppObject* currentElement_ = {}, bool isArrayList_ = {}) noexcept : list{list_}, index{index_}, version{version_}, currentElement{currentElement_}, isArrayList{isArrayList_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private System.Object dummyObject
    static ::Il2CppObject* _get_dummyObject();
    // Set static field: static private System.Object dummyObject
    static void _set_dummyObject(::Il2CppObject* value);
    // System.Void .ctor(System.Collections.ArrayList list)
    // Offset: 0x17827A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList::ArrayListEnumeratorSimple* New_ctor(System::Collections::ArrayList* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ArrayList::ArrayListEnumeratorSimple::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList::ArrayListEnumeratorSimple*, creationType>(list)));
    }
    // public System.Object Clone()
    // Offset: 0x1783454
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x178345C
    bool MoveNext();
    // public System.Object get_Current()
    // Offset: 0x1783654
    ::Il2CppObject* get_Current();
    // public System.Void Reset()
    // Offset: 0x1783740
    void Reset();
    // static private System.Void .cctor()
    // Offset: 0x1783824
    static void _cctor();
  }; // System.Collections.ArrayList/ArrayListEnumeratorSimple
  #pragma pack(pop)
  static check_size<sizeof(ArrayList::ArrayListEnumeratorSimple), 40 + sizeof(bool)> __System_Collections_ArrayList_ArrayListEnumeratorSimpleSizeCheck;
  static_assert(sizeof(ArrayList::ArrayListEnumeratorSimple) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList::ArrayListEnumeratorSimple*, "System.Collections", "ArrayList/ArrayListEnumeratorSimple");
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::get_Current
// Il2CppName: get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::Reset
// Il2CppName: Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Collections::ArrayList::ArrayListEnumeratorSimple::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
