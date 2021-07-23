// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.ITupleInternal
#include "System/ITupleInternal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Tuple`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3>
  class Tuple_3 : public ::Il2CppObject/*, public System::Collections::IStructuralEquatable, public System::Collections::IStructuralComparable, public System::IComparable, public System::ITupleInternal*/ {
    public:
    // private readonly T1 m_Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 m_Item1;
    // private readonly T2 m_Item2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 m_Item2;
    // private readonly T3 m_Item3
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T3 m_Item3;
    // Creating value type constructor for type: Tuple_3
    Tuple_3(T1 m_Item1_ = {}, T2 m_Item2_ = {}, T3 m_Item3_ = {}) noexcept : m_Item1{m_Item1_}, m_Item2{m_Item2_}, m_Item3{m_Item3_} {}
    // Creating interface conversion operator: operator System::Collections::IStructuralEquatable
    operator System::Collections::IStructuralEquatable() noexcept {
      return *reinterpret_cast<System::Collections::IStructuralEquatable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IStructuralComparable
    operator System::Collections::IStructuralComparable() noexcept {
      return *reinterpret_cast<System::Collections::IStructuralComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::ITupleInternal
    operator System::ITupleInternal() noexcept {
      return *reinterpret_cast<System::ITupleInternal*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T1 m_Item1
    T1 _get_m_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::_get_m_Item1");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T1>(___internal__instance, "m_Item1"));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly T1 m_Item1
    void _set_m_Item1(T1 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::_set_m_Item1");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "m_Item1", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T2 m_Item2
    T2 _get_m_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::_get_m_Item2");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T2>(___internal__instance, "m_Item2"));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly T2 m_Item2
    void _set_m_Item2(T2 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::_set_m_Item2");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "m_Item2", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T3 m_Item3
    T3 _get_m_Item3() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::_get_m_Item3");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T3>(___internal__instance, "m_Item3"));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly T3 m_Item3
    void _set_m_Item3(T3 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::_set_m_Item3");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "m_Item3", value));
    }
    // public T1 get_Item1()
    // Offset: 0xFFFFFFFF
    T1 get_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::get_Item1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T1, false>(this, ___internal__method);
    }
    // public T2 get_Item2()
    // Offset: 0xFFFFFFFF
    T2 get_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::get_Item2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T2, false>(this, ___internal__method);
    }
    // public T3 get_Item3()
    // Offset: 0xFFFFFFFF
    T3 get_Item3() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::get_Item3");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item3", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T3, false>(this, ___internal__method);
    }
    // public System.Void .ctor(T1 item1, T2 item2, T3 item3)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tuple_3<T1, T2, T3>* New_ctor(T1 item1, T2 item2, T3 item3) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tuple_3<T1, T2, T3>*, creationType>(item1, item2, item3)));
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::System.Collections.IStructuralEquatable.Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IStructuralEquatable.Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other), ::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0xFFFFFFFF
    int System_IComparable_CompareTo(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::System.IComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IComparable.CompareTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFF
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::System.Collections.IStructuralComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IStructuralComparable.CompareTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other), ::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    int System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::System.Collections.IStructuralEquatable.GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IStructuralEquatable.GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.String System.ITupleInternal.ToString(System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* System_ITupleInternal_ToString(System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::System.ITupleInternal.ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.ITupleInternal.ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sb)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, sb);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_3::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
  }; // System.Tuple`3
  // Could not write size check! Type: System.Tuple`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Tuple_3, "System", "Tuple`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
