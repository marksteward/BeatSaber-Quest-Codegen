// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.ControlPlayableAsset
#include "UnityEngine/Timeline/ControlPlayableAsset.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__38
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D8D3A8
  class ControlPlayableAsset::$GetControlableScripts$d__38 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.MonoBehaviour <>2__current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MonoBehaviour* $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::MonoBehaviour*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: root
    char __padding2[0x4] = {};
    // private UnityEngine.GameObject root
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* root;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject <>3__root
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* $$3__root;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.MonoBehaviour[] <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::MonoBehaviour*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::MonoBehaviour*>*) == 0x8);
    // private System.Int32 <>7__wrap2
    // Size: 0x4
    // Offset: 0x40
    int $$7__wrap2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $GetControlableScripts$d__38
    $GetControlableScripts$d__38(int $$1__state_ = {}, UnityEngine::MonoBehaviour* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::GameObject* root_ = {}, UnityEngine::GameObject* $$3__root_ = {}, ::Array<UnityEngine::MonoBehaviour*>* $$7__wrap1_ = {}, int $$7__wrap2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, root{root_}, $$3__root{$$3__root_}, $$7__wrap1{$$7__wrap1_}, $$7__wrap2{$$7__wrap2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14194B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControlPlayableAsset::$GetControlableScripts$d__38* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__38::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControlPlayableAsset::$GetControlableScripts$d__38*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x141AC88
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x141AC8C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private UnityEngine.MonoBehaviour System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current()
    // Offset: 0x141ADF8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    UnityEngine::MonoBehaviour* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x141AE00
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x141AE60
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour> System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator()
    // Offset: 0x141AE68
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x141AF1C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__38
  static check_size<sizeof(ControlPlayableAsset::$GetControlableScripts$d__38), 64 + sizeof(int)> __UnityEngine_Timeline_ControlPlayableAsset_$GetControlableScripts$d__38SizeCheck;
  static_assert(sizeof(ControlPlayableAsset::$GetControlableScripts$d__38) == 0x44);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__38*, "UnityEngine.Timeline", "ControlPlayableAsset/<GetControlableScripts>d__38");
