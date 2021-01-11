// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
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
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectContext
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D926E0
  class InjectContext : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: Zenject::InjectContext::$get_ParentContexts$d__52
    class $get_ParentContexts$d__52;
    // Nested type: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54
    class $get_ParentContextsAndSelf$d__54;
    // Nested type: Zenject::InjectContext::$get_AllObjectTypes$d__56
    class $get_AllObjectTypes$d__56;
    // private Zenject.BindingId _bindingId
    // Size: 0x10
    // Offset: 0x10
    Zenject::BindingId bindingId;
    // Field size check
    static_assert(sizeof(Zenject::BindingId) == 0x10);
    // private System.Type _objectType
    // Size: 0x8
    // Offset: 0x20
    System::Type* objectType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private Zenject.InjectContext _parentContext
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* parentContext;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // private System.Object _objectInstance
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* objectInstance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String _memberName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* memberName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _optional
    // Size: 0x1
    // Offset: 0x40
    bool optional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: optional and: sourceType
    char __padding5[0x3] = {};
    // private Zenject.InjectSources _sourceType
    // Size: 0x4
    // Offset: 0x44
    Zenject::InjectSources sourceType;
    // Field size check
    static_assert(sizeof(Zenject::InjectSources) == 0x4);
    // private System.Object _fallBackValue
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* fallBackValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _concreteIdentifier
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* concreteIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x58
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: InjectContext
    InjectContext(Zenject::BindingId bindingId_ = {}, System::Type* objectType_ = {}, Zenject::InjectContext* parentContext_ = {}, ::Il2CppObject* objectInstance_ = {}, ::Il2CppString* memberName_ = {}, bool optional_ = {}, Zenject::InjectSources sourceType_ = {}, ::Il2CppObject* fallBackValue_ = {}, ::Il2CppObject* concreteIdentifier_ = {}, Zenject::DiContainer* container_ = {}) noexcept : bindingId{bindingId_}, objectType{objectType_}, parentContext{parentContext_}, objectInstance{objectInstance_}, memberName{memberName_}, optional{optional_}, sourceType{sourceType_}, fallBackValue{fallBackValue_}, concreteIdentifier{concreteIdentifier_}, container{container_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType)
    // Offset: 0x12A066C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>(container, memberType)));
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType, System.Object identifier)
    // Offset: 0x1292E80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType, ::Il2CppObject* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>(container, memberType, identifier)));
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType, System.Object identifier, System.Boolean optional)
    // Offset: 0x12A06E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType, ::Il2CppObject* identifier, bool optional) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>(container, memberType, identifier, optional)));
    }
    // public System.Void Reset()
    // Offset: 0x12A05A0
    void Reset();
    // public Zenject.BindingId get_BindingId()
    // Offset: 0x12A081C
    Zenject::BindingId get_BindingId();
    // public System.Type get_ObjectType()
    // Offset: 0x12A0828
    System::Type* get_ObjectType();
    // public System.Void set_ObjectType(System.Type value)
    // Offset: 0x12A0830
    void set_ObjectType(System::Type* value);
    // public Zenject.InjectContext get_ParentContext()
    // Offset: 0x12A0838
    Zenject::InjectContext* get_ParentContext();
    // public System.Void set_ParentContext(Zenject.InjectContext value)
    // Offset: 0x12A0840
    void set_ParentContext(Zenject::InjectContext* value);
    // public System.Object get_ObjectInstance()
    // Offset: 0x12A0848
    ::Il2CppObject* get_ObjectInstance();
    // public System.Void set_ObjectInstance(System.Object value)
    // Offset: 0x12A0850
    void set_ObjectInstance(::Il2CppObject* value);
    // public System.Object get_Identifier()
    // Offset: 0x12A0858
    ::Il2CppObject* get_Identifier();
    // public System.Void set_Identifier(System.Object value)
    // Offset: 0x12A06D8
    void set_Identifier(::Il2CppObject* value);
    // public System.String get_MemberName()
    // Offset: 0x12A0860
    ::Il2CppString* get_MemberName();
    // public System.Void set_MemberName(System.String value)
    // Offset: 0x12A0868
    void set_MemberName(::Il2CppString* value);
    // public System.Type get_MemberType()
    // Offset: 0x129FB08
    System::Type* get_MemberType();
    // public System.Void set_MemberType(System.Type value)
    // Offset: 0x12A06D0
    void set_MemberType(System::Type* value);
    // public System.Boolean get_Optional()
    // Offset: 0x12A0870
    bool get_Optional();
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0x12A0878
    void set_Optional(bool value);
    // public Zenject.InjectSources get_SourceType()
    // Offset: 0x12A0884
    Zenject::InjectSources get_SourceType();
    // public System.Void set_SourceType(Zenject.InjectSources value)
    // Offset: 0x12A088C
    void set_SourceType(Zenject::InjectSources value);
    // public System.Object get_ConcreteIdentifier()
    // Offset: 0x12A0894
    ::Il2CppObject* get_ConcreteIdentifier();
    // public System.Void set_ConcreteIdentifier(System.Object value)
    // Offset: 0x12A089C
    void set_ConcreteIdentifier(::Il2CppObject* value);
    // public System.Object get_FallBackValue()
    // Offset: 0x12A08A4
    ::Il2CppObject* get_FallBackValue();
    // public System.Void set_FallBackValue(System.Object value)
    // Offset: 0x12A08AC
    void set_FallBackValue(::Il2CppObject* value);
    // public Zenject.DiContainer get_Container()
    // Offset: 0x12A08B4
    Zenject::DiContainer* get_Container();
    // public System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0x12A08BC
    void set_Container(Zenject::DiContainer* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectContext> get_ParentContexts()
    // Offset: 0x12A08C4
    System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* get_ParentContexts();
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectContext> get_ParentContextsAndSelf()
    // Offset: 0x12A0988
    System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* get_ParentContextsAndSelf();
    // public System.Collections.Generic.IEnumerable`1<System.Type> get_AllObjectTypes()
    // Offset: 0x12A0A4C
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_AllObjectTypes();
    // public Zenject.InjectContext CreateSubContext(System.Type memberType)
    // Offset: 0x12A0B10
    Zenject::InjectContext* CreateSubContext(System::Type* memberType);
    // public Zenject.InjectContext CreateSubContext(System.Type memberType, System.Object identifier)
    // Offset: 0x12A0B18
    Zenject::InjectContext* CreateSubContext(System::Type* memberType, ::Il2CppObject* identifier);
    // public Zenject.InjectContext Clone()
    // Offset: 0x12A0C5C
    Zenject::InjectContext* Clone();
    // public System.String GetObjectGraphString()
    // Offset: 0x12A0D80
    ::Il2CppString* GetObjectGraphString();
    // public System.Void .ctor()
    // Offset: 0x12A0574
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x12A0728
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Zenject.InjectContext
  static check_size<sizeof(InjectContext), 88 + sizeof(Zenject::DiContainer*)> __Zenject_InjectContextSizeCheck;
  static_assert(sizeof(InjectContext) == 0x60);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext*, "Zenject", "InjectContext");
