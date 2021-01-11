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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.CachedProvider
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D927D0
  class CachedProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.IProvider _creator
    // Size: 0x8
    // Offset: 0x10
    Zenject::IProvider* creator;
    // Field size check
    static_assert(sizeof(Zenject::IProvider*) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> _instances
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppObject*>* instances;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean _isCreatingInstance
    // Size: 0x1
    // Offset: 0x20
    bool isCreatingInstance;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CachedProvider
    CachedProvider(Zenject::IProvider* creator_ = {}, System::Collections::Generic::List_1<::Il2CppObject*>* instances_ = {}, bool isCreatingInstance_ = {}) noexcept : creator{creator_}, instances{instances_}, isCreatingInstance{isCreatingInstance_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(Zenject.IProvider creator)
    // Offset: 0x10EE548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedProvider* New_ctor(Zenject::IProvider* creator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::CachedProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedProvider*, creationType>(creator)));
    }
    // public System.Int32 get_NumInstances()
    // Offset: 0x10EEC7C
    int get_NumInstances();
    // public System.Void ClearCache()
    // Offset: 0x10EED1C
    void ClearCache();
    // public System.Boolean get_IsCached()
    // Offset: 0x10EECD0
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x10EECD8
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x10EED28
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x10EE938
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.CachedProvider
  static check_size<sizeof(CachedProvider), 32 + sizeof(bool)> __Zenject_CachedProviderSizeCheck;
  static_assert(sizeof(CachedProvider) == 0x21);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::CachedProvider*, "Zenject", "CachedProvider");
