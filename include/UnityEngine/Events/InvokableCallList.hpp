// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
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
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.InvokableCallList
  class InvokableCallList : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_PersistentCalls
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_RuntimeCalls
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_ExecutingCalls
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private System.Boolean m_NeedsUpdate
    // Size: 0x1
    // Offset: 0x28
    bool m_NeedsUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InvokableCallList
    InvokableCallList(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls_ = {}, System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls_ = {}, System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls_ = {}, bool m_NeedsUpdate_ = {}) noexcept : m_PersistentCalls{m_PersistentCalls_}, m_RuntimeCalls{m_RuntimeCalls_}, m_ExecutingCalls{m_ExecutingCalls_}, m_NeedsUpdate{m_NeedsUpdate_} {}
    // public System.Void AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1A0A7E8
    void AddPersistentInvokableCall(UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void AddListener(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1A0A85C
    void AddListener(UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void RemoveListener(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x1A0A8D0
    void RemoveListener(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
    // public System.Void ClearPersistent()
    // Offset: 0x1A0AA48
    void ClearPersistent();
    // public System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> PrepareInvoke()
    // Offset: 0x1A0AAAC
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();
    // public System.Void .ctor()
    // Offset: 0x1A0AB48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCallList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCallList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCallList*, creationType>()));
    }
  }; // UnityEngine.Events.InvokableCallList
  #pragma pack(pop)
  static check_size<sizeof(InvokableCallList), 40 + sizeof(bool)> __UnityEngine_Events_InvokableCallListSizeCheck;
  static_assert(sizeof(InvokableCallList) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::InvokableCallList*, "UnityEngine.Events", "InvokableCallList");
