// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.TMP_RichTextTagStack`1
  // [] Offset: FFFFFFFF
  template<typename T>
  struct TMP_RichTextTagStack_1/*, public System::ValueType*/ {
    public:
    // public T[] m_ItemStack
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* m_ItemStack;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // public System.Int32 m_Index
    // Size: 0x4
    // Offset: 0x0
    int m_Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Capacity
    // Size: 0x4
    // Offset: 0x0
    int m_Capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private T m_DefaultItem
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T m_DefaultItem;
    // Creating value type constructor for type: TMP_RichTextTagStack_1
    constexpr TMP_RichTextTagStack_1(::Array<T>* m_ItemStack_ = {}, int m_Index_ = {}, int m_Capacity_ = {}, T m_DefaultItem_ = {}) noexcept : m_ItemStack{m_ItemStack_}, m_Index{m_Index_}, m_Capacity{m_Capacity_}, m_DefaultItem{m_DefaultItem_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 k_DefaultCapacity
    static int _get_k_DefaultCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("_get_k_DefaultCapacity");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_RichTextTagStack_1<T>>::get(), "k_DefaultCapacity"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 k_DefaultCapacity
    static void _set_k_DefaultCapacity(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("_set_k_DefaultCapacity");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_RichTextTagStack_1<T>>::get(), "k_DefaultCapacity", value));
    }
    // public System.Void .ctor(T[] tagStack)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TMP_RichTextTagStack_1(::Array<T>* tagStack) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext(".ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(tagStack)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, tagStack);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TMP_RichTextTagStack_1(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext(".ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(capacity)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, capacity);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("Clear");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Clear", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // public System.Void SetDefault(T item)
    // Offset: 0xFFFFFFFF
    void SetDefault(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("SetDefault");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetDefault", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, item);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, item);
    }
    // public T Remove()
    // Offset: 0xFFFFFFFF
    T Remove() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
    }
    // public System.Void Push(T item)
    // Offset: 0xFFFFFFFF
    void Push(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("Push");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Push", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, item);
    }
    // public T Pop()
    // Offset: 0xFFFFFFFF
    T Pop() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("Pop");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Pop", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
    }
    // public T Peek()
    // Offset: 0xFFFFFFFF
    T Peek() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("Peek");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Peek", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
    }
    // public T CurrentItem()
    // Offset: 0xFFFFFFFF
    T CurrentItem() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("CurrentItem");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "CurrentItem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
    }
    // public T PreviousItem()
    // Offset: 0xFFFFFFFF
    T PreviousItem() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_RichTextTagStack_1").WithContext("PreviousItem");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "PreviousItem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
    }
  }; // TMPro.TMP_RichTextTagStack`1
  // Could not write size check! Type: TMPro.TMP_RichTextTagStack`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(TMPro::TMP_RichTextTagStack_1, "TMPro", "TMP_RichTextTagStack`1");
