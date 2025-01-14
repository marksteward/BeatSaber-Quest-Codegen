// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceManager
#include "UnityEngine/ResourceManagement/ResourceManager.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceManager/UnityEngine.ResourceManagement.<>c__DisplayClass83_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TObject>
  class ResourceManager::$$c__DisplayClass83_0_1 : public ::Il2CppObject {
    public:
    // public System.Action`1<TObject> callback
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<TObject>* callback;
    // Field size check
    static_assert(sizeof(System::Action_1<TObject>*) == 0x8);
    // public System.Boolean releaseDependenciesOnFailure
    // Size: 0x1
    // Offset: 0x0
    bool releaseDependenciesOnFailure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.ResourceManagement.ResourceManager <>4__this
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ResourceManagement::ResourceManager* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceManager*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass83_0_1
    $$c__DisplayClass83_0_1(System::Action_1<TObject>* callback_ = {}, bool releaseDependenciesOnFailure_ = {}, UnityEngine::ResourceManagement::ResourceManager* $$4__this_ = {}) noexcept : callback{callback_}, releaseDependenciesOnFailure{releaseDependenciesOnFailure_}, $$4__this{$$4__this_} {}
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<TObject> callback
    System::Action_1<TObject>* _get_callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::_get_callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callback"))->offset;
      return *reinterpret_cast<System::Action_1<TObject>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Action`1<TObject> callback
    void _set_callback(System::Action_1<TObject>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::_set_callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callback"))->offset;
      *reinterpret_cast<System::Action_1<TObject>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Boolean releaseDependenciesOnFailure
    bool _get_releaseDependenciesOnFailure() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::_get_releaseDependenciesOnFailure");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "releaseDependenciesOnFailure"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Boolean releaseDependenciesOnFailure
    void _set_releaseDependenciesOnFailure(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::_set_releaseDependenciesOnFailure");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "releaseDependenciesOnFailure"))->offset;
      *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.ResourceManagement.ResourceManager <>4__this
    UnityEngine::ResourceManagement::ResourceManager* _get_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::_get_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<UnityEngine::ResourceManagement::ResourceManager**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public UnityEngine.ResourceManagement.ResourceManager <>4__this
    void _set_$$4__this(UnityEngine::ResourceManagement::ResourceManager* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::_set_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      *reinterpret_cast<UnityEngine::ResourceManagement::ResourceManager**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // System.Void <ProvideResources>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle x)
    // Offset: 0xFFFFFFFF
    void $ProvideResources$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle x) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::<ProvideResources>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ProvideResources>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, x);
    }
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<TObject>> <ProvideResources>b__1(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle resultHandle)
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>*> $ProvideResources$b__1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle resultHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::<ProvideResources>b__1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ProvideResources>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resultHandle)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>*>, false>(___instance_arg, ___internal__method, resultHandle);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManager::$$c__DisplayClass83_0_1<TObject>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManager::$$c__DisplayClass83_0_1<TObject>*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceManager/UnityEngine.ResourceManagement.<>c__DisplayClass83_0`1
  // Could not write size check! Type: UnityEngine.ResourceManagement.ResourceManager/UnityEngine.ResourceManagement.<>c__DisplayClass83_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ResourceManagement::ResourceManager::$$c__DisplayClass83_0_1, "UnityEngine.ResourceManagement", "ResourceManager/<>c__DisplayClass83_0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
