// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass65_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass65_1 : public ::Il2CppObject {
    public:
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // public System.Type concreteType
    // Size: 0x8
    // Offset: 0x18
    System::Type* concreteType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public Zenject.FromBinder/Zenject.<>c__DisplayClass65_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x20
    Zenject::FromBinder::$$c__DisplayClass65_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(Zenject::FromBinder::$$c__DisplayClass65_0*) == 0x8);
    // public System.Func`2<UnityEngine.GameObject,UnityEngine.Component> <>9__2
    // Size: 0x8
    // Offset: 0x28
    System::Func_2<UnityEngine::GameObject*, UnityEngine::Component*>* $$9__2;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::GameObject*, UnityEngine::Component*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass65_1
    $$c__DisplayClass65_1(Zenject::DiContainer* container_ = {}, System::Type* concreteType_ = {}, Zenject::FromBinder::$$c__DisplayClass65_0* CS$$$8__locals1_ = {}, System::Func_2<UnityEngine::GameObject*, UnityEngine::Component*>* $$9__2_ = {}) noexcept : container{container_}, concreteType{concreteType_}, CS$$$8__locals1{CS$$$8__locals1_}, $$9__2{$$9__2_} {}
    // Get instance field: public Zenject.DiContainer container
    Zenject::DiContainer* _get_container();
    // Set instance field: public Zenject.DiContainer container
    void _set_container(Zenject::DiContainer* value);
    // Get instance field: public System.Type concreteType
    System::Type* _get_concreteType();
    // Set instance field: public System.Type concreteType
    void _set_concreteType(System::Type* value);
    // Get instance field: public Zenject.FromBinder/Zenject.<>c__DisplayClass65_0 CS$<>8__locals1
    Zenject::FromBinder::$$c__DisplayClass65_0* _get_CS$$$8__locals1();
    // Set instance field: public Zenject.FromBinder/Zenject.<>c__DisplayClass65_0 CS$<>8__locals1
    void _set_CS$$$8__locals1(Zenject::FromBinder::$$c__DisplayClass65_0* value);
    // Get instance field: public System.Func`2<UnityEngine.GameObject,UnityEngine.Component> <>9__2
    System::Func_2<UnityEngine::GameObject*, UnityEngine::Component*>* _get_$$9__2();
    // Set instance field: public System.Func`2<UnityEngine.GameObject,UnityEngine.Component> <>9__2
    void _set_$$9__2(System::Func_2<UnityEngine::GameObject*, UnityEngine::Component*>* value);
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentInHierarchy>b__1(Zenject.InjectContext ctx)
    // Offset: 0x16224CC
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentInHierarchy$b__1(Zenject::InjectContext* ctx);
    // UnityEngine.Component <FromComponentInHierarchy>b__2(UnityEngine.GameObject x)
    // Offset: 0x162277C
    UnityEngine::Component* $FromComponentInHierarchy$b__2(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0x16224C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass65_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass65_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass65_1*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass65_1
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass65_1), 40 + sizeof(System::Func_2<UnityEngine::GameObject*, UnityEngine::Component*>*)> __Zenject_FromBinder_$$c__DisplayClass65_1SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass65_1) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass65_1*, "Zenject", "FromBinder/<>c__DisplayClass65_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass65_1::$FromComponentInHierarchy$b__1
// Il2CppName: <FromComponentInHierarchy>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (Zenject::FromBinder::$$c__DisplayClass65_1::*)(Zenject::InjectContext*)>(&Zenject::FromBinder::$$c__DisplayClass65_1::$FromComponentInHierarchy$b__1)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass65_1*), "<FromComponentInHierarchy>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass65_1::$FromComponentInHierarchy$b__2
// Il2CppName: <FromComponentInHierarchy>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Component* (Zenject::FromBinder::$$c__DisplayClass65_1::*)(UnityEngine::GameObject*)>(&Zenject::FromBinder::$$c__DisplayClass65_1::$FromComponentInHierarchy$b__2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass65_1*), "<FromComponentInHierarchy>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass65_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
