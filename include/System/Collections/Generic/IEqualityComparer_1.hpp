// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IEqualityComparer`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class IEqualityComparer_1 {
    public:
    // Creating value type constructor for type: IEqualityComparer_1
    IEqualityComparer_1() noexcept {}
    // public System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFF
    bool Equals(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IEqualityComparer_1::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x, y);
    }
    // public System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IEqualityComparer_1::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
  }; // System.Collections.Generic.IEqualityComparer`1
  // Could not write size check! Type: System.Collections.Generic.IEqualityComparer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IEqualityComparer_1, "System.Collections.Generic", "IEqualityComparer`1");
