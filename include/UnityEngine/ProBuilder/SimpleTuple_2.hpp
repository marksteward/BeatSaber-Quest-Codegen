// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.SimpleTuple`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2>
  struct SimpleTuple_2/*, public System::ValueType*/ {
    public:
    // private T1 m_Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 m_Item1;
    // private T2 m_Item2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 m_Item2;
    // Creating value type constructor for type: SimpleTuple_2
    constexpr SimpleTuple_2(T1 m_Item1_ = {}, T2 m_Item2_ = {}) noexcept : m_Item1{m_Item1_}, m_Item2{m_Item2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private T1 m_Item1
    T1 _get_m_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::_get_m_Item1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Item1"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private T1 m_Item1
    void _set_m_Item1(T1 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::_set_m_Item1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Item1"))->offset;
      *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private T2 m_Item2
    T2 _get_m_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::_get_m_Item2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Item2"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private T2 m_Item2
    void _set_m_Item2(T2 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::_set_m_Item2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Item2"))->offset;
      *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // public T1 get_item1()
    // Offset: 0xFFFFFFFF
    T1 get_item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::get_item1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_item1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T1, false>(*this, ___internal__method);
    }
    // public System.Void set_item1(T1 value)
    // Offset: 0xFFFFFFFF
    void set_item1(T1 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::set_item1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_item1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public T2 get_item2()
    // Offset: 0xFFFFFFFF
    T2 get_item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::get_item2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_item2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T2, false>(*this, ___internal__method);
    }
    // public System.Void set_item2(T2 value)
    // Offset: 0xFFFFFFFF
    void set_item2(T2 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::set_item2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_item2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // public System.Void .ctor(T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  SimpleTuple_2(T1 item1, T2 item2)
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SimpleTuple_2::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
    }
  }; // UnityEngine.ProBuilder.SimpleTuple`2
  // Could not write size check! Type: UnityEngine.ProBuilder.SimpleTuple`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::SimpleTuple_2, "UnityEngine.ProBuilder", "SimpleTuple`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
