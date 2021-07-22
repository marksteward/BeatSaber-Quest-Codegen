// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
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
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
  // [TokenAttribute] Offset: FFFFFFFF
  class IResourceLocator : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IResourceLocator
    IResourceLocator() noexcept {}
    // public System.String get_LocatorId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_LocatorId();
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Keys()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Keys();
    // public System.Boolean Locate(System.Object key, System.Type type, out System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations)
    // Offset: 0xFFFFFFFF
    bool Locate(::Il2CppObject* key, System::Type* type, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& locations);
  }; // UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, "UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_LocatorId
// Il2CppName: get_LocatorId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_LocatorId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*), "get_LocatorId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::Locate
// Il2CppName: Locate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::*)(::Il2CppObject*, System::Type*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&)>(&UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::Locate)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* locations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*), "Locate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, type, locations});
  }
};
