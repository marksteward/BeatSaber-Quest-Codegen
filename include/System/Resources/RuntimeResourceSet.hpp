// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceSet
#include "System/Resources/ResourceSet.hpp"
// Including type: System.Resources.ResourceLocator
#include "System/Resources/ResourceLocator.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceReader
  class ResourceReader;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.RuntimeResourceSet
  class RuntimeResourceSet : public System::Resources::ResourceSet {
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>*) == 0x8);
    // private System.Resources.ResourceReader _defaultReader
    // Size: 0x8
    // Offset: 0x30
    System::Resources::ResourceReader* defaultReader;
    // Field size check
    static_assert(sizeof(System::Resources::ResourceReader*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _caseInsensitiveTable
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* caseInsensitiveTable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>*) == 0x8);
    // private System.Boolean _haveReadFromReader
    // Size: 0x1
    // Offset: 0x40
    bool haveReadFromReader;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RuntimeResourceSet
    RuntimeResourceSet(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache_ = {}, System::Resources::ResourceReader* defaultReader_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* caseInsensitiveTable_ = {}, bool haveReadFromReader_ = {}) noexcept : resCache{resCache_}, defaultReader{defaultReader_}, caseInsensitiveTable{caseInsensitiveTable_}, haveReadFromReader{haveReadFromReader_} {}
    // static field const value: static System.Int32 Version
    static constexpr const int Version = 2;
    // Get static field: static System.Int32 Version
    static int _get_Version();
    // Set static field: static System.Int32 Version
    static void _set_Version(int value);
    // System.Void .ctor(System.String fileName)
    // Offset: 0x141A048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeResourceSet* New_ctor(::Il2CppString* fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::RuntimeResourceSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeResourceSet*, creationType>(fileName)));
    }
    // System.Void .ctor(System.IO.Stream stream)
    // Offset: 0x141A150
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeResourceSet* New_ctor(System::IO::Stream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::RuntimeResourceSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeResourceSet*, creationType>(stream)));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x141A450
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Object GetObject(System.String key, System.Boolean ignoreCase, System.Boolean isString)
    // Offset: 0x141A4D4
    ::Il2CppObject* GetObject(::Il2CppString* key, bool ignoreCase, bool isString);
    // private System.Object ResolveResourceLocator(System.Resources.ResourceLocator resLocation, System.String key, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> copyOfCache, System.Boolean keyInWrongCase)
    // Offset: 0x141AE40
    ::Il2CppObject* ResolveResourceLocator(System::Resources::ResourceLocator resLocation, ::Il2CppString* key, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* copyOfCache, bool keyInWrongCase);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x141A228
    // Implemented from: System.Resources.ResourceSet
    // Base method: System.Void ResourceSet::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x141A338
    // Implemented from: System.Resources.ResourceSet
    // Base method: System.Collections.IDictionaryEnumerator ResourceSet::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // private System.Collections.IDictionaryEnumerator GetEnumeratorHelper()
    // Offset: 0x141A33C
    // Implemented from: System.Resources.ResourceSet
    // Base method: System.Collections.IDictionaryEnumerator ResourceSet::GetEnumeratorHelper()
    System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();
    // public override System.String GetString(System.String key)
    // Offset: 0x141A454
    // Implemented from: System.Resources.ResourceSet
    // Base method: System.String ResourceSet::GetString(System.String key)
    ::Il2CppString* GetString(::Il2CppString* key);
    // public override System.String GetString(System.String key, System.Boolean ignoreCase)
    // Offset: 0x141ADA4
    // Implemented from: System.Resources.ResourceSet
    // Base method: System.String ResourceSet::GetString(System.String key, System.Boolean ignoreCase)
    ::Il2CppString* GetString(::Il2CppString* key, bool ignoreCase);
    // public override System.Object GetObject(System.String key)
    // Offset: 0x141AE28
    // Implemented from: System.Resources.ResourceSet
    // Base method: System.Object ResourceSet::GetObject(System.String key)
    ::Il2CppObject* GetObject(::Il2CppString* key);
    // public override System.Object GetObject(System.String key, System.Boolean ignoreCase)
    // Offset: 0x141AE34
    // Implemented from: System.Resources.ResourceSet
    // Base method: System.Object ResourceSet::GetObject(System.String key, System.Boolean ignoreCase)
    ::Il2CppObject* GetObject(::Il2CppString* key, bool ignoreCase);
  }; // System.Resources.RuntimeResourceSet
  #pragma pack(pop)
  static check_size<sizeof(RuntimeResourceSet), 64 + sizeof(bool)> __System_Resources_RuntimeResourceSetSizeCheck;
  static_assert(sizeof(RuntimeResourceSet) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::RuntimeResourceSet*, "System.Resources", "RuntimeResourceSet");
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Resources::RuntimeResourceSet::*)()>(&System::Resources::RuntimeResourceSet::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::RuntimeResourceSet::*)(::Il2CppString*, bool, bool)>(&System::Resources::RuntimeResourceSet::GetObject)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isString = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, ignoreCase, isString});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::ResolveResourceLocator
// Il2CppName: ResolveResourceLocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::RuntimeResourceSet::*)(System::Resources::ResourceLocator, ::Il2CppString*, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>*, bool)>(&System::Resources::RuntimeResourceSet::ResolveResourceLocator)> {
  const MethodInfo* get() {
    static auto* resLocation = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceLocator")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* copyOfCache = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System.Resources", "ResourceLocator")})->byval_arg;
    static auto* keyInWrongCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "ResolveResourceLocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resLocation, key, copyOfCache, keyInWrongCase});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::RuntimeResourceSet::*)(bool)>(&System::Resources::RuntimeResourceSet::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (System::Resources::RuntimeResourceSet::*)()>(&System::Resources::RuntimeResourceSet::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::GetEnumeratorHelper
// Il2CppName: GetEnumeratorHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator* (System::Resources::RuntimeResourceSet::*)()>(&System::Resources::RuntimeResourceSet::GetEnumeratorHelper)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "GetEnumeratorHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Resources::RuntimeResourceSet::*)(::Il2CppString*)>(&System::Resources::RuntimeResourceSet::GetString)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Resources::RuntimeResourceSet::*)(::Il2CppString*, bool)>(&System::Resources::RuntimeResourceSet::GetString)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::RuntimeResourceSet::*)(::Il2CppString*)>(&System::Resources::RuntimeResourceSet::GetObject)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Resources::RuntimeResourceSet::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::RuntimeResourceSet::*)(::Il2CppString*, bool)>(&System::Resources::RuntimeResourceSet::GetObject)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::RuntimeResourceSet*), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, ignoreCase});
  }
};
