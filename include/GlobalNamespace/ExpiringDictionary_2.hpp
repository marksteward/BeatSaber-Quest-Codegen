// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Entry because it is already included!
  // Skipping declaration: <Enumerate>d__11 because it is already included!
  // Forward declaring type: OrderedSet`1<T>
  template<typename T>
  class OrderedSet_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
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
  // Autogenerated type: ExpiringDictionary`2
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DA98DC
  template<typename TKey, typename TValue>
  class ExpiringDictionary_2 : public ::Il2CppObject/*, public System::IDisposable, public System::Collections::Generic::IEnumerable_1<TValue>*/ {
    public:
    // Nested type: GlobalNamespace::ExpiringDictionary_2::Entry<TKey, TValue>
    class Entry;
    // Nested type: GlobalNamespace::ExpiringDictionary_2::$Enumerate$d__11<TKey, TValue>
    class $Enumerate$d__11;
    // WARNING Size may be invalid!
    // Autogenerated type: ExpiringDictionary`2/Entry
    // [] Offset: FFFFFFFF
    class Entry : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::IDisposable*/ {
      public:
      using declaring_type = ExpiringDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "Entry";
      // public TKey key
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TKey key;
      // public TValue value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TValue value;
      // public System.Int64 expireTime
      // Size: 0x8
      // Offset: 0x0
      int64_t expireTime;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // Creating value type constructor for type: Entry
      Entry(TKey key_ = {}, TValue value_ = {}, int64_t expireTime_ = {}) noexcept : key{key_}, value{value_}, expireTime{expireTime_} {}
      // Creating interface conversion operator: operator System::IDisposable
      operator System::IDisposable() noexcept {
        return *reinterpret_cast<System::IDisposable*>(this);
      }
      // public System.Void Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Entry").WithContext("Dispose");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // Creating proxy method: System_IDisposable_Dispose
      // Maps to method: Dispose
      void System_IDisposable_Dispose() {
        Dispose();
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ExpiringDictionary_2<TKey, TValue>::Entry* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Entry").WithContext(".ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ExpiringDictionary_2<TKey, TValue>::Entry*, creationType>()));
      }
    }; // ExpiringDictionary`2/Entry
    // Could not write size check! Type: ExpiringDictionary`2/Entry is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: ExpiringDictionary`2/<Enumerate>d__11
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: DA9984
    class $Enumerate$d__11 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<TValue>*/ {
      public:
      using declaring_type = ExpiringDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "$Enumerate$d__11";
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private TValue <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TValue $$2__current;
      // public ExpiringDictionary`2<TKey,TValue> <>4__this
      // Size: 0x8
      // Offset: 0x0
      GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* $$4__this;
      // Field size check
      static_assert(sizeof(GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*) == 0x8);
      // private System.Collections.Generic.IEnumerator`1<ExpiringDictionary`2/Entry<TKey,TValue>> <>7__wrap1
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::IEnumerator_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* $$7__wrap1;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::IEnumerator_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
      // Creating value type constructor for type: $Enumerate$d__11
      $Enumerate$d__11(int $$1__state_ = {}, TValue $$2__current_ = {}, GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* $$4__this_ = {}, System::Collections::Generic::IEnumerator_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TValue>
      operator System::Collections::Generic::IEnumerator_1<TValue>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TValue>*>(this);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ExpiringDictionary_2<TKey, TValue>::$Enumerate$d__11* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$Enumerate$d__11").WithContext(".ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ExpiringDictionary_2<TKey, TValue>::$Enumerate$d__11*, creationType>($$1__state)));
      }
      // private System.Void <>m__Finally1()
      // Offset: 0xFFFFFFFF
      void $$m__Finally1() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$Enumerate$d__11").WithContext("<>m__Finally1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$Enumerate$d__11").WithContext("System.IDisposable.Dispose");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$Enumerate$d__11").WithContext("MoveNext");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // private TValue System.Collections.Generic.IEnumerator<TValue>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      TValue System_Collections_Generic_IEnumerator_1_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$Enumerate$d__11").WithContext("System.Collections.Generic.IEnumerator<TValue>.get_Current");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TValue>.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$Enumerate$d__11").WithContext("System.Collections.IEnumerator.Reset");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$Enumerate$d__11").WithContext("System.Collections.IEnumerator.get_Current");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
    }; // ExpiringDictionary`2/<Enumerate>d__11
    // Could not write size check! Type: ExpiringDictionary`2/<Enumerate>d__11 is generic, or has no fields that are valid for size checks!
    // private readonly System.Int64 _expirationLengthTicks
    // Size: 0x8
    // Offset: 0x0
    int64_t expirationLengthTicks;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly OrderedSet`1<ExpiringDictionary`2/Entry<TKey,TValue>> _expirationQueue
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::OrderedSet_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* expirationQueue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OrderedSet_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<TKey,ExpiringDictionary`2/Entry<TKey,TValue>> _entryLookup
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<TKey, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* entryLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<TKey, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ExpiringDictionary`2/Entry<TKey,TValue>> _reusableEntries
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* reusableEntries;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>*) == 0x8);
    // Creating value type constructor for type: ExpiringDictionary_2
    ExpiringDictionary_2(int64_t expirationLengthTicks_ = {}, GlobalNamespace::OrderedSet_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* expirationQueue_ = {}, System::Collections::Generic::Dictionary_2<TKey, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* entryLookup_ = {}, System::Collections::Generic::List_1<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*>* reusableEntries_ = {}) noexcept : expirationLengthTicks{expirationLengthTicks_}, expirationQueue{expirationQueue_}, entryLookup{entryLookup_}, reusableEntries{reusableEntries_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<TValue>
    operator System::Collections::Generic::IEnumerable_1<TValue>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TValue>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxReusableEntries
    static int _get_kMaxReusableEntries() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("_get_kMaxReusableEntries");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpiringDictionary_2<TKey, TValue>*>::get(), "kMaxReusableEntries")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxReusableEntries
    static void _set_kMaxReusableEntries(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("_set_kMaxReusableEntries");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpiringDictionary_2<TKey, TValue>*>::get(), "kMaxReusableEntries", value)));
    }
    // public System.Void .ctor(System.Int64 expirationLengthTicksTicks)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpiringDictionary_2<TKey, TValue>* New_ctor(int64_t expirationLengthTicksTicks) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpiringDictionary_2<TKey, TValue>*, creationType>(expirationLengthTicksTicks)));
    }
    // static private System.Int32 CompareEntries(ExpiringDictionary`2/Entry<TKey,TValue> a, ExpiringDictionary`2/Entry<TKey,TValue> b)
    // Offset: 0xFFFFFFFF
    static int CompareEntries(typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* a, typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* b) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("CompareEntries");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpiringDictionary_2<TKey, TValue>*>::get(), "CompareEntries", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(a, b))));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, a, b);
    }
    // private System.Void RemoveExpiredEntries()
    // Offset: 0xFFFFFFFF
    void RemoveExpiredEntries() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("RemoveExpiredEntries");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RemoveExpiredEntries", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<TValue> Enumerate()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TValue>* Enumerate() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("Enumerate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Enumerate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal__method);
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFF
    bool ContainsKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("ContainsKey");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ContainsKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValue(TKey key, TValue& value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("TryGetValue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, value);
    }
    // public System.Boolean TryGetValueAndResetExpiration(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValueAndResetExpiration(TKey key, TValue& value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("TryGetValueAndResetExpiration");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryGetValueAndResetExpiration", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, value);
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0xFFFFFFFF
    bool Remove(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Void ResetExpiration(TKey key)
    // Offset: 0xFFFFFFFF
    void ResetExpiration(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("ResetExpiration");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ResetExpiration", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key);
    }
    // public System.Boolean Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    bool Add(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, value);
    }
    // private TValue Get(TKey key)
    // Offset: 0xFFFFFFFF
    TValue Get(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("Get");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, key);
    }
    // private System.Void Set(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void Set(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("Set");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFF
    TValue get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("get_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, key);
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void set_Item(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("set_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("PollUpdate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PollUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private ExpiringDictionary`2/Entry<TKey,TValue> GetEntry(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* GetEntry(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("GetEntry");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetEntry", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      return ::il2cpp_utils::RunMethodThrow<typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry*, false>(this, ___internal__method, key, value);
    }
    // private System.Void ReleaseEntry(ExpiringDictionary`2/Entry<TKey,TValue> entry)
    // Offset: 0xFFFFFFFF
    void ReleaseEntry(typename GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Entry* entry) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("ReleaseEntry");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReleaseEntry", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(entry)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, entry);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("System.Collections.IEnumerable.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("System.Collections.Generic.IEnumerable<TValue>.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ExpiringDictionary_2").WithContext("Dispose");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose() {
      Dispose();
    }
  }; // ExpiringDictionary`2
  // Could not write size check! Type: ExpiringDictionary`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ExpiringDictionary_2, "", "ExpiringDictionary`2");
