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
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: ModestTree.Util.ValuePair`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4>
  class ValuePair_4 : public ::Il2CppObject {
    public:
    // public readonly T1 First
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 First;
    // public readonly T2 Second
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Second;
    // public readonly T3 Third
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T3 Third;
    // public readonly T4 Fourth
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T4 Fourth;
    // Creating value type constructor for type: ValuePair_4
    ValuePair_4(T1 First_ = {}, T2 Second_ = {}, T3 Third_ = {}, T4 Fourth_ = {}) noexcept : First{First_}, Second{Second_}, Third{Third_}, Fourth{Fourth_} {}
    // Autogenerated instance field getter
    // Get instance field: public readonly T1 First
    T1 _get_First() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_get_First");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "First"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public readonly T1 First
    void _set_First(T1 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_set_First");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "First"))->offset;
      *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly T2 Second
    T2 _get_Second() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_get_Second");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Second"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public readonly T2 Second
    void _set_Second(T2 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_set_Second");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Second"))->offset;
      *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly T3 Third
    T3 _get_Third() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_get_Third");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Third"))->offset;
      return *reinterpret_cast<T3*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public readonly T3 Third
    void _set_Third(T3 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_set_Third");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Third"))->offset;
      *reinterpret_cast<T3*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly T4 Fourth
    T4 _get_Fourth() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_get_Fourth");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Fourth"))->offset;
      return *reinterpret_cast<T4*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public readonly T4 Fourth
    void _set_Fourth(T4 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::_set_Fourth");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Fourth"))->offset;
      *reinterpret_cast<T4*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // public System.Void .ctor(T1 first, T2 second, T3 third, T4 fourth)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValuePair_4<T1, T2, T3, T4>* New_ctor(T1 first, T2 second, T3 third, T4 fourth) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValuePair_4<T1, T2, T3, T4>*, creationType>(first, second, third, fourth)));
    }
    // public System.Boolean Equals(ModestTree.Util.ValuePair`4<T1,T2,T3,T4> that)
    // Offset: 0xFFFFFFFF
    bool Equals(ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* that) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(that)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, that);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValuePair_4<T1, T2, T3, T4>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValuePair_4<T1, T2, T3, T4>*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_4::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
  }; // ModestTree.Util.ValuePair`4
  // Could not write size check! Type: ModestTree.Util.ValuePair`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::Util::ValuePair_4, "ModestTree.Util", "ValuePair`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
