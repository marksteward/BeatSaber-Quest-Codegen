// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ResourceProvider
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92AD0
  class ResourceProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly System.Type _resourceType
    // Size: 0x8
    // Offset: 0x10
    System::Type* resourceType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly System.String _resourcePath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _matchSingle
    // Size: 0x1
    // Offset: 0x20
    bool matchSingle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ResourceProvider
    ResourceProvider(System::Type* resourceType_ = {}, ::Il2CppString* resourcePath_ = {}, bool matchSingle_ = {}) noexcept : resourceType{resourceType_}, resourcePath{resourcePath_}, matchSingle{matchSingle_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(System.String resourcePath, System.Type resourceType, System.Boolean matchSingle)
    // Offset: 0x134F05C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceProvider* New_ctor(::Il2CppString* resourcePath, System::Type* resourceType, bool matchSingle) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ResourceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceProvider*, creationType>(resourcePath, resourceType, matchSingle)));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x134F0BC
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x134F0C4
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x134F0CC
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x134F0D4
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.ResourceProvider
  static check_size<sizeof(ResourceProvider), 32 + sizeof(bool)> __Zenject_ResourceProviderSizeCheck;
  static_assert(sizeof(ResourceProvider) == 0x21);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::ResourceProvider*, "Zenject", "ResourceProvider");
