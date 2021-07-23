// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SortExtensions
#include "GlobalNamespace/SortExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SortExtensions/<>c__DisplayClass1_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class SortExtensions::$$c__DisplayClass1_0_1 : public ::Il2CppObject {
    public:
    // public System.Func`2<T,System.Int32> getSortIndex
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<T, int>* getSortIndex;
    // Field size check
    static_assert(sizeof(System::Func_2<T, int>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1_0_1
    $$c__DisplayClass1_0_1(System::Func_2<T, int>* getSortIndex_ = {}) noexcept : getSortIndex{getSortIndex_} {}
    // Creating conversion operator: operator System::Func_2<T, int>*
    constexpr operator System::Func_2<T, int>*() const noexcept {
      return getSortIndex;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<T,System.Int32> getSortIndex
    System::Func_2<T, int>* _get_getSortIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SortExtensions::$$c__DisplayClass1_0_1::_get_getSortIndex");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<T, int>*>(___internal__instance, "getSortIndex")));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Func`2<T,System.Int32> getSortIndex
    void _set_getSortIndex(System::Func_2<T, int>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SortExtensions::$$c__DisplayClass1_0_1::_set_getSortIndex");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "getSortIndex", value));
    }
    // System.Int32 <Sort>b__0(T a, T b)
    // Offset: 0xFFFFFFFF
    int $Sort$b__0(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SortExtensions::$$c__DisplayClass1_0_1::<Sort>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Sort>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, a, b);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortExtensions::$$c__DisplayClass1_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SortExtensions::$$c__DisplayClass1_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortExtensions::$$c__DisplayClass1_0_1<T>*, creationType>()));
    }
  }; // SortExtensions/<>c__DisplayClass1_0`1
  // Could not write size check! Type: SortExtensions/<>c__DisplayClass1_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SortExtensions::$$c__DisplayClass1_0_1, "", "SortExtensions/<>c__DisplayClass1_0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
