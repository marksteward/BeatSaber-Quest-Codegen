// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Buffer`1
  template<typename TElement>
  struct Buffer_1 : public System::ValueType {
    public:
    // TElement[] items
    // Offset: 0x0
    ::Array<TElement>* items;
    // System.Int32 count
    // Offset: 0x0
    int count;
    // Creating value type constructor for type: Buffer_1
    constexpr Buffer_1(::Array<TElement>* items_ = {}, int count_ = {}) : items{items_}, count{count_} {}
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<TElement> source)
    // Offset: 0xFFFFFFFF
    static Buffer_1<TElement>* New_ctor(System::Collections::Generic::IEnumerable_1<TElement>* source) {
      return (Buffer_1<TElement>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Buffer_1<TElement>>::get(), source));
    }
    // TElement[] ToArray()
    // Offset: 0xFFFFFFFF
    ::Array<TElement>* ToArray() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<TElement>*>(*this, "ToArray"));
    }
  }; // System.Linq.Buffer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Linq::Buffer_1, "System.Linq", "Buffer`1");
#pragma pack(pop)
