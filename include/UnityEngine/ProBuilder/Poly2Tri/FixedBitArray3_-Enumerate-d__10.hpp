// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
#include "UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.hpp"
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
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x28
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DB1CE0
  class FixedBitArray3::$Enumerate$d__10 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<bool>, public System::Collections::Generic::IEnumerator_1<bool>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <>2__current
    // Size: 0x1
    // Offset: 0x14
    bool $$2__current;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $$2__current and: $$l__initialThreadId
    char __padding1[0x3] = {};
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x18
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 <>4__this
    // Size: 0x3
    // Offset: 0x1C
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 <>3__<>4__this
    // Size: 0x3
    // Offset: 0x1F
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$3__$$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // Padding between fields: $$3__$$4__this and: $i$5__2
    char __padding4[0x2] = {};
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x24
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $Enumerate$d__10
    $Enumerate$d__10(int $$1__state_ = {}, bool $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$4__this_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$3__$$4__this_ = {}, int $i$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$3__$$4__this{$$3__$$4__this_}, $i$5__2{$i$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<bool>
    operator System::Collections::Generic::IEnumerable_1<bool>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<bool>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<bool>
    operator System::Collections::Generic::IEnumerator_1<bool>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<bool>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x19B0A9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedBitArray3::$Enumerate$d__10* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedBitArray3::$Enumerate$d__10*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x19B0B90
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x19B0B94
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Boolean System.Collections.Generic.IEnumerator<System.Boolean>.get_Current()
    // Offset: 0x19B0C10
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    bool System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x19B0C18
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x19B0C78
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Boolean> System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
    // Offset: 0x19B0CDC
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<bool>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x19B0D90
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
  static check_size<sizeof(FixedBitArray3::$Enumerate$d__10), 36 + sizeof(int)> __UnityEngine_ProBuilder_Poly2Tri_FixedBitArray3_$Enumerate$d__10SizeCheck;
  static_assert(sizeof(FixedBitArray3::$Enumerate$d__10) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*, "UnityEngine.ProBuilder.Poly2Tri", "FixedBitArray3/<Enumerate>d__10");
#pragma pack(pop)
