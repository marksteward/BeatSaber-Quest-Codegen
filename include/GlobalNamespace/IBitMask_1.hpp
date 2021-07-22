// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: IBitMask`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IBitMask_1 : public ::Il2CppObject/*, public System::IEquatable_1<T>*/ {
    public:
    // Creating value type constructor for type: IBitMask_1
    IBitMask_1() noexcept {}
    // Creating interface conversion operator: operator System::IEquatable_1<T>
    operator System::IEquatable_1<T>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<T>*>(this);
    }
    // public System.Int32 get_bitCount()
    // Offset: 0xFFFFFFFF
    int get_bitCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMask_1::get_bitCount");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_bitCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public T SetBits(System.Int32 offset, System.UInt64 bits)
    // Offset: 0xFFFFFFFF
    T SetBits(int offset, uint64_t bits) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMask_1::SetBits");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetBits", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(bits)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, offset, bits);
    }
    // public System.UInt64 GetBits(System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    uint64_t GetBits(int offset, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMask_1::GetBits");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetBits", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(count)})));
      return ::il2cpp_utils::RunMethodThrow<uint64_t, false>(this, ___internal__method, offset, count);
    }
  }; // IBitMask`1
  // Could not write size check! Type: IBitMask`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IBitMask_1, "", "IBitMask`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
