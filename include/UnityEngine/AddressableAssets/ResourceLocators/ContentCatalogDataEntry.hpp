// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogDataEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class ContentCatalogDataEntry : public ::Il2CppObject {
    public:
    // private System.String <InternalId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* InternalId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <Provider>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Provider;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> <Keys>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppObject*>* Keys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> <Dependencies>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<::Il2CppObject*>* Dependencies;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private System.Object <Data>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* Data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type <ResourceType>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    System::Type* ResourceType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: ContentCatalogDataEntry
    ContentCatalogDataEntry(::Il2CppString* InternalId_ = {}, ::Il2CppString* Provider_ = {}, System::Collections::Generic::List_1<::Il2CppObject*>* Keys_ = {}, System::Collections::Generic::List_1<::Il2CppObject*>* Dependencies_ = {}, ::Il2CppObject* Data_ = {}, System::Type* ResourceType_ = {}) noexcept : InternalId{InternalId_}, Provider{Provider_}, Keys{Keys_}, Dependencies{Dependencies_}, Data{Data_}, ResourceType{ResourceType_} {}
    // Get instance field: private System.String <InternalId>k__BackingField
    ::Il2CppString* _get_$InternalId$k__BackingField();
    // Set instance field: private System.String <InternalId>k__BackingField
    void _set_$InternalId$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.String <Provider>k__BackingField
    ::Il2CppString* _get_$Provider$k__BackingField();
    // Set instance field: private System.String <Provider>k__BackingField
    void _set_$Provider$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.Collections.Generic.List`1<System.Object> <Keys>k__BackingField
    System::Collections::Generic::List_1<::Il2CppObject*>* _get_$Keys$k__BackingField();
    // Set instance field: private System.Collections.Generic.List`1<System.Object> <Keys>k__BackingField
    void _set_$Keys$k__BackingField(System::Collections::Generic::List_1<::Il2CppObject*>* value);
    // Get instance field: private System.Collections.Generic.List`1<System.Object> <Dependencies>k__BackingField
    System::Collections::Generic::List_1<::Il2CppObject*>* _get_$Dependencies$k__BackingField();
    // Set instance field: private System.Collections.Generic.List`1<System.Object> <Dependencies>k__BackingField
    void _set_$Dependencies$k__BackingField(System::Collections::Generic::List_1<::Il2CppObject*>* value);
    // Get instance field: private System.Object <Data>k__BackingField
    ::Il2CppObject* _get_$Data$k__BackingField();
    // Set instance field: private System.Object <Data>k__BackingField
    void _set_$Data$k__BackingField(::Il2CppObject* value);
    // Get instance field: private System.Type <ResourceType>k__BackingField
    System::Type* _get_$ResourceType$k__BackingField();
    // Set instance field: private System.Type <ResourceType>k__BackingField
    void _set_$ResourceType$k__BackingField(System::Type* value);
    // public System.String get_InternalId()
    // Offset: 0x11747F8
    ::Il2CppString* get_InternalId();
    // public System.Void set_InternalId(System.String value)
    // Offset: 0x1174800
    void set_InternalId(::Il2CppString* value);
    // public System.String get_Provider()
    // Offset: 0x1174808
    ::Il2CppString* get_Provider();
    // private System.Void set_Provider(System.String value)
    // Offset: 0x1174810
    void set_Provider(::Il2CppString* value);
    // public System.Collections.Generic.List`1<System.Object> get_Keys()
    // Offset: 0x1174818
    System::Collections::Generic::List_1<::Il2CppObject*>* get_Keys();
    // private System.Void set_Keys(System.Collections.Generic.List`1<System.Object> value)
    // Offset: 0x1174820
    void set_Keys(System::Collections::Generic::List_1<::Il2CppObject*>* value);
    // public System.Collections.Generic.List`1<System.Object> get_Dependencies()
    // Offset: 0x1174828
    System::Collections::Generic::List_1<::Il2CppObject*>* get_Dependencies();
    // private System.Void set_Dependencies(System.Collections.Generic.List`1<System.Object> value)
    // Offset: 0x1174830
    void set_Dependencies(System::Collections::Generic::List_1<::Il2CppObject*>* value);
    // public System.Object get_Data()
    // Offset: 0x1174838
    ::Il2CppObject* get_Data();
    // public System.Void set_Data(System.Object value)
    // Offset: 0x1174840
    void set_Data(::Il2CppObject* value);
    // public System.Type get_ResourceType()
    // Offset: 0x1174848
    System::Type* get_ResourceType();
    // private System.Void set_ResourceType(System.Type value)
    // Offset: 0x1174850
    void set_ResourceType(System::Type* value);
    // public System.Void .ctor(System.Type type, System.String internalId, System.String provider, System.Collections.Generic.IEnumerable`1<System.Object> keys, System.Collections.Generic.IEnumerable`1<System.Object> dependencies, System.Object extraData)
    // Offset: 0x1174858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogDataEntry* New_ctor(System::Type* type, ::Il2CppString* internalId, ::Il2CppString* provider, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* keys, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* dependencies, ::Il2CppObject* extraData) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogDataEntry*, creationType>(type, internalId, provider, keys, dependencies, extraData)));
    }
  }; // UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogDataEntry
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogDataEntry), 56 + sizeof(System::Type*)> __UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogDataEntrySizeCheck;
  static_assert(sizeof(ContentCatalogDataEntry) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogDataEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_InternalId
// Il2CppName: get_InternalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_InternalId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "get_InternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_InternalId
// Il2CppName: set_InternalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)(::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_InternalId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "set_InternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Provider
// Il2CppName: get_Provider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Provider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "get_Provider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Provider
// Il2CppName: set_Provider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)(::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Provider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "set_Provider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppObject*>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Keys
// Il2CppName: set_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)(System::Collections::Generic::List_1<::Il2CppObject*>*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Keys)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "set_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Dependencies
// Il2CppName: get_Dependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppObject*>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Dependencies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "get_Dependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Dependencies
// Il2CppName: set_Dependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)(System::Collections::Generic::List_1<::Il2CppObject*>*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Dependencies)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "set_Dependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)(::Il2CppObject*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_ResourceType
// Il2CppName: get_ResourceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::get_ResourceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "get_ResourceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_ResourceType
// Il2CppName: set_ResourceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::*)(System::Type*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::set_ResourceType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*), "set_ResourceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
