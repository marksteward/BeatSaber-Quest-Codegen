// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFilter
  struct BloomFilter;
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
  // Autogenerated type: BloomFilterUtils
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BloomFilterUtils : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BloomFilterUtils::$$c
    class $$c;
    // Creating value type constructor for type: BloomFilterUtils
    BloomFilterUtils() noexcept {}
    // static public BloomFilter ToBloomFilter(System.Collections.Generic.IEnumerable`1<System.String> strings)
    // Offset: 0x19A39F8
    static GlobalNamespace::BloomFilter ToBloomFilter(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* strings);
  }; // BloomFilterUtils
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFilterUtils*, "", "BloomFilterUtils");
