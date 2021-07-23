// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BatchExtensions
#include "GlobalNamespace/BatchExtensions.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BatchExtensions/<Batch>d__0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class BatchExtensions::$Batch$d__0_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<T> <>2__current
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* $$2__current;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<T>*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x0
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEnumerable`1<T> enumerable
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<T>* enumerable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<T>*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<T> <>3__enumerable
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<T>* $$3__enumerable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<T>*) == 0x8);
    // private System.Int32 batchSize
    // Size: 0x4
    // Offset: 0x0
    int batchSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 <>3__batchSize
    // Size: 0x4
    // Offset: 0x0
    int $$3__batchSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEnumerator`1<T> <>7__wrap1
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerator_1<T>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<T>*) == 0x8);
    // Creating value type constructor for type: $Batch$d__0_1
    $Batch$d__0_1(int $$1__state_ = {}, System::Collections::Generic::List_1<T>* $$2__current_ = {}, int $$l__initialThreadId_ = {}, System::Collections::Generic::IEnumerable_1<T>* enumerable_ = {}, System::Collections::Generic::IEnumerable_1<T>* $$3__enumerable_ = {}, int batchSize_ = {}, int $$3__batchSize_ = {}, System::Collections::Generic::IEnumerator_1<T>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, enumerable{enumerable_}, $$3__enumerable{$$3__enumerable_}, batchSize{batchSize_}, $$3__batchSize{$$3__batchSize_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>
    operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>*>
    operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>*>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_$$1__state");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(___internal__instance, "<>1__state")));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_$$1__state");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>1__state", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<T> <>2__current
    System::Collections::Generic::List_1<T>* _get_$$2__current() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_$$2__current");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<T>*>(___internal__instance, "<>2__current")));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Collections.Generic.List`1<T> <>2__current
    void _set_$$2__current(System::Collections::Generic::List_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_$$2__current");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>2__current", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>l__initialThreadId
    int _get_$$l__initialThreadId() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_$$l__initialThreadId");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(___internal__instance, "<>l__initialThreadId")));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Int32 <>l__initialThreadId
    void _set_$$l__initialThreadId(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_$$l__initialThreadId");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>l__initialThreadId", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerable`1<T> enumerable
    System::Collections::Generic::IEnumerable_1<T>* _get_enumerable() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_enumerable");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::IEnumerable_1<T>*>(___internal__instance, "enumerable"));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Collections.Generic.IEnumerable`1<T> enumerable
    void _set_enumerable(System::Collections::Generic::IEnumerable_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_enumerable");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "enumerable", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.IEnumerable`1<T> <>3__enumerable
    System::Collections::Generic::IEnumerable_1<T>* _get_$$3__enumerable() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_$$3__enumerable");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::IEnumerable_1<T>*>(___internal__instance, "<>3__enumerable")));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Collections.Generic.IEnumerable`1<T> <>3__enumerable
    void _set_$$3__enumerable(System::Collections::Generic::IEnumerable_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_$$3__enumerable");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>3__enumerable", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 batchSize
    int _get_batchSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_batchSize");
      static auto ___internal__instance = this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(___internal__instance, "batchSize"));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Int32 batchSize
    void _set_batchSize(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_batchSize");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "batchSize", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>3__batchSize
    int _get_$$3__batchSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_$$3__batchSize");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(___internal__instance, "<>3__batchSize")));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Int32 <>3__batchSize
    void _set_$$3__batchSize(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_$$3__batchSize");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>3__batchSize", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerator`1<T> <>7__wrap1
    System::Collections::Generic::IEnumerator_1<T>* _get_$$7__wrap1() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_get_$$7__wrap1");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::IEnumerator_1<T>*>(___internal__instance, "<>7__wrap1")));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Collections.Generic.IEnumerator`1<T> <>7__wrap1
    void _set_$$7__wrap1(System::Collections::Generic::IEnumerator_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::_set_$$7__wrap1");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>7__wrap1", value));
    }
    // private System.Collections.Generic.List`1<T> System.Collections.Generic.IEnumerator<System.Collections.Generic.List<T>>.get_Current()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<T>* System_Collections_Generic_IEnumerator$System_Collections_Generic_List$T$$_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::System.Collections.Generic.IEnumerator<System.Collections.Generic.List<T>>.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<System.Collections.Generic.List<T>>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BatchExtensions::$Batch$d__0_1<T>* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BatchExtensions::$Batch$d__0_1<T>*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFF
    void System_IDisposable_Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::System.IDisposable.Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // private System.Void <>m__Finally1()
    // Offset: 0xFFFFFFFF
    void $$m__Finally1() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::<>m__Finally1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<T>> System.Collections.Generic.IEnumerable<System.Collections.Generic.List<T>>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>*>* System_Collections_Generic_IEnumerable$System_Collections_Generic_List$T$$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::System.Collections.Generic.IEnumerable<System.Collections.Generic.List<T>>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<System.Collections.Generic.List<T>>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::List_1<T>*>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::$Batch$d__0_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // BatchExtensions/<Batch>d__0`1
  // Could not write size check! Type: BatchExtensions/<Batch>d__0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::BatchExtensions::$Batch$d__0_1, "", "BatchExtensions/<Batch>d__0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
