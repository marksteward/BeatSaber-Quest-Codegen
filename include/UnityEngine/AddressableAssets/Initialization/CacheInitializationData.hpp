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
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.CacheInitializationData
  class CacheInitializationData : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xE02D1C
    // private System.Boolean m_CompressionEnabled
    // Size: 0x1
    // Offset: 0x10
    bool m_CompressionEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_CompressionEnabled and: m_CacheDirectoryOverride
    char __padding0[0x7] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xE02D68
    // private System.String m_CacheDirectoryOverride
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_CacheDirectoryOverride;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE02DB4
    // private System.Int32 m_ExpirationDelay
    // Size: 0x4
    // Offset: 0x20
    int m_ExpirationDelay;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xE02E00
    // private System.Boolean m_LimitCacheSize
    // Size: 0x1
    // Offset: 0x24
    bool m_LimitCacheSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_LimitCacheSize and: m_MaximumCacheSize
    char __padding3[0x3] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xE02E4C
    // private System.Int64 m_MaximumCacheSize
    // Size: 0x8
    // Offset: 0x28
    int64_t m_MaximumCacheSize;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: CacheInitializationData
    CacheInitializationData(bool m_CompressionEnabled_ = {}, ::Il2CppString* m_CacheDirectoryOverride_ = {}, int m_ExpirationDelay_ = {}, bool m_LimitCacheSize_ = {}, int64_t m_MaximumCacheSize_ = {}) noexcept : m_CompressionEnabled{m_CompressionEnabled_}, m_CacheDirectoryOverride{m_CacheDirectoryOverride_}, m_ExpirationDelay{m_ExpirationDelay_}, m_LimitCacheSize{m_LimitCacheSize_}, m_MaximumCacheSize{m_MaximumCacheSize_} {}
    // public System.Boolean get_CompressionEnabled()
    // Offset: 0x13F34B0
    bool get_CompressionEnabled();
    // public System.Void set_CompressionEnabled(System.Boolean value)
    // Offset: 0x13F34B8
    void set_CompressionEnabled(bool value);
    // public System.String get_CacheDirectoryOverride()
    // Offset: 0x13F34C4
    ::Il2CppString* get_CacheDirectoryOverride();
    // public System.Void set_CacheDirectoryOverride(System.String value)
    // Offset: 0x13F34CC
    void set_CacheDirectoryOverride(::Il2CppString* value);
    // public System.Int32 get_ExpirationDelay()
    // Offset: 0x13F34D4
    int get_ExpirationDelay();
    // public System.Void set_ExpirationDelay(System.Int32 value)
    // Offset: 0x13F34DC
    void set_ExpirationDelay(int value);
    // public System.Boolean get_LimitCacheSize()
    // Offset: 0x13F34E4
    bool get_LimitCacheSize();
    // public System.Void set_LimitCacheSize(System.Boolean value)
    // Offset: 0x13F34EC
    void set_LimitCacheSize(bool value);
    // public System.Int64 get_MaximumCacheSize()
    // Offset: 0x13F34F8
    int64_t get_MaximumCacheSize();
    // public System.Void set_MaximumCacheSize(System.Int64 value)
    // Offset: 0x13F3500
    void set_MaximumCacheSize(int64_t value);
    // public System.Void .ctor()
    // Offset: 0x13F3508
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheInitializationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::CacheInitializationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheInitializationData*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.CacheInitializationData
  #pragma pack(pop)
  static check_size<sizeof(CacheInitializationData), 40 + sizeof(int64_t)> __UnityEngine_AddressableAssets_Initialization_CacheInitializationDataSizeCheck;
  static_assert(sizeof(CacheInitializationData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*, "UnityEngine.AddressableAssets.Initialization", "CacheInitializationData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_CompressionEnabled
// Il2CppName: get_CompressionEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_CompressionEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "get_CompressionEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_CompressionEnabled
// Il2CppName: set_CompressionEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)(bool)>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_CompressionEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "set_CompressionEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_CacheDirectoryOverride
// Il2CppName: get_CacheDirectoryOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_CacheDirectoryOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "get_CacheDirectoryOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_CacheDirectoryOverride
// Il2CppName: set_CacheDirectoryOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)(::Il2CppString*)>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_CacheDirectoryOverride)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "set_CacheDirectoryOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_ExpirationDelay
// Il2CppName: get_ExpirationDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_ExpirationDelay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "get_ExpirationDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_ExpirationDelay
// Il2CppName: set_ExpirationDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)(int)>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_ExpirationDelay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "set_ExpirationDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_LimitCacheSize
// Il2CppName: get_LimitCacheSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_LimitCacheSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "get_LimitCacheSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_LimitCacheSize
// Il2CppName: set_LimitCacheSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)(bool)>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_LimitCacheSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "set_LimitCacheSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_MaximumCacheSize
// Il2CppName: get_MaximumCacheSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::get_MaximumCacheSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "get_MaximumCacheSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_MaximumCacheSize
// Il2CppName: set_MaximumCacheSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitializationData::*)(int64_t)>(&UnityEngine::AddressableAssets::Initialization::CacheInitializationData::set_MaximumCacheSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitializationData*), "set_MaximumCacheSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitializationData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
