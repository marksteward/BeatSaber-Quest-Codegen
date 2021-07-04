// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/<GetDirectChildrenAndSelf>d__20
  // [CompilerGeneratedAttribute] Offset: DDD5CC
  class UnityUtil::$GetDirectChildrenAndSelf$d__20 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject <>2__current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: obj
    char __padding2[0x4] = {};
    // private UnityEngine.GameObject obj
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject <>3__obj
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* $$3__obj;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::IEnumerator* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $GetDirectChildrenAndSelf$d__20
    $GetDirectChildrenAndSelf$d__20(int $$1__state_ = {}, UnityEngine::GameObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::GameObject* obj_ = {}, UnityEngine::GameObject* $$3__obj_ = {}, System::Collections::IEnumerator* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, obj{obj_}, $$3__obj{$$3__obj_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1385784
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$GetDirectChildrenAndSelf$d__20* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$GetDirectChildrenAndSelf$d__20*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x138619C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1386284
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x13861B8
    void $$m__Finally1();
    // private UnityEngine.GameObject System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current()
    // Offset: 0x1386508
    UnityEngine::GameObject* System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1386510
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1386570
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
    // Offset: 0x1386578
    System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1386624
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/<GetDirectChildrenAndSelf>d__20
  #pragma pack(pop)
  static check_size<sizeof(UnityUtil::$GetDirectChildrenAndSelf$d__20), 56 + sizeof(System::Collections::IEnumerator*)> __ModestTree_Util_UnityUtil_$GetDirectChildrenAndSelf$d__20SizeCheck;
  static_assert(sizeof(UnityUtil::$GetDirectChildrenAndSelf$d__20) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20*, "ModestTree.Util", "UnityUtil/<GetDirectChildrenAndSelf>d__20");
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::$$m__Finally1
// Il2CppName: <>m__Finally1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_Generic_IEnumerator$UnityEngine_GameObject$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_Generic_IEnumerable$UnityEngine_GameObject$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
