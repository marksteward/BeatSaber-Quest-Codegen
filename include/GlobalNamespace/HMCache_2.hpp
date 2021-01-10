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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: HMCache`2
  // [] Offset: FFFFFFFF
  template<typename K, typename V>
  class HMCache_2 : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.Dictionary`2<K,V> _cache
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<K, V>* cache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<K, V>*) == 0x8);
    // private System.Collections.Generic.Queue`1<K> _addedElements
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Queue_1<K>* addedElements;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<K>*) == 0x8);
    // private System.Int32 _maxNumberElements
    // Size: 0x4
    // Offset: 0x0
    int maxNumberElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HMCache_2
    HMCache_2(System::Collections::Generic::Dictionary_2<K, V>* cache_ = {}, System::Collections::Generic::Queue_1<K>* addedElements_ = {}, int maxNumberElements_ = {}) noexcept : cache{cache_}, addedElements{addedElements_}, maxNumberElements{maxNumberElements_} {}
    // public System.Void .ctor(System.Int32 maxNumberElements)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMCache_2<K, V>* New_ctor(int maxNumberElements) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMCache_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMCache_2<K, V>*, creationType>(maxNumberElements)));
    }
    // public System.Boolean IsInCache(K key)
    // Offset: 0xFFFFFFFF
    bool IsInCache(K key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMCache_2::IsInCache");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsInCache", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public V GetFromCache(K key)
    // Offset: 0xFFFFFFFF
    V GetFromCache(K key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMCache_2::GetFromCache");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetFromCache", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<V, false>(this, ___internal__method, key);
    }
    // public System.Void PutToCache(K key, V value)
    // Offset: 0xFFFFFFFF
    void PutToCache(K key, V value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMCache_2::PutToCache");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PutToCache", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMCache_2::Clear");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // HMCache`2
  // Could not write size check! Type: HMCache`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::HMCache_2, "", "HMCache`2");
