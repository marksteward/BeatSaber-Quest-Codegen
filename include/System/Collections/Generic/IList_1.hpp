// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IList`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D6DFF8
  // [TypeDependencyAttribute] Offset: D6DFF8
  template<typename T>
  class IList_1 : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<T>*/ {
    public:
    // Creating value type constructor for type: IList_1
    IList_1() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<T>
    operator System::Collections::Generic::ICollection_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<T>*>(this);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IList_1::get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IList_1::set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Int32 IndexOf(T item)
    // Offset: 0xFFFFFFFF
    int IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IList_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, item);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    void Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IList_1::Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IList_1::RemoveAt");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index);
    }
  }; // System.Collections.Generic.IList`1
  // Could not write size check! Type: System.Collections.Generic.IList`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IList_1, "System.Collections.Generic", "IList`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
