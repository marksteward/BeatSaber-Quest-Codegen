// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Shared`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Shared_1 : public ::Il2CppObject {
    public:
    // T Value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T Value;
    // Creating value type constructor for type: Shared_1
    Shared_1(T Value_ = {}) noexcept : Value{Value_} {}
    // Autogenerated instance field getter
    // Get instance field: T Value
    T _get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Shared_1::_get_Value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: T Value
    void _set_Value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Shared_1::_set_Value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Value"))->offset;
      *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // System.Void .ctor(T value)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Shared_1<T>* New_ctor(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Shared_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Shared_1<T>*, creationType>(value)));
    }
  }; // System.Threading.Tasks.Shared`1
  // Could not write size check! Type: System.Threading.Tasks.Shared`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::Shared_1, "System.Threading.Tasks", "Shared`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
