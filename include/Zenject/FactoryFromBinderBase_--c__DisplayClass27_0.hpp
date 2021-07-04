// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderBase/<>c__DisplayClass27_0
  // [CompilerGeneratedAttribute] Offset: DDDD8C
  class FactoryFromBinderBase::$$c__DisplayClass27_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*) == 0x8);
    // public Zenject.FactoryFromBinderBase <>4__this
    // Size: 0x8
    // Offset: 0x18
    Zenject::FactoryFromBinderBase* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FactoryFromBinderBase*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass27_0
    $$c__DisplayClass27_0(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter_ = {}, Zenject::FactoryFromBinderBase* $$4__this_ = {}) noexcept : gameObjectGetter{gameObjectGetter_}, $$4__this{$$4__this_} {}
    // Zenject.IProvider <FromNewComponentOn>b__0(Zenject.DiContainer container)
    // Offset: 0x1636374
    Zenject::IProvider* $FromNewComponentOn$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1635740
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase::$$c__DisplayClass27_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase::$$c__DisplayClass27_0*, creationType>()));
    }
  }; // Zenject.FactoryFromBinderBase/<>c__DisplayClass27_0
  #pragma pack(pop)
  static check_size<sizeof(FactoryFromBinderBase::$$c__DisplayClass27_0), 24 + sizeof(Zenject::FactoryFromBinderBase*)> __Zenject_FactoryFromBinderBase_$$c__DisplayClass27_0SizeCheck;
  static_assert(sizeof(FactoryFromBinderBase::$$c__DisplayClass27_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass27_0");
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0::$FromNewComponentOn$b__0
// Il2CppName: <FromNewComponentOn>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0::*)(Zenject::DiContainer*)>(&Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0::$FromNewComponentOn$b__0)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0*), "<FromNewComponentOn>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
