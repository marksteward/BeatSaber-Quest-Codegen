// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.AsyncLocalValueChangedArgs`1
#include "System/Threading/AsyncLocalValueChangedArgs_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.AsyncLocal`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AsyncLocal_1 : public ::Il2CppObject {
    public:
    // private readonly System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<T>> m_valueChangedHandler
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>* m_valueChangedHandler;
    // Field size check
    static_assert(sizeof(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>*) == 0x8);
    // Creating value type constructor for type: AsyncLocal_1
    AsyncLocal_1(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>* m_valueChangedHandler_ = {}) noexcept : m_valueChangedHandler{m_valueChangedHandler_} {}
    // Creating conversion operator: operator System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>*
    constexpr operator System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>*() const noexcept {
      return m_valueChangedHandler;
    }
  }; // System.Threading.AsyncLocal`1
  // Could not write size check! Type: System.Threading.AsyncLocal`1 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::AsyncLocal_1, "System.Threading", "AsyncLocal`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
