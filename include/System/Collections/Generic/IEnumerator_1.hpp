// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IEnumerator`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IEnumerator_1 : public ::Il2CppObject/*, public System::IDisposable, public System::Collections::IEnumerator*/ {
    public:
    // Creating value type constructor for type: IEnumerator_1
    IEnumerator_1() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // public T get_Current()
    // Offset: 0xFFFFFFFF
    T get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IEnumerator_1::get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
  }; // System.Collections.Generic.IEnumerator`1
  // Could not write size check! Type: System.Collections.Generic.IEnumerator`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IEnumerator_1, "System.Collections.Generic", "IEnumerator`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
