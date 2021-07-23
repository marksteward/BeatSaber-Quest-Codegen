// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseStateTransition
#include "GlobalNamespace/BaseStateTransition.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BaseStateTransition`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BaseStateTransition_1 : public GlobalNamespace::BaseStateTransition {
    public:
    // [SpaceAttribute] Offset: 0xE0BF14
    // protected T _component
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T component;
    // Creating value type constructor for type: BaseStateTransition_1
    BaseStateTransition_1(T component_ = {}) noexcept : component{component_} {}
    // Autogenerated instance field getter
    // Get instance field: protected T _component
    T _get__component() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseStateTransition_1::_get__component");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(___internal__instance, "_component"));
    }
    // Autogenerated instance field setter
    // Set instance field: protected T _component
    void _set__component(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseStateTransition_1::_set__component");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "_component", value));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseStateTransition_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseStateTransition_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseStateTransition_1<T>*, creationType>()));
    }
  }; // BaseStateTransition`1
  // Could not write size check! Type: BaseStateTransition`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::BaseStateTransition_1, "", "BaseStateTransition`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
