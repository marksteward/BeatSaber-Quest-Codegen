// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectContext/<get_ParentContextsAndSelf>d__54
  // [CompilerGeneratedAttribute] Offset: DDE37C
  class InjectContext::$get_ParentContextsAndSelf$d__54 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>, public System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private Zenject.InjectContext <>2__current
    // Size: 0x8
    // Offset: 0x18
    Zenject::InjectContext* $$2__current;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public Zenject.InjectContext <>4__this
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*) == 0x8);
    // Creating value type constructor for type: $get_ParentContextsAndSelf$d__54
    $get_ParentContextsAndSelf$d__54(int $$1__state_ = {}, Zenject::InjectContext* $$2__current_ = {}, int $$l__initialThreadId_ = {}, Zenject::InjectContext* $$4__this_ = {}, System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>
    operator System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>
    operator System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x163FD34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext::$get_ParentContextsAndSelf$d__54* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext::$get_ParentContextsAndSelf$d__54*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1640C8C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1640D68
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1640CA8
    void $$m__Finally1();
    // private Zenject.InjectContext System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current()
    // Offset: 0x1640FFC
    Zenject::InjectContext* System_Collections_Generic_IEnumerator$Zenject_InjectContext$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1641004
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1641064
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator()
    // Offset: 0x164106C
    System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* System_Collections_Generic_IEnumerable$Zenject_InjectContext$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1641118
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.InjectContext/<get_ParentContextsAndSelf>d__54
  #pragma pack(pop)
  static check_size<sizeof(InjectContext::$get_ParentContextsAndSelf$d__54), 48 + sizeof(System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>*)> __Zenject_InjectContext_$get_ParentContextsAndSelf$d__54SizeCheck;
  static_assert(sizeof(InjectContext::$get_ParentContextsAndSelf$d__54) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext::$get_ParentContextsAndSelf$d__54*, "Zenject", "InjectContext/<get_ParentContextsAndSelf>d__54");
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::$$m__Finally1
// Il2CppName: <>m__Finally1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::System_Collections_Generic_IEnumerator$Zenject_InjectContext$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::System_Collections_Generic_IEnumerable$Zenject_InjectContext$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
