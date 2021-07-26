// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.ItemPriority`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TItem, typename TPriority>
  struct ItemPriority_2/*, public System::ValueType*/ {
    public:
    // public TItem Item
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TItem Item;
    // public TPriority Priority
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TPriority Priority;
    // Creating value type constructor for type: ItemPriority_2
    constexpr ItemPriority_2(TItem Item_ = {}, TPriority Priority_ = {}) noexcept : Item{Item_}, Priority{Priority_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public TItem Item
    TItem _get_Item() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::ItemPriority_2::_get_Item");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item"))->offset;
      return *reinterpret_cast<TItem*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public TItem Item
    void _set_Item(TItem value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::ItemPriority_2::_set_Item");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Item"))->offset;
      *reinterpret_cast<TItem*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public TPriority Priority
    TPriority _get_Priority() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::ItemPriority_2::_get_Priority");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Priority"))->offset;
      return *reinterpret_cast<TPriority*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public TPriority Priority
    void _set_Priority(TPriority value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::ItemPriority_2::_set_Priority");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Priority"))->offset;
      *reinterpret_cast<TPriority*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
  }; // UnityEngine.ProBuilder.KdTree.ItemPriority`2
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.ItemPriority`2 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::KdTree::ItemPriority_2, "UnityEngine.ProBuilder.KdTree", "ItemPriority`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
