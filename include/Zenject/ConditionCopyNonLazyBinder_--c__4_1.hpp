// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConditionCopyNonLazyBinder
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindingCondition
  class BindingCondition;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ConditionCopyNonLazyBinder/<>c__4`1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D92F78
  template<typename T>
  class ConditionCopyNonLazyBinder::$$c__4_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c__4_1
    $$c__4_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.ConditionCopyNonLazyBinder/<>c__4`1<T> <>9
    static Zenject::ConditionCopyNonLazyBinder::$$c__4_1<T>* _get_$$9() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("$$c__4_1").WithContext("_get_$$9");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::ConditionCopyNonLazyBinder::$$c__4_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionCopyNonLazyBinder::$$c__4_1<T>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.ConditionCopyNonLazyBinder/<>c__4`1<T> <>9
    static void _set_$$9(Zenject::ConditionCopyNonLazyBinder::$$c__4_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("$$c__4_1").WithContext("_set_$$9");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionCopyNonLazyBinder::$$c__4_1<T>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public Zenject.BindingCondition <>9__4_0
    static Zenject::BindingCondition* _get_$$9__4_0() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("$$c__4_1").WithContext("_get_$$9__4_0");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::BindingCondition*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionCopyNonLazyBinder::$$c__4_1<T>*>::get(), "<>9__4_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public Zenject.BindingCondition <>9__4_0
    static void _set_$$9__4_0(Zenject::BindingCondition* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("$$c__4_1").WithContext("_set_$$9__4_0");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionCopyNonLazyBinder::$$c__4_1<T>*>::get(), "<>9__4_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("$$c__4_1").WithContext(".cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionCopyNonLazyBinder::$$c__4_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // System.Boolean <WhenInjectedInto>b__4_0(Zenject.InjectContext r)
    // Offset: 0xFFFFFFFF
    bool $WhenInjectedInto$b__4_0(Zenject::InjectContext* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("$$c__4_1").WithContext("<WhenInjectedInto>b__4_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<WhenInjectedInto>b__4_0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(r))));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, r);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionCopyNonLazyBinder::$$c__4_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("$$c__4_1").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionCopyNonLazyBinder::$$c__4_1<T>*, creationType>()));
    }
  }; // Zenject.ConditionCopyNonLazyBinder/<>c__4`1
  // Could not write size check! Type: Zenject.ConditionCopyNonLazyBinder/<>c__4`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ConditionCopyNonLazyBinder::$$c__4_1, "Zenject", "ConditionCopyNonLazyBinder/<>c__4`1");
