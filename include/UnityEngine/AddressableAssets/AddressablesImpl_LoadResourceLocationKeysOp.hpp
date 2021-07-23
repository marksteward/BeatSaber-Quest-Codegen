// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.AddressableAssets.Addressables/UnityEngine.AddressableAssets.MergeMode
#include "UnityEngine/AddressableAssets/Addressables.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.LoadResourceLocationKeysOp
  // [TokenAttribute] Offset: FFFFFFFF
  class AddressablesImpl::LoadResourceLocationKeysOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> {
    public:
    // private System.Collections.IEnumerable m_Key
    // Size: 0x8
    // Offset: 0x80
    System::Collections::IEnumerable* m_Key;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // private UnityEngine.AddressableAssets.Addressables/UnityEngine.AddressableAssets.MergeMode m_MergeMode
    // Size: 0x4
    // Offset: 0x88
    UnityEngine::AddressableAssets::Addressables::MergeMode m_MergeMode;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::Addressables::MergeMode) == 0x4);
    // private System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_locations
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*) == 0x8);
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private System.Type m_ResourceType
    // Size: 0x8
    // Offset: 0xA0
    System::Type* m_ResourceType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: LoadResourceLocationKeysOp
    LoadResourceLocationKeysOp(System::Collections::IEnumerable* m_Key_ = {}, UnityEngine::AddressableAssets::Addressables::MergeMode m_MergeMode_ = {}, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations_ = {}, UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables_ = {}, System::Type* m_ResourceType_ = {}) noexcept : m_Key{m_Key_}, m_MergeMode{m_MergeMode_}, m_locations{m_locations_}, m_Addressables{m_Addressables_}, m_ResourceType{m_ResourceType_} {}
    // Get instance field: private System.Collections.IEnumerable m_Key
    System::Collections::IEnumerable* _get_m_Key();
    // Set instance field: private System.Collections.IEnumerable m_Key
    void _set_m_Key(System::Collections::IEnumerable* value);
    // Get instance field: private UnityEngine.AddressableAssets.Addressables/UnityEngine.AddressableAssets.MergeMode m_MergeMode
    UnityEngine::AddressableAssets::Addressables::MergeMode _get_m_MergeMode();
    // Set instance field: private UnityEngine.AddressableAssets.Addressables/UnityEngine.AddressableAssets.MergeMode m_MergeMode
    void _set_m_MergeMode(UnityEngine::AddressableAssets::Addressables::MergeMode value);
    // Get instance field: private System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_locations
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* _get_m_locations();
    // Set instance field: private System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_locations
    void _set_m_locations(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);
    // Get instance field: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    UnityEngine::AddressableAssets::AddressablesImpl* _get_m_Addressables();
    // Set instance field: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    void _set_m_Addressables(UnityEngine::AddressableAssets::AddressablesImpl* value);
    // Get instance field: private System.Type m_ResourceType
    System::Type* _get_m_ResourceType();
    // Set instance field: private System.Type m_ResourceType
    void _set_m_ResourceType(System::Type* value);
    // public System.Void Init(UnityEngine.AddressableAssets.AddressablesImpl aa, System.Type t, System.Collections.IEnumerable key, UnityEngine.AddressableAssets.Addressables/UnityEngine.AddressableAssets.MergeMode mergeMode)
    // Offset: 0x13BFCE4
    void Init(UnityEngine::AddressableAssets::AddressablesImpl* aa, System::Type* t, System::Collections::IEnumerable* key, UnityEngine::AddressableAssets::Addressables::MergeMode mergeMode);
    // protected override System.String get_DebugName()
    // Offset: 0x13C41B0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::Il2CppString* get_DebugName();
    // public System.Void .ctor()
    // Offset: 0x13BFC94
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::LoadResourceLocationKeysOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::LoadResourceLocationKeysOp*, creationType>()));
    }
    // protected override System.Void Execute()
    // Offset: 0x13C41F8
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x13C42C0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.LoadResourceLocationKeysOp
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*, "UnityEngine.AddressableAssets", "AddressablesImpl/LoadResourceLocationKeysOp");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)(UnityEngine::AddressableAssets::AddressablesImpl*, System::Type*, System::Collections::IEnumerable*, UnityEngine::AddressableAssets::Addressables::MergeMode)>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Init)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* mergeMode = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "Addressables/MergeMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa, t, key, mergeMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeysOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
