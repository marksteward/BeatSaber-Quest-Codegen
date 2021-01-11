// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberActivityLineGraph
#include "GlobalNamespace/SaberActivityLineGraph.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: YieldInstruction
  class YieldInstruction;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SaberActivityLineGraph/<UpdateGraphCoroutine>d__12
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEB64
  class SaberActivityLineGraph::$UpdateGraphCoroutine$d__12 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public SaberActivityLineGraph <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SaberActivityLineGraph* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberActivityLineGraph*) == 0x8);
    // private UnityEngine.YieldInstruction <yieldInstruction>5__2
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::YieldInstruction* $yieldInstruction$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::YieldInstruction*) == 0x8);
    // Creating value type constructor for type: $UpdateGraphCoroutine$d__12
    $UpdateGraphCoroutine$d__12(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::SaberActivityLineGraph* $$4__this_ = {}, UnityEngine::YieldInstruction* $yieldInstruction$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $yieldInstruction$5__2{$yieldInstruction$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFBD0E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberActivityLineGraph::$UpdateGraphCoroutine$d__12* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberActivityLineGraph::$UpdateGraphCoroutine$d__12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberActivityLineGraph::$UpdateGraphCoroutine$d__12*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFBD138
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xFBD13C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xFBD570
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFBD578
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFBD5D8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // SaberActivityLineGraph/<UpdateGraphCoroutine>d__12
  static check_size<sizeof(SaberActivityLineGraph::$UpdateGraphCoroutine$d__12), 40 + sizeof(UnityEngine::YieldInstruction*)> __GlobalNamespace_SaberActivityLineGraph_$UpdateGraphCoroutine$d__12SizeCheck;
  static_assert(sizeof(SaberActivityLineGraph::$UpdateGraphCoroutine$d__12) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberActivityLineGraph::$UpdateGraphCoroutine$d__12*, "", "SaberActivityLineGraph/<UpdateGraphCoroutine>d__12");
