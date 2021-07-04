// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/CompositeWorkItem.hpp"
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
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/<RunChildren>d__16
  // [CompilerGeneratedAttribute] Offset: E3D86C
  class CompositeWorkItem::$RunChildren$d__16 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem <>4__this
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*) == 0x8);
    // private System.Int32 <childCount>5__2
    // Size: 0x4
    // Offset: 0x30
    int $childCount$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1/Enumerator<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> <>7__wrap2
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    typename System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>::Enumerator $$7__wrap2;
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem <child>5__4
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* $child$5__4;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*) == 0x8);
    // private System.Collections.IEnumerator <enumerable>5__5
    // Size: 0x8
    // Offset: 0x58
    System::Collections::IEnumerator* $enumerable$5__5;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $RunChildren$d__16
    $RunChildren$d__16(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem* $$4__this_ = {}, int $childCount$5__2_ = {}, typename System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>::Enumerator $$7__wrap2_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* $child$5__4_ = {}, System::Collections::IEnumerator* $enumerable$5__5_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $childCount$5__2{$childCount$5__2_}, $$7__wrap2{$$7__wrap2_}, $child$5__4{$child$5__4_}, $enumerable$5__5{$enumerable$5__5_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14A73C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeWorkItem::$RunChildren$d__16* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeWorkItem::$RunChildren$d__16*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14A9674
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14A96E8
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x14A9690
    void $$m__Finally1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14A9E60
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14A9E68
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14A9EC8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x14A9ED0
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14A9F7C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/<RunChildren>d__16
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem/<RunChildren>d__16");
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::$$m__Finally1
// Il2CppName: <>m__Finally1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
