// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
// Including type: UnityEngine.CachedAssetBundle
#include "UnityEngine/CachedAssetBundle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
  // Skipping declaration: Hash128 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerAssetBundle
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DD808C
  class DownloadHandlerAssetBundle : public UnityEngine::Networking::DownloadHandler {
    public:
    // Creating value type constructor for type: DownloadHandlerAssetBundle
    DownloadHandlerAssetBundle() noexcept {}
    // public UnityEngine.AssetBundle get_assetBundle()
    // Offset: 0x23C8F4C
    UnityEngine::AssetBundle* get_assetBundle();
    // public System.Void .ctor(System.String url, System.UInt32 crc)
    // Offset: 0x23C8D90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerAssetBundle* New_ctor(::Il2CppString* url, uint crc) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::DownloadHandlerAssetBundle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerAssetBundle*, creationType>(url, crc)));
    }
    // public System.Void .ctor(System.String url, UnityEngine.CachedAssetBundle cachedBundle, System.UInt32 crc)
    // Offset: 0x23C8DF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerAssetBundle* New_ctor(::Il2CppString* url, UnityEngine::CachedAssetBundle cachedBundle, uint crc) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::DownloadHandlerAssetBundle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerAssetBundle*, creationType>(url, cachedBundle, crc)));
    }
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerAssetBundle obj, System.String url, System.UInt32 crc)
    // Offset: 0x23C8BC8
    static System::IntPtr Create(UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::Il2CppString* url, uint crc);
    // static private System.IntPtr CreateCached(UnityEngine.Networking.DownloadHandlerAssetBundle obj, System.String url, System.String name, UnityEngine.Hash128 hash, System.UInt32 crc)
    // Offset: 0x23C8C20
    static System::IntPtr CreateCached(UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::Il2CppString* url, ::Il2CppString* name, UnityEngine::Hash128 hash, uint crc);
    // private System.Void InternalCreateAssetBundle(System.String url, System.UInt32 crc)
    // Offset: 0x23C8D0C
    void InternalCreateAssetBundle(::Il2CppString* url, uint crc);
    // private System.Void InternalCreateAssetBundleCached(System.String url, System.String name, UnityEngine.Hash128 hash, System.UInt32 crc)
    // Offset: 0x23C8D6C
    void InternalCreateAssetBundleCached(::Il2CppString* url, ::Il2CppString* name, UnityEngine::Hash128 hash, uint crc);
    // static private System.IntPtr CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle obj, System.String url, System.String name, ref UnityEngine.Hash128 hash, System.UInt32 crc)
    // Offset: 0x23C8C9C
    static System::IntPtr CreateCached_Injected(UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::Il2CppString* url, ::Il2CppString* name, UnityEngine::Hash128& hash, uint crc);
    // protected override System.Byte[] GetData()
    // Offset: 0x23C8E74
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Byte[] DownloadHandler::GetData()
    ::Array<uint8_t>* GetData();
    // protected override System.String GetText()
    // Offset: 0x23C8EE0
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.String DownloadHandler::GetText()
    ::Il2CppString* GetText();
  }; // UnityEngine.Networking.DownloadHandlerAssetBundle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerAssetBundle*, "UnityEngine.Networking", "DownloadHandlerAssetBundle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle
// Il2CppName: get_assetBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundle* (UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(&UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "get_assetBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::Networking::DownloadHandlerAssetBundle*, ::Il2CppString*, uint)>(&UnityEngine::Networking::DownloadHandlerAssetBundle::Create)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "DownloadHandlerAssetBundle")->byval_arg;
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, url, crc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached
// Il2CppName: CreateCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::Networking::DownloadHandlerAssetBundle*, ::Il2CppString*, ::Il2CppString*, UnityEngine::Hash128, uint)>(&UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "DownloadHandlerAssetBundle")->byval_arg;
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hash = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "CreateCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, url, name, hash, crc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundle
// Il2CppName: InternalCreateAssetBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::Il2CppString*, uint)>(&UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundle)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "InternalCreateAssetBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, crc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundleCached
// Il2CppName: InternalCreateAssetBundleCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::Il2CppString*, ::Il2CppString*, UnityEngine::Hash128, uint)>(&UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundleCached)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hash = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "InternalCreateAssetBundleCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, name, hash, crc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached_Injected
// Il2CppName: CreateCached_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::Networking::DownloadHandlerAssetBundle*, ::Il2CppString*, ::Il2CppString*, UnityEngine::Hash128&, uint)>(&UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached_Injected)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "DownloadHandlerAssetBundle")->byval_arg;
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hash = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "CreateCached_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, url, name, hash, crc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(&UnityEngine::Networking::DownloadHandlerAssetBundle::GetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAssetBundle::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(&UnityEngine::Networking::DownloadHandlerAssetBundle::GetText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAssetBundle*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
