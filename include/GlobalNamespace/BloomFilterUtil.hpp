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
  // Forward declaring type: IBitMask`1<T>
  template<typename T>
  class IBitMask_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BloomFilterUtil
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BloomFilterUtil : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BloomFilterUtil::$$c__DisplayClass2_0_1<T>
    template<typename T>
    class $$c__DisplayClass2_0_1;
    // Creating value type constructor for type: BloomFilterUtil
    BloomFilterUtil() noexcept {}
    // static private System.UInt32 MurmurHash2(System.String key)
    // Offset: 0x23256A4
    static uint MurmurHash2(::Il2CppString* key);
    // static public T ToBloomFilter(System.String value, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ToBloomFilter(::Il2CppString* value, int hashCount, int hashBits) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::ToBloomFilter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "ToBloomFilter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, value, hashCount, hashBits);
    }
    // static public T ToBloomFilter(System.Collections.Generic.IEnumerable`1<System.String> strings, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ToBloomFilter(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* strings, int hashCount, int hashBits) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::ToBloomFilter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "ToBloomFilter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(strings), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, strings, hashCount, hashBits);
    }
    // static public T AddBloomFilterEntry(T bitMask, System.String value, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T AddBloomFilterEntry(T bitMask, ::Il2CppString* value, int hashCount, int hashBits) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::AddBloomFilterEntry");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "AddBloomFilterEntry", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bitMask), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, bitMask, value, hashCount, hashBits);
    }
    // static public System.Boolean ContainsBloomFilterEntry(T bitMask, System.String value, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ContainsBloomFilterEntry(T bitMask, ::Il2CppString* value, int hashCount, int hashBits) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::ContainsBloomFilterEntry");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "ContainsBloomFilterEntry", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bitMask), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, bitMask, value, hashCount, hashBits);
    }
  }; // BloomFilterUtil
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFilterUtil*, "", "BloomFilterUtil");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::MurmurHash2
// Il2CppName: MurmurHash2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Il2CppString*)>(&GlobalNamespace::BloomFilterUtil::MurmurHash2)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFilterUtil*), "MurmurHash2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::ToBloomFilter
// Il2CppName: ToBloomFilter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::ToBloomFilter
// Il2CppName: ToBloomFilter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::AddBloomFilterEntry
// Il2CppName: AddBloomFilterEntry
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::ContainsBloomFilterEntry
// Il2CppName: ContainsBloomFilterEntry
// Cannot write MetadataGetter for generic methods!
