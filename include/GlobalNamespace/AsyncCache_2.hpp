// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConcurrentDictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AsyncCache`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DE76D4
  template<typename TKey, typename TValue>
  class AsyncCache_2 : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AsyncCache_2::$$c__DisplayClass4_0<TKey, TValue>
    class $$c__DisplayClass4_0;
    // WARNING Size may be invalid!
    // Autogenerated type: AsyncCache`2/<>c__DisplayClass4_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass4_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = AsyncCache_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass4_0";
      // public TKey toAdd
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TKey toAdd;
      // public AsyncCache`2<TKey,TValue> <>4__this
      // Size: 0x8
      // Offset: 0x0
      GlobalNamespace::AsyncCache_2<TKey, TValue>* $$4__this;
      // Field size check
      static_assert(sizeof(GlobalNamespace::AsyncCache_2<TKey, TValue>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass4_0
      $$c__DisplayClass4_0(TKey toAdd_ = {}, GlobalNamespace::AsyncCache_2<TKey, TValue>* $$4__this_ = {}) noexcept : toAdd{toAdd_}, $$4__this{$$4__this_} {}
      // Autogenerated instance field getter
      // Get instance field: public TKey toAdd
      TKey _get_toAdd() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::$$c__DisplayClass4_0::_get_toAdd");
        static auto ___internal__instance = this;
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<TKey>(___internal__instance, "toAdd"));
      }
      // Autogenerated instance field setter
      // Set instance field: public TKey toAdd
      void _set_toAdd(TKey value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::$$c__DisplayClass4_0::_set_toAdd");
        static auto ___internal__instance = this;
        THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "toAdd", value));
      }
      // Autogenerated instance field getter
      // Get instance field: public AsyncCache`2<TKey,TValue> <>4__this
      GlobalNamespace::AsyncCache_2<TKey, TValue>* _get_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::$$c__DisplayClass4_0::_get_$$4__this");
        static auto ___internal__instance = this;
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<GlobalNamespace::AsyncCache_2<TKey, TValue>*>(___internal__instance, "<>4__this")));
      }
      // Autogenerated instance field setter
      // Set instance field: public AsyncCache`2<TKey,TValue> <>4__this
      void _set_$$4__this(GlobalNamespace::AsyncCache_2<TKey, TValue>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::$$c__DisplayClass4_0::_set_$$4__this");
        static auto ___internal__instance = this;
        THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>4__this", value));
      }
      // System.Threading.Tasks.Task`1<TValue> <get_Item>b__1()
      // Offset: 0xFFFFFFFF
      System::Threading::Tasks::Task_1<TValue>* $get_Item$b__1() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::$$c__DisplayClass4_0::<get_Item>b__1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<get_Item>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TValue>*, false>(this, ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename AsyncCache_2<TKey, TValue>::$$c__DisplayClass4_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::$$c__DisplayClass4_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename AsyncCache_2<TKey, TValue>::$$c__DisplayClass4_0*, creationType>()));
      }
    }; // AsyncCache`2/<>c__DisplayClass4_0
    // Could not write size check! Type: AsyncCache`2/<>c__DisplayClass4_0 is generic, or has no fields that are valid for size checks!
    // private readonly System.Func`2<TKey,System.Threading.Tasks.Task`1<TValue>> _valueFactory
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TKey, System::Threading::Tasks::Task_1<TValue>*>* valueFactory;
    // Field size check
    static_assert(sizeof(System::Func_2<TKey, System::Threading::Tasks::Task_1<TValue>*>*) == 0x8);
    // private readonly System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.Lazy`1<System.Threading.Tasks.Task`1<TValue>>> _map
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Concurrent::ConcurrentDictionary_2<TKey, System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>*>* map;
    // Field size check
    static_assert(sizeof(System::Collections::Concurrent::ConcurrentDictionary_2<TKey, System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>*>*) == 0x8);
    // Creating value type constructor for type: AsyncCache_2
    AsyncCache_2(System::Func_2<TKey, System::Threading::Tasks::Task_1<TValue>*>* valueFactory_ = {}, System::Collections::Concurrent::ConcurrentDictionary_2<TKey, System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>*>* map_ = {}) noexcept : valueFactory{valueFactory_}, map{map_} {}
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TKey,System.Threading.Tasks.Task`1<TValue>> _valueFactory
    System::Func_2<TKey, System::Threading::Tasks::Task_1<TValue>*>* _get__valueFactory() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::_get__valueFactory");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<TKey, System::Threading::Tasks::Task_1<TValue>*>*>(___internal__instance, "_valueFactory")));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Func`2<TKey,System.Threading.Tasks.Task`1<TValue>> _valueFactory
    void _set__valueFactory(System::Func_2<TKey, System::Threading::Tasks::Task_1<TValue>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::_set__valueFactory");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "_valueFactory", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.Lazy`1<System.Threading.Tasks.Task`1<TValue>>> _map
    System::Collections::Concurrent::ConcurrentDictionary_2<TKey, System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>*>* _get__map() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::_get__map");
      static auto ___internal__instance = this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Concurrent::ConcurrentDictionary_2<TKey, System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>*>*>(___internal__instance, "_map")));
    }
    // Autogenerated instance field setter
    // Set instance field: private readonly System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.Lazy`1<System.Threading.Tasks.Task`1<TValue>>> _map
    void _set__map(System::Collections::Concurrent::ConcurrentDictionary_2<TKey, System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::_set__map");
      static auto ___internal__instance = this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "_map", value));
    }
    // public System.Threading.Tasks.Task`1<TValue> get_Item(TKey key)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TValue>* get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TValue>*, false>(this, ___internal__method, key);
    }
    // public System.Void .ctor(System.Func`2<TKey,System.Threading.Tasks.Task`1<TValue>> valueFactory)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncCache_2<TKey, TValue>* New_ctor(System::Func_2<TKey, System::Threading::Tasks::Task_1<TValue>*>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncCache_2<TKey, TValue>*, creationType>(valueFactory)));
    }
    // public System.Void RemoveKey(TKey key)
    // Offset: 0xFFFFFFFF
    void RemoveKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::RemoveKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key);
    }
    // private System.Lazy`1<System.Threading.Tasks.Task`1<TValue>> <get_Item>b__4_0(TKey toAdd)
    // Offset: 0xFFFFFFFF
    System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>* $get_Item$b__4_0(TKey toAdd) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncCache_2::<get_Item>b__4_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<get_Item>b__4_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(toAdd)})));
      return ::il2cpp_utils::RunMethodThrow<System::Lazy_1<System::Threading::Tasks::Task_1<TValue>*>*, false>(this, ___internal__method, toAdd);
    }
  }; // AsyncCache`2
  // Could not write size check! Type: AsyncCache`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AsyncCache_2, "", "AsyncCache`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
