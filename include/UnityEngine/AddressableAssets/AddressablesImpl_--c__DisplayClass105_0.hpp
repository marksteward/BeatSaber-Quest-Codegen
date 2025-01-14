// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
#include "UnityEngine/ResourceManagement/ResourceProviders/InstantiationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x4A
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass105_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c__DisplayClass105_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Object key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters instantiateParameters
    // Size: 0x2A
    // Offset: 0x20
    UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters) == 0x2A);
    // Creating value type constructor for type: $$c__DisplayClass105_0
    $$c__DisplayClass105_0(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, ::Il2CppObject* key_ = {}, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters_ = {}) noexcept : $$4__this{$$4__this_}, key{key_}, instantiateParameters{instantiateParameters_} {}
    // Get instance field: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    UnityEngine::AddressableAssets::AddressablesImpl* _get_$$4__this();
    // Set instance field: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    void _set_$$4__this(UnityEngine::AddressableAssets::AddressablesImpl* value);
    // Get instance field: public System.Object key
    ::Il2CppObject* _get_key();
    // Set instance field: public System.Object key
    void _set_key(::Il2CppObject* value);
    // Get instance field: public UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters instantiateParameters
    UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters _get_instantiateParameters();
    // Set instance field: public UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters instantiateParameters
    void _set_instantiateParameters(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value);
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> <InstantiateWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x116C464
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> $InstantiateWithChain$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // public System.Void .ctor()
    // Offset: 0x116A644
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass105_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass105_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass105_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass105_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass105_0), 32 + sizeof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass105_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass105_0) == 0x4A);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass105_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass105_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass105_0::$InstantiateWithChain$b__0
// Il2CppName: <InstantiateWithChain>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass105_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass105_0::$InstantiateWithChain$b__0)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass105_0*), "<InstantiateWithChain>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass105_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
