// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
    // [SpaceAttribute] Offset: 0xEB8B30
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
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_component"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: protected T _component
    void _set__component(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseStateTransition_1::_set__component");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_component"))->offset;
      *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
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
