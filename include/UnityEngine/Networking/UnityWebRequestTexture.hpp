// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestTexture
  class UnityWebRequestTexture : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnityWebRequestTexture
    UnityWebRequestTexture() noexcept {}
    // static public UnityEngine.Networking.UnityWebRequest GetTexture(System.String uri)
    // Offset: 0x23F49D8
    static UnityEngine::Networking::UnityWebRequest* GetTexture(::Il2CppString* uri);
    // static public UnityEngine.Networking.UnityWebRequest GetTexture(System.String uri, System.Boolean nonReadable)
    // Offset: 0x23F49E0
    static UnityEngine::Networking::UnityWebRequest* GetTexture(::Il2CppString* uri, bool nonReadable);
  }; // UnityEngine.Networking.UnityWebRequestTexture
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestTexture*, "UnityEngine.Networking", "UnityWebRequestTexture");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestTexture::GetTexture
// Il2CppName: GetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest* (*)(::Il2CppString*)>(&UnityEngine::Networking::UnityWebRequestTexture::GetTexture)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestTexture*), "GetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestTexture::GetTexture
// Il2CppName: GetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest* (*)(::Il2CppString*, bool)>(&UnityEngine::Networking::UnityWebRequestTexture::GetTexture)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nonReadable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestTexture*), "GetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, nonReadable});
  }
};
