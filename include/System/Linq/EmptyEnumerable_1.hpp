// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.EmptyEnumerable`1
  // [] Offset: FFFFFFFF
  template<typename TElement>
  class EmptyEnumerable_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EmptyEnumerable_1
    EmptyEnumerable_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static public readonly TElement[] Instance
    static ::Array<TElement>* _get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Linq").WithContext("EmptyEnumerable_1").WithContext("_get_Instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<TElement>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), "Instance"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly TElement[] Instance
    static void _set_Instance(::Array<TElement>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Linq").WithContext("EmptyEnumerable_1").WithContext("_set_Instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), "Instance", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Linq").WithContext("EmptyEnumerable_1").WithContext(".cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
  }; // System.Linq.EmptyEnumerable`1
  // Could not write size check! Type: System.Linq.EmptyEnumerable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::EmptyEnumerable_1, "System.Linq", "EmptyEnumerable`1");
