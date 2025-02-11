// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CachedAssetBundle
  struct CachedAssetBundle;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestAssetBundle
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityWebRequestAssetBundle : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnityWebRequestAssetBundle
    UnityWebRequestAssetBundle() noexcept {}
    // static public UnityEngine.Networking.UnityWebRequest GetAssetBundle(System.String uri)
    // Offset: 0x1E40584
    static UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::Il2CppString* uri);
    // static public UnityEngine.Networking.UnityWebRequest GetAssetBundle(System.String uri, System.UInt32 crc)
    // Offset: 0x1E4058C
    static UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::Il2CppString* uri, uint crc);
    // static public UnityEngine.Networking.UnityWebRequest GetAssetBundle(System.String uri, UnityEngine.CachedAssetBundle cachedAssetBundle, System.UInt32 crc)
    // Offset: 0x1E40630
    static UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::Il2CppString* uri, UnityEngine::CachedAssetBundle cachedAssetBundle, uint crc);
  }; // UnityEngine.Networking.UnityWebRequestAssetBundle
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestAssetBundle*, "UnityEngine.Networking", "UnityWebRequestAssetBundle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle
// Il2CppName: GetAssetBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest* (*)(::Il2CppString*)>(&UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestAssetBundle*), "GetAssetBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle
// Il2CppName: GetAssetBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest* (*)(::Il2CppString*, uint)>(&UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestAssetBundle*), "GetAssetBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, crc});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle
// Il2CppName: GetAssetBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest* (*)(::Il2CppString*, UnityEngine::CachedAssetBundle, uint)>(&UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cachedAssetBundle = &::il2cpp_utils::GetClassFromName("UnityEngine", "CachedAssetBundle")->byval_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestAssetBundle*), "GetAssetBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, cachedAssetBundle, crc});
  }
};
