// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
  // [CompilerGeneratedAttribute] Offset: D03EFC
  class ZenUtilInternal::$GetAllSceneContexts$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>, public System::Collections::Generic::IEnumerator_1<Zenject::SceneContext*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private Zenject.SceneContext <>2__current
    // Size: 0x8
    // Offset: 0x18
    Zenject::SceneContext* $$2__current;
    // Field size check
    static_assert(sizeof(Zenject::SceneContext*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$7__wrap1
    char __padding2[0x4] = {};
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> <>7__wrap1
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>*) == 0x8);
    // Creating value type constructor for type: $GetAllSceneContexts$d__3
    $GetAllSceneContexts$d__3(int $$1__state_ = {}, Zenject::SceneContext* $$2__current_ = {}, int $$l__initialThreadId_ = {}, System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>
    operator System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<Zenject::SceneContext*>
    operator System::Collections::Generic::IEnumerator_1<Zenject::SceneContext*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<Zenject::SceneContext*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x152CA20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenUtilInternal::$GetAllSceneContexts$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenUtilInternal::$GetAllSceneContexts$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x152D8C8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x152D9A4
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x152D8E4
    void $$m__Finally1();
    // private Zenject.SceneContext System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current()
    // Offset: 0x152DD98
    Zenject::SceneContext* System_Collections_Generic_IEnumerator$Zenject_SceneContext$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x152DDA0
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x152DE00
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Zenject.SceneContext> System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator()
    // Offset: 0x152DE08
    System::Collections::Generic::IEnumerator_1<Zenject::SceneContext*>* System_Collections_Generic_IEnumerable$Zenject_SceneContext$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x152DEA0
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
  #pragma pack(pop)
  static check_size<sizeof(ZenUtilInternal::$GetAllSceneContexts$d__3), 40 + sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>*)> __Zenject_Internal_ZenUtilInternal_$GetAllSceneContexts$d__3SizeCheck;
  static_assert(sizeof(ZenUtilInternal::$GetAllSceneContexts$d__3) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3*, "Zenject.Internal", "ZenUtilInternal/<GetAllSceneContexts>d__3");
