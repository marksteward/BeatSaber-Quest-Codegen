// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IValue`1
#include "GlobalNamespace/IValue_1.hpp"
// Including type: IObservableChange
#include "GlobalNamespace/IObservableChange.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ObservableVariableSO`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObservableVariableSO_1 : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IValue_1<T>, public GlobalNamespace::IObservableChange*/ {
    public:
    // private System.Action didChangeEvent
    // Size: 0x8
    // Offset: 0x0
    System::Action* didChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private T _value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    // Creating value type constructor for type: ObservableVariableSO_1
    ObservableVariableSO_1(System::Action* didChangeEvent_ = {}, T value_ = {}) noexcept : didChangeEvent{didChangeEvent_}, value{value_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IValue_1<T>
    operator GlobalNamespace::IValue_1<T>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IValue_1<T>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IObservableChange
    operator GlobalNamespace::IObservableChange() noexcept {
      return *reinterpret_cast<GlobalNamespace::IObservableChange*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private System.Action didChangeEvent
    System::Action* _get_didChangeEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::_get_didChangeEvent");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action*>(___internal__instance, "didChangeEvent"));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Action didChangeEvent
    void _set_didChangeEvent(System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::_set_didChangeEvent");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "didChangeEvent", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private T _value
    T _get__value() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::_get__value");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(___internal__instance, "_value"));
    }
    // Autogenerated instance field setter
    // Set instance field: private T _value
    void _set__value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::_set__value");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "_value", value));
    }
    // public T get_value()
    // Offset: 0xFFFFFFFF
    T get_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::get_value");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.Void set_value(T value)
    // Offset: 0xFFFFFFFF
    void set_value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::set_value");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void add_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_didChangeEvent(System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::add_didChangeEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_didChangeEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_didChangeEvent(System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::remove_didChangeEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_didChangeEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObservableVariableSO_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariableSO_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObservableVariableSO_1<T>*, creationType>()));
    }
  }; // ObservableVariableSO`1
  // Could not write size check! Type: ObservableVariableSO`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ObservableVariableSO_1, "", "ObservableVariableSO`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
