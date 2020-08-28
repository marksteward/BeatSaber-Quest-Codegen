// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEventBase
#include "UnityEngine/Events/UnityEventBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.UnityEvent
  class UnityEvent : public UnityEngine::Events::UnityEventBase {
    public:
    // private System.Object[] m_InvokeArray
    // Offset: 0x28
    ::Array<::Il2CppObject*>* m_InvokeArray;
    // Creating conversion operator: operator ::Array<::Il2CppObject*>*
    constexpr operator ::Array<::Il2CppObject*>*() const {
      return m_InvokeArray;
    }
    // public System.Void AddListener(UnityEngine.Events.UnityAction call)
    // Offset: 0x1310404
    void AddListener(UnityEngine::Events::UnityAction* call);
    // public System.Void RemoveListener(UnityEngine.Events.UnityAction call)
    // Offset: 0x13104C0
    void RemoveListener(UnityEngine::Events::UnityAction* call);
    // static private UnityEngine.Events.BaseInvokableCall GetDelegate(UnityEngine.Events.UnityAction action)
    // Offset: 0x131043C
    static UnityEngine::Events::BaseInvokableCall* GetDelegate(UnityEngine::Events::UnityAction* action);
    // public System.Void Invoke()
    // Offset: 0x13107C0
    void Invoke();
    // public System.Void .ctor()
    // Offset: 0x1310338
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnityEvent* New_ctor();
    // protected override System.Reflection.MethodInfo FindMethod_Impl(System.String name, System.Object targetObj)
    // Offset: 0x1310520
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Reflection.MethodInfo UnityEventBase::FindMethod_Impl(System.String name, System.Object targetObj)
    System::Reflection::MethodInfo* FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj);
    // override UnityEngine.Events.BaseInvokableCall GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x1310750
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: UnityEngine.Events.BaseInvokableCall UnityEventBase::GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    UnityEngine::Events::BaseInvokableCall* GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction);
  }; // UnityEngine.Events.UnityEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityEvent*, "UnityEngine.Events", "UnityEvent");
#pragma pack(pop)
