// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
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
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinderBase/<get_AllParentTypes>d__17
  // [CompilerGeneratedAttribute] Offset: D033DC
  class FactoryFromBinderBase::$get_AllParentTypes$d__17 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::Generic::IEnumerator_1<System::Type*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Type <>2__current
    // Size: 0x8
    // Offset: 0x18
    System::Type* $$2__current;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Zenject.FactoryFromBinderBase <>4__this
    // Size: 0x8
    // Offset: 0x28
    Zenject::FactoryFromBinderBase* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FactoryFromBinderBase*) == 0x8);
    // private System.Collections.Generic.List`1/Enumerator<System.Type> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename System::Collections::Generic::List_1<System::Type*>::Enumerator $$7__wrap1;
    // Creating value type constructor for type: $get_AllParentTypes$d__17
    $get_AllParentTypes$d__17(int $$1__state_ = {}, System::Type* $$2__current_ = {}, int $$l__initialThreadId_ = {}, Zenject::FactoryFromBinderBase* $$4__this_ = {}, typename System::Collections::Generic::List_1<System::Type*>::Enumerator $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Type*>
    operator System::Collections::Generic::IEnumerable_1<System::Type*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Type*>
    operator System::Collections::Generic::IEnumerator_1<System::Type*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x147F6A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase::$get_AllParentTypes$d__17* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::$get_AllParentTypes$d__17::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase::$get_AllParentTypes$d__17*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14812E8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x148135C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1481304
    void $$m__Finally1();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0x14814F8
    System::Type* System_Collections_Generic_IEnumerator$System_Type$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1481500
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1481560
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0x1481568
    System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1481614
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.FactoryFromBinderBase/<get_AllParentTypes>d__17
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$get_AllParentTypes$d__17*, "Zenject", "FactoryFromBinderBase/<get_AllParentTypes>d__17");
