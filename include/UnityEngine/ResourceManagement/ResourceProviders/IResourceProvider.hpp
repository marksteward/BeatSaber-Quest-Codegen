// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProviderBehaviourFlags
  struct ProviderBehaviourFlags;
  // Forward declaring type: ProvideHandle
  struct ProvideHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IResourceProvider : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IResourceProvider
    IResourceProvider() noexcept {}
    // public System.String get_ProviderId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_ProviderId();
    // public UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags get_BehaviourFlags()
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags get_BehaviourFlags();
    // public System.Type GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0xFFFFFFFF
    System::Type* GetDefaultType(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public System.Boolean CanProvide(System.Type type, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0xFFFFFFFF
    bool CanProvide(System::Type* type, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0xFFFFFFFF
    void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // public System.Void Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object asset)
    // Offset: 0xFFFFFFFF
    void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::Il2CppObject* asset);
  }; // UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "IResourceProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::get_ProviderId
// Il2CppName: get_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::get_ProviderId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::get_BehaviourFlags
// Il2CppName: get_BehaviourFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags (UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::get_BehaviourFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*), "get_BehaviourFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::GetDefaultType
// Il2CppName: GetDefaultType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::GetDefaultType)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*), "GetDefaultType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::CanProvide
// Il2CppName: CanProvide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::*)(System::Type*, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::CanProvide)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*), "CanProvide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, location});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::Provide
// Il2CppName: Provide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::Provide)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*), "Provide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider::Release)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* asset = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, asset});
  }
};
