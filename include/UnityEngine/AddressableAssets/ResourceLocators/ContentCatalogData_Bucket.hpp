// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
#include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/UnityEngine.AddressableAssets.ResourceLocators.Bucket
  // [TokenAttribute] Offset: FFFFFFFF
  struct ContentCatalogData::Bucket/*, public System::ValueType*/ {
    public:
    // public System.Int32 dataOffset
    // Size: 0x4
    // Offset: 0x0
    int dataOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: dataOffset and: entries
    char __padding0[0x4] = {};
    // public System.Int32[] entries
    // Size: 0x8
    // Offset: 0x8
    ::Array<int>* entries;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: Bucket
    constexpr Bucket(int dataOffset_ = {}, ::Array<int>* entries_ = {}) noexcept : dataOffset{dataOffset_}, entries{entries_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Int32 dataOffset
    int _get_dataOffset();
    // Set instance field: public System.Int32 dataOffset
    void _set_dataOffset(int value);
    // Get instance field: public System.Int32[] entries
    ::Array<int>* _get_entries();
    // Set instance field: public System.Int32[] entries
    void _set_entries(::Array<int>* value);
  }; // UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/UnityEngine.AddressableAssets.ResourceLocators.Bucket
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogData::Bucket), 8 + sizeof(::Array<int>*)> __UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogData_BucketSizeCheck;
  static_assert(sizeof(ContentCatalogData::Bucket) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::Bucket, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/Bucket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
