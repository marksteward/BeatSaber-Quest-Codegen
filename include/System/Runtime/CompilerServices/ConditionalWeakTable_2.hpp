// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.Ephemeron
#include "System/Runtime/CompilerServices/Ephemeron.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Skipping declaration: CreateValueCallback because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Runtime.CompilerServices.ConditionalWeakTable`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2 : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::CompilerServices::ConditionalWeakTable_2::CreateValueCallback<TKey, TValue>
    class CreateValueCallback;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback
    // [TokenAttribute] Offset: FFFFFFFF
    class CreateValueCallback : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::MulticastDelegate {
      public:
      using declaring_type = ConditionalWeakTable_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "CreateValueCallback";
      // Creating value type constructor for type: CreateValueCallback
      CreateValueCallback() noexcept {}
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ConditionalWeakTable_2<TKey, TValue>::CreateValueCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::CreateValueCallback::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ConditionalWeakTable_2<TKey, TValue>::CreateValueCallback*, creationType>(object, method)));
      }
      // public TValue Invoke(TKey key)
      // Offset: 0xFFFFFFFF
      TValue Invoke(TKey key) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::CreateValueCallback::Invoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
        return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, key);
      }
      // public System.IAsyncResult BeginInvoke(TKey key, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(TKey key, System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::CreateValueCallback::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
        return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, key, callback, object);
      }
      // public TValue EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      TValue EndInvoke(System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::CreateValueCallback::EndInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
        return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, result);
      }
    }; // System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback
    // Could not write size check! Type: System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback is generic, or has no fields that are valid for size checks!
    // private System.Runtime.CompilerServices.Ephemeron[] data
    // Size: 0x8
    // Offset: 0x0
    ::Array<System::Runtime::CompilerServices::Ephemeron>* data;
    // Field size check
    static_assert(sizeof(::Array<System::Runtime::CompilerServices::Ephemeron>*) == 0x8);
    // private System.Object _lock
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x0
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConditionalWeakTable_2
    ConditionalWeakTable_2(::Array<System::Runtime::CompilerServices::Ephemeron>* data_ = {}, ::Il2CppObject* lock_ = {}, int size_ = {}) noexcept : data{data_}, lock{lock_}, size{size_} {}
    // Autogenerated static field getter
    // Get static field: static private System.Int32 INITIAL_SIZE
    static int _get_INITIAL_SIZE() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_get_INITIAL_SIZE");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "INITIAL_SIZE")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 INITIAL_SIZE
    static void _set_INITIAL_SIZE(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_set_INITIAL_SIZE");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "INITIAL_SIZE", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Single LOAD_FACTOR
    static float _get_LOAD_FACTOR() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_get_LOAD_FACTOR");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<float>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "LOAD_FACTOR")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Single LOAD_FACTOR
    static void _set_LOAD_FACTOR(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_set_LOAD_FACTOR");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "LOAD_FACTOR", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Single COMPACT_FACTOR
    static float _get_COMPACT_FACTOR() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_get_COMPACT_FACTOR");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<float>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "COMPACT_FACTOR")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Single COMPACT_FACTOR
    static void _set_COMPACT_FACTOR(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_set_COMPACT_FACTOR");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "COMPACT_FACTOR", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Single EXPAND_FACTOR
    static float _get_EXPAND_FACTOR() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_get_EXPAND_FACTOR");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<float>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "EXPAND_FACTOR")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Single EXPAND_FACTOR
    static void _set_EXPAND_FACTOR(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::_set_EXPAND_FACTOR");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "EXPAND_FACTOR", value)));
    }
    // private System.Void RehashWithoutResize()
    // Offset: 0xFFFFFFFF
    void RehashWithoutResize() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::RehashWithoutResize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RehashWithoutResize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void RecomputeSize()
    // Offset: 0xFFFFFFFF
    void RecomputeSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::RecomputeSize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RecomputeSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void Rehash()
    // Offset: 0xFFFFFFFF
    void Rehash() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::Rehash");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Rehash", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void Add(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0xFFFFFFFF
    bool Remove(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValue(TKey key, TValue& value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::TryGetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractIndependentType<TValue&>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, value);
    }
    // public TValue GetValue(TKey key, System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback<TKey,TValue> createValueCallback)
    // Offset: 0xFFFFFFFF
    TValue GetValue(TKey key, typename System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::CreateValueCallback* createValueCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::GetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(createValueCallback)})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, key, createValueCallback);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalWeakTable_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalWeakTable_2<TKey, TValue>*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConditionalWeakTable_2::Finalize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Finalize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // System.Runtime.CompilerServices.ConditionalWeakTable`2
  // Could not write size check! Type: System.Runtime.CompilerServices.ConditionalWeakTable`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Runtime::CompilerServices::ConditionalWeakTable_2, "System.Runtime.CompilerServices", "ConditionalWeakTable`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
