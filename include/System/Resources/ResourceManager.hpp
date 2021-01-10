// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.UltimateResourceFallbackLocation
#include "System/Resources/UltimateResourceFallbackLocation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceSet
  class ResourceSet;
  // Forward declaring type: IResourceGroveler
  class IResourceGroveler;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: AssemblyName
  class AssemblyName;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x88
  // Autogenerated type: System.Resources.ResourceManager
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D380AC
  class ResourceManager : public ::Il2CppObject {
    public:
    // Nested type: System::Resources::ResourceManager::CultureNameResourceSetPair
    class CultureNameResourceSetPair;
    // Nested type: System::Resources::ResourceManager::ResourceManagerMediator
    class ResourceManagerMediator;
    // protected System.String BaseNameField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* BaseNameField;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xD3E104
    // protected System.Collections.Hashtable ResourceSets
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Hashtable* ResourceSets;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> _resourceSets
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>* resourceSets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>*) == 0x8);
    // private System.String moduleDir
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* moduleDir;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Reflection.Assembly MainAssembly
    // Size: 0x8
    // Offset: 0x30
    System::Reflection::Assembly* MainAssembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // private System.Type _locationInfo
    // Size: 0x8
    // Offset: 0x38
    System::Type* locationInfo;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Type _userResourceSet
    // Size: 0x8
    // Offset: 0x40
    System::Type* userResourceSet;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Globalization.CultureInfo _neutralResourcesCulture
    // Size: 0x8
    // Offset: 0x48
    System::Globalization::CultureInfo* neutralResourcesCulture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // private System.Resources.ResourceManager/CultureNameResourceSetPair _lastUsedResourceCache
    // Size: 0x8
    // Offset: 0x50
    System::Resources::ResourceManager::CultureNameResourceSetPair* lastUsedResourceCache;
    // Field size check
    static_assert(sizeof(System::Resources::ResourceManager::CultureNameResourceSetPair*) == 0x8);
    // private System.Boolean _ignoreCase
    // Size: 0x1
    // Offset: 0x58
    bool ignoreCase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean UseManifest
    // Size: 0x1
    // Offset: 0x59
    bool UseManifest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xD3E13C
    // private System.Boolean UseSatelliteAssem
    // Size: 0x1
    // Offset: 0x5A
    bool UseSatelliteAssem;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UseSatelliteAssem and: fallbackLoc
    char __padding11[0x1] = {};
    // [OptionalFieldAttribute] Offset: 0xD3E174
    // private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    // Size: 0x4
    // Offset: 0x5C
    System::Resources::UltimateResourceFallbackLocation fallbackLoc;
    // Field size check
    static_assert(sizeof(System::Resources::UltimateResourceFallbackLocation) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xD3E184
    // private System.Version _satelliteContractVersion
    // Size: 0x8
    // Offset: 0x60
    System::Version* satelliteContractVersion;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD3E194
    // private System.Boolean _lookedForSatelliteContractVersion
    // Size: 0x1
    // Offset: 0x68
    bool lookedForSatelliteContractVersion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lookedForSatelliteContractVersion and: callingAssembly
    char __padding14[0x7] = {};
    // [OptionalFieldAttribute] Offset: 0xD3E1A4
    // private System.Reflection.Assembly _callingAssembly
    // Size: 0x8
    // Offset: 0x70
    System::Reflection::Assembly* callingAssembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD3E1DC
    // private System.Reflection.RuntimeAssembly m_callingAssembly
    // Size: 0x8
    // Offset: 0x78
    System::Reflection::RuntimeAssembly* m_callingAssembly;
    // Field size check
    static_assert(sizeof(System::Reflection::RuntimeAssembly*) == 0x8);
    // private System.Resources.IResourceGroveler resourceGroveler
    // Size: 0x8
    // Offset: 0x80
    System::Resources::IResourceGroveler* resourceGroveler;
    // Field size check
    static_assert(sizeof(System::Resources::IResourceGroveler*) == 0x8);
    // Creating value type constructor for type: ResourceManager
    ResourceManager(::Il2CppString* BaseNameField_ = {}, System::Collections::Hashtable* ResourceSets_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>* resourceSets_ = {}, ::Il2CppString* moduleDir_ = {}, System::Reflection::Assembly* MainAssembly_ = {}, System::Type* locationInfo_ = {}, System::Type* userResourceSet_ = {}, System::Globalization::CultureInfo* neutralResourcesCulture_ = {}, System::Resources::ResourceManager::CultureNameResourceSetPair* lastUsedResourceCache_ = {}, bool ignoreCase_ = {}, bool UseManifest_ = {}, bool UseSatelliteAssem_ = {}, System::Resources::UltimateResourceFallbackLocation fallbackLoc_ = {}, System::Version* satelliteContractVersion_ = {}, bool lookedForSatelliteContractVersion_ = {}, System::Reflection::Assembly* callingAssembly_ = {}, System::Reflection::RuntimeAssembly* m_callingAssembly_ = {}, System::Resources::IResourceGroveler* resourceGroveler_ = {}) noexcept : BaseNameField{BaseNameField_}, ResourceSets{ResourceSets_}, resourceSets{resourceSets_}, moduleDir{moduleDir_}, MainAssembly{MainAssembly_}, locationInfo{locationInfo_}, userResourceSet{userResourceSet_}, neutralResourcesCulture{neutralResourcesCulture_}, lastUsedResourceCache{lastUsedResourceCache_}, ignoreCase{ignoreCase_}, UseManifest{UseManifest_}, UseSatelliteAssem{UseSatelliteAssem_}, fallbackLoc{fallbackLoc_}, satelliteContractVersion{satelliteContractVersion_}, lookedForSatelliteContractVersion{lookedForSatelliteContractVersion_}, callingAssembly{callingAssembly_}, m_callingAssembly{m_callingAssembly_}, resourceGroveler{resourceGroveler_} {}
    // Get static field: static public readonly System.Int32 MagicNumber
    static int _get_MagicNumber();
    // Set static field: static public readonly System.Int32 MagicNumber
    static void _set_MagicNumber(int value);
    // Get static field: static public readonly System.Int32 HeaderVersionNumber
    static int _get_HeaderVersionNumber();
    // Set static field: static public readonly System.Int32 HeaderVersionNumber
    static void _set_HeaderVersionNumber(int value);
    // Get static field: static private readonly System.Type _minResourceSet
    static System::Type* _get__minResourceSet();
    // Set static field: static private readonly System.Type _minResourceSet
    static void _set__minResourceSet(System::Type* value);
    // Get static field: static readonly System.String ResReaderTypeName
    static ::Il2CppString* _get_ResReaderTypeName();
    // Set static field: static readonly System.String ResReaderTypeName
    static void _set_ResReaderTypeName(::Il2CppString* value);
    // Get static field: static readonly System.String ResSetTypeName
    static ::Il2CppString* _get_ResSetTypeName();
    // Set static field: static readonly System.String ResSetTypeName
    static void _set_ResSetTypeName(::Il2CppString* value);
    // Get static field: static readonly System.String MscorlibName
    static ::Il2CppString* _get_MscorlibName();
    // Set static field: static readonly System.String MscorlibName
    static void _set_MscorlibName(::Il2CppString* value);
    // Get static field: static readonly System.Int32 DEBUG
    static int _get_DEBUG();
    // Set static field: static readonly System.Int32 DEBUG
    static void _set_DEBUG(int value);
    // private System.Void Init()
    // Offset: 0x15D61B0
    void Init();
    // public System.Void .ctor(System.String baseName, System.Reflection.Assembly assembly)
    // Offset: 0x15D63D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManager* New_ctor(::Il2CppString* baseName, System::Reflection::Assembly* assembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ResourceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManager*, creationType>(baseName, assembly)));
    }
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x15D678C
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x15D67D0
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x15D698C
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void CommonAssemblyInit()
    // Offset: 0x15D6638
    void CommonAssemblyInit();
    // public System.String get_BaseName()
    // Offset: 0x15D6A0C
    ::Il2CppString* get_BaseName();
    // protected System.Resources.UltimateResourceFallbackLocation get_FallbackLocation()
    // Offset: 0x15D6A14
    System::Resources::UltimateResourceFallbackLocation get_FallbackLocation();
    // protected System.String GetResourceFileName(System.Globalization.CultureInfo culture)
    // Offset: 0x15D6A1C
    ::Il2CppString* GetResourceFileName(System::Globalization::CultureInfo* culture);
    // System.Resources.ResourceSet GetFirstResourceSet(System.Globalization.CultureInfo culture)
    // Offset: 0x15D6B50
    System::Resources::ResourceSet* GetFirstResourceSet(System::Globalization::CultureInfo* culture);
    // public System.Resources.ResourceSet GetResourceSet(System.Globalization.CultureInfo culture, System.Boolean createIfNotExists, System.Boolean tryParents)
    // Offset: 0x15D6EE4
    System::Resources::ResourceSet* GetResourceSet(System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents);
    // protected System.Resources.ResourceSet InternalGetResourceSet(System.Globalization.CultureInfo culture, System.Boolean createIfNotExists, System.Boolean tryParents)
    // Offset: 0x15D73A0
    System::Resources::ResourceSet* InternalGetResourceSet(System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents);
    // private System.Resources.ResourceSet InternalGetResourceSet(System.Globalization.CultureInfo requestedCulture, System.Boolean createIfNotExists, System.Boolean tryParents, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x15D73D0
    System::Resources::ResourceSet* InternalGetResourceSet(System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void AddResourceSet(System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.String cultureName, ref System.Resources.ResourceSet rs)
    // Offset: 0x15D7208
    static void AddResourceSet(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>* localResourceSets, ::Il2CppString* cultureName, System::Resources::ResourceSet*& rs);
    // static protected System.Version GetSatelliteContractVersion(System.Reflection.Assembly a)
    // Offset: 0x15D7B44
    static System::Version* GetSatelliteContractVersion(System::Reflection::Assembly* a);
    // static System.Boolean CompareNames(System.String asmTypeName1, System.String typeName2, System.Reflection.AssemblyName asmName2)
    // Offset: 0x15D58F0
    static bool CompareNames(::Il2CppString* asmTypeName1, ::Il2CppString* typeName2, System::Reflection::AssemblyName* asmName2);
    // private System.Void SetAppXConfiguration()
    // Offset: 0x15D6634
    void SetAppXConfiguration();
    // public System.String GetString(System.String name, System.Globalization.CultureInfo culture)
    // Offset: 0x15D8258
    ::Il2CppString* GetString(::Il2CppString* name, System::Globalization::CultureInfo* culture);
    // static private System.Void .cctor()
    // Offset: 0x15D86CC
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x15D6248
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ResourceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManager*, creationType>()));
    }
  }; // System.Resources.ResourceManager
  static check_size<sizeof(ResourceManager), 128 + sizeof(System::Resources::IResourceGroveler*)> __System_Resources_ResourceManagerSizeCheck;
  static_assert(sizeof(ResourceManager) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceManager*, "System.Resources", "ResourceManager");
#pragma pack(pop)
