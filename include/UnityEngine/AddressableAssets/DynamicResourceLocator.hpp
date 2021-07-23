// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
#include "UnityEngine/AddressableAssets/ResourceLocators/IResourceLocator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AddressablesImpl
  class AddressablesImpl;
}
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
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.DynamicResourceLocator
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicResourceLocator : public ::Il2CppObject/*, public UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*/ {
    public:
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private System.String m_AtlasSpriteProviderId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_AtlasSpriteProviderId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DynamicResourceLocator
    DynamicResourceLocator(UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables_ = {}, ::Il2CppString* m_AtlasSpriteProviderId_ = {}) noexcept : m_Addressables{m_Addressables_}, m_AtlasSpriteProviderId{m_AtlasSpriteProviderId_} {}
    // Creating interface conversion operator: operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator
    operator UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator() noexcept {
      return *reinterpret_cast<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(this);
    }
    // Get instance field: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    UnityEngine::AddressableAssets::AddressablesImpl* _get_m_Addressables();
    // Set instance field: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    void _set_m_Addressables(UnityEngine::AddressableAssets::AddressablesImpl* value);
    // Get instance field: private System.String m_AtlasSpriteProviderId
    ::Il2CppString* _get_m_AtlasSpriteProviderId();
    // Set instance field: private System.String m_AtlasSpriteProviderId
    void _set_m_AtlasSpriteProviderId(::Il2CppString* value);
    // public System.String get_LocatorId()
    // Offset: 0x13C5A44
    ::Il2CppString* get_LocatorId();
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Keys()
    // Offset: 0x13C5A8C
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Keys();
    // private System.String get_AtlasSpriteProviderId()
    // Offset: 0x13C5AD8
    ::Il2CppString* get_AtlasSpriteProviderId();
    // public System.Void .ctor(UnityEngine.AddressableAssets.AddressablesImpl addr)
    // Offset: 0x13C5EB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicResourceLocator* New_ctor(UnityEngine::AddressableAssets::AddressablesImpl* addr) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::DynamicResourceLocator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicResourceLocator*, creationType>(addr)));
    }
    // public System.Boolean Locate(System.Object key, System.Type type, out System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations)
    // Offset: 0x13C5EDC
    bool Locate(::Il2CppObject* key, System::Type* type, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& locations);
    // System.Void CreateDynamicLocations(System.Type type, System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations, System.String locName, System.String subKey, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation mainLoc)
    // Offset: 0x13C6374
    void CreateDynamicLocations(System::Type* type, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::Il2CppString* locName, ::Il2CppString* subKey, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* mainLoc);
  }; // UnityEngine.AddressableAssets.DynamicResourceLocator
  #pragma pack(pop)
  static check_size<sizeof(DynamicResourceLocator), 24 + sizeof(::Il2CppString*)> __UnityEngine_AddressableAssets_DynamicResourceLocatorSizeCheck;
  static_assert(sizeof(DynamicResourceLocator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::DynamicResourceLocator*, "UnityEngine.AddressableAssets", "DynamicResourceLocator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::DynamicResourceLocator::get_LocatorId
// Il2CppName: get_LocatorId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::DynamicResourceLocator::*)()>(&UnityEngine::AddressableAssets::DynamicResourceLocator::get_LocatorId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::DynamicResourceLocator*), "get_LocatorId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::DynamicResourceLocator::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (UnityEngine::AddressableAssets::DynamicResourceLocator::*)()>(&UnityEngine::AddressableAssets::DynamicResourceLocator::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::DynamicResourceLocator*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::DynamicResourceLocator::get_AtlasSpriteProviderId
// Il2CppName: get_AtlasSpriteProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::DynamicResourceLocator::*)()>(&UnityEngine::AddressableAssets::DynamicResourceLocator::get_AtlasSpriteProviderId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::DynamicResourceLocator*), "get_AtlasSpriteProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::DynamicResourceLocator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::DynamicResourceLocator::Locate
// Il2CppName: Locate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::DynamicResourceLocator::*)(::Il2CppObject*, System::Type*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&)>(&UnityEngine::AddressableAssets::DynamicResourceLocator::Locate)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* locations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::DynamicResourceLocator*), "Locate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, type, locations});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::DynamicResourceLocator::CreateDynamicLocations
// Il2CppName: CreateDynamicLocations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::DynamicResourceLocator::*)(System::Type*, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::Il2CppString*, ::Il2CppString*, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::AddressableAssets::DynamicResourceLocator::CreateDynamicLocations)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* locations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")})->byval_arg;
    static auto* locName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mainLoc = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::DynamicResourceLocator*), "CreateDynamicLocations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, locations, locName, subKey, mainLoc});
  }
};
